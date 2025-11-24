/* ============================================================================================ */

#include <exception>

/* ============================================================================================ */

#include "init.h"

#include "util.hpp"

/* ============================================================================================ */

using namespace lqtk;
using namespace lqtk::util;

const char* util::quoteLString(lua_State* L, const char* s, size_t len)
{
    if (s) {
        luaL_Buffer tmp;
        luaL_buffinit(L, &tmp);
        luaL_addchar(&tmp, '"');
        int i;
        for (i = 0; i < len; ++i) {
            char c = s[i];
            if (c == 0) {
                luaL_addstring(&tmp, "\\0");
            } else if (c == '"') {
                luaL_addstring(&tmp, "\\\"");
            } else if (c == '\\') {
                luaL_addstring(&tmp, "\\\\");
            } else {
                luaL_addchar(&tmp, c);
            }
        }
        luaL_addchar(&tmp, '"');
        luaL_pushresult(&tmp);
        return lua_tostring(L, -1);
    } else {
        return lua_pushstring(L, "(nil)");
    }
}

const char* util::quoteString(lua_State* L, const char* s)
{
    return quoteLString(L, s, (s != NULL) ? strlen(s) : 0);
}

int util::handleException(lua_State* L)
{
    try {
        throw;
    }
    catch (std::exception& ex) {
        return luaL_error(L, "%s", ex.what());
    }
    catch (...) {
        return luaL_error(L, "unknown error");
    }
}

int util::handleError(lua_State* L)
{
    const char* msg = lua_tostring(L, 1);
    if (msg == NULL) {  /* is error object not a string? */
        if (   luaL_callmeta(L, 1, "__tostring")  /* does it have a metamethod */
            && lua_type(L, -1) == LUA_TSTRING)  /* that produces a string? */
        {
            msg = lua_tostring(L, -1);
        } else {
            msg = lua_pushfstring(L, "(error object is a %s value)",
                                     luaL_typename(L, 1));
        }
    }
    bool appendStacktrace = false;
    lua_Debug ar;
    for (int level = 1; lua_getstack(L, level, &ar); ++level) {
        lua_getinfo(L, "S", &ar);
        if (strcmp("C", ar.what)  != 0) {
            appendStacktrace = true; break;
        }
    }
    if (appendStacktrace) {
        luaL_traceback(L, L, msg, 1);  /* append a standard traceback */
    } else {
        lua_pushvalue(L, 1);
    }
    return 1;
}

int util::argCountError(lua_State* L, const char* className,
                                      const char* funcName, 
                                      int         given, 
                                      const char* expected)
{
    size_t len = strlen(expected);
    char* tmp = (char*)lua_newuserdatauv(L, len + 1, 0);
    memcpy(tmp, expected, len + 1);
    int cnt = (len > 0 ? 1 : 0);
    for (int i = 0; i < len; ++i) {
        if (tmp[i] == ',') {
            cnt += 1;
            tmp[i] = 0;
        }
    }
    lua_Debug ar;
    if (cnt == 0 || !lua_getstack(L, 0, &ar)) {
        return luaL_error(L, "unexpected number of arguments.");
    }
    lua_getinfo(L, "n", &ar);
    bool isMethod = (strcmp(ar.namewhat, "method") == 0);

    for (int p = 0, a = 1; a <= cnt; ++a) {
        int i = atoi(tmp + p);
        if (i == 0) {
            isMethod = false;
            break;
        }
        while (tmp[p]) ++p;
        ++p;
    }
    
    int offs = isMethod ? -1 : 0;
    
    luaL_Buffer b;
    luaL_buffinit(L, &b);
    
    luaL_addstring(&b, "unexpected number of ");
    if (isMethod) {
        luaL_addstring(&b, "method");
    } else {
        luaL_addstring(&b, "function");
    }
    luaL_addstring(&b, " arguments for '");
    luaL_addstring(&b, className);
    if (funcName) {
        if (isMethod) {
            luaL_addstring(&b, ":");
        } else {
            luaL_addstring(&b, ".");
        }
        luaL_addstring(&b, funcName);
    }
    luaL_addstring(&b, "' (");
    lua_pushinteger(L, given + offs);
    luaL_addvalue(&b);
    luaL_addstring(&b, " given, ");

    for (int p = 0, a = 1; a <= cnt; ++a) {
        int i = atoi(tmp + p);
        lua_pushinteger(L, i + offs);
        luaL_addvalue(&b);
        if (a < cnt) {
            if (a + 1 < cnt) {
                luaL_addstring(&b, ", ");
            } else {
                luaL_addstring(&b, " or ");
            }
        }
        while (tmp[p]) ++p;
        ++p;
    }
    luaL_addstring(&b, " expected)");

    luaL_pushresult(&b);
    return lua_error(L);
}

