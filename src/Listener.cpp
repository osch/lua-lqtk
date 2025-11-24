/* ============================================================================================ */

#include <QObject>
#include <QPointer>

/* ============================================================================================ */

#include "init.h"

#include "util.hpp"
#include "trace.hpp"
#include "Listener.hpp"
#include "StateGuard.hpp"
#include "ClassInfo.hpp"
#include "QObjectBinding.hpp"
#include "ObjectUdata.hpp"

/* ============================================================================================ */

using namespace lqtk;

Listener::Listener(StateGuard* guard)
    : guard(StateGuard::acquireRef(guard, StateGuard::FOR_LISTENER)),
      isLuaReceiver(false),
      isLuaFunction(false),
      funcRef(LUA_NOREF),
      connRef(LUA_NOREF)
{}

Listener::~Listener()
{
    trace::printf("~Listener()\n");

    StateGuard::releaseRef(&guard, StateGuard::FOR_LISTENER);
}

lua_State* Listener::getL()
{
    if (guard) {
        return guard->L;
    }
    return NULL;
}

void Listener::disconnectNotify(const QMetaMethod& signal)
{
    trace::printf("Listener::disconnectNotify()\n");
}

int Listener::prepareCall(lua_State* L)
{
    Listener* listener = (Listener*)lua_touserdata(L, 1);
    return listener->prepareCall2(L);
}
    
int Listener::prepareCall2(lua_State* L)
{
    if (!isLuaFunction)
    {
        if (isLuaReceiver) {    
            int tp = StateGuard::pushWeakReceiverRef(L, this);                // -> receiver
            if (tp == LUA_TNIL) {
                return 0;
            }
        }
        else {
            if (!qReceiver) {
                return 0;
            }
            ObjectUdata::pushObject<QObject>(L, qReceiver, NOT_OWNER);        // -> receiver
        }
        if (funcRef == LUA_NOREF) {                                           // -> receiver
            lua_pushlstring(L, slotName.data(), slotName.length());           // -> receiver, slotName
            int tp = lua_gettable(L, -2);                                     // -> receiver, func
            if (tp == LUA_TNIL) {
                return luaL_error(L, "method '%s' not found in '%s'", slotName.data(), luaL_tolstring(L, -2, NULL));
            }
        }
        else {                                                                // -> receiver
            lua_rawgeti(L, LUA_REGISTRYINDEX, funcRef);                       // -> receiver, func
        }        
        lua_pushvalue(L, -2);                                                 // -> receiver, func, receiver
        return 2;
    }
    else {
        lua_rawgeti(L, LUA_REGISTRYINDEX, funcRef);                           // -> func
        return 1;
    }
}

void Listener::listen()
{
    trace::printf("Listener::listen()\n");
    lua_State* L = getL();
    if (L) {
        if (!lua_checkstack(L, LUA_MINSTACK)) {
            throw std::runtime_error("Lua stack exhausted");
        }
        int oldTop = lua_gettop(L);
        lua_pushcfunction(L, util::handleError);                           // -> eh
        int ehIndex = oldTop + 1;
        
        lua_pushcfunction(L, Listener::prepareCall);                        // -> eh, prepare,
        lua_pushlightuserdata(L, this);                                     // -> eh, prepare, this
        int rc1 = lua_pcall(L, 1, LUA_MULTRET, ehIndex);                    // -> eh, ...
        if (rc1 != LUA_OK) {
            std::string errmsg = std::string("error in signal handling: ") + lua_tostring(L, -1);
            lua_settop(L, oldTop);
            throw std::runtime_error(errmsg);
        }
        int nargs = lua_gettop(L) - ehIndex - 1;
        if (nargs >= 0) {                                                   // -> eh, func, [receiver]
            int rc2 = lua_pcall(L, nargs, 0, ehIndex);
            if (rc2 != LUA_OK) {
                std::string errmsg = std::string("error in signal handling: ") + lua_tostring(L, -1);
                lua_settop(L, oldTop);
                throw std::runtime_error(errmsg);
            }
        }
        lua_settop(L, oldTop);
    }
}

