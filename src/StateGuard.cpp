/* ============================================================================================ */

#include <QObject>
#include <QApplication>

/* ============================================================================================ */

#include "init.h"
#include "trace.hpp"
#include "util.hpp"
#include "StateGuard.hpp"

/* ============================================================================================ */

using namespace lqtk;

const char* const LQTK_GUARD_TYPE_NAME            = "lqtk.StateGuard";

const char* const LQTK_EPHEMERON_TABLE_NAME       = "lqtk.ephemerons";

const char* const LQTK_WEAK_RECEIVER_MAP_NAME     = "lqtk.receivers";
const char* const LQTK_WEAK_UDATA_MAP_NAME        = "lqtk.userData";
const char* const LQTK_WEAK_USER_VALUE_MAP_NAME   = "lqtk.weakUserValues";
const char* const LQTK_STRONG_USER_VALUE_MAP_NAME = "lqtk.strongUserValues";
                               
StateGuard::~StateGuard() 
{
    trace::printf("~StateGuard()\n");
    if (qapp) {
        delete qapp;
        qapp = nullptr;
    }
}


static int Lqtk_GuardDestruct(lua_State* L)
{
    StateGuard** udata = (StateGuard**) util::checkUdata(L, 1, LQTK_GUARD_TYPE_NAME);
    trace::printf("Lqtk_GuardDestruct %p\n", *udata);
    StateGuard* guard = *udata;
    if (guard) {
        guard->L = nullptr;
        if (guard->stateRef != LUA_NOREF) {
            luaL_unref(L, LUA_REGISTRYINDEX, guard->stateRef);
            guard->stateRef = LUA_NOREF;
        }

        lua_pushnil(L);                                                 // -> nil
        lua_rawsetp(L, LUA_REGISTRYINDEX, LQTK_WEAK_RECEIVER_MAP_NAME); // -> 

        lua_pushnil(L);                                                 // -> nil
        lua_rawsetp(L, LUA_REGISTRYINDEX, LQTK_EPHEMERON_TABLE_NAME);   // -> 
        
        lua_pushnil(L);                                                       // -> nil
        lua_rawsetp(L, LUA_REGISTRYINDEX, LQTK_WEAK_UDATA_MAP_NAME);          // -> 

        lua_pushnil(L);                                                       // -> nil
        lua_rawsetp(L, LUA_REGISTRYINDEX, LQTK_WEAK_USER_VALUE_MAP_NAME);     // -> 
        
        lua_pushnil(L);                                                       // -> nil
        lua_rawsetp(L, LUA_REGISTRYINDEX, LQTK_STRONG_USER_VALUE_MAP_NAME);   // -> 
        
        StateGuard::releaseRef(udata, StateGuard::FOR_LUA_STATE);
        if (guard->qapp && guard->getRefCount() == 1)
        {
            QApplication* qapp = guard->qapp;
            guard->qapp = nullptr;
            delete qapp;
        }
    }
    return 0;
}

/* ============================================================================================ */

static int pushMap(lua_State* L, const char* name, const char* mode = nullptr)
{
    if (lua_rawgetp(L, LUA_REGISTRYINDEX, name) != LUA_TTABLE)       // -> map?
    {
        lua_pop(L, 1);                                               // -> 
        lua_newtable(L);                                             // -> map
        if (mode) {
            lua_newtable(L);                                         // -> map, mapMeta
            lua_pushstring(L, mode);                                 // -> map, mapMeta, mode
            lua_setfield(L, -2, "__mode");                           // -> map, mapMeta
            lua_setmetatable(L, -2);                                 // -> map
        }
        lua_pushvalue(L, -1);                                        // -> map, map
        lua_rawsetp(L, LUA_REGISTRYINDEX, name);                     // -> map
    }
    return 1;
}


/* ============================================================================================ */

int StateGuard::pushEphemeronRefMap(lua_State* L)
{
    return pushMap(L, LQTK_EPHEMERON_TABLE_NAME, "k");
}

int StateGuard::pushWeakReceiverRefMap(lua_State* L)
{
    return pushMap(L, LQTK_WEAK_RECEIVER_MAP_NAME, "v");
}

int StateGuard::pushWeakUdataRefMap(lua_State* L)
{
    return pushMap(L, LQTK_WEAK_UDATA_MAP_NAME, "v");
}

int StateGuard::pushWeakUserValueMap(lua_State* L)
{
    return pushMap(L, LQTK_WEAK_USER_VALUE_MAP_NAME, "v");
}

