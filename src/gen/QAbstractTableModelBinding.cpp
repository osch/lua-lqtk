// Type: QAbstractTableModel
// Base: QAbstractItemModel

/* ============================================================================================ */

#include <QAbstractItemModel>
#include <QAbstractTableModel>
#include <QEvent>
#include <QModelIndex>
#include <QObject>
#include <QVariant>
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
#include "QAbstractItemModelBinding.hpp"
#include "QAbstractTableModelBinding.hpp"
#include "QEventBinding.hpp"
#include "QModelIndexBinding.hpp"
#include "QObjectBinding.hpp"
#include "QVariantBinding.hpp"
#include "QtBinding.hpp"
#include "QObjectWrapper.hpp"
#include "QAbstractItemModelWrapper.hpp"
#include "QAbstractTableModelWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QAbstractTableModelWrapper::QAbstractTableModelWrapper()
        : QAbstractTableModel(),
          lqtk_stateGuard(nullptr)
    {}
    QAbstractTableModelWrapper::QAbstractTableModelWrapper(
                   QObject* arg1) 
        : QAbstractTableModel(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QAbstractTableModelWrapper::lqtk_destruct(lua_State* L) {
        QAbstractTableModel* objPtr = (QAbstractTableModel*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QAbstractTableModelWrapper::~QAbstractTableModelWrapper() {
        trace::printf("Deleting lqtk::QAbstractTableModelWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->getL();
            if (L) {
                QAbstractTableModel* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QAbstractTableModel");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

    QModelIndex QAbstractTableModelWrapper::lqtk_QAbstractItemModel_createIndex(
                   int arg1, 
                   int arg2) 
    {
        return QAbstractItemModel::createIndex(
                   arg1, 
                   arg2); 
    }

    QModelIndex QAbstractTableModelWrapper::lqtk_QAbstractItemModel_createIndex(
                   int arg1, 
                   int arg2, 
                   int arg3) 
    {
        return QAbstractItemModel::createIndex(
                   arg1, 
                   arg2, 
                   arg3); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QAbstractTableModelWrapper::flags1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        flags1CallArgs* args = (flags1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "flags") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->arg2.push(L, IS_OWNER);
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

    Qt::ItemFlags QAbstractTableModelWrapper::flags(
                   const QModelIndex& arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            flags1CallArgs args(
                    const_cast<QAbstractTableModelWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, flags1_doLua, &args, "QAbstractTableModel", "flags");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QAbstractTableModel", "flags", msg);
                }
            }
        }
        return QAbstractTableModel::flags(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    QModelIndex QAbstractTableModelWrapper::index(
                   int arg2, 
                   int arg3, 
                   const QModelIndex& arg4) const 
    {
        lua_State* L = getL();
        if (L) {
            QAbstractItemModelWrapper::index1CallArgs args(
                    const_cast<QAbstractTableModelWrapper*>(this),

                    arg2, 
                    arg3, 
                    arg4 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QAbstractItemModelWrapper::index1_doLua, &args, "QAbstractTableModel", "index");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QModelIndex'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QAbstractTableModel", "index", msg);
                }
            }
        }
        return QAbstractTableModel::index(
                    arg2, 
                    arg3, 
                    arg4); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QAbstractTableModelWrapper::sibling1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        sibling1CallArgs* args = (sibling1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "sibling") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->arg2.push(L);
                args->arg3.push(L);
                args->arg4.push(L, IS_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 4, 1, ehIndex);
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

    QModelIndex QAbstractTableModelWrapper::sibling(
                   int arg2, 
                   int arg3, 
                   const QModelIndex& arg4) const 
    {
        lua_State* L = getL();
        if (L) {
            sibling1CallArgs args(
                    const_cast<QAbstractTableModelWrapper*>(this),

                    arg2, 
                    arg3, 
                    arg4 
            );
            {
                BindingUtil::callLuaMethodImpl(L, sibling1_doLua, &args, "QAbstractTableModel", "sibling");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QModelIndex'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QAbstractTableModel", "sibling", msg);
                }
            }
        }
        return QAbstractTableModel::sibling(
                    arg2, 
                    arg3, 
                    arg4); 
    }

/* -------------------------------------------------------------------------------------------- */
    int QAbstractTableModelWrapper::columnCount(
                   const QModelIndex& arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            QAbstractItemModelWrapper::columnCount1CallArgs args(
                    const_cast<QAbstractTableModelWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QAbstractItemModelWrapper::columnCount1_doLua, &args, "QAbstractTableModel", "columnCount");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QAbstractTableModel", "columnCount", msg);
                }
            }
        }
        throw std::runtime_error("method 'QAbstractTableModel:columnCount' not implemented");
    }

/* -------------------------------------------------------------------------------------------- */
    QVariant QAbstractTableModelWrapper::data(
                   const QModelIndex& arg2, 
                   int arg3) const 
    {
        lua_State* L = getL();
        if (L) {
            QAbstractItemModelWrapper::data1CallArgs args(
                    const_cast<QAbstractTableModelWrapper*>(this),

                    arg2, 
                    arg3 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QAbstractItemModelWrapper::data1_doLua, &args, "QAbstractTableModel", "data");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QVariant'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QAbstractTableModel", "data", msg);
                }
            }
        }
        throw std::runtime_error("method 'QAbstractTableModel:data' not implemented");
    }

