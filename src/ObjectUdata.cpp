/* ============================================================================================ */

#include <QPointer>
#include <QObject>
#include <QMetaObject>

/* ============================================================================================ */

#include "init.h"
#include "util.hpp"
#include "trace.hpp"
#include "ClassInfo.hpp"
#include "ObjectUdata.hpp"
#include "StateGuard.hpp"
#include "ClassUdata.hpp"
#include "registry.hpp"

/* ============================================================================================ */

using namespace lqtk;
using namespace lqtk::util;

static const char* const LQTK_OBJECT_TYPE_NAME = "lqtk.Object";

static const int OTABLE_UVIDX = ObjectUdata::OTABLE_UVIDX;

namespace lqtk {
    extern int debugIdCounter;
}

ObjectUdata::ObjectUdata(const ClassInfo* classInfo)
    : classInfo(classInfo),
      destructed(false),
      ownerFlag(false),
      userValueFlag(false),
      isDerived(false),
      debugId(++debugIdCounter),
      lastKnownState(NEW),
      invalidityReason(nullptr)
{
    if (classInfo->isQObject) {
        new(&obj.qobject) QPointer<QObject>();
    } else if (classInfo->isGuarded) {
        obj.guard = nullptr;
    } else {
        obj.rawPtr = nullptr;
    }
}

ObjectUdata::~ObjectUdata() 
{}


void ObjectUdata::invalidate(lua_State* L, int udataIndex) 
{
    trace::printf("ObjectUdata::invalidate %s: %p\n", classInfo->className, getObjectPtr());
    if (lastKnownState != INVALID) {
        if (udataIndex < 0) {
            udataIndex = lua_gettop(L) + 1 + udataIndex;
        }
        StateGuard::clearWeakUdataRef(L, getObjectPtr());
        
        if (isQObject()) {
            QObject* objPtr = obj.qobject.get();
            if (objPtr) {
                if (ownerFlag) {
                    if (!objPtr->parent()) {
                        trace::printf("Deleting %s: %p\n", classInfo->className, objPtr);
                        objPtr->deleteLater();
                    } else {
                        trace::printf("Not Deleting %s: %p, parent %p\n", classInfo->className, objPtr, objPtr->parent());
                        
                    }
                }
                if (   lua_getiuservalue(L, udataIndex, OTABLE_UVIDX) == LUA_TTABLE // -> uval?
                    && classInfo->setUserValueFunction)                             
                {
                    trace::printf("Keeping uservalue %p\n", lua_topointer(L, -1));
                    StateGuard::setWeakUserValue(L, objPtr, -1);                    // -> uval
                    StateGuard::setStrongUserValue(L, objPtr, -1);                  // -> uval
                }
                lua_pop(L, 1);                                                      // -> 
            }
            obj.qobject.clear();
            obj.qobject.~QPointer();
        }
        else if (isGuarded()) {
            if (obj.guard) {
                if (ownerFlag && obj.guard->objectPtr) {
                    if (!classInfo->hasParentFunction || !classInfo->hasParentFunction(obj.guard->objectPtr)) {
                        trace::printf("Deleting %s: %p\n", classInfo->className, obj.guard->objectPtr);
                        classInfo->deleteFunction(obj.guard->objectPtr);
                        obj.guard->objectPtr = nullptr;
                    } else {
                        void* objPtr= obj.guard->objectPtr;
                        trace::printf("Not Deleting %s: %p\n", classInfo->className, objPtr);
                        
                        if (   lua_getiuservalue(L, udataIndex, OTABLE_UVIDX) == LUA_TTABLE // -> uval?
                            && classInfo->setUserValueFunction)                             
                        {
                            trace::printf("Keeping uservalue %p\n", lua_topointer(L, -1));
                            StateGuard::setWeakUserValue(L, objPtr, -1);                    // -> uval
                            StateGuard::setStrongUserValue(L, objPtr, -1);                  // -> uval
                        }
                        lua_pop(L, 1);
                    }
                }
                obj.guard->refCount -= 1;
                if (obj.guard->refCount <= 0) {
                    obj.guard->objectPtr = nullptr;
                    delete obj.guard;
                    obj.guard = nullptr;
                }
            }
        }
        else if (obj.rawPtr) {
            if (ownerFlag) {
                trace::printf("Deleting %s: %p\n", classInfo->className, obj.guard->objectPtr);
                classInfo->deleteFunction(obj.rawPtr);
            }
            obj.rawPtr = nullptr;
        }
        ownerFlag = false;
        lastKnownState = INVALID;
    }
}

