// Type: QApplication
// Base: QGuiApplication

/* ============================================================================================ */

#include <QApplication>
#include <QCoreApplication>
#include <QEvent>
#include <QGuiApplication>
#include <QObject>
#include <QWidget>

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
#include "QApplicationBinding.hpp"
#include "QCoreApplicationBinding.hpp"
#include "QEventBinding.hpp"
#include "QGuiApplicationBinding.hpp"
#include "QObjectBinding.hpp"
#include "QWidgetBinding.hpp"
#include "QApplicationWrapperBase.hpp"
#include "QObjectWrapper.hpp"
#include "QApplicationWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QApplicationWrapper::QApplicationWrapper(
                   int arg1, 
                   char** arg2) 
        : QApplicationWrapperBase(
                   arg1,
                   arg2),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QApplicationWrapper::lqtk_destruct(lua_State* L) {
        QApplication* objPtr = (QApplication*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QApplicationWrapper::~QApplicationWrapper() {
        trace::printf("Deleting lqtk::QApplicationWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->L;
            if (L) {
                QApplication* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QApplication");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

    bool QApplicationWrapper::lqtk_QApplication_event(
                   QEvent* arg1) 
    {
        return QApplication::event(
                   arg1); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QApplicationWrapper::event1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        event1CallArgs* args = (event1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "event") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->arg2.push(L, NOT_OWNER);
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

    bool QApplicationWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, event1_doLua, &args, "QApplication", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QApplication", "event", msg);
                }
            }
        }
        return QApplicationWrapperBase::event(
                    arg2); 
    }

} // namespace lqtk

/* ============================================================================================ */

extern "C" {
    int lqtk_QCoreApplication_instance(lua_State* L);
    int lqtk_QCoreApplication_processEvents(lua_State* L);
    int lqtk_QCoreApplication_sendPostedEvents(lua_State* L);
    int lqtk_QObject_children(lua_State* L);
    int lqtk_QObject_connect(lua_State* L);
    int lqtk_QObject_objectName(lua_State* L);
    int lqtk_QObject_parent(lua_State* L);
    int lqtk_QObject_setObjectName(lua_State* L);
    int lqtk_QObject_setParent(lua_State* L);
}

/* ============================================================================================ */


struct lqtk_QApplication_exec_Args
{
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QApplication_exec(lua_State* L)
{
    lqtk_QApplication_exec_Args  argValues;
    lqtk_QApplication_exec_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QApplication::exec();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QApplication", "exec", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QApplication_exit_Args
{
    FromLua<int> arg_1_1;
};

extern "C" int lqtk_QApplication_exit(lua_State* L)
{
    lqtk_QApplication_exit_Args  argValues;
    lqtk_QApplication_exit_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                    QApplication::exit();
                return 0;
            }
        } while (false); }
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    QApplication::exit(args->arg_1_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QApplication", "exit", nargs, "0,1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QApplication_topLevelWidgets_Args
{
    ToLua<QList<QWidget*>> rslt_1;
};

static int lqtk_QApplication_topLevelWidgets_doLua(lua_State* L)
{
    lqtk_QApplication_topLevelWidgets_Args* args = (lqtk_QApplication_topLevelWidgets_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QApplication::topLevelWidgets();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QApplication", "topLevelWidgets", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QApplication_topLevelWidgets(lua_State* L)
{
    try {
        lqtk_QApplication_topLevelWidgets_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QApplication_topLevelWidgets_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QApplication_event_Args
{
    FromLua<QApplication*> arg_1_1;
    FromLua<QEvent*> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QApplication_event(lua_State* L)
{
    lqtk_QApplication_event_Args  argValues;
    lqtk_QApplication_event_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QApplicationExportWrapper* wrapper = dynamic_cast<QApplicationExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'event' is protected in QApplication");
                }
                args->rslt_1 = 
                    wrapper->lqtk_QApplication_event(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QApplication", "event", nargs, "2");
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
        QApplicationBinding::QType* ptr = static_cast<QApplicationBinding::QType*>(objectPtr);
        if (targetClassInfo == &QApplicationBinding::classInfo) {
            return ptr;
        }
        if (targetClassInfo == &QGuiApplicationBinding::classInfo) {
            return static_cast<QGuiApplicationBinding::QType*>(ptr);
        }
        if (targetClassInfo == &QCoreApplicationBinding::classInfo) {
            return static_cast<QCoreApplicationBinding::QType*>(ptr);
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
        QApplication* ptr = (QApplication*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QApplication* obj = (QApplication*) objectPtr;
        
        QApplicationWrapper* wrapper = dynamic_cast<QApplicationWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */

extern "C" int lqtk_QApplication_constructor(lua_State* L, bool explicitNew);

/* ============================================================================================ */

extern "C" int lqtk_QApplication_new(lua_State* L)
{
    return lqtk_QApplication_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QApplicationBinding::pushObject(lua_State* L, QApplication* objPtr, OwnerType ownerType)
{
    QApplicationWrapper* wrapper = dynamic_cast<QApplicationWrapper*>(objPtr);
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
        udata = ObjectUdata::pushNew<QApplication>(L, hasUserValue);     // -> uval?, udata
        udata->setQObjectPtr(L, -1, objPtr, ownerType);
        if (hasUserValue) {
            udata->setUserValue(L, -1, -2);                              // -> uval,  udata, 
        }                                                                // -> uval?, udata
        lua_remove(L, -2);                                               // -> udata
    }                                                                    // -> udata
    return udata;
}

/* ============================================================================================ */

QApplicationWrapperBase* QApplicationBinding::createWrappedObject(
                            int arg1,
                            char** arg2)
{
    return new QApplicationWrapper(
                            arg1,
                            arg2);
}

/* ============================================================================================ */

static const Member members[] =
{
    { "children",         Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_children },
    { "connect",          Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_connect },
    { "event",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QApplication_event },
    { "exec",             Member::NORMAL_FUNCTION,      (void*) lqtk_QApplication_exec },
    { "exit",             Member::NORMAL_FUNCTION,      (void*) lqtk_QApplication_exit },
    { "instance",         Member::NORMAL_FUNCTION,      (void*) lqtk_QCoreApplication_instance },
    { "objectName",       Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "parent",           Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "processEvents",    Member::NORMAL_FUNCTION,      (void*) lqtk_QCoreApplication_processEvents },
    { "sendPostedEvents", Member::NORMAL_FUNCTION,      (void*) lqtk_QCoreApplication_sendPostedEvents },
    { "setObjectName",    Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",        Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { "topLevelWidgets",  Member::NORMAL_FUNCTION,      (void*) lqtk_QApplication_topLevelWidgets },
    { NULL,               Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QApplicationBinding::classInfo = 
{
    "QApplication",

    &QGuiApplicationBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    lqtk_QApplication_constructor,
    lqtk_QApplication_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    13,
    members
};

/* ============================================================================================ */

int QApplicationBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
