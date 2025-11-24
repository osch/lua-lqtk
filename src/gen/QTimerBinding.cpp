// Type: QTimer
// Base: QObject

/* ============================================================================================ */

#include <QEvent>
#include <QObject>
#include <QTimer>
#include <QTimerEvent>
#include <Qt>

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
#include "QEventBinding.hpp"
#include "QObjectBinding.hpp"
#include "QTimerBinding.hpp"
#include "QTimerEventBinding.hpp"
#include "QtBinding.hpp"
#include "QObjectWrapper.hpp"
#include "QTimerWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QTimerWrapper::QTimerWrapper()
        : QTimer(),
          lqtk_stateGuard(nullptr)
    {}
    QTimerWrapper::QTimerWrapper(
                   QObject* arg1) 
        : QTimer(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QTimerWrapper::lqtk_destruct(lua_State* L) {
        QTimer* objPtr = (QTimer*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QTimerWrapper::~QTimerWrapper() {
        trace::printf("Deleting lqtk::QTimerWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->L;
            if (L) {
                QTimer* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QTimer");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

    void QTimerWrapper::lqtk_QTimer_timerEvent(
                   QTimerEvent* arg1) 
    {
        return QTimer::timerEvent(
                   arg1); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QTimerWrapper::timerEvent1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        timerEvent1CallArgs* args = (timerEvent1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "timerEvent") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                int memberIdx = lua_gettop(L);
                ObjectUdata* temp2 = args->arg2.push(L, NOT_OWNER);
                int tempIdx2 = lua_gettop(L);
                lua_pushvalue(L, memberIdx);
                args->arg1.push(L, NOT_OWNER);
                lua_pushvalue(L, tempIdx2);
                args->wasCalled = true;
                int rc = lua_pcall(L, 2, 0, ehIndex);
                temp2->invalidate(L, tempIdx2);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
            }
        }
        return 0;
    }

    void QTimerWrapper::timerEvent(
                   QTimerEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            timerEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, timerEvent1_doLua, &args, "QTimer", "timerEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QTimer::timerEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QTimerWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QObjectWrapper::event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QObjectWrapper::event1_doLua, &args, "QTimer", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QTimer", "event", msg);
                }
            }
        }
        return QTimer::event(
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


struct lqtk_QTimer_isActive_Args
{
    FromLua<QTimer*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QTimer_isActive(lua_State* L)
{
    lqtk_QTimer_isActive_Args  argValues;
    lqtk_QTimer_isActive_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTimer::isActive();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimer", "isActive", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimer_isSingleShot_Args
{
    FromLua<QTimer*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QTimer_isSingleShot(lua_State* L)
{
    lqtk_QTimer_isSingleShot_Args  argValues;
    lqtk_QTimer_isSingleShot_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTimer::isSingleShot();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimer", "isSingleShot", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimer_remainingTime_Args
{
    FromLua<QTimer*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QTimer_remainingTime(lua_State* L)
{
    lqtk_QTimer_remainingTime_Args  argValues;
    lqtk_QTimer_remainingTime_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTimer::remainingTime();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimer", "remainingTime", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimer_setInterval_Args
{
    FromLua<QTimer*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QTimer_setInterval(lua_State* L)
{
    lqtk_QTimer_setInterval_Args  argValues;
    lqtk_QTimer_setInterval_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QTimer::setInterval(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QTimer", "setInterval", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimer_setSingleShot_Args
{
    FromLua<QTimer*> arg_1_1;
    FromLua<bool> arg_2_1;
};

extern "C" int lqtk_QTimer_setSingleShot(lua_State* L)
{
    lqtk_QTimer_setSingleShot_Args  argValues;
    lqtk_QTimer_setSingleShot_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QTimer::setSingleShot(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QTimer", "setSingleShot", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimer_setTimerType_Args
{
    FromLua<QTimer*> arg_1_1;
    FromLua<Qt::TimerType> arg_2_1;
};

extern "C" int lqtk_QTimer_setTimerType(lua_State* L)
{
    lqtk_QTimer_setTimerType_Args  argValues;
    lqtk_QTimer_setTimerType_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QTimer::setTimerType(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QTimer", "setTimerType", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimer_start_Args
{
    FromLua<QTimer*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QTimer_start(lua_State* L)
{
    lqtk_QTimer_start_Args  argValues;
    lqtk_QTimer_start_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QTimer::start();
                return 0;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QTimer::start(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QTimer", "start", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimer_stop_Args
{
    FromLua<QTimer*> arg_1_1;
};

extern "C" int lqtk_QTimer_stop(lua_State* L)
{
    lqtk_QTimer_stop_Args  argValues;
    lqtk_QTimer_stop_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QTimer::stop();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QTimer", "stop", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimer_timerEvent_Args
{
    FromLua<QTimer*> arg_1_1;
    FromLua<QTimerEvent*> arg_2_1;
};

extern "C" int lqtk_QTimer_timerEvent(lua_State* L)
{
    lqtk_QTimer_timerEvent_Args  argValues;
    lqtk_QTimer_timerEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QTimerExportWrapper* wrapper = dynamic_cast<QTimerExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'timerEvent' is protected in QTimer");
                }
                    wrapper->lqtk_QTimer_timerEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QTimer", "timerEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimer_timerId_Args
{
    FromLua<QTimer*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QTimer_timerId(lua_State* L)
{
    lqtk_QTimer_timerId_Args  argValues;
    lqtk_QTimer_timerId_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTimer::timerId();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimer", "timerId", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimer_timerType_Args
{
    FromLua<QTimer*> arg_1_1;
    ToLua<Qt::TimerType> rslt_1;
};

extern "C" int lqtk_QTimer_timerType(lua_State* L)
{
    lqtk_QTimer_timerType_Args  argValues;
    lqtk_QTimer_timerType_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QTimer::timerType();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimer", "timerType", nargs, "1");
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
        QTimerBinding::QType* ptr = static_cast<QTimerBinding::QType*>(objectPtr);
        if (targetClassInfo == &QTimerBinding::classInfo) {
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
        QTimer* ptr = (QTimer*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QTimer* obj = (QTimer*) objectPtr;
        
        QTimerWrapper* wrapper = dynamic_cast<QTimerWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */


struct lqtk_QTimer_new_Args
{
    FromLua<QObject*> arg_1_1;
    ToLua<QTimer*> rslt_1;
};

extern "C" int lqtk_QTimer_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QTimer_new_Args  argValues;
    lqtk_QTimer_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QTimerBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QTimer> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QTimerWrapper* rslt = 
                    new QTimerWrapper();
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                QTimerWrapper* rslt = 
                    new QTimerWrapper(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QTimer", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QTimer", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QTimer_new(lua_State* L)
{
    return lqtk_QTimer_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QTimerBinding::pushObject(lua_State* L, QTimer* objPtr, OwnerType ownerType)
{
    QTimerWrapper* wrapper = dynamic_cast<QTimerWrapper*>(objPtr);
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
        udata = ObjectUdata::pushNew<QTimer>(L, hasUserValue);     // -> uval?, udata
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
    { "event",         Member::VIRTUAL_FUNCTION,     (void*) lqtk_QObject_event },
    { "isActive",      Member::NORMAL_FUNCTION,      (void*) lqtk_QTimer_isActive },
    { "isSingleShot",  Member::NORMAL_FUNCTION,      (void*) lqtk_QTimer_isSingleShot },
    { "objectName",    Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "parent",        Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "remainingTime", Member::NORMAL_FUNCTION,      (void*) lqtk_QTimer_remainingTime },
    { "setInterval",   Member::NORMAL_FUNCTION,      (void*) lqtk_QTimer_setInterval },
    { "setObjectName", Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",     Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { "setSingleShot", Member::NORMAL_FUNCTION,      (void*) lqtk_QTimer_setSingleShot },
    { "setTimerType",  Member::NORMAL_FUNCTION,      (void*) lqtk_QTimer_setTimerType },
    { "start",         Member::NORMAL_FUNCTION,      (void*) lqtk_QTimer_start },
    { "stop",          Member::NORMAL_FUNCTION,      (void*) lqtk_QTimer_stop },
    { "timerEvent",    Member::VIRTUAL_FUNCTION,     (void*) lqtk_QTimer_timerEvent },
    { "timerId",       Member::NORMAL_FUNCTION,      (void*) lqtk_QTimer_timerId },
    { "timerType",     Member::NORMAL_FUNCTION,      (void*) lqtk_QTimer_timerType },
    { NULL,            Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QTimerBinding::classInfo = 
{
    "QTimer",

    &QObjectBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    lqtk_QTimer_constructor,
    lqtk_QTimer_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    18,
    members
};

/* ============================================================================================ */

int QTimerBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