int StateGuard::pushStrongUserValueMap(lua_State* L)
{
    return pushMap(L, NULL, LQTK_STRONG_USER_VALUE_MAP_NAME);
}

/* ============================================================================================ */

void StateGuard::clearEphemeronRef(lua_State* L,  int keyIndex)
{
    if (keyIndex < 0) {
        keyIndex = lua_gettop(L) + 1 + keyIndex;
    }
    pushEphemeronRefMap(L);                 // -> emrMap
    lua_pushvalue(L, keyIndex);             // -> emrMap, key
    lua_pushnil(L);                         // -> emrMap, key, nil
    lua_rawset(L, -3);                      // -> emrMap
    lua_pop(L, 1);
}

void StateGuard::setEphemeronRef(lua_State* L,  int keyIndex, int valueIndex)
{
    if (keyIndex < 0) {
        keyIndex = lua_gettop(L) + 1 + keyIndex;
    }
    if (valueIndex < 0) {
        valueIndex = lua_gettop(L) + 1 + valueIndex;
    }
    pushEphemeronRefMap(L);                 // -> emrMap
    lua_pushvalue(L, keyIndex);             // -> emrMap, key
    lua_pushvalue(L, valueIndex);           // -> emrMap, key, value
    lua_rawset(L, -3);                      // -> emrMap
    lua_pop(L, 1);
}

int StateGuard::pushEphemeronRef(lua_State* L, int keyIndex)
{
    if (keyIndex < 0) {
        keyIndex = lua_gettop(L) + 1 + keyIndex;
    }
    pushEphemeronRefMap(L);             // -> emrMap
    lua_pushvalue(L, keyIndex);         // -> emrMap, key
    int tp = lua_rawget(L, -2);         // -> emrMap, value
    lua_remove(L, -2);                  // -> value
    return tp;
}

/* ============================================================================================ */

void StateGuard::clearWeakReceiverRef(lua_State* L,  const void*  obj)
{
    pushWeakReceiverRefMap(L);                 // -> wrrMap
    lua_pushnil(L);                         // -> wrrMap, nil
    lua_rawsetp(L, -2, obj);                // -> wrrMap
    lua_pop(L, 1);
}

void StateGuard::setWeakReceiverRef(lua_State* L,  const void*  obj, int valueIndex)
{
    if (valueIndex < 0) {
        valueIndex = lua_gettop(L) + 1 + valueIndex;
    }
    pushWeakReceiverRefMap(L);                 // -> wrrMap
    lua_pushvalue(L, valueIndex);           // -> wrrMap, value
    lua_rawsetp(L, -2, obj);                // -> wrrMap
    lua_pop(L, 1);
}

int StateGuard::pushWeakReceiverRef(lua_State* L, const void*  obj)
{
    pushWeakReceiverRefMap(L);             // -> wrrMap
    int tp = lua_rawgetp(L, -1, obj);   // -> wrrMap, rslt
    lua_remove(L, -2);                  // -> rslt
    return tp;
}

/* ============================================================================================ */

void StateGuard::clearWeakUdataRef(lua_State* L,  const void*  obj)
{
    pushWeakUdataRefMap(L);                 // -> wudMap
    lua_pushnil(L);                         // -> wudMap, nil
    lua_rawsetp(L, -2, obj);                // -> wudMap
    lua_pop(L, 1);
}

void StateGuard::setWeakUdataRef(lua_State* L,  const void*  obj, int valueIndex)
{
    if (valueIndex < 0) {
        valueIndex = lua_gettop(L) + 1 + valueIndex;
    }
    pushWeakUdataRefMap(L);                 // -> wudMap
    lua_pushvalue(L, valueIndex);           // -> wudMap, value
    lua_rawsetp(L, -2, obj);                // -> wudMap
    lua_pop(L, 1);
}

int StateGuard::pushWeakUdataRef(lua_State* L, const void*  obj)
{
    pushWeakUdataRefMap(L);             // -> wudMap
    int tp = lua_rawgetp(L, -1, obj);   // -> wudMap, rslt
    lua_remove(L, -2);                  // -> rslt
    return tp;
}

/* ============================================================================================ */

void StateGuard::clearWeakUserValue(lua_State* L,  const void*  obj)
{
    pushWeakUserValueMap(L);                // -> wuvMap
    lua_pushnil(L);                         // -> wuvMap, nil
    lua_rawsetp(L, -2, obj);                // -> wuvMap
    lua_pop(L, 1);
}

