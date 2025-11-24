#include <QPointer>
#include <QFlags>
#include <QString>
#include <QStringList>

#include "init.h"
#include "util.hpp"
#include "FromLua.hpp"
#include "QStringBinding.hpp"
#include "QByteArrayBinding.hpp"

using namespace lqtk;



int FromLuaBase::triggerArgError(lua_State* L, int arg, const ClassInfo* expected)
{
    ObjectUdata* udata = ObjectUdata::checkArg(L, arg);
    if (udata->classInfo) {
        lua_pushfstring(L, "lqtk.Object<%s> expected, got lqtk.Object<%s>", expected->className,
                                                                            udata->classInfo->className);
    } else {
        lua_pushfstring(L, "lqtk.Object<%s> expected", expected->className);
    }
    return util::argError(L, arg, lua_tostring(L, -1));
}

bool FromLua<char>::test(lua_State* L, int arg) 
{
    int tp = lua_type(L, arg);
    if (tp == LUA_TNUMBER) {
        int isValid = 0;
        lua_Integer rslt = lua_tointegerx(L, arg, &isValid);
        return (isValid && 0 <= rslt && rslt <= 0xff);
    }
    else if (tp == LUA_TSTRING) {
         size_t len = 0;
         const char* ptr = lua_tolstring(L, arg, &len);
         if (len != 1) {
            return false;
         }
         value = ptr[0];
         return true;
    } else {
        return false;
    }
}

void FromLua<char>::check(lua_State* L, int arg) 
{
    int tp = lua_type(L, arg);
    if (tp == LUA_TNUMBER) {
        int isValid = 0;
        lua_Integer rslt = lua_tointegerx(L, arg, &isValid);
        if (isValid && 0 <= rslt && rslt <= 0xff) {
            value = rslt;
            return;
        } else {
            util::argError(L, arg, "byte value must be integer between 0 and 255");
            return;
        }
    }
    else if (tp == LUA_TSTRING) {
        size_t len = 0;
        const char* ptr = lua_tolstring(L, arg, &len);
        if (len == 1) {
            value = ptr[0];
            return;
        }
    }
    util::argError(L, arg, "string of length 1 or byte value expected");
}

bool FromLua<QString>::test(lua_State* L, int arg) 
{
    int tp = lua_type(L, arg);
    if (tp == LUA_TSTRING) {
         size_t len = 0;
         const char* ptr = lua_tolstring(L, arg, &len);
         value = QString::fromUtf8(ptr, len);
         return true;
    } else if (tp == LUA_TUSERDATA) {
        ObjectUdata* udata = ObjectUdata::testArg(L, arg);
        if (udata) {
            void* casted = udata->castTo(&Binding<QString>::classInfo);
            if (casted) {
                value = *static_cast<QString*>(casted);
                return true;
            }            
        }
    }
    return false;
}

void FromLua<QString>::check(lua_State* L, int arg) 
{
    if (!test(L, arg)) {
        util::checkType(L, arg, LUA_TSTRING);
    }
}

FromLua<QByteArray*>::~FromLua() 
{
    if (hasNew) {
        delete value;
        value = nullptr;
        hasNew = false;
    }
}

bool FromLua<QByteArray*>::test(lua_State* L, int arg) 
{
    if (hasNew) {
        delete value;
        value = nullptr;
        hasNew = false;
    }
    int tp = lua_type(L, arg);
    if (tp == LUA_TSTRING) {
         size_t len = 0;
         const char* ptr = lua_tolstring(L, arg, &len);
         value = new QByteArray(ptr, len);
         hasNew = true;
         return true;
    } else if (tp == LUA_TUSERDATA) {
        ObjectUdata* udata = ObjectUdata::testArg(L, arg);
        if (udata) {
            void* casted = udata->castTo(&Binding<QByteArray>::classInfo);
            if (casted) {
                value = static_cast<QByteArray*>(casted);
                return true;
            }            
        }
    }
    return false;
}

void FromLua<QByteArray*>::check(lua_State* L, int arg) 
{
    if (!test(L, arg)) {
        util::argError(L, arg, "string or QByteArray expected");
    }
}

bool FromLua<QStringList>::test(lua_State* L, int arg) 
{
    value = QStringList();
    if (lua_type(L, arg) != LUA_TTABLE) {
        return false;
    }
    for (int i = 1; lua_geti(L, arg, i) != LUA_TNIL; ++i) {
        if (temp.test(L, -1)) {
            value.append(temp);
            lua_pop(L, 1);
        } else {
            lua_pop(L, 1);
            return false;
        }
    }
    return true;
}

void FromLua<QStringList>::check(lua_State* L, int arg) 
{
    util::checkType(L, arg, LUA_TTABLE);
    value = QStringList();
    for (int i = 1; lua_geti(L, arg, i) != LUA_TNIL; ++i) {
        if (temp.test(L, -1)) {
            lua_pop(L, 1);
            value.append(temp);
        } else {
            lua_pop(L, 1);
            util::argError(L, arg, "list of strings expected");
            return;
        }
    }
}
