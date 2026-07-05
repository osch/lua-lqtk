// Type: QFileDevice
// Base: QIODevice

/* ============================================================================================ */

#include <QDateTime>
#include <QFile>
#include <QFileDevice>
#include <QIODevice>
#include <QObject>
#include <QString>

#include <QPointer>
#include <stdexcept>

/* ============================================================================================ */

#include "init.h"
#include "util.hpp"
#include "ClassInfo.hpp"
#include "BindingUtil.hpp"
#include "ObjectUdata.hpp"
#include "ClassUdata.hpp"
#include "trace.hpp"
#include "FromLua.hpp"
#include "ToLua.hpp"
#include "registry.hpp"
#include "StateGuard.hpp"
#include "QDateTimeBinding.hpp"
#include "QFileBinding.hpp"
#include "QFileDeviceBinding.hpp"
#include "QIODeviceBinding.hpp"
#include "QObjectBinding.hpp"
#include "QStringBinding.hpp"
#include "QFileDeviceWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */


/* -------------------------------------------------------------------------------------------- */
    
    int QFileDeviceWrapper::atEnd1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        atEnd1CallArgs* args = (atEnd1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "atEnd") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 1, 1, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
                args->hasValidResult = args->rslt.test(L, -1);
            }
        }
        return 0;
    }


/* -------------------------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------------------------- */
    
    int QFileDeviceWrapper::fileName1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        fileName1CallArgs* args = (fileName1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "fileName") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 1, 1, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
                if (args->rsltPtr.test(L, -1)) {
                    args->rslt = *args->rsltPtr;
                    args->hasValidResult = true;
                } else {
                    args->hasValidResult = false;
                }
            }
        }
        return 0;
    }


/* -------------------------------------------------------------------------------------------- */
    
    int QFileDeviceWrapper::isSequential1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        isSequential1CallArgs* args = (isSequential1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "isSequential") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 1, 1, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
                args->hasValidResult = args->rslt.test(L, -1);
            }
        }
        return 0;
    }


/* -------------------------------------------------------------------------------------------- */
    
    int QFileDeviceWrapper::permissions1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        permissions1CallArgs* args = (permissions1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "permissions") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 1, 1, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
                args->hasValidResult = args->rslt.test(L, -1);
            }
        }
        return 0;
    }


/* -------------------------------------------------------------------------------------------- */
    
    int QFileDeviceWrapper::pos1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        pos1CallArgs* args = (pos1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "pos") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 1, 1, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
                args->hasValidResult = args->rslt.test(L, -1);
            }
        }
        return 0;
    }


/* -------------------------------------------------------------------------------------------- */
    
    int QFileDeviceWrapper::resize1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        resize1CallArgs* args = (resize1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "resize") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->arg2.push(L);
                args->wasCalled = true;
                int rc = lua_pcall(L, 2, 1, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
                args->hasValidResult = args->rslt.test(L, -1);
            }
        }
        return 0;
    }


/* -------------------------------------------------------------------------------------------- */
    
    int QFileDeviceWrapper::seek1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        seek1CallArgs* args = (seek1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "seek") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->arg2.push(L);
                args->wasCalled = true;
                int rc = lua_pcall(L, 2, 1, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
                args->hasValidResult = args->rslt.test(L, -1);
            }
        }
        return 0;
    }


/* -------------------------------------------------------------------------------------------- */
    
    int QFileDeviceWrapper::setPermissions1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        setPermissions1CallArgs* args = (setPermissions1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "setPermissions") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->arg2.push(L);
                args->wasCalled = true;
                int rc = lua_pcall(L, 2, 1, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
                args->hasValidResult = args->rslt.test(L, -1);
            }
        }
        return 0;
    }


/* -------------------------------------------------------------------------------------------- */
    
    int QFileDeviceWrapper::size1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        size1CallArgs* args = (size1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "size") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 1, 1, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
                args->hasValidResult = args->rslt.test(L, -1);
            }
        }
        return 0;
    }


/* -------------------------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------------------------- */

} // namespace lqtk

/* ============================================================================================ */

extern "C" {
    int lqtk_QIODevice_open(lua_State* L);
    int lqtk_QIODevice_read(lua_State* L);
    int lqtk_QIODevice_readAll(lua_State* L);
    int lqtk_QIODevice_readLine(lua_State* L);
    int lqtk_QIODevice_write(lua_State* L);
    int lqtk_QObject_children(lua_State* L);
    int lqtk_QObject_connect(lua_State* L);
    int lqtk_QObject_event(lua_State* L);
    int lqtk_QObject_objectName(lua_State* L);
    int lqtk_QObject_parent(lua_State* L);
    int lqtk_QObject_setObjectName(lua_State* L);
    int lqtk_QObject_setParent(lua_State* L);
}