const char* ObjectUdata::pushClassName(lua_State* L, int udataIdx)
{
    int top = lua_gettop(L);
    if (udataIdx < 0) {
        udataIdx = top + 1 + udataIdx;
    }
    ClassUdata* classUdata = pushClass(L, udataIdx);     // -> class
    const char* name = classUdata->pushClassName(L, -1); // -> class, name
    lua_remove(L, -2);                                   // -> name
    return name;
}

bool ObjectUdata::isOwner()
{
    if (lastKnownState == VALID && ownerFlag) {
        if (isQObject()) {
            QObject* qobject = getQObjectPtr();
            if (!qobject || qobject->parent()) {
                ownerFlag = false;
            }
        }
        else if (isGuarded() && classInfo->hasParentFunction) {
            if (classInfo->hasParentFunction(obj.guard->objectPtr)) {
                ownerFlag = false;
            }
        }
        
    }
    return ownerFlag;
}


void* ObjectUdata::getObjectPtr() const 
{
    if (lastKnownState != INVALID) {
        if (isQObject()) {
            return obj.qobject.get();
        }
        else if (isGuarded()) {
            return obj.guard->objectPtr;
        }
        else {
            return obj.rawPtr;
        }
    }
    return nullptr; 
}

QObject* ObjectUdata::getQObjectPtr() const 
{
    if (lastKnownState != INVALID) {
        if (isQObject()) {
            return obj.qobject.get();
        }
    }
    return nullptr; 
}

void ObjectUdata::setStateInitial()
{
    assert(lastKnownState == NEW);
    lastKnownState = INITIAL;
}

void ObjectUdata::setUserValue(lua_State* L, int udataIdx, int userValIdx)
{
    int top = lua_gettop(L);
    if (udataIdx < 0) {
        udataIdx = top + 1 + udataIdx;
    }
    if (userValIdx < 0) {
        userValIdx = top + 1 + userValIdx;
    }
    assert(!destructed);

    lua_pushvalue(L, userValIdx);                          // -> userVal
    int ok = lua_setiuservalue(L, udataIdx, OTABLE_UVIDX); // -> 
    assert(ok);
    userValueFlag = true;

    void* objPtr = getObjectPtr();

    if (objPtr) {
        StateGuard::setWeakUserValue(L, objPtr, userValIdx);          
        StateGuard* stateGuard = StateGuard::push(L);         // -> stateGuard
        if (classInfo->setUserValueFunction) {
            classInfo->setUserValueFunction(objPtr, stateGuard);
        }
        lua_pop(L, 1);                                        // -> 
    }
}