/* -------------------------------------------------------------------------------------------- */
    int QAbstractTableModelWrapper::rowCount(
                   const QModelIndex& arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            QAbstractItemModelWrapper::rowCount1CallArgs args(
                    const_cast<QAbstractTableModelWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QAbstractItemModelWrapper::rowCount1_doLua, &args, "QAbstractTableModel", "rowCount");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QAbstractTableModel", "rowCount", msg);
                }
            }
        }
        throw std::runtime_error("method 'QAbstractTableModel:rowCount' not implemented");
    }

/* -------------------------------------------------------------------------------------------- */
    bool QAbstractTableModelWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QObjectWrapper::event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QObjectWrapper::event1_doLua, &args, "QAbstractTableModel", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QAbstractTableModel", "event", msg);
                }
            }
        }
        return QAbstractTableModel::event(
                    arg2); 
    }

} // namespace lqtk

/* ============================================================================================ */

extern "C" {
    int lqtk_QAbstractItemModel_columnCount(lua_State* L);
    int lqtk_QAbstractItemModel_createIndex(lua_State* L);
    int lqtk_QAbstractItemModel_data(lua_State* L);
    int lqtk_QAbstractItemModel_parent(lua_State* L);
    int lqtk_QAbstractItemModel_rowCount(lua_State* L);
    int lqtk_QObject_children(lua_State* L);
    int lqtk_QObject_connect(lua_State* L);
    int lqtk_QObject_event(lua_State* L);
    int lqtk_QObject_objectName(lua_State* L);
    int lqtk_QObject_setObjectName(lua_State* L);
    int lqtk_QObject_setParent(lua_State* L);
}

/* ============================================================================================ */


struct lqtk_QAbstractTableModel_flags_Args
{
    FromLua<QAbstractTableModel*> arg_1_1;
    FromLua<QModelIndex*> arg_2_1;
    ToLua<Qt::ItemFlags> rslt_1;
};