/* ============================================================================================ */


struct lqtk_QFileDevice_atEnd_Args
{
    FromLua<QFileDevice*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileDevice_atEnd(lua_State* L)
{
    lqtk_QFileDevice_atEnd_Args  argValues;
    lqtk_QFileDevice_atEnd_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileDevice::atEnd();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileDevice", "atEnd", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileDevice_close_Args
{
    FromLua<QFileDevice*> arg_1_1;
};

extern "C" int lqtk_QFileDevice_close(lua_State* L)
{
    lqtk_QFileDevice_close_Args  argValues;
    lqtk_QFileDevice_close_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QFileDevice::close();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QFileDevice", "close", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileDevice_error_Args
{
    FromLua<QFileDevice*> arg_1_1;
    ToLua<QFileDevice::FileError> rslt_1;
};

extern "C" int lqtk_QFileDevice_error(lua_State* L)
{
    lqtk_QFileDevice_error_Args  argValues;
    lqtk_QFileDevice_error_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileDevice::error();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileDevice", "error", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileDevice_fileName_Args
{
    FromLua<QFileDevice*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QFileDevice_fileName_doLua(lua_State* L)
{
    lqtk_QFileDevice_fileName_Args* args = (lqtk_QFileDevice_fileName_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileDevice::fileName();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileDevice", "fileName", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFileDevice_fileName(lua_State* L)
{
    try {
        lqtk_QFileDevice_fileName_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFileDevice_fileName_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileDevice_fileTime_Args
{
    FromLua<QFileDevice*> arg_1_1;
    FromLua<QFileDevice::FileTime> arg_2_1;
    ToLua<QDateTime*> rslt_1;
};

extern "C" int lqtk_QFileDevice_fileTime(lua_State* L)
{
    lqtk_QFileDevice_fileTime_Args  argValues;
    lqtk_QFileDevice_fileTime_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileDevice::fileTime(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileDevice", "fileTime", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileDevice_flush_Args
{
    FromLua<QFileDevice*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileDevice_flush(lua_State* L)
{
    lqtk_QFileDevice_flush_Args  argValues;
    lqtk_QFileDevice_flush_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileDevice::flush();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileDevice", "flush", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileDevice_handle_Args
{
    FromLua<QFileDevice*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QFileDevice_handle(lua_State* L)
{
    lqtk_QFileDevice_handle_Args  argValues;
    lqtk_QFileDevice_handle_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileDevice::handle();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileDevice", "handle", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileDevice_isSequential_Args
{
    FromLua<QFileDevice*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileDevice_isSequential(lua_State* L)
{
    lqtk_QFileDevice_isSequential_Args  argValues;
    lqtk_QFileDevice_isSequential_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileDevice::isSequential();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileDevice", "isSequential", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileDevice_permissions_Args
{
    FromLua<QFileDevice*> arg_1_1;
    ToLua<QFileDevice::Permissions> rslt_1;
};

extern "C" int lqtk_QFileDevice_permissions(lua_State* L)
{
    lqtk_QFileDevice_permissions_Args  argValues;
    lqtk_QFileDevice_permissions_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileDevice::permissions();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileDevice", "permissions", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileDevice_pos_Args
{
    FromLua<QFileDevice*> arg_1_1;
    ToLua<qint64> rslt_1;
};

extern "C" int lqtk_QFileDevice_pos(lua_State* L)
{
    lqtk_QFileDevice_pos_Args  argValues;
    lqtk_QFileDevice_pos_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileDevice::pos();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileDevice", "pos", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileDevice_resize_Args
{
    FromLua<QFileDevice*> arg_1_1;
    FromLua<qint64> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileDevice_resize(lua_State* L)
{
    lqtk_QFileDevice_resize_Args  argValues;
    lqtk_QFileDevice_resize_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileDevice::resize(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileDevice", "resize", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileDevice_seek_Args
{
    FromLua<QFileDevice*> arg_1_1;
    FromLua<qint64> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileDevice_seek(lua_State* L)
{
    lqtk_QFileDevice_seek_Args  argValues;
    lqtk_QFileDevice_seek_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileDevice::seek(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileDevice", "seek", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileDevice_setFileTime_Args
{
    FromLua<QFileDevice*> arg_1_1;
    FromLua<QDateTime*> arg_2_1;
    FromLua<QFileDevice::FileTime> arg_3_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileDevice_setFileTime(lua_State* L)
{
    lqtk_QFileDevice_setFileTime_Args  argValues;
    lqtk_QFileDevice_setFileTime_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileDevice::setFileTime(*args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileDevice", "setFileTime", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileDevice_setPermissions_Args
{
    FromLua<QFileDevice*> arg_1_1;
    FromLua<QFileDevice::Permissions> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileDevice_setPermissions(lua_State* L)
{
    lqtk_QFileDevice_setPermissions_Args  argValues;
    lqtk_QFileDevice_setPermissions_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileDevice::setPermissions(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileDevice", "setPermissions", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileDevice_size_Args
{
    FromLua<QFileDevice*> arg_1_1;
    ToLua<qint64> rslt_1;
};

extern "C" int lqtk_QFileDevice_size(lua_State* L)
{
    lqtk_QFileDevice_size_Args  argValues;
    lqtk_QFileDevice_size_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileDevice::size();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileDevice", "size", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileDevice_unsetError_Args
{
    FromLua<QFileDevice*> arg_1_1;
};

extern "C" int lqtk_QFileDevice_unsetError(lua_State* L)
{
    lqtk_QFileDevice_unsetError_Args  argValues;
    lqtk_QFileDevice_unsetError_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QFileDevice::unsetError();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QFileDevice", "unsetError", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

static void* castFunction(const ClassInfo* targetClassInfo, void* objectPtr)
{
    if (objectPtr)
    {
        QFileDeviceBinding::QType* ptr = static_cast<QFileDeviceBinding::QType*>(objectPtr);
        if (targetClassInfo == &QFileDeviceBinding::classInfo) {
            return ptr;
        }
        if (targetClassInfo == &QIODeviceBinding::classInfo) {
            return static_cast<QIODeviceBinding::QType*>(ptr);
        }
        if (targetClassInfo == &QObjectBinding::classInfo) {
            return static_cast<QObjectBinding::QType*>(ptr);
        }
    }
    return NULL;
}

/* ============================================================================================ */

ObjectUdata* QFileDeviceBinding::pushObject(lua_State* L, QFileDevice* objPtr, OwnerType ownerType)
{
        QFile* ptr1 = dynamic_cast<QFile*>(objPtr);
        if (ptr1) {
            return QFileBinding::pushObject(L, ptr1, ownerType);
        }
    StateGuard::pushWeakUdataRef(L, objPtr);                             // -> udata?
    ObjectUdata* udata = ObjectUdata::testArg(L, -1);  
                                                                         // -> udata?
    if (!udata || udata->classInfo != &classInfo  
               || udata->getObjectPtr() != objPtr)
    {                                                                    // -> xxx
        lua_pop(L, 1);                                                   // -> 
        bool hasUserValue = false;
        if (StateGuard::pushWeakUserValue(L, objPtr) == LUA_TTABLE) {    // -> uval?
            hasUserValue = true;
        }
        udata = ObjectUdata::pushNew<QFileDevice>(L, hasUserValue);     // -> uval?, udata
        udata->setQObjectPtr(L, -1, objPtr, ownerType);
        if (hasUserValue) {
            udata->setUserValue(L, -1, -2);                              // -> uval,  udata, 
        }                                                                // -> uval?, udata
        lua_remove(L, -2);                                               // -> udata
    }                                                                    // -> udata
    return udata;
}

/* ============================================================================================ */

static const Member members[] =
{
    { "AbortError",             Member::INTEGER,              (void*) QFileDevice::AbortError },
    { "AutoCloseHandle",        Member::INTEGER,              (void*) QFileDevice::AutoCloseHandle },
    { "CopyError",              Member::INTEGER,              (void*) QFileDevice::CopyError },
    { "DontCloseHandle",        Member::INTEGER,              (void*) QFileDevice::DontCloseHandle },
    { "ExeGroup",               Member::INTEGER,              (void*) QFileDevice::ExeGroup },
    { "ExeOther",               Member::INTEGER,              (void*) QFileDevice::ExeOther },
    { "ExeOwner",               Member::INTEGER,              (void*) QFileDevice::ExeOwner },
    { "ExeUser",                Member::INTEGER,              (void*) QFileDevice::ExeUser },
    { "FatalError",             Member::INTEGER,              (void*) QFileDevice::FatalError },
    { "FileAccessTime",         Member::INTEGER,              (void*) QFileDevice::FileAccessTime },
    { "FileBirthTime",          Member::INTEGER,              (void*) QFileDevice::FileBirthTime },
    { "FileMetadataChangeTime", Member::INTEGER,              (void*) QFileDevice::FileMetadataChangeTime },
    { "FileModificationTime",   Member::INTEGER,              (void*) QFileDevice::FileModificationTime },
    { "MapPrivateOption",       Member::INTEGER,              (void*) QFileDevice::MapPrivateOption },
    { "NoError",                Member::INTEGER,              (void*) QFileDevice::NoError },
    { "NoOptions",              Member::INTEGER,              (void*) QFileDevice::NoOptions },
    { "OpenError",              Member::INTEGER,              (void*) QFileDevice::OpenError },
    { "PermissionsError",       Member::INTEGER,              (void*) QFileDevice::PermissionsError },
    { "PositionError",          Member::INTEGER,              (void*) QFileDevice::PositionError },
    { "ReadError",              Member::INTEGER,              (void*) QFileDevice::ReadError },
    { "ReadGroup",              Member::INTEGER,              (void*) QFileDevice::ReadGroup },
    { "ReadOther",              Member::INTEGER,              (void*) QFileDevice::ReadOther },
    { "ReadOwner",              Member::INTEGER,              (void*) QFileDevice::ReadOwner },
    { "ReadUser",               Member::INTEGER,              (void*) QFileDevice::ReadUser },
    { "RemoveError",            Member::INTEGER,              (void*) QFileDevice::RemoveError },
    { "RenameError",            Member::INTEGER,              (void*) QFileDevice::RenameError },
    { "ResizeError",            Member::INTEGER,              (void*) QFileDevice::ResizeError },
    { "ResourceError",          Member::INTEGER,              (void*) QFileDevice::ResourceError },
    { "TimeOutError",           Member::INTEGER,              (void*) QFileDevice::TimeOutError },
    { "UnspecifiedError",       Member::INTEGER,              (void*) QFileDevice::UnspecifiedError },
    { "WriteError",             Member::INTEGER,              (void*) QFileDevice::WriteError },
    { "WriteGroup",             Member::INTEGER,              (void*) QFileDevice::WriteGroup },
    { "WriteOther",             Member::INTEGER,              (void*) QFileDevice::WriteOther },
    { "WriteOwner",             Member::INTEGER,              (void*) QFileDevice::WriteOwner },
    { "WriteUser",              Member::INTEGER,              (void*) QFileDevice::WriteUser },
    { "atEnd",                  Member::VIRTUAL_FUNCTION,     (void*) lqtk_QFileDevice_atEnd },
    { "children",               Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_children },
    { "close",                  Member::VIRTUAL_FUNCTION,     (void*) lqtk_QFileDevice_close },
    { "connect",                Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_connect },
    { "error",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QFileDevice_error },
    { "event",                  Member::VIRTUAL_FUNCTION,     (void*) lqtk_QObject_event },
    { "fileName",               Member::VIRTUAL_FUNCTION,     (void*) lqtk_QFileDevice_fileName },
    { "fileTime",               Member::NORMAL_FUNCTION,      (void*) lqtk_QFileDevice_fileTime },
    { "flush",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QFileDevice_flush },
    { "handle",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QFileDevice_handle },
    { "isSequential",           Member::VIRTUAL_FUNCTION,     (void*) lqtk_QFileDevice_isSequential },
    { "objectName",             Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "open",                   Member::VIRTUAL_FUNCTION,     (void*) lqtk_QIODevice_open },
    { "parent",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "permissions",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QFileDevice_permissions },
    { "pos",                    Member::VIRTUAL_FUNCTION,     (void*) lqtk_QFileDevice_pos },
    { "read",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QIODevice_read },
    { "readAll",                Member::NORMAL_FUNCTION,      (void*) lqtk_QIODevice_readAll },
    { "readLine",               Member::NORMAL_FUNCTION,      (void*) lqtk_QIODevice_readLine },
    { "resize",                 Member::VIRTUAL_FUNCTION,     (void*) lqtk_QFileDevice_resize },
    { "seek",                   Member::VIRTUAL_FUNCTION,     (void*) lqtk_QFileDevice_seek },
    { "setFileTime",            Member::NORMAL_FUNCTION,      (void*) lqtk_QFileDevice_setFileTime },
    { "setObjectName",          Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",              Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { "setPermissions",         Member::VIRTUAL_FUNCTION,     (void*) lqtk_QFileDevice_setPermissions },
    { "size",                   Member::VIRTUAL_FUNCTION,     (void*) lqtk_QFileDevice_size },
    { "unsetError",             Member::NORMAL_FUNCTION,      (void*) lqtk_QFileDevice_unsetError },
    { "write",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QIODevice_write },
    { NULL,                     Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QFileDeviceBinding::classInfo = 
{
    "QFileDevice",

    &QIODeviceBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    NULL, // constructFunc
    NULL, // newFunc
    castFunction,
    NULL, // deleteFunction
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    63,
    members
};

/* ============================================================================================ */

int QFileDeviceBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