void ObjectUdata::setQObjectPtr(lua_State* L, int udataIdx, QObject* qptr, OwnerType ownerType)
{
    int top = lua_gettop(L);
    if (udataIdx < 0) {
        udataIdx = top + 1 + udataIdx;
    }
    assert(!destructed && (lastKnownState == NEW || lastKnownState == INITIAL) && isQObject());
    if (!destructed && isQObject()) {
        obj.qobject = qptr;
        void* objPtr = qptr;
        lastKnownState = VALID;
        ownerFlag = (ownerType == IS_OWNER);
        StateGuard::setWeakUdataRef(L, objPtr, udataIdx);
        if (userValueFlag) {
            lua_getiuservalue(L, udataIdx, OTABLE_UVIDX);         // -> otable
            StateGuard::setWeakUserValue(L, objPtr, -1);
            if (classInfo->setUserValueFunction) {
                StateGuard* stateGuard = StateGuard::push(L);     // -> otable, stateGuard
                classInfo->setUserValueFunction(objPtr, stateGuard);
                lua_pop(L, 2);                                    // -> 
            } else {                                              // -> otable
                lua_pop(L, 1);                                    // -> 
            }
        }
    }
}
void ObjectUdata::setObjectGuard(lua_State* L, int udataIdx, ObjectGuard* guard, OwnerType ownerType)
{
    assert(!destructed && (lastKnownState == NEW || lastKnownState == INITIAL) && isGuarded());
    if (!destructed && isGuarded()) {
        void* objPtr = guard->objectPtr;
        obj.guard = guard;
        guard->refCount += 1;
        lastKnownState = VALID;
        ownerFlag = (ownerType == IS_OWNER);
        StateGuard::setWeakUdataRef(L, objPtr, udataIdx);
        if (userValueFlag) {
            lua_getiuservalue(L, udataIdx, OTABLE_UVIDX);         // -> otable
            StateGuard::setWeakUserValue(L, objPtr, -1);
            if (classInfo->setUserValueFunction) {
                StateGuard* stateGuard = StateGuard::push(L);     // -> otable, stateGuard
                classInfo->setUserValueFunction(objPtr, stateGuard);
                lua_pop(L, 2);                                    // -> 
            } else {                                              // -> otable
                lua_pop(L, 1);                                    // -> 
            }
        }
    }
}

void ObjectUdata::setRawPtr(lua_State* L, int udataIdx, void* objPtr, OwnerType ownerType)
{
    assert(!destructed && (lastKnownState == NEW || lastKnownState == INITIAL) && !isQObject() && !isGuarded());
    if (!destructed && !isQObject()  && !isGuarded()) {
        obj.rawPtr = objPtr;
        lastKnownState = VALID;
        ownerFlag = (ownerType == IS_OWNER);
        StateGuard::setWeakUdataRef(L, objPtr, udataIdx);
        if (userValueFlag) {
            lua_getiuservalue(L, udataIdx, OTABLE_UVIDX);         // -> otable
            StateGuard::setWeakUserValue(L, objPtr, -1);
            if (classInfo->setUserValueFunction) {
                StateGuard* stateGuard = StateGuard::push(L);     // -> otable, stateGuard
                classInfo->setUserValueFunction(objPtr, stateGuard);
                lua_pop(L, 2);                                    // -> 
            } else {                                              // -> otable
                lua_pop(L, 1);                                    // -> 
            }
        }
    }
}

bool ObjectUdata::isEqual(const ObjectUdata* other) const
{
    if (!destructed && !other->destructed) {
        if (this->isGuarded()) {
            return other->isGuarded() && this->getObjectPtr() == other->getObjectPtr();
        }
        else if (this->isQObject()) {
            return  other->isQObject() && this->getObjectPtr() == other->getObjectPtr();
        } 
        else {
            return !other->isGuarded() &&
                   !other->isQObject() && this->getObjectPtr() == other->getObjectPtr();
        }
    }
    return false;
}

/* ============================================================================================ */

