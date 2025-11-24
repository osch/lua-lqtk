// Type: QAction
// Base: QObject

/* ============================================================================================ */

#include <QAction>
#include <QEvent>
#include <QKeySequence>
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
#include "QActionBinding.hpp"
#include "QEventBinding.hpp"
#include "QKeySequenceBinding.hpp"
#include "QObjectBinding.hpp"
#include "QStringBinding.hpp"
#include "QObjectWrapper.hpp"
#include "QActionWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QActionWrapper::QActionWrapper()
        : QAction(),
          lqtk_stateGuard(nullptr)
    {}
    QActionWrapper::QActionWrapper(
                   QObject* arg1) 
        : QAction(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}
    QActionWrapper::QActionWrapper(
                   QString arg1) 
        : QAction(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}
    QActionWrapper::QActionWrapper(
                   QString arg1, 
                   QObject* arg2) 
        : QAction(
                   arg1,
                   arg2),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QActionWrapper::lqtk_destruct(lua_State* L) {
        QAction* objPtr = (QAction*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QActionWrapper::~QActionWrapper() {
        trace::printf("Deleting lqtk::QActionWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->L;
            if (L) {
                QAction* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QAction");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

    bool QActionWrapper::lqtk_QAction_event(
                   QEvent* arg1) 
    {
        return QAction::event(
                   arg1); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QActionWrapper::event1_doLua(lua_State* L) 
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

    bool QActionWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, event1_doLua, &args, "QAction", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QAction", "event", msg);
                }
            }
        }
        return QAction::event(
                    arg2); 
    }

} // namespace lqtk

/* ============================================================================================ */

extern "C" {
    int lqtk_QObject_children(lua_State* L);
    int lqtk_QObject_connect(lua_State* L);
    int lqtk_QObject_objectName(lua_State* L);
    int lqtk_QObject_parent(lua_State* L);
    int lqtk_QObject_setObjectName(lua_State* L);
    int lqtk_QObject_setParent(lua_State* L);
}

/* ============================================================================================ */


struct lqtk_QAction_event_Args
{
    FromLua<QAction*> arg_1_1;
    FromLua<QEvent*> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QAction_event(lua_State* L)
{
    lqtk_QAction_event_Args  argValues;
    lqtk_QAction_event_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QActionExportWrapper* wrapper = dynamic_cast<QActionExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'event' is protected in QAction");
                }
                args->rslt_1 = 
                    wrapper->lqtk_QAction_event(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QAction", "event", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QAction_setShortcut_Args
{
    FromLua<QAction*> arg_1_1;
    FromLua<QKeySequence*> arg_2_1;
};

extern "C" int lqtk_QAction_setShortcut(lua_State* L)
{
    lqtk_QAction_setShortcut_Args  argValues;
    lqtk_QAction_setShortcut_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QAction::setShortcut(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QAction", "setShortcut", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QAction_text_Args
{
    FromLua<QAction*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QAction_text_doLua(lua_State* L)
{
    lqtk_QAction_text_Args* args = (lqtk_QAction_text_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QAction::text();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QAction", "text", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QAction_text(lua_State* L)
{
    try {
        lqtk_QAction_text_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QAction_text_doLua, &args);
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
        QActionBinding::QType* ptr = static_cast<QActionBinding::QType*>(objectPtr);
        if (targetClassInfo == &QActionBinding::classInfo) {
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
        QAction* ptr = (QAction*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QAction* obj = (QAction*) objectPtr;
        
        QActionWrapper* wrapper = dynamic_cast<QActionWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */


struct lqtk_QAction_new_Args
{
    explicit lqtk_QAction_new_Args(bool explicitNew)
        : explicitNew(explicitNew)
    {}
    bool explicitNew;
    FromLua<QObject*> arg_1_1;
    FromLua<QString> arg_2_1;
    ToLua<QAction*> rslt_1;
};

static int lqtk_QAction_new_doLua(lua_State* L)
{
    lqtk_QAction_new_Args* args = (lqtk_QAction_new_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    bool explicitNew = args->explicitNew;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QActionBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QAction> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QActionWrapper* rslt = 
                    new QActionWrapper();
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                QActionWrapper* rslt = 
                    new QActionWrapper(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                QActionWrapper* rslt = 
                    new QActionWrapper(args->arg_2_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        if (nargs == 2) { do {
            args->arg_2_1.check(L, argOffs+1);
            args->arg_1_1.check(L, argOffs+2);
            {
                QActionWrapper* rslt = 
                    new QActionWrapper(args->arg_2_1.getValue(), args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QAction", "new", nargs, "1,2,3");
        } else {
            return util::argCountError(L, "QAction", nullptr, nargs, "0,1,2");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QAction_constructor(lua_State* L, bool explicitNew)
{
    try {
        lqtk_QAction_new_Args args(explicitNew);
        return BindingUtil::callMethodFromLua(L, lqtk_QAction_new_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QAction_new(lua_State* L)
{
    return lqtk_QAction_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QActionBinding::pushObject(lua_State* L, QAction* objPtr, OwnerType ownerType)
{
    QActionWrapper* wrapper = dynamic_cast<QActionWrapper*>(objPtr);
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
        udata = ObjectUdata::pushNew<QAction>(L, hasUserValue);     // -> uval?, udata
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
    { "event",         Member::VIRTUAL_FUNCTION,     (void*) lqtk_QAction_event },
    { "objectName",    Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "parent",        Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "setObjectName", Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",     Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { "setShortcut",   Member::NORMAL_FUNCTION,      (void*) lqtk_QAction_setShortcut },
    { "text",          Member::NORMAL_FUNCTION,      (void*) lqtk_QAction_text },
    { NULL,            Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QActionBinding::classInfo = 
{
    "QAction",

    &QObjectBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    lqtk_QAction_constructor,
    lqtk_QAction_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    9,
    members
};

/* ============================================================================================ */

int QActionBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