// bad argument #1 to 'QObject' (lqtk.Object expected, got table)
// calling 'at' on bad self (lqtk.Object<QString> expected, got lqtk.Object<QObject>)
int util::argError(lua_State* L, int arg, const char* message)
{
    lua_Debug ar;
    ar.name = NULL;
    for (int level = 0; lua_getstack(L, level, &ar); ++level) {
        lua_getinfo(L, "Sn", &ar);
        //printf("***** %d <%s> <%s> <%s>\n", level, ar.what, ar.namewhat, ar.name);
        if (strcmp("C", ar.what) != 0) {
            ar.name = NULL; 
            break;
        }
        if (ar.name) {
            break;
        }
    }
    if (ar.name) {
        bool isMethod     = (strcmp("method", ar.namewhat) == 0);
        const char* what = "";
        if (isMethod) {
            what = "method ";
        }
        if (isMethod && arg == 1) {
            if (message) {
                lua_pushfstring(L, "calling '%s' on bad self (%s)", ar.name, message);
            } else {
                lua_pushfstring(L, "calling '%s' on bad self", ar.name);
            }
        } else {
            if (isMethod) {
                arg -= 1;
            }
            if (message) {
                lua_pushfstring(L, "bad argument #%d to %s'%s' (%s)", arg, what, ar.name, message);
            } else {
                lua_pushfstring(L, "bad argument #%d to %s'%s'", arg, what, ar.name);
            }
        }
    } else {
            if (message) {
                lua_pushfstring(L, "bad argument #%d to '?' (%s)", arg, ar.name, message);
            } else {
                lua_pushfstring(L, "bad argument #%d to '?'", arg, ar.name);
            }
    }
    return lua_error(L);
}

void* util::checkUdata(lua_State* L, int arg, const char* tname)
{
    void* udata = luaL_testudata(L, arg, tname);
    if (udata) {
        return udata;
    } else {
        int tp = lua_type(L, arg);
        const char* other = lua_typename(L, tp);
        if (lua_getmetatable(L, arg)) {                               // -> meta
            if (lua_getfield(L, -1, "__name") == LUA_TSTRING) {       // -> meta, name
                other = lua_tostring(L, -1);
            }
        }
        const char* message = lua_pushfstring(L, "%s expected, got %s", tname, other);
        return argError(L, arg, message), nullptr;
    }
}

void util::checkType(lua_State* L, int arg, int t)
{
    int tp = lua_type(L, arg);
    if (tp != t) {
        const char* expected = lua_typename(L, t);
        const char* other   = lua_typename(L, tp);
        if (lua_getmetatable(L, arg)) {                               // -> meta
            if (lua_getfield(L, -1, "__name") == LUA_TSTRING) {       // -> meta, name
                other = lua_tostring(L, -1);
            }
        }
        const char* message = lua_pushfstring(L, "%s expected, got %s", expected, other);
        argError(L, arg, message);
    }
}


lua_Integer util::checkInteger(lua_State* L, int arg)
{
    int isnum = 0;
    lua_Integer rslt = lua_tointegerx(L, arg, &isnum);
    if (isnum) {
        return rslt;
    } else {
        int tp = lua_type(L, arg);
        const char* other   = lua_typename(L, tp);
        if (lua_getmetatable(L, arg)) {                               // -> meta
            if (lua_getfield(L, -1, "__name") == LUA_TSTRING) {       // -> meta, name
                other = lua_tostring(L, -1);
            }
        }
        const char* message = lua_pushfstring(L, "integer expected, got %s", other);
        return argError(L, arg, message);
    }
}

const char* util::checkString(lua_State* L, int arg)
{
    int tp = lua_type(L, arg);
    if (tp == LUA_TSTRING) {
        return lua_tostring(L, arg);
    } else {
        const char* other   = lua_typename(L, tp);
        if (lua_getmetatable(L, arg)) {                               // -> meta
            if (lua_getfield(L, -1, "__name") == LUA_TSTRING) {       // -> meta, name
                other = lua_tostring(L, -1);
            }
        }
        const char* message = lua_pushfstring(L, "string expected, got %s", other);
        return argError(L, arg, message), nullptr;
    }
}