struct ObjectUdata::Impl
{
    static int __tostring(lua_State* L)
    {
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::ANY);
        void* objPtr = udata->getTestedObjectPtr();
        const char* name = udata->pushClassName(L, 1);
        if (objPtr) {
            lua_pushfstring(L, "lqtk.Object<%s>: %p", name, objPtr);
        } else {
            lua_pushfstring(L, "lqtk.Object<%s>: (nil)", name);
        }
        return 1;
    }
    
    static int __gc(lua_State* L)
    {
        ObjectUdata* udata = checkArg(L, 1, ANY);
        if (!udata->destructed) {
            udata->invalidate(L, 1);
            udata->~ObjectUdata();
        }
        return 0;
    }
    
    static int __eq(lua_State* L)
    {
        ObjectUdata* udata1 = checkArg(L, 1, ANY);
        ObjectUdata* udata2 = checkArg(L, 2, ANY);
    
        lua_pushboolean(L, (!udata1->destructed && !udata2->destructed
                            && udata1->isEqual(udata2)));
        return 1;
    }
    
    static int __index(lua_State* L)
    {
        ObjectUdata* udata = checkArg(L, 1, INITIAL | VALID);
        
        int keyType = lua_type(L, 2);
        if (keyType == LUA_TNONE || keyType == LUA_TNIL) {
            return util::argError(L, 2, "table index is nil");
        }
    
        if (udata->userValueFlag || udata->classInfo->setUserValueFunction) {
            if (lua_getiuservalue(L, 1, OTABLE_UVIDX) == LUA_TTABLE) {      // -> uval?
                udata->userValueFlag = true;                                // -> uval
                lua_pushvalue(L, 2);                                        // -> uval, key
                if (lua_gettable(L, -2) != LUA_TNIL) {                      // -> uval, rslt?
                    return 1;                                               // -> uval, rslt
                }                                                           // -> uval, rslt?
                lua_pop(L, 1);                                              // -> uval
            }                                                               // -> uval?
            lua_pop(L, 1);                                                  // -> 
        }
        if (keyType == LUA_TSTRING) {
            const char* name = lua_tostring(L, 2);
            const Member* member = udata->classInfo->findMember(name);
            if (member) {
                member->push(L);
                return 1;
            }
        }
        return 0;
    }
    
    static int __newIndex(lua_State* L)
    {
        ObjectUdata* udata  = checkArg(L, 1, INITIAL | VALID);
        
        void*        objPtr = udata->getObjectPtr();
        if (lua_isnoneornil(L, 2)) {
            return util::argError(L, 2, "table index is nil");
        }
        if (   udata->userValueFlag 
            && lua_getiuservalue(L, 1, OTABLE_UVIDX) == LUA_TTABLE)     // -> uval?
        {
            lua_pushvalue(L, 2);                                        // -> uval, key
            lua_pushvalue(L, 3);                                        // -> uval, key, value
            lua_rawset(L, -3);                                          // -> 
            return 0;                                                   // -> uval
        } else {                                                        // -> uval?
            return luaL_error(L, "object is not mutable");
        }
    }
    
    static int __len(lua_State* L)
    {
        ObjectUdata* udata  = checkArg(L, 1, INITIAL | VALID);
        if (udata->userValueFlag) {
            lua_getiuservalue(L, 1, OTABLE_UVIDX);       // -> uval
            int len = lua_rawlen(L, -1);
            lua_pushinteger(L, len);
            return 1;
        }
        return 0;
    }
        
    static int next(lua_State* L) // arg1: state, arg2: key
    {                                // -> state, key, ...
        lua_settop(L, 2);            // -> state, key
        if (lua_next(L, -2)) {        
            return 2;                // -> state, nextkey, nextvalue
        }
        return 0;
    }
    
    static int __pairs(lua_State* L)
    {
        ObjectUdata* udata = checkArg(L, 1);                          // -> udata, ...
        lua_settop(L, 1);                                             // -> udata
        lua_pushcfunction(L, next);                                   // -> udata, next
        lua_newtable(L);                                              // -> udata, next, state
        for (int i = 0; i < udata->classInfo->memberCount; ++i) {
            const Member* member = udata->classInfo->members + i;
            lua_pushstring(L, member->name);                          // -> udata, next, state, key
            member->push(L);                                          // -> udata, next, state, key, value
            lua_rawset(L, -3);                                        // -> udata, next, state
        }
        
        if (lua_getiuservalue(L, 1, OTABLE_UVIDX) == LUA_TTABLE)      // -> udata, next, state, uvalue?
        {                                                             // -> udata, next, state, uvalue
            lua_pushnil(L);                                           // -> udata, next, state, uvalue, key
            while (lua_next(L, -2)) {                                 // -> udata, next, state, uvalue, key, value
                lua_pushvalue(L, -2);                                 // -> udata, next, state, uvalue, key, value, key
                lua_insert(L, -2);                                    // -> udata, next, state, uvalue, key, key, value, 
                lua_rawset(L, -5);                                    // -> udata, next, state, uvalue, key, 
            }                                                         // -> udata, next, state, uvalue
        } 
        lua_pop(L, 1);                                                // -> udata, next, state
        lua_pushnil(L);                                               // -> udata, next, state, initKey
        return 3;
    }
    
    static const luaL_Reg meta_Functions[];

    static int setupObjectMeta(lua_State* L)
    {                                                     // -> meta
        lua_pushstring(L, LQTK_OBJECT_TYPE_NAME);         // -> meta, typeName 
        lua_setfield(L, -2, "__metatable");               // -> meta
        
        luaL_setfuncs(L, meta_Functions, 0);
        
        return 1;
    }
    
    
    static int pushObjectMeta(lua_State* L)
    {
        if (luaL_newmetatable(L, LQTK_OBJECT_TYPE_NAME)) { // -> meta
            setupObjectMeta(L);
        }
        return 1;
    }
};

