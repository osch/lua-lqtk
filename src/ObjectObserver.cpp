/* ============================================================================================ */

#include <QObject>
#include <QPointer>
#include <QHash>

/* ============================================================================================ */

#include "init.h"

#include "util.hpp"
#include "trace.hpp"
#include "ObjectObserver.hpp"
#include "StateGuard.hpp"
#include "ClassInfo.hpp"
#include "QObjectBinding.hpp"
#include "ObjectUdata.hpp"

/* ============================================================================================ */

using namespace lqtk;


static QHash<QObject*,ObjectObserver*> observerLookup;

ObjectObserver::ObjectObserver(StateGuard* guard)
    : guard(StateGuard::acquireRef(guard, StateGuard::FOR_LISTENER)),
      weakMapRef(LUA_NOREF),
      objPtr(nullptr)
{}

void ObjectObserver::listenTo(QObject* objPtr)
{
    assert(!this->objPtr);
    if (objPtr) {
        this->objPtr = objPtr;
        this->guardedObjPtr = objPtr;
        observerLookup[objPtr] = this;
        QObject::connect(objPtr, SIGNAL(destroyed()), this, SLOT(objectDestroyed()));
    }
}

ObjectObserver::~ObjectObserver()
{
    trace::printf("~ObjectObserver(): %p for qobj %p\n", this, objPtr);
    if (objPtr) {
        observerLookup.remove(objPtr);
        objPtr = nullptr;
    }
    lua_State* L = getL();
    if (L) {
        unrefAll(L);
    }
    StateGuard::releaseRef(&guard, StateGuard::FOR_LISTENER);
}

ObjectObserver* ObjectObserver::getObserver(QObject* objPtr)
{
    ObjectObserver* rslt;
    if (objPtr) {
        rslt = observerLookup.value(objPtr);
    }
    return rslt;
}

ObjectObserver* ObjectObserver::assureObserver(lua_State* L, QObject* objPtr)
{
    ObjectObserver* rslt = getObserver(objPtr);
    if (!rslt) {
        StateGuard* stateGuard = StateGuard::push(L); // -> stateGuard
        rslt = new ObjectObserver(stateGuard);
        rslt->listenTo(objPtr);
        lua_pop(L, 1);                                // -> 
    }
    return rslt;
}


void ObjectObserver::startGuarding(lua_State* L, int udataIdx, InvalidationHandler* handler)
{
    int top = lua_gettop(L);
    if (udataIdx < 0) {
        udataIdx = top + 1 + udataIdx;
    }
    ObjectUdata* udata = (ObjectUdata*) lua_touserdata(L, udataIdx);
    assert(udata);

    void* guardedObjPtr = udata->getObjectPtr();
    trace::printf("ObjectObserver: %p:startGuarding: %p\n", this->objPtr, guardedObjPtr);
    pushWeakMap(L);                              // -> map
    lua_pushvalue(L, udataIdx);                  // -> map, udata
    lua_rawsetp(L, -2, guardedObjPtr);           // -> map
    lua_pop(L, 1);                               // -> 
    if (handler) {
        invalidationHandlers[guardedObjPtr] = handler;
    }
}

void ObjectObserver::stopGuarding(lua_State* L, ObjectUdata* udata)
{
    void* guardedObjPtr = udata->getObjectPtr();
    pushWeakMap(L);                              // -> map
    lua_pushnil(L);                              // -> map, nil
    lua_rawsetp(L, -2, guardedObjPtr);           // -> map
    lua_pop(L, 1);                               // -> 
    trace::printf("ObjectObserver: %p: stopGuarding: %p\n", this->objPtr, guardedObjPtr);
    invalidationHandlers.remove(objPtr);
}


lua_State* ObjectObserver::getL()
{
    if (guard) {
        return guard->getL();
    }
    return NULL;
}

void ObjectObserver::pushWeakMap(lua_State* L)
{
    if (weakMapRef == LUA_NOREF) {
        lua_newtable(L);                                         // -> map
        lua_newtable(L);                                         // -> map, mapMeta
        lua_pushstring(L, "v");                                  // -> map, mapMeta, mode
        lua_setfield(L, -2, "__mode");                           // -> map, mapMeta
        lua_setmetatable(L, -2);                                 // -> map
        weakMapRef = luaL_ref(L, LUA_REGISTRYINDEX);             // -> 
    }
    lua_rawgeti(L, LUA_REGISTRYINDEX, weakMapRef);               // -> map
}


class ObjectObserver::Impl
{
public:
    static int handleInvalidation(lua_State* L)
    {
        ObjectObserver* self = (ObjectObserver*)lua_touserdata(L, 1);
        if (self->weakMapRef != LUA_NOREF) {
    trace::printf("ObjectObserver: %p:handleInvalidation2\n", self->objPtr);
            lua_rawgeti(L, LUA_REGISTRYINDEX, self->weakMapRef);         // -> map
            lua_pushnil(L);                                              // -> map, nil
            while (lua_next(L, -2)) {                                    // -> map, key, value
                ObjectUdata* udata = ObjectUdata::testArg(L, -1);        // -> map, key, value
                if (udata) {                                             // -> map, key, udata
                    void* objPtr = udata->getObjectPtr();
                    trace::printf("ObjectObserver: %p: handleInvalidation(): %p\n", self->objPtr, objPtr);
                    InvalidationHandler* handler = self->invalidationHandlers[objPtr];
                    if (handler) {
                        handler(L, -1);
                    } else {
                        udata->handleInvalidation(L, -1);
                    }
                }
                lua_pop(L, 1);                                           // -> map, key
            }                                                            // -> map
            self->unrefAll(L);
        }
        return 0;
    }
};

void ObjectObserver::handleInvalidation()
{
    trace::printf("ObjectObserver: %p:handleInvalidation()\n", this->objPtr);
    lua_State* L = getL();
    if (L) {
        if (!lua_checkstack(L, LUA_MINSTACK)) {
            throw std::runtime_error("Lua stack exhausted");
        }
        int oldTop = lua_gettop(L);
        lua_pushcfunction(L, util::handleError);                      // -> eh

        int ehIndex = oldTop + 1;
        lua_pushcfunction(L, Impl::handleInvalidation);               // -> eh, func,
        lua_pushlightuserdata(L, this);                               // -> eh, func, obj
        int rc = lua_pcall(L, 1, 0, ehIndex);                         // -> eh, ...
        if (rc != LUA_OK) {
            std::string errmsg = lua_tostring(L, -1);
            throw std::runtime_error(errmsg);
        }
        lua_settop(L, oldTop);
    }
    this->deleteLater();
}

void ObjectObserver::disconnectNotify(const QMetaMethod& signal)
{
    trace::printf("ObjectObserver::disconnectNotify()\n");
    handleInvalidation();
}

void ObjectObserver::unrefAll(lua_State* L)
{
    if (weakMapRef != LUA_NOREF) {
        trace::printf("ObjectObserver::senderDestroyed(): unref weakMapRef\n");
        luaL_unref(L, LUA_REGISTRYINDEX, weakMapRef);                   // ->
        weakMapRef = LUA_NOREF;
    }
}

void ObjectObserver::objectDestroyed()
{
    trace::printf("ObjectObserver::objectDestroyed()\n");
    handleInvalidation();
}