void StateGuard::setWeakUserValue(lua_State* L,  const void*  obj, int valueIndex)
{
    if (valueIndex < 0) {
        valueIndex = lua_gettop(L) + 1 + valueIndex;
    }
    pushWeakUserValueMap(L);                // -> wuvMap
    lua_pushvalue(L, valueIndex);           // -> wuvMap, value
    lua_rawsetp(L, -2, obj);                // -> wuvMap
    lua_pop(L, 1);
}

int StateGuard::pushWeakUserValue(lua_State* L, const void*  obj)
{
    pushWeakUserValueMap(L);            // -> wuvMap
    int tp = lua_rawgetp(L, -1, obj);   // -> wuvMap, rslt
    lua_remove(L, -2);                  // -> rslt
    return tp;
}

void StateGuard::setWeakUserValue(lua_State* L,  int keyIndex, int valueIndex)
{
    if (keyIndex < 0) {
        keyIndex = lua_gettop(L) + 1 + keyIndex;
    }
    if (valueIndex < 0) {
        valueIndex = lua_gettop(L) + 1 + valueIndex;
    }
    pushWeakUserValueMap(L);                // -> wuvMap
    lua_pushvalue(L, keyIndex);             // -> wuvMap, key
    lua_pushvalue(L, valueIndex);           // -> wuvMap, key, value
    lua_rawset(L, -3);                      // -> wuvMap
    lua_pop(L, 1);
}

int StateGuard::pushWeakUserValue(lua_State* L, int keyIndex)
{
    if (keyIndex < 0) {
        keyIndex = lua_gettop(L) + 1 + keyIndex;
    }
    pushWeakUserValueMap(L);            // -> wuvMap
    lua_pushvalue(L, keyIndex);         // -> wuvMap, key
    int tp = lua_rawget(L, -2);         // -> wuvMap, value
    lua_remove(L, -2);                  // -> value
    return tp;
}

/* ============================================================================================ */

void StateGuard::clearStrongUserValue(lua_State* L,  const void*  obj)
{
    pushStrongUserValueMap(L);              // -> suvMap
    lua_pushnil(L);                         // -> suvMap, nil
    lua_rawsetp(L, -2, obj);                // -> suvMap
    lua_pop(L, 1);
}

void StateGuard::setStrongUserValue(lua_State* L,  const void*  obj, int valueIndex)
{
    if (valueIndex < 0) {
        valueIndex = lua_gettop(L) + 1 + valueIndex;
    }
    pushStrongUserValueMap(L);              // -> suvMap
    lua_pushvalue(L, valueIndex);           // -> suvMap, value
    lua_rawsetp(L, -2, obj);                // -> suvMap
    lua_pop(L, 1);
}

int StateGuard::pushStrongUserValue(lua_State* L, const void*  obj)
{
    pushStrongUserValueMap(L);          // -> suvMap
    int tp = lua_rawgetp(L, -1, obj);   // -> suvMap, rslt
    lua_remove(L, -2);                  // -> rslt
    return tp;
}

/* ============================================================================================ */

void StateGuard::init(lua_State* L)
{
    push(L);       // -> guard;
    lua_pop(L, 1); // -> 
}

StateGuard* StateGuard::push(lua_State* L)
{
    int tp = lua_rawgetp(L, LUA_REGISTRYINDEX, LQTK_GUARD_TYPE_NAME);
    if (tp != LUA_TUSERDATA) {
        StateGuard** udata = util::newuserdatauv<StateGuard*>(L, 0); // -> guard
        *udata = nullptr;
        lua_pushvalue(L, -1); // -> guard, guard
        lua_rawsetp(L, LUA_REGISTRYINDEX, LQTK_GUARD_TYPE_NAME); // -> guard
        luaL_newmetatable(L, LQTK_GUARD_TYPE_NAME);   // -> guard, meta
        lua_pushcfunction(L, Lqtk_GuardDestruct); // -> guard, meta, destr
        lua_setfield(L, -2, "__gc"); // -> guard, meta
        lua_setmetatable(L, -2); // -> guard
    
        StateGuard* guard = new StateGuard();
        if (!guard) {
            return luaL_error(L, "memory error"), nullptr;
        }
        guard->refCount = 1;
        *udata = guard;

        lua_State* L2 = lua_newthread(L);                 // -> guard, L2
        guard->stateRef = luaL_ref(L, LUA_REGISTRYINDEX); // -> guard

        guard->L = L2;
    }
    return *((StateGuard**)lua_touserdata(L, -1));
}

/* ============================================================================================ */
