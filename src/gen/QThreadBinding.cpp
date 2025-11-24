// Type: QThread
// Base: QObject

/* ============================================================================================ */

#include <QObject>
#include <QThread>

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
#include "QObjectBinding.hpp"
#include "QThreadBinding.hpp"

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


struct lqtk_QThread_currentThread_Args
{
    ToLua<QThread*> rslt_1;
};

extern "C" int lqtk_QThread_currentThread(lua_State* L)
{
    lqtk_QThread_currentThread_Args  argValues;
    lqtk_QThread_currentThread_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 =
                    QThread::currentThread();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QThread", "currentThread", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QThread_isMainThread_Args
{
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QThread_isMainThread(lua_State* L)
{
    lqtk_QThread_isMainThread_Args  argValues;
    lqtk_QThread_isMainThread_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QThread::isMainThread();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QThread", "isMainThread", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QThread_msleep_Args
{
    FromLua<int> arg_1_1;
};

extern "C" int lqtk_QThread_msleep(lua_State* L)
{
    lqtk_QThread_msleep_Args  argValues;
    lqtk_QThread_msleep_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    QThread::msleep(args->arg_1_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QThread", "msleep", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QThread_loopLevel_Args
{
    FromLua<QThread*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QThread_loopLevel(lua_State* L)
{
    lqtk_QThread_loopLevel_Args  argValues;
    lqtk_QThread_loopLevel_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QThread::loopLevel();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QThread", "loopLevel", nargs, "1");
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
        QThreadBinding::QType* ptr = static_cast<QThreadBinding::QType*>(objectPtr);
        if (targetClassInfo == &QThreadBinding::classInfo) {
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
        QThread* ptr = (QThread*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

ObjectUdata* QThreadBinding::pushObject(lua_State* L, QThread* objPtr, OwnerType ownerType)
{
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
        udata = ObjectUdata::pushNew<QThread>(L, hasUserValue);     // -> uval?, udata
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
    { "connect",       Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_connect },
    { "currentThread", Member::NORMAL_FUNCTION,      (void*) lqtk_QThread_currentThread },
    { "event",         Member::VIRTUAL_FUNCTION,     (void*) lqtk_QObject_event },
    { "isMainThread",  Member::NORMAL_FUNCTION,      (void*) lqtk_QThread_isMainThread },
    { "loopLevel",     Member::NORMAL_FUNCTION,      (void*) lqtk_QThread_loopLevel },
    { "msleep",        Member::NORMAL_FUNCTION,      (void*) lqtk_QThread_msleep },
    { "objectName",    Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "parent",        Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "setObjectName", Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",     Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { NULL,            Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QThreadBinding::classInfo = 
{
    "QThread",

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
    11,
    members
};

/* ============================================================================================ */

int QThreadBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
