#include <QPointer>

#include "init.h"
#include "util.hpp"
#include "BindingUtil.hpp"
#include "StateGuard.hpp"

using namespace lqtk;


void BindingUtil::callLuaDestructor(lua_State* L, lua_CFunction impl, void* obj, const char* className) 
{
    int oldTop = lua_gettop(L);
    lua_pushcfunction(L, util::handleError);                      // -> eh
    int ehIndex = oldTop + 1;
    lua_pushcfunction(L, impl);                                   // -> eh, func,
    lua_pushlightuserdata(L, obj);                                // -> eh, func, obj
    int rc = lua_pcall(L, 1, 0, ehIndex);                         // -> eh, ...
    if (rc != LUA_OK) {
        fprintf(stderr, "lqtk: Error in %s destructor: %s\n", className, lua_tostring(L, -1));
    }
    lua_settop(L, oldTop);
}

struct findImpl_CallArgs
{
    findImpl_CallArgs(void*       obj,
                      const char* methodName)
        : obj(obj),
          methodName(methodName),
          implType(LUA_TNONE)
    {}
    void*       obj;
    const char* methodName;
    int         implType;
};

static int findImpl_doLua(lua_State* L)
{
    luaL_checkstack(L, LUA_MINSTACK, nullptr);
    findImpl_CallArgs* args = (findImpl_CallArgs*)lua_touserdata(L, 1);
    if (StateGuard::pushWeakUserValue(L, args->obj) == LUA_TTABLE) {  // -> uval
        int tp = lua_getfield(L, -1, args->methodName);               // -> uval, member?
        if (tp != LUA_TNIL) {
            args->implType = tp;
            if (tp == LUA_TFUNCTION) {
                lua_Debug ar;
                // ">S" fills in the fields source, short_src, linedefined, lastlinedefined, and what
                lua_getinfo(L, ">S", &ar);                               // -> uval
                lua_pushfstring(L, "%s:%d", ar.short_src, ar.linedefined);
                return 1;
            }
        }
    }
    return 0;
}

void BindingUtil::callLuaMethodImpl(lua_State* L, lua_CFunction impl, CallArgs* args, const char* className, const char* methodName)
{
    int oldTop = lua_gettop(L);
    lua_pushcfunction(L, impl);                                        // -> func,
    lua_pushlightuserdata(L, args);                                    // -> func, args
    int rc = lua_pcall(L, 1, 0, 0);                                    // -> 
    if (rc != LUA_OK) {                                                // -> err1
        std::string errmsg;
        if (args->wasImplFound) {
            if (args->wasCalled) {
                findImpl_CallArgs findImplArgs(args->obj, methodName);
                lua_pushcfunction(L, findImpl_doLua);                              // -> err1, func
                lua_pushlightuserdata(L, &findImplArgs);                           // -> err1, func, args
                int rc = lua_pcall(L, 1, 1, 0);
                if (rc == LUA_OK && lua_type(L, -1) == LUA_TSTRING) {              // -> err1, rslt
                    errmsg = std::string() + "error in implementation <" + lua_tostring(L, -1) + "> of method '" + className + ":" + methodName + "': "
                                           + lua_tostring(L, -2);
                } else {                                                           // -> err1, err2
                    errmsg = std::string() + "error calling implementation of method '" + className + ":" + methodName + "': "
                                           + lua_tostring(L, -2);
                }
            } else {
                findImpl_CallArgs findImplArgs(args->obj, methodName);
                lua_pushcfunction(L, findImpl_doLua);                              // -> err1, func
                lua_pushlightuserdata(L, &findImplArgs);                           // -> err1, func, args
                int rc = lua_pcall(L, 1, 1, 0);
                if (rc == LUA_OK) {                                                // -> err1, rslt
                    errmsg = std::string() + "implementation <" + lua_tostring(L, -1) + "> of method '" + className + ":" + methodName + "' could not be called: "
                                           + lua_tostring(L, -2);
                } else {                                                           // -> err1, err2
                    errmsg = std::string() + "implementation of method '" + className + ":" + methodName + "' could not be called: "
                                           + lua_tostring(L, -2);
                }
            }
        } else {
            errmsg = std::string() + "error in method '" + className + ":" + methodName + "': "
                                   + lua_tostring(L, -1);
        }
        lua_settop(L, oldTop);
        throw std::runtime_error(errmsg);
    }
    lua_settop(L, oldTop);
}

void BindingUtil::throwMethodImplRsltError(lua_State* L, void* obj, const char* className, const char* methodName, const char* rsltError)
{
    findImpl_CallArgs args(obj, methodName);
    lua_pushcfunction(L, findImpl_doLua);                              // -> func
    lua_pushlightuserdata(L, &args);                                   // -> func, args
    int rc = lua_pcall(L, 1, 1, 0);
    if (rc == LUA_OK) {
        std::string errmsg = std::string() + "implementation <" + lua_tostring(L, -1) + "> of method '" + className + ":" + methodName + "' "
                                           + "must return " + rsltError;
        throw std::runtime_error(errmsg);
    } else {
        std::string errmsg = std::string() + "error calling implementation of method '" + className + ":" + methodName + "': "
                                           + "must return " + rsltError;
        throw std::runtime_error(errmsg);
    }
}



int BindingUtil::callMethodFromLua(lua_State* L, lua_CFunction impl, void* args)
{
    int nargs = lua_gettop(L);
    lua_pushcfunction(L, impl);                                        // -> args1-n, func
    lua_pushlightuserdata(L, args);                                    // -> args1-n, func, args
    lua_rotate(L, 1, 2);                                               // -> func, args, args1-n
    int rc = lua_pcall(L, nargs+1, LUA_MULTRET, 0);
    if (rc == LUA_OK) {
        if (lua_gettop(L) > 0) {
            return 1;
        } else {
            return 0;
        }
    } else {
        std::string errmsg = lua_tostring(L, -1);
        throw std::runtime_error(errmsg);
    }
}


