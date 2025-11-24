// Type: QEventLoop
// Base: QObject

/* ============================================================================================ */

#include <QDeadlineTimer>
#include <QEvent>
#include <QEventLoop>
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
#include "QDeadlineTimerBinding.hpp"
#include "QEventBinding.hpp"
#include "QEventLoopBinding.hpp"
#include "QObjectBinding.hpp"
#include "QObjectWrapper.hpp"
#include "QEventLoopWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QEventLoopWrapper::QEventLoopWrapper()
        : QEventLoop(),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QEventLoopWrapper::lqtk_destruct(lua_State* L) {
        QEventLoop* objPtr = (QEventLoop*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QEventLoopWrapper::~QEventLoopWrapper() {
        trace::printf("Deleting lqtk::QEventLoopWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->L;
            if (L) {
                QEventLoop* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QEventLoop");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

/* -------------------------------------------------------------------------------------------- */
    bool QEventLoopWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QObjectWrapper::event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QObjectWrapper::event1_doLua, &args, "QEventLoop", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QEventLoop", "event", msg);
                }
            }
        }
        return QEventLoop::event(
                    arg2); 
    }

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


struct lqtk_QEventLoop_exec_Args
{
    FromLua<QEventLoop*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QEventLoop_exec(lua_State* L)
{
    lqtk_QEventLoop_exec_Args  argValues;
    lqtk_QEventLoop_exec_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QEventLoop::exec();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QEventLoop", "exec", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QEventLoop_processEvents_Args
{
    FromLua<QEventLoop*> arg_1_1;
    FromLua<QEventLoop::ProcessEventsFlags> arg_2_1;
    FromLua<QDeadlineTimer*> arg_3_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QEventLoop_processEvents(lua_State* L)
{
    lqtk_QEventLoop_processEvents_Args  argValues;
    lqtk_QEventLoop_processEvents_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QEventLoop::processEvents();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QEventLoop::processEvents(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QEventLoop::processEvents(args->arg_2_1.getValue(), *args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QEventLoop", "processEvents", nargs, "1,2,3");
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
        QEventLoopBinding::QType* ptr = static_cast<QEventLoopBinding::QType*>(objectPtr);
        if (targetClassInfo == &QEventLoopBinding::classInfo) {
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
        QEventLoop* ptr = (QEventLoop*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QEventLoop* obj = (QEventLoop*) objectPtr;
        
        QEventLoopWrapper* wrapper = dynamic_cast<QEventLoopWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */


struct lqtk_QEventLoop_new_Args
{
    ToLua<QEventLoop*> rslt_1;
};

extern "C" int lqtk_QEventLoop_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QEventLoop_new_Args  argValues;
    lqtk_QEventLoop_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QEventLoopBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QEventLoop> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QEventLoopWrapper* rslt = 
                    new QEventLoopWrapper();
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QEventLoop", "new", nargs, "1");
        } else {
            return util::argCountError(L, "QEventLoop", nullptr, nargs, "0");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QEventLoop_new(lua_State* L)
{
    return lqtk_QEventLoop_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QEventLoopBinding::pushObject(lua_State* L, QEventLoop* objPtr, OwnerType ownerType)
{
    QEventLoopWrapper* wrapper = dynamic_cast<QEventLoopWrapper*>(objPtr);
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
        udata = ObjectUdata::pushNew<QEventLoop>(L, hasUserValue);     // -> uval?, udata
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
    { "AllEvents",              Member::INTEGER,              (void*) QEventLoop::AllEvents },
    { "ExcludeSocketNotifiers", Member::INTEGER,              (void*) QEventLoop::ExcludeSocketNotifiers },
    { "ExcludeUserInputEvents", Member::INTEGER,              (void*) QEventLoop::ExcludeUserInputEvents },
    { "WaitForMoreEvents",      Member::INTEGER,              (void*) QEventLoop::WaitForMoreEvents },
    { "children",               Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_children },
    { "connect",                Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_connect },
    { "event",                  Member::VIRTUAL_FUNCTION,     (void*) lqtk_QObject_event },
    { "exec",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QEventLoop_exec },
    { "objectName",             Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "parent",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "processEvents",          Member::NORMAL_FUNCTION,      (void*) lqtk_QEventLoop_processEvents },
    { "setObjectName",          Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",              Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { NULL,                     Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QEventLoopBinding::classInfo = 
{
    "QEventLoop",

    &QObjectBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    lqtk_QEventLoop_constructor,
    lqtk_QEventLoop_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    13,
    members
};

/* ============================================================================================ */

int QEventLoopBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