/* ============================================================================================ */

const luaL_Reg ObjectUdata::Impl::meta_Functions[] = 
{
    { "__tostring",        ObjectUdata::Impl::__tostring },
    { "__gc",              ObjectUdata::Impl::__gc       },
    { "__eq",              ObjectUdata::Impl::__eq       },
    { "__index",           ObjectUdata::Impl::__index    },
    { "__pairs",           ObjectUdata::Impl::__pairs    },
    { "__newindex",        ObjectUdata::Impl::__newIndex },
    { "__len",             ObjectUdata::Impl::__len      },
    
    { NULL,                NULL } /* sentinel */
};

/* ============================================================================================ */

ObjectUdata* ObjectUdata::pushNew(lua_State* L, const ClassInfo* classInfo, bool withUserValue)
{
    int nuv = withUserValue ? 1 : 0;
    ObjectUdata* udata = util::newuserdatauv<ObjectUdata>(L, nuv); // -> obj
    new(udata) ObjectUdata(classInfo);
    Impl::pushObjectMeta(L);                                       // -> obj, meta
    lua_setmetatable(L, -2);                                       // -> obj
    return udata;
}

void* ObjectUdata::castTo(const ClassInfo* targetClassInfo) const
{
    if (classInfo) {
        void* ptr = getObjectPtr();
        if (ptr) {
            return classInfo->castFunction(targetClassInfo, ptr);
        }
    }
    return nullptr;
}

void* ObjectUdata::getTestedObjectPtr() const
{
    void* objPtr = this->getObjectPtr();
    if (objPtr && this->classInfo->validityErrorFunction) {
        const char* err = this->classInfo->validityErrorFunction(objPtr);
        if (err) {
            return nullptr;
        }
    }
    return objPtr;
}

ObjectUdata::State ObjectUdata::getState(const char** rsltErrMsg)
{
    if (lastKnownState != VALID) {
        if (rsltErrMsg && lastKnownState == INVALID) {
            *rsltErrMsg = invalidityReason;
        }
        return lastKnownState;
    }
    void* objPtr = getObjectPtr();
    if (!objPtr) {
        lastKnownState = INVALID;
        if (rsltErrMsg) {
            *rsltErrMsg = nullptr;
        }
        return INVALID;
    }
    else {
        if (classInfo->validityErrorFunction) {
            const char* err = classInfo->validityErrorFunction(objPtr);
            if (err) {
                lastKnownState = INVALID;
                invalidityReason = err;
                if (rsltErrMsg) {
                    *rsltErrMsg = err;
                }
                return INVALID;
            }
        }
        return VALID;
    }
        
}

