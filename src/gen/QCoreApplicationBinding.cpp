// Type: QCoreApplication
// Base: QObject

/* ============================================================================================ */

#include <QCoreApplication>
#include <QEvent>
#include <QEventLoop>
#include <QGuiApplication>
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
#include "QCoreApplicationBinding.hpp"
#include "QEventBinding.hpp"
#include "QEventLoopBinding.hpp"
#include "QGuiApplicationBinding.hpp"
#include "QObjectBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


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


struct lqtk_QCoreApplication_instance_Args
{
    ToLua<QCoreApplication*> rslt_1;
};

extern "C" int lqtk_QCoreApplication_instance(lua_State* L)
{
    lqtk_QCoreApplication_instance_Args  argValues;
    lqtk_QCoreApplication_instance_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 =
                    QCoreApplication::instance();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QCoreApplication", "instance", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCoreApplication_processEvents_Args
{
    FromLua<QEventLoop::ProcessEventsFlags> arg_1_1;
};

extern "C" int lqtk_QCoreApplication_processEvents(lua_State* L)
{
    lqtk_QCoreApplication_processEvents_Args  argValues;
    lqtk_QCoreApplication_processEvents_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                    QCoreApplication::processEvents();
                return 0;
            }
        } while (false); }
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    QCoreApplication::processEvents(args->arg_1_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QCoreApplication", "processEvents", nargs, "0,1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCoreApplication_sendPostedEvents_Args
{
    FromLua<QObject*> arg_1_1;
    FromLua<QEvent::Type> arg_2_1;
};

extern "C" int lqtk_QCoreApplication_sendPostedEvents(lua_State* L)
{
    lqtk_QCoreApplication_sendPostedEvents_Args  argValues;
    lqtk_QCoreApplication_sendPostedEvents_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                    QCoreApplication::sendPostedEvents();
                return 0;
            }
        } while (false); }
        if (nargs == 1) { do {
          if (!lua_isnil(L, argOffs+1)) {
            args->arg_1_1.check(L, argOffs+1);
          }
            {
                    QCoreApplication::sendPostedEvents(args->arg_1_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 2) { do {
          if (!lua_isnil(L, argOffs+1)) {
            args->arg_1_1.check(L, argOffs+1);
          }
            args->arg_2_1.check(L, argOffs+2);
            {
                    QCoreApplication::sendPostedEvents(args->arg_1_1.getValue(), args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QCoreApplication", "sendPostedEvents", nargs, "0,1,2");
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
        QCoreApplicationBinding::QType* ptr = static_cast<QCoreApplicationBinding::QType*>(objectPtr);
        if (targetClassInfo == &QCoreApplicationBinding::classInfo) {
            return ptr;
        }
        if (targetClassInfo == &QObjectBinding::classInfo) {
            return static_cast<QObjectBinding::QType*>(ptr);
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QCoreApplication* ptr = (QCoreApplication*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

ObjectUdata* QCoreApplicationBinding::pushObject(lua_State* L, QCoreApplication* objPtr, OwnerType ownerType)
{
        QGuiApplication* ptr1 = dynamic_cast<QGuiApplication*>(objPtr);
        if (ptr1) {
            return QGuiApplicationBinding::pushObject(L, ptr1, ownerType);
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
        udata = ObjectUdata::pushNew<QCoreApplication>(L, hasUserValue);     // -> uval?, udata
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
    { "children",         Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_children },
    { "connect",          Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_connect },
    { "event",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QObject_event },
    { "instance",         Member::NORMAL_FUNCTION,      (void*) lqtk_QCoreApplication_instance },
    { "objectName",       Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "parent",           Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "processEvents",    Member::NORMAL_FUNCTION,      (void*) lqtk_QCoreApplication_processEvents },
    { "sendPostedEvents", Member::NORMAL_FUNCTION,      (void*) lqtk_QCoreApplication_sendPostedEvents },
    { "setObjectName",    Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",        Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { NULL,               Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QCoreApplicationBinding::classInfo = 
{
    "QCoreApplication",

    &QObjectBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    NULL, // constructFunc
    NULL, // newFunc
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    10,
    members
};

/* ============================================================================================ */

int QCoreApplicationBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
