/* ============================================================================================ */

#include <new>

#include <QPointer>
#include <QMetaMethod>

/* ============================================================================================ */

#include "init.h"
#include "util.hpp"
#include "main.hpp"
#include "trace.hpp"
#include "registry.hpp"

#include "ClassInfo.hpp"
#include "ClassUdata.hpp"
#include "ObjectUdata.hpp"
#include "NamespaceInfo.hpp"
#include "NamespaceUdata.hpp"
#include "ConnectionUdata.hpp"

#include "Listener.hpp"
#include "StateGuard.hpp"

/* ============================================================================================ */
namespace lqtk {
/* ============================================================================================ */

int debugIdCounter = 0;

/* ============================================================================================ */
} // namespace lqtk
/* ============================================================================================ */

/* ============================================================================================ */
extern "C" {
/* ============================================================================================ */

#ifndef LQTK_VERSION
    #error LQTK_VERSION is not defined
#endif 

#define LQTK_STRINGIFY(x) #x
#define LQTK_TOSTRING(x) LQTK_STRINGIFY(x)
#define LQTK_VERSION_STRING LQTK_TOSTRING(LQTK_VERSION)

/* ============================================================================================ */

using namespace lqtk;
using namespace lqtk::util;

/* ============================================================================================ */



/* ============================================================================================ */

/* ============================================================================================ */

static const char* const LQTK_MAIN_TYPE_NAME = "lqtk";


/* ============================================================================================ */

static int Lqtk_MainIndex(lua_State* L)
{
    util::checkType(L, 1, LUA_TTABLE);

    const char* name = util::checkString(L, 2);
    
    int pushed = registry::pushBinding(L, name);
    if (pushed) { // -> class
        lua_pushvalue(L, 2); // -> class, name
        lua_pushvalue(L, -2); // -> class, name, class
        lua_rawset(L, 1); // -> class
        return 1;
    } else {
        return 0;
    }
}

/* ============================================================================================ */


static int Lqtk_MainNext(lua_State* L) // arg1: state, arg2: key
{
    lua_settop(L, 2);            // -> state, key
    if (lua_next(L, -2)) {        
        return 2;                // -> state, nextkey, nextvalue
    }
    return 0;
}

static int Lqtk_MainPairs(lua_State* L)
{
    util::checkType(L, 1, LUA_TTABLE);
    
    lua_pushcfunction(L, Lqtk_MainNext);                          // -> next
    lua_newtable(L);                                              // -> next, state
    for (int i = 1, n = registry::getEntryCount(); i <= n; ++i) {
        registry::pushEntryKeyValue(L, i);                        // -> next, state, key, value
        lua_rawset(L, -3);                                        // -> next, state
    }
    lua_pushnil(L);                                               // -> next, state, key
    while (lua_next(L, 1)) {                                      // -> next, state, key, value
        lua_pushvalue(L, -2);                                     // -> next, state, key, value, key
        lua_insert(L, -2);                                        // -> next, state, key, key, value, 
        lua_rawset(L, -4);                                        // -> next, state, key, 
    }                                                             // -> next, state
    lua_pushnil(L);                                               // -> next, state, initKey
    return 3;
}

/* ============================================================================================ */

static const luaL_Reg Lqtk_MainMeta_Functions[] = 
{
    { "__index",           Lqtk_MainIndex },
    { "__pairs",           Lqtk_MainPairs },
    { NULL,                NULL } /* sentinel */
};

/* ============================================================================================ */

static int setupMainMeta(lua_State* L)
{                                                     // -> meta
    lua_pushstring(L, LQTK_MAIN_TYPE_NAME);           // -> meta, typeName 
    lua_setfield(L, -2, "__metatable");               // -> meta
    
    luaL_setfuncs(L, Lqtk_MainMeta_Functions, 0);

    return 1;
}

static int pushMainMeta(lua_State* L)
{
    if (luaL_newmetatable(L, LQTK_MAIN_TYPE_NAME)) { // -> meta
        setupMainMeta(L);
    }
    return 1;
}

/* ============================================================================================ */

static int lqtk_main_isvalid(lua_State* L)
{
    if (lua_isnoneornil(L, 1)) {
        lua_pushboolean(L, false);
    }
    else {
        ObjectUdata* udata = ObjectUdata::testArg(L, 1, ObjectUdata::ANY);
        lua_pushboolean(L, udata != nullptr && udata->getState() == ObjectUdata::VALID);
    }
    return 1;
}

/* ============================================================================================ */

static int lqtk_main_type(lua_State* L)
{
    luaL_checkany(L, 1);
    int tp = lua_type(L, 1);
    if (tp == LUA_TUSERDATA || tp == LUA_TTABLE) {
        if (lua_getmetatable(L, 1)) {
            if (lua_getfield(L, -1, "__name") == LUA_TSTRING) {
                return 1;
            #if 0
                lua_pushvalue(L, -1);
                if (lua_gettable(L, LUA_REGISTRYINDEX) == LUA_TTABLE) {
                    if (lua_rawequal(L, -3, -1)) {
                        lua_pop(L, 1);
                        return 1;
                    }
                }
            #endif
            }
        }
    }
    lua_pushstring(L, lua_typename(L, tp));
    return 1;
}

/* ============================================================================================ */

static int lqtk_main_qtype(lua_State* L)
{
    if (!lua_isnoneornil(L, 1)) 
    {
        ObjectUdata* objectUdata = ObjectUdata::testArg(L, 1, ObjectUdata::ANY);
        if (objectUdata) {
            objectUdata->pushClassName(L, 1);
            return 1;
        }
        
        ClassUdata* classUdata = (ClassUdata*) luaL_testudata(L, 1, LQTK_CLASS_TYPE_NAME);
        if (classUdata) {
            classUdata->pushClassName(L, 1);
            return 1;
        }

        NamespaceUdata* namespaceUdata = NamespaceUdata::testArg(L, 1);
        if (namespaceUdata) {
            lua_pushstring(L, namespaceUdata->namespaceInfo->namespaceName);
            return 1;
        }
    }
    lua_pushnil(L);
    return 1;
}


/* ============================================================================================ */

static int lqtk_newClass(lua_State* L)
{
    return ClassUdata::newClass(L);
}

/* ============================================================================================ */

static int lqtk_class(lua_State* L)
{
    ObjectUdata* objUdata = ObjectUdata::testArg(L, 1, ObjectUdata::ANY);
    if (objUdata) {
        objUdata->pushClass(L, 1);
        return 1;
    }
    return 0;
}

/* ============================================================================================ */

static int lqtk_baseClass(lua_State* L)
{
    ObjectUdata* objUdata = ObjectUdata::testArg(L, 1, ObjectUdata::ANY);
    if (objUdata) {
        objUdata->pushBaseClass(L, 1);
    } 
    else {
        ClassUdata* classUdata = (ClassUdata*) util::checkUdata(L, 1, LQTK_CLASS_TYPE_NAME);
        classUdata->pushBaseClass(L, 1);
    }
    return 1;
}

/* ============================================================================================ */

static int lqtk_debug_getuservalue(lua_State* L)
{
    ObjectUdata* udata = ObjectUdata::testArg(L, 1, ObjectUdata::ANY);
    if (udata && udata->hasUserValue())
    {
        void* objPtr = udata->getObjectPtr();
        if (objPtr) {
            if (lua_getiuservalue(L, 1, 1) == LUA_TTABLE) {  // -> uval?
                return 1;
            }
        }
    }
    lua_pushnil(L);
    return 1;
}


/* ============================================================================================ */

static int lqtk_debug_objptr(lua_State* L)
{
    ObjectUdata* udata = ObjectUdata::checkArg(L, 1);
    lua_pushlightuserdata(L, udata->getObjectPtr());
    return 1;
}

/* ============================================================================================ */

static int lqtk_debug_ptr(lua_State* L)
{
    lua_pushlightuserdata(L, (void*)lua_topointer(L, 1));
    return 1;
}

/* ============================================================================================ */

static int lqtk_debug_id(lua_State* L)
{
    ObjectUdata* objUdata =  ObjectUdata::testArg(L, 1, ObjectUdata::ANY);
    if (objUdata) {
        lua_pushinteger(L, objUdata->getDebugId());
        return 1;
    }
    else {
        ClassUdata* classUdata = (ClassUdata*) util::checkUdata(L, 1, LQTK_CLASS_TYPE_NAME);
        if (classUdata) {
            lua_pushinteger(L, classUdata->getDebugId());
            return 1;
        }
    }
    return 0;
}

/* ============================================================================================ */

static int lqtk_debug_isOwner(lua_State* L)
{
    ObjectUdata* objUdata =  ObjectUdata::checkArg(L, 1, ObjectUdata::VALID);
    lua_pushboolean(L, objUdata->isOwner());
    return 1;
}    

/* ============================================================================================ */

static int lqtk_debug_setTraceFile(lua_State* L)
{
    if (lua_isnoneornil(L, 1) || !lua_toboolean(L, 1)) {
        trace::setTraceFile(NULL);
    }
    else {
        luaL_Stream* stream = (luaL_Stream*) luaL_checkudata(L, 1, LUA_FILEHANDLE);
        if (stream && stream->f) {
            trace::setTraceFile(stream->f);
        } else {
            trace::setTraceFile(NULL);
        }
    }
    return 0;
}

/* ============================================================================================ */

static int lqtk_import(lua_State* L)
{
    int nargs = lua_gettop(L);

    for (int i = 1; i <= nargs; ++i) {
        util::checkType(L, i, LUA_TSTRING);
    }
    
    if (nargs == 0) {
        lua_pushstring(L, "^Q.*");
        nargs = 1;
    }

    const char* func = 
        "local lqtk = require('lqtk')\n"
        "local G = _ENV or getfenv()\n"
        "local nargs = select('#', ...)\n"
        "for k, v in pairs(lqtk) do\n"
        "  for i = 1, nargs do\n"
        "    local a = select(i, ...)\n"
        "    local m = k:match(a)\n"
        "    if m and m == k then\n"
        "      G[k] = v\n"
        "    end\n"
        "  end\n"
        "end\n";

    if (luaL_loadstring(L, func) != LUA_OK) {  // -> func
        return lua_error(L);
    }
    for (int i = 1; i <= nargs; ++i) {
        lua_pushvalue(L, i);                   // -> func, arg1...argn
    }
    if (lua_pcall(L, nargs, LUA_MULTRET, 0) != LUA_OK) { // -> rslt1...rsltn
        return lua_error(L);
    }
    return lua_gettop(L) - nargs;
}


/* ============================================================================================ */

static const luaL_Reg ModuleFunctions[] = 
{
    { "isValid",           lqtk_main_isvalid },
    { "type",              lqtk_main_type    },
    { "qtype",             lqtk_main_qtype   },
    { "import",            lqtk_import       },
    { "newClass",          lqtk_newClass     },
    { "class",             lqtk_class        },
    { "baseClass",         lqtk_baseClass    },
    { NULL,                NULL } /* sentinel */
};


/* ============================================================================================ */

static const luaL_Reg DebugFunctions[] = 
{
    { "getUserValue",      lqtk_debug_getuservalue },
    { "objPtr",            lqtk_debug_objptr       },
    { "ptr",               lqtk_debug_ptr          },
    { "id",                lqtk_debug_id           },
    { "isOwner",           lqtk_debug_isOwner      },
    { "setTraceFile",      lqtk_debug_setTraceFile },
    { NULL,                NULL } /* sentinel */
};


/* ============================================================================================ */

DLL_PUBLIC int luaopen_lqtk(lua_State* L)
{
    try
    {
        luaL_checkversion(L); /* does nothing if compiled for Lua 5.1 */

        StateGuard::init(L);

        lua_newtable(L);                         // -> lqtk

        pushMainMeta(L);                         // -> lqtk, meta
        lua_setmetatable(L, -2);                 // -> lqtk
        
        luaL_setfuncs(L, ModuleFunctions, 0);    // -> lqtk
        
        lua_pushliteral(L, LQTK_VERSION_STRING); // -> lqtk, vers
        lua_setfield(L, -2, "_VERSION");
        
        lua_newtable(L);                                        // -> lqtk, debug
        {
            StateGuard::pushEphemeronRefMap(L);                 // -> lqtk, debug, map
            lua_setfield(L, -2, "ephemerons");                  // -> lqtk, debug
            
            StateGuard::pushWeakReceiverRefMap(L);              // -> lqtk, debug, map
            lua_setfield(L, -2, "receivers");                   // -> lqtk, debug
            
            StateGuard::pushWeakUdataRefMap(L);                // -> lqtk, debug, map
            lua_setfield(L, -2, "userData");                   // -> lqtk, debug
            
            StateGuard::pushWeakUserValueMap(L);                // -> lqtk, debug, map
            lua_setfield(L, -2, "weakUserValues");              // -> lqtk, debug
            
            StateGuard::pushStrongUserValueMap(L);              // -> lqtk, debug, map
            lua_setfield(L, -2, "strongUserValues");            // -> lqtk, debug
        
            luaL_setfuncs(L, DebugFunctions, 0);
        }                                                       // -> lqtk, debug
        lua_setfield(L, -2, "debug");                           // -> lqtk
        
        return 1;
    }
    catch (...) {
        return handleException(L);
    }
}

/* ============================================================================================ */
} // extern "C"
/* ============================================================================================ */