static ObjectUdata* internalCheckArg(lua_State* L, int arg, ObjectUdata* udata, ObjectUdata::States states)
{
    const char* errmsg = nullptr;
    
    ObjectUdata::State state = udata->getState(&errmsg);
    
    if (states.testFlag(state)) {
        return udata;
    }
    else {
        switch (state) {
            case ObjectUdata::NEW: {
                lua_pushfstring(L, "internal error: %s is incomplete", udata->classInfo->className);                
                return util::argError(L, arg, lua_tostring(L, -1)), nullptr;
            }
            case ObjectUdata::INITIAL: {
                lua_pushfstring(L, "method 'new' for %s did not call self:new()", udata->classInfo->className);                
                return util::argError(L, arg, lua_tostring(L, -1)), nullptr;
            }
            case ObjectUdata::VALID: {
                lua_pushfstring(L, "%s is already initialized", udata->classInfo->className);                
                return util::argError(L, arg, lua_tostring(L, -1)), nullptr;
            }
            case ObjectUdata::INVALID: {
                if (errmsg) {
                    return util::argError(L, arg, errmsg), nullptr;
                } else {
                    lua_pushfstring(L, "%s has been destructed", udata->classInfo->className);                
                    return util::argError(L, arg, lua_tostring(L, -1)), nullptr;
                }
            }
        }
        return luaL_error(L, "internal error: unhandled object state"), nullptr;
    }
    return udata;
}

ObjectUdata* ObjectUdata::testArg(lua_State* L, int arg, States states)
{
    ObjectUdata* udata = (ObjectUdata*) luaL_testudata(L, arg, LQTK_OBJECT_TYPE_NAME);

    if (udata) {
        return internalCheckArg(L, arg, udata, states);
    }
    else {
        return nullptr;
    }
}


ObjectUdata* ObjectUdata::checkArg(lua_State* L, int arg, States states)
{
    ObjectUdata* udata = (ObjectUdata*) util::checkUdata(L, arg, LQTK_OBJECT_TYPE_NAME);

    return internalCheckArg(L, arg, udata, states);
}

ClassUdata* ObjectUdata::pushClass(lua_State* L, int udataIdx)
{
    int top = lua_gettop(L);
    if (udataIdx < 0) {
        udataIdx = top + 1 + udataIdx;
    }
    if (lua_getiuservalue(L, udataIdx, OTABLE_UVIDX) == LUA_TTABLE) {   // -> uvalue?
        if (lua_getmetatable(L, -1)) {                                  // -> uvalue, meta
            lua_getfield(L, -1, "class");                               // -> uvalue, meta, class
            lua_remove(L, -2);                                          // -> uvalue, class
            lua_remove(L, -2);                                          // -> class
            return (ClassUdata*) lua_touserdata(L, -1);
        } else {                                                        // -> uvalue
            lua_pop(L, 1);                                              // -> 
        }
    } else {                                                            // -> nil
        lua_pop(L, 1);                                                  // -> 
    }
    registry::pushBinding(L, classInfo->className);                     // -> class
    return (ClassUdata*) lua_touserdata(L, -1);   
}

ClassUdata* ObjectUdata::pushBaseClass(lua_State* L, int udataIdx)
{
    int top = lua_gettop(L);
    if (udataIdx < 0) {
        udataIdx = top + 1 + udataIdx;
    }
    if (lua_getiuservalue(L, udataIdx, OTABLE_UVIDX) == LUA_TTABLE) {   // -> uvalue?
        if (lua_getmetatable(L, -1)) {                                  // -> uvalue, meta
            lua_getfield(L, -1, "class");                               // -> uvalue, meta, class
            lua_remove(L, -2);                                          // -> uvalue, class
            lua_remove(L, -2);                                          // -> class
            ClassUdata* classUdata = (ClassUdata*) lua_touserdata(L, -1);
            ClassUdata* baseUdata =  classUdata->pushBaseClass(L, -1);  // -> class, base
            lua_remove(L, -2);                                          // -> base
            return baseUdata;
        } else {                                                        // -> uvalue
            lua_pop(L, 1);                                              // -> 
        }
    } else {                                                            // -> nil
        lua_pop(L, 1);                                                  // -> 
    }
    registry::pushBinding(L, classInfo->className);                     // -> class
    ClassUdata* classUdata = (ClassUdata*) lua_touserdata(L, -1);
    ClassUdata* baseUdata =  classUdata->pushBaseClass(L, -1);          // -> class, base
    lua_remove(L, -2);                                                  // -> base
    return baseUdata;
}

