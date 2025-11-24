// Type: QObject
// Base: nil

/* ============================================================================================ */

#include <QAbstractItemModel>
#include <QAction>
#include <QCoreApplication>
#include <QEvent>
#include <QEventLoop>
#include <QLayout>
#include <QObject>
#include <QString>
#include <QThread>
#include <QTimer>
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
#include "QAbstractItemModelBinding.hpp"
#include "QActionBinding.hpp"
#include "QCoreApplicationBinding.hpp"
#include "QEventBinding.hpp"
#include "QEventLoopBinding.hpp"
#include "QLayoutBinding.hpp"
#include "QObjectBinding.hpp"
#include "QStringBinding.hpp"
#include "QThreadBinding.hpp"
#include "QTimerBinding.hpp"
#include "QWidgetBinding.hpp"
#include "QObjectWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QObjectWrapper::QObjectWrapper()
        : QObject(),
          lqtk_stateGuard(nullptr)
    {}
    QObjectWrapper::QObjectWrapper(
                   QObject* arg1) 
        : QObject(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QObjectWrapper::lqtk_destruct(lua_State* L) {
        QObject* objPtr = (QObject*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QObjectWrapper::~QObjectWrapper() {
        trace::printf("Deleting lqtk::QObjectWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->L;
            if (L) {
                QObject* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QObject");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QObjectWrapper::event1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        event1CallArgs* args = (event1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "event") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                int memberIdx = lua_gettop(L);
                ObjectUdata* temp2 = args->arg2.push(L, NOT_OWNER);
                int tempIdx2 = lua_gettop(L);
                lua_pushvalue(L, memberIdx);
                args->arg1.push(L, NOT_OWNER);
                lua_pushvalue(L, tempIdx2);
                args->wasCalled = true;
                int rc = lua_pcall(L, 2, 1, ehIndex);
                temp2->invalidate(L, tempIdx2);
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

    bool QObjectWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, event1_doLua, &args, "QObject", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QObject", "event", msg);
                }
            }
        }
        return QObject::event(
                    arg2); 
    }

} // namespace lqtk

/* ============================================================================================ */


struct lqtk_QObject_children_Args
{
    FromLua<QObject*> arg_1_1;
    ToLua<QList<QObject*>> rslt_1;
};

static int lqtk_QObject_children_doLua(lua_State* L)
{
    lqtk_QObject_children_Args* args = (lqtk_QObject_children_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QObject::children();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QObject", "children", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QObject_children(lua_State* L)
{
    try {
        lqtk_QObject_children_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QObject_children_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QObject_connect(lua_State* L);

/* ============================================================================================ */


struct lqtk_QObject_event_Args
{
    FromLua<QObject*> arg_1_1;
    FromLua<QEvent*> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QObject_event(lua_State* L)
{
    lqtk_QObject_event_Args  argValues;
    lqtk_QObject_event_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QObject::event(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QObject", "event", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QObject_objectName_Args
{
    FromLua<QObject*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QObject_objectName_doLua(lua_State* L)
{
    lqtk_QObject_objectName_Args* args = (lqtk_QObject_objectName_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QObject::objectName();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QObject", "objectName", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QObject_objectName(lua_State* L)
{
    try {
        lqtk_QObject_objectName_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QObject_objectName_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QObject_parent_Args
{
    FromLua<QObject*> arg_1_1;
    ToLua<QObject*> rslt_1;
};

extern "C" int lqtk_QObject_parent(lua_State* L)
{
    lqtk_QObject_parent_Args  argValues;
    lqtk_QObject_parent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QObject::parent();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QObject", "parent", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QObject_setObjectName_Args
{
    FromLua<QObject*> arg_1_1;
    FromLua<QString> arg_2_1;
};

static int lqtk_QObject_setObjectName_doLua(lua_State* L)
{
    lqtk_QObject_setObjectName_Args* args = (lqtk_QObject_setObjectName_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QObject::setObjectName(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QObject", "setObjectName", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QObject_setObjectName(lua_State* L)
{
    try {
        lqtk_QObject_setObjectName_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QObject_setObjectName_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QObject_setParent_Args
{
    FromLua<QObject*> arg_1_1;
    FromLua<QObject*> arg_1_2;
};

extern "C" int lqtk_QObject_setParent(lua_State* L)
{
    lqtk_QObject_setParent_Args  argValues;
    lqtk_QObject_setParent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QObject::setParent(args->arg_1_2.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QObject", "setParent", nargs, "2");
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
        QObjectBinding::QType* ptr = static_cast<QObjectBinding::QType*>(objectPtr);
        if (targetClassInfo == &QObjectBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QObject* ptr = (QObject*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QObject* obj = (QObject*) objectPtr;
        
        QObjectWrapper* wrapper = dynamic_cast<QObjectWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */


struct lqtk_QObject_new_Args
{
    FromLua<QObject*> arg_1_1;
    ToLua<QObject*> rslt_1;
};

extern "C" int lqtk_QObject_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QObject_new_Args  argValues;
    lqtk_QObject_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QObjectBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QObject> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QObjectWrapper* rslt = 
                    new QObjectWrapper();
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
                QObjectWrapper* rslt = 
                    new QObjectWrapper(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QObject", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QObject", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QObject_new(lua_State* L)
{
    return lqtk_QObject_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QObjectBinding::pushObject(lua_State* L, QObject* objPtr, OwnerType ownerType)
{
    QObjectWrapper* wrapper = dynamic_cast<QObjectWrapper*>(objPtr);
    if (!wrapper) {
        QAbstractItemModel* ptr1 = dynamic_cast<QAbstractItemModel*>(objPtr);
        if (ptr1) {
            return QAbstractItemModelBinding::pushObject(L, ptr1, ownerType);
        }
        QAction* ptr2 = dynamic_cast<QAction*>(objPtr);
        if (ptr2) {
            return QActionBinding::pushObject(L, ptr2, ownerType);
        }
        QCoreApplication* ptr3 = dynamic_cast<QCoreApplication*>(objPtr);
        if (ptr3) {
            return QCoreApplicationBinding::pushObject(L, ptr3, ownerType);
        }
        QEventLoop* ptr4 = dynamic_cast<QEventLoop*>(objPtr);
        if (ptr4) {
            return QEventLoopBinding::pushObject(L, ptr4, ownerType);
        }
        QLayout* ptr5 = dynamic_cast<QLayout*>(objPtr);
        if (ptr5) {
            return QLayoutBinding::pushObject(L, ptr5, ownerType);
        }
        QThread* ptr6 = dynamic_cast<QThread*>(objPtr);
        if (ptr6) {
            return QThreadBinding::pushObject(L, ptr6, ownerType);
        }
        QTimer* ptr7 = dynamic_cast<QTimer*>(objPtr);
        if (ptr7) {
            return QTimerBinding::pushObject(L, ptr7, ownerType);
        }
        QWidget* ptr8 = dynamic_cast<QWidget*>(objPtr);
        if (ptr8) {
            return QWidgetBinding::pushObject(L, ptr8, ownerType);
        }
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
        udata = ObjectUdata::pushNew<QObject>(L, hasUserValue);     // -> uval?, udata
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
    { "objectName",    Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "parent",        Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "setObjectName", Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",     Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { NULL,            Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QObjectBinding::classInfo = 
{
    "QObject",

    NULL,

    true,  // isQObject
    false, // needsGuard
    lqtk_QObject_constructor,
    lqtk_QObject_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    7,
    members
};

/* ============================================================================================ */

int QObjectBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
