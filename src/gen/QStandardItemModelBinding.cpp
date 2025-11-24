// Type: QStandardItemModel
// Base: QAbstractItemModel

/* ============================================================================================ */

#include <QAbstractItemModel>
#include <QEvent>
#include <QModelIndex>
#include <QObject>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QVariant>

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
#include "QEventBinding.hpp"
#include "QModelIndexBinding.hpp"
#include "QObjectBinding.hpp"
#include "QStandardItemBinding.hpp"
#include "QStandardItemModelBinding.hpp"
#include "QVariantBinding.hpp"
#include "QObjectWrapper.hpp"
#include "QStandardItemModelWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QStandardItemModelWrapper::QStandardItemModelWrapper()
        : QStandardItemModel(),
          lqtk_stateGuard(nullptr)
    {}
    QStandardItemModelWrapper::QStandardItemModelWrapper(
                   QObject* arg1) 
        : QStandardItemModel(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}
    QStandardItemModelWrapper::QStandardItemModelWrapper(
                   int arg1, 
                   int arg2) 
        : QStandardItemModel(
                   arg1,
                   arg2),
          lqtk_stateGuard(nullptr)
    {}
    QStandardItemModelWrapper::QStandardItemModelWrapper(
                   int arg1, 
                   int arg2, 
                   QObject* arg3) 
        : QStandardItemModel(
                   arg1,
                   arg2,
                   arg3),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QStandardItemModelWrapper::lqtk_destruct(lua_State* L) {
        QStandardItemModel* objPtr = (QStandardItemModel*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QStandardItemModelWrapper::~QStandardItemModelWrapper() {
        trace::printf("Deleting lqtk::QStandardItemModelWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->L;
            if (L) {
                QStandardItemModel* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QStandardItemModel");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QStandardItemModelWrapper::data1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        data1CallArgs* args = (data1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "data") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->arg2.push(L, IS_OWNER);
                args->arg3.push(L);
                args->wasCalled = true;
                int rc = lua_pcall(L, 3, 1, ehIndex);
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

    QVariant QStandardItemModelWrapper::data(
                   const QModelIndex& arg2, 
                   int arg3) const 
    {
        lua_State* L = getL();
        if (L) {
            data1CallArgs args(
                    const_cast<QStandardItemModelWrapper*>(this),

                    arg2, 
                    arg3 
            );
            {
                BindingUtil::callLuaMethodImpl(L, data1_doLua, &args, "QStandardItemModel", "data");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QVariant'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QStandardItemModel", "data", msg);
                }
            }
        }
        return QStandardItemModel::data(
                    arg2, 
                    arg3); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QStandardItemModelWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QObjectWrapper::event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QObjectWrapper::event1_doLua, &args, "QStandardItemModel", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QStandardItemModel", "event", msg);
                }
            }
        }
        return QStandardItemModel::event(
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


struct lqtk_QStandardItemModel_appendRow_Args
{
    FromLua<QStandardItemModel*> arg_1_1;
    FromLua<QList<QStandardItem*>> arg_2_1;
};

static int lqtk_QStandardItemModel_appendRow_doLua(lua_State* L)
{
    lqtk_QStandardItemModel_appendRow_Args* args = (lqtk_QStandardItemModel_appendRow_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QStandardItemModel::appendRow(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QStandardItemModel", "appendRow", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QStandardItemModel_appendRow(lua_State* L)
{
    try {
        lqtk_QStandardItemModel_appendRow_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QStandardItemModel_appendRow_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QStandardItemModel_data_Args
{
    FromLua<QStandardItemModel*> arg_1_1;
    FromLua<QModelIndex*> arg_2_1;
    FromLua<int> arg_3_1;
    ToLua<QVariant*> rslt_1;
};

extern "C" int lqtk_QStandardItemModel_data(lua_State* L)
{
    lqtk_QStandardItemModel_data_Args  argValues;
    lqtk_QStandardItemModel_data_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QStandardItemModel::data(*args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QStandardItemModel", "data", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QStandardItemModel_item_Args
{
    FromLua<QStandardItemModel*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
    ToLua<QStandardItem*> rslt_1;
};

extern "C" int lqtk_QStandardItemModel_item(lua_State* L)
{
    lqtk_QStandardItemModel_item_Args  argValues;
    lqtk_QStandardItemModel_item_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QStandardItemModel::item(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QStandardItemModel", "item", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QStandardItemModel_setHorizontalHeaderLabels_Args
{
    FromLua<QStandardItemModel*> arg_1_1;
    FromLua<QStringList> arg_2_1;
};

static int lqtk_QStandardItemModel_setHorizontalHeaderLabels_doLua(lua_State* L)
{
    lqtk_QStandardItemModel_setHorizontalHeaderLabels_Args* args = (lqtk_QStandardItemModel_setHorizontalHeaderLabels_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QStandardItemModel::setHorizontalHeaderLabels(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QStandardItemModel", "setHorizontalHeaderLabels", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QStandardItemModel_setHorizontalHeaderLabels(lua_State* L)
{
    try {
        lqtk_QStandardItemModel_setHorizontalHeaderLabels_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QStandardItemModel_setHorizontalHeaderLabels_doLua, &args);
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
        QStandardItemModelBinding::QType* ptr = static_cast<QStandardItemModelBinding::QType*>(objectPtr);
        if (targetClassInfo == &QStandardItemModelBinding::classInfo) {
            return ptr;
        }
        if (targetClassInfo == &QAbstractItemModelBinding::classInfo) {
            return static_cast<QAbstractItemModelBinding::QType*>(ptr);
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
        QStandardItemModel* ptr = (QStandardItemModel*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QStandardItemModel* obj = (QStandardItemModel*) objectPtr;
        
        QStandardItemModelWrapper* wrapper = dynamic_cast<QStandardItemModelWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */


struct lqtk_QStandardItemModel_new_Args
{
    FromLua<QObject*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
    ToLua<QStandardItemModel*> rslt_1;
};

extern "C" int lqtk_QStandardItemModel_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QStandardItemModel_new_Args  argValues;
    lqtk_QStandardItemModel_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QStandardItemModelBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QStandardItemModel> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QStandardItemModelWrapper* rslt = 
                    new QStandardItemModelWrapper();
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
                QStandardItemModelWrapper* rslt = 
                    new QStandardItemModelWrapper(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_2_1.check(L, argOffs+1);
            args->arg_2_2.check(L, argOffs+2);
            {
                QStandardItemModelWrapper* rslt = 
                    new QStandardItemModelWrapper(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_2_1.check(L, argOffs+1);
            args->arg_2_2.check(L, argOffs+2);
            args->arg_1_1.check(L, argOffs+3);
            {
                QStandardItemModelWrapper* rslt = 
                    new QStandardItemModelWrapper(args->arg_2_1.getValue(), args->arg_2_2.getValue(), args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QStandardItemModel", "new", nargs, "1,2,3,4");
        } else {
            return util::argCountError(L, "QStandardItemModel", nullptr, nargs, "0,1,2,3");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QStandardItemModel_new(lua_State* L)
{
    return lqtk_QStandardItemModel_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QStandardItemModelBinding::pushObject(lua_State* L, QStandardItemModel* objPtr, OwnerType ownerType)
{
    QStandardItemModelWrapper* wrapper = dynamic_cast<QStandardItemModelWrapper*>(objPtr);
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
        udata = ObjectUdata::pushNew<QStandardItemModel>(L, hasUserValue);     // -> uval?, udata
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
    { "appendRow",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QStandardItemModel_appendRow },
    { "children",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_children },
    { "connect",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_connect },
    { "data",                      Member::VIRTUAL_FUNCTION,     (void*) lqtk_QStandardItemModel_data },
    { "event",                     Member::VIRTUAL_FUNCTION,     (void*) lqtk_QObject_event },
    { "item",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QStandardItemModel_item },
    { "objectName",                Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "parent",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "setHorizontalHeaderLabels", Member::NORMAL_FUNCTION,      (void*) lqtk_QStandardItemModel_setHorizontalHeaderLabels },
    { "setObjectName",             Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { NULL,                        Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QStandardItemModelBinding::classInfo = 
{
    "QStandardItemModel",

    &QAbstractItemModelBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    lqtk_QStandardItemModel_constructor,
    lqtk_QStandardItemModel_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    11,
    members
};

/* ============================================================================================ */

int QStandardItemModelBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