void Listener::listen(QObject* obj)
{
    trace::printf("Listener::listen(%p)\n", obj);
    lua_State* L = getL();
    if (L) {
        if (!lua_checkstack(L, LUA_MINSTACK)) {
            throw std::runtime_error("Lua stack exhausted");
        }
        int oldTop = lua_gettop(L);
        lua_pushcfunction(L, util::handleError);                            // -> eh
        int ehIndex = oldTop + 1;
        
        lua_pushcfunction(L, Listener::prepareCall);                        // -> eh, prepare,
        lua_pushlightuserdata(L, this);                                     // -> eh, prepare, this
        int rc1 = lua_pcall(L, 1, LUA_MULTRET, ehIndex);                    // -> eh, ...
        if (rc1 != LUA_OK) {
            std::string errmsg = std::string("error in signal handling: ") + lua_tostring(L, -1);
            lua_settop(L, oldTop);
            throw std::runtime_error(errmsg);
        }
        int nargs = lua_gettop(L) - ehIndex - 1;
        if (nargs >= 0) {                                                   // -> eh, func, [receiver]
            ObjectUdata::pushObject<QObject>(L, obj, NOT_OWNER);            // -> eh, func, [receiver], obj
            nargs += 1;
            int rc2 = lua_pcall(L, nargs, 0, ehIndex);
            if (rc2 != LUA_OK) {
                std::string errmsg = std::string("error in signal handling: ") + lua_tostring(L, -1);
                lua_settop(L, oldTop);
                throw std::runtime_error(errmsg);
            }
        }
        lua_settop(L, oldTop);
    }
}


void Listener::listen(bool b)
{
    trace::printf("Listener::listen(%d)\n", b);
    lua_State* L = getL();
    if (L) {
        if (!lua_checkstack(L, LUA_MINSTACK)) {
            throw std::runtime_error("Lua stack exhausted");
        }
        int oldTop = lua_gettop(L);
        lua_pushcfunction(L, util::handleError);                            // -> eh
        int ehIndex = oldTop + 1;
        
        lua_pushcfunction(L, Listener::prepareCall);                        // -> eh, prepare,
        lua_pushlightuserdata(L, this);                                     // -> eh, prepare, this
        int rc1 = lua_pcall(L, 1, LUA_MULTRET, ehIndex);                    // -> eh, ...
        if (rc1 != LUA_OK) {
            std::string errmsg = std::string("error in signal handling: ") + lua_tostring(L, -1);
            lua_settop(L, oldTop);
            throw std::runtime_error(errmsg);
        }
        int nargs = lua_gettop(L) - ehIndex - 1;
        if (nargs >= 0) {                                                   // -> eh, func, [receiver]
            lua_pushboolean(L, b);                                          // -> eh, func, [receiver], b
            nargs += 1;
            int rc2 = lua_pcall(L, nargs, 0, ehIndex);
            if (rc2 != LUA_OK) {
                std::string errmsg = std::string("error in signal handling: ") + lua_tostring(L, -1);
                lua_settop(L, oldTop);
                throw std::runtime_error(errmsg);
            }
        }
        lua_settop(L, oldTop);
    }
}


void Listener::unrefAll(lua_State* L)
{
    if (funcRef != LUA_NOREF) {
        trace::printf("Listener::senderDestroyed(): unref funcRef\n");
        luaL_unref(L, LUA_REGISTRYINDEX, funcRef);                   // ->
        funcRef = LUA_NOREF;
    }
    if (connRef != LUA_NOREF) {
        trace::printf("Listener::senderDestroyed(): unref connRef\n");
        luaL_unref(L, LUA_REGISTRYINDEX, connRef);                   // ->
        connRef = LUA_NOREF;
    }
    if (isLuaReceiver) {
        int tp = StateGuard::pushWeakReceiverRef(L, this);           // -> receiver?
        if (tp != LUA_TNIL) {                                        // -> receiver
            // Forget wkey_map[receiver] -> connection
            StateGuard::clearEphemeronRef(L, -1);                    // -> receiver
        }                                                            // -> receiver?
        lua_pop(L, 1);                                               // -> 
        StateGuard::clearWeakReceiverRef(L, this);
    }
    qReceiver = nullptr;
}

void Listener::senderDestroyed()
{
    trace::printf("Listener::senderDestroyed()\n");
    lua_State* L = getL();
    if (L) {
        if (!lua_checkstack(L, LUA_MINSTACK)) {
            throw std::runtime_error("Lua stack exhausted");
        }
        unrefAll(L);
    }
}

void Listener::receiverDestroyed()
{
    trace::printf("Listener::receiverDestroyed()\n");
    lua_State* L = getL();
    if (L) {
        if (!lua_checkstack(L, LUA_MINSTACK)) {
            throw std::runtime_error("Lua stack exhausted");
        }
        unrefAll(L);
    }
}
