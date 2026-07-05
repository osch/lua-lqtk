// Type: QIODevice
// Base: QObject

/* ============================================================================================ */

#include <QByteArray>
#include <QFileDevice>
#include <QIODevice>
#include <QIODeviceBase>
#include <QObject>

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
#include "QByteArrayBinding.hpp"
#include "QFileDeviceBinding.hpp"
#include "QIODeviceBinding.hpp"
#include "QIODeviceBaseBinding.hpp"
#include "QObjectBinding.hpp"
#include "QIODeviceWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */


/* -------------------------------------------------------------------------------------------- */
    
    int QIODeviceWrapper::close1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        close1CallArgs* args = (close1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "close") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 1, 0, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
            }
        }
        return 0;
    }


/* -------------------------------------------------------------------------------------------- */
    
    int QIODeviceWrapper::open1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        open1CallArgs* args = (open1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "open") != LUA_TNIL) {        // -> uval, eh, member?
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

} // namespace lqtk

/* ============================================================================================ */

extern "C" {
    int lqtk_QObject_children(lua_State* L);
    int lqtk_QObject_connect(lua_State* L);
    int lqtk_QObject_event(lua_State* L);
    int lqtk_QObject_objectName(lua_State* L);
    int lqtk_QObject_parent(lua_State* L);
    int lqtk_QObject_setObjectName(lua_State* L);
    int lqtk_QObject_setParent(lua_State* L);
}

/* ============================================================================================ */


struct lqtk_QIODevice_close_Args
{
    FromLua<QIODevice*> arg_1_1;
};

extern "C" int lqtk_QIODevice_close(lua_State* L)
{
    lqtk_QIODevice_close_Args  argValues;
    lqtk_QIODevice_close_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QIODevice::close();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QIODevice", "close", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QIODevice_open_Args
{
    FromLua<QIODevice*> arg_1_1;
    FromLua<QIODeviceBase::OpenMode> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QIODevice_open(lua_State* L)
{
    lqtk_QIODevice_open_Args  argValues;
    lqtk_QIODevice_open_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QIODevice::open(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QIODevice", "open", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QIODevice_read_Args
{
    FromLua<QIODevice*> arg_1_1;
    FromLua<qint64> arg_2_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QIODevice_read_doLua(lua_State* L)
{
    lqtk_QIODevice_read_Args* args = (lqtk_QIODevice_read_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QIODevice::read(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QIODevice", "read", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QIODevice_read(lua_State* L)
{
    try {
        lqtk_QIODevice_read_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QIODevice_read_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QIODevice_readAll_Args
{
    FromLua<QIODevice*> arg_1_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QIODevice_readAll_doLua(lua_State* L)
{
    lqtk_QIODevice_readAll_Args* args = (lqtk_QIODevice_readAll_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QIODevice::readAll();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QIODevice", "readAll", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QIODevice_readAll(lua_State* L)
{
    try {
        lqtk_QIODevice_readAll_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QIODevice_readAll_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QIODevice_readLine_Args
{
    FromLua<QIODevice*> arg_1_1;
    FromLua<qint64> arg_2_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QIODevice_readLine_doLua(lua_State* L)
{
    lqtk_QIODevice_readLine_Args* args = (lqtk_QIODevice_readLine_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QIODevice::readLine();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QIODevice::readLine(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QIODevice", "readLine", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QIODevice_readLine(lua_State* L)
{
    try {
        lqtk_QIODevice_readLine_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QIODevice_readLine_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QIODevice_write_Args
{
    FromLua<QIODevice*> arg_1_1;
    FromLua<QByteArray*> arg_2_1;
    ToLua<qint64> rslt_1;
};

static int lqtk_QIODevice_write_doLua(lua_State* L)
{
    lqtk_QIODevice_write_Args* args = (lqtk_QIODevice_write_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QIODevice::write(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QIODevice", "write", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QIODevice_write(lua_State* L)
{
    try {
        lqtk_QIODevice_write_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QIODevice_write_doLua, &args);
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
        QIODeviceBinding::QType* ptr = static_cast<QIODeviceBinding::QType*>(objectPtr);
        if (targetClassInfo == &QIODeviceBinding::classInfo) {
            return ptr;
        }
        if (targetClassInfo == &QObjectBinding::classInfo) {
            return static_cast<QObjectBinding::QType*>(ptr);
        }
    }
    return NULL;
}

/* ============================================================================================ */

ObjectUdata* QIODeviceBinding::pushObject(lua_State* L, QIODevice* objPtr, OwnerType ownerType)
{
        QFileDevice* ptr1 = dynamic_cast<QFileDevice*>(objPtr);
        if (ptr1) {
            return QFileDeviceBinding::pushObject(L, ptr1, ownerType);
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
        udata = ObjectUdata::pushNew<QIODevice>(L, hasUserValue);     // -> uval?, udata
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
    { "children",      Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_children },
    { "close",         Member::VIRTUAL_FUNCTION,     (void*) lqtk_QIODevice_close },
    { "connect",       Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_connect },
    { "event",         Member::VIRTUAL_FUNCTION,     (void*) lqtk_QObject_event },
    { "objectName",    Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "open",          Member::VIRTUAL_FUNCTION,     (void*) lqtk_QIODevice_open },
    { "parent",        Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "read",          Member::NORMAL_FUNCTION,      (void*) lqtk_QIODevice_read },
    { "readAll",       Member::NORMAL_FUNCTION,      (void*) lqtk_QIODevice_readAll },
    { "readLine",      Member::NORMAL_FUNCTION,      (void*) lqtk_QIODevice_readLine },
    { "setObjectName", Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",     Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { "write",         Member::NORMAL_FUNCTION,      (void*) lqtk_QIODevice_write },
    { NULL,            Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QIODeviceBinding::classInfo = 
{
    "QIODevice",

    &QObjectBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    NULL, // constructFunc
    NULL, // newFunc
    castFunction,
    NULL, // deleteFunction
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    13,
    members
};

/* ============================================================================================ */

int QIODeviceBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