extern "C" int lqtk_QAbstractTableModel_flags(lua_State* L)
{
    lqtk_QAbstractTableModel_flags_Args  argValues;
    lqtk_QAbstractTableModel_flags_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QAbstractTableModel::flags(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QAbstractTableModel", "flags", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QAbstractTableModel_index_Args
{
    FromLua<QAbstractTableModel*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
    FromLua<QModelIndex*> arg_3_1;
    ToLua<QModelIndex*> rslt_1;
};

extern "C" int lqtk_QAbstractTableModel_index(lua_State* L)
{
    lqtk_QAbstractTableModel_index_Args  argValues;
    lqtk_QAbstractTableModel_index_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QAbstractTableModel::index(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            args->arg_3_1.check(L, argOffs+4);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QAbstractTableModel::index(args->arg_2_1.getValue(), args->arg_2_2.getValue(), *args->arg_3_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QAbstractTableModel", "index", nargs, "3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QAbstractTableModel_sibling_Args
{
    FromLua<QAbstractTableModel*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
    FromLua<QModelIndex*> arg_3_1;
    ToLua<QModelIndex*> rslt_1;
};

extern "C" int lqtk_QAbstractTableModel_sibling(lua_State* L)
{
    lqtk_QAbstractTableModel_sibling_Args  argValues;
    lqtk_QAbstractTableModel_sibling_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            args->arg_3_1.check(L, argOffs+4);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QAbstractTableModel::sibling(args->arg_2_1.getValue(), args->arg_2_2.getValue(), *args->arg_3_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QAbstractTableModel", "sibling", nargs, "4");
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
        QAbstractTableModelBinding::QType* ptr = static_cast<QAbstractTableModelBinding::QType*>(objectPtr);
        if (targetClassInfo == &QAbstractTableModelBinding::classInfo) {
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
        QAbstractTableModel* ptr = (QAbstractTableModel*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QAbstractTableModel* obj = (QAbstractTableModel*) objectPtr;
        
        QAbstractTableModelWrapper* wrapper = dynamic_cast<QAbstractTableModelWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */

struct lqtk_QAbstractTableModel_new_Args
{
    FromLua<QObject*> arg_1_1;
    ToLua<QAbstractTableModel*> rslt_1;
};

extern "C" int lqtk_QAbstractTableModel_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QAbstractTableModel_new_Args  argValues;
    lqtk_QAbstractTableModel_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QAbstractTableModelBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QAbstractTableModel> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QAbstractTableModelWrapper* rslt = 
                    new QAbstractTableModelWrapper();
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
          if (!lua_isnil(L, argOffs+1)) {
            args->arg_1_1.check(L, argOffs+1);
          }
            {
                QAbstractTableModelWrapper* rslt = 
                    new QAbstractTableModelWrapper(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QAbstractTableModel", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QAbstractTableModel", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QAbstractTableModel_new(lua_State* L)
{
    return lqtk_QAbstractTableModel_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QAbstractTableModelBinding::pushObject(lua_State* L, QAbstractTableModel* objPtr, OwnerType ownerType)
{
    QAbstractTableModelWrapper* wrapper = dynamic_cast<QAbstractTableModelWrapper*>(objPtr);
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
        udata = ObjectUdata::pushNew<QAbstractTableModel>(L, hasUserValue);     // -> uval?, udata
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
    { "HorizontalSortHint", Member::INTEGER,              (void*) QAbstractTableModel::HorizontalSortHint },
    { "NoLayoutChangeHint", Member::INTEGER,              (void*) QAbstractTableModel::NoLayoutChangeHint },
    { "VerticalSortHint",   Member::INTEGER,              (void*) QAbstractTableModel::VerticalSortHint },
    { "children",           Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_children },
    { "connect",            Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_connect },
    { "createIndex",        Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractItemModel_createIndex },
    { "event",              Member::VIRTUAL_FUNCTION,     (void*) lqtk_QObject_event },
    { "flags",              Member::VIRTUAL_FUNCTION,     (void*) lqtk_QAbstractTableModel_flags },
    { "index",              Member::VIRTUAL_FUNCTION,     (void*) lqtk_QAbstractTableModel_index },
    { "objectName",         Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "parent",             Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractItemModel_parent },
    { "setObjectName",      Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",          Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { "sibling",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QAbstractTableModel_sibling },
    { NULL,                 Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QAbstractTableModelBinding::classInfo = 
{
    "QAbstractTableModel",

    &QAbstractItemModelBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    lqtk_QAbstractTableModel_constructor,
    lqtk_QAbstractTableModel_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    14,
    members
};

/* ============================================================================================ */

int QAbstractTableModelBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
