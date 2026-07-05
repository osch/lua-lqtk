// Type: QAbstractItemModel
// Base: QObject

/* ============================================================================================ */

#include <QAbstractItemModel>
#include <QAbstractTableModel>
#include <QEvent>
#include <QModelIndex>
#include <QObject>
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
#include "ObjectObserver.hpp"
#include "QAbstractItemModelBinding.hpp"
#include "QAbstractTableModelBinding.hpp"
#include "QEventBinding.hpp"
#include "QModelIndexBinding.hpp"
#include "QObjectBinding.hpp"
#include "QStandardItemModelBinding.hpp"
#include "QVariantBinding.hpp"
#include "QObjectWrapper.hpp"
#include "QAbstractItemModelWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QAbstractItemModelWrapper::QAbstractItemModelWrapper()
        : QAbstractItemModel(),
          lqtk_stateGuard(nullptr)
    {}
    QAbstractItemModelWrapper::QAbstractItemModelWrapper(
                   QObject* arg1) 
        : QAbstractItemModel(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QAbstractItemModelWrapper::lqtk_destruct(lua_State* L) {
        QAbstractItemModel* objPtr = (QAbstractItemModel*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QAbstractItemModelWrapper::~QAbstractItemModelWrapper() {
        trace::printf("Deleting lqtk::QAbstractItemModelWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->getL();
            if (L) {
                QAbstractItemModel* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QAbstractItemModel");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

    QModelIndex QAbstractItemModelWrapper::lqtk_QAbstractItemModel_createIndex(
                   int arg1, 
                   int arg2) 
    {
        return QAbstractItemModel::createIndex(
                   arg1, 
                   arg2); 
    }

    QModelIndex QAbstractItemModelWrapper::lqtk_QAbstractItemModel_createIndex(
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
    
    int QAbstractItemModelWrapper::columnCount1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        columnCount1CallArgs* args = (columnCount1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "columnCount") != LUA_TNIL) {        // -> uval, eh, member?
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

    int QAbstractItemModelWrapper::columnCount(
                   const QModelIndex& arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            columnCount1CallArgs args(
                    const_cast<QAbstractItemModelWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, columnCount1_doLua, &args, "QAbstractItemModel", "columnCount");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QAbstractItemModel", "columnCount", msg);
                }
            }
        }
        throw std::runtime_error("method 'QAbstractItemModel:columnCount' not implemented");
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QAbstractItemModelWrapper::data1_doLua(lua_State* L) 
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

    QVariant QAbstractItemModelWrapper::data(
                   const QModelIndex& arg2, 
                   int arg3) const 
    {
        lua_State* L = getL();
        if (L) {
            data1CallArgs args(
                    const_cast<QAbstractItemModelWrapper*>(this),

                    arg2, 
                    arg3 
            );
            {
                BindingUtil::callLuaMethodImpl(L, data1_doLua, &args, "QAbstractItemModel", "data");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QVariant'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QAbstractItemModel", "data", msg);
                }
            }
        }
        throw std::runtime_error("method 'QAbstractItemModel:data' not implemented");
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QAbstractItemModelWrapper::index1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        index1CallArgs* args = (index1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "index") != LUA_TNIL) {        // -> uval, eh, member?
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

    QModelIndex QAbstractItemModelWrapper::index(
                   int arg2, 
                   int arg3, 
                   const QModelIndex& arg4) const 
    {
        lua_State* L = getL();
        if (L) {
            index1CallArgs args(
                    const_cast<QAbstractItemModelWrapper*>(this),

                    arg2, 
                    arg3, 
                    arg4 
            );
            {
                BindingUtil::callLuaMethodImpl(L, index1_doLua, &args, "QAbstractItemModel", "index");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QModelIndex'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QAbstractItemModel", "index", msg);
                }
            }
        }
        throw std::runtime_error("method 'QAbstractItemModel:index' not implemented");
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QAbstractItemModelWrapper::parent1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        parent1CallArgs* args = (parent1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "parent") != LUA_TNIL) {        // -> uval, eh, member?
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

    QModelIndex QAbstractItemModelWrapper::parent(
                   const QModelIndex& arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            parent1CallArgs args(
                    const_cast<QAbstractItemModelWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, parent1_doLua, &args, "QAbstractItemModel", "parent");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QModelIndex'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QAbstractItemModel", "parent", msg);
                }
            }
        }
        throw std::runtime_error("method 'QAbstractItemModel:parent' not implemented");
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QAbstractItemModelWrapper::rowCount1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        rowCount1CallArgs* args = (rowCount1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "rowCount") != LUA_TNIL) {        // -> uval, eh, member?
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

    int QAbstractItemModelWrapper::rowCount(
                   const QModelIndex& arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            rowCount1CallArgs args(
                    const_cast<QAbstractItemModelWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, rowCount1_doLua, &args, "QAbstractItemModel", "rowCount");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QAbstractItemModel", "rowCount", msg);
                }
            }
        }
        throw std::runtime_error("method 'QAbstractItemModel:rowCount' not implemented");
    }

/* -------------------------------------------------------------------------------------------- */
    bool QAbstractItemModelWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QObjectWrapper::event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QObjectWrapper::event1_doLua, &args, "QAbstractItemModel", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QAbstractItemModel", "event", msg);
                }
            }
        }
        return QAbstractItemModel::event(
                    arg2); 
    }

} // namespace lqtk

/* ============================================================================================ */

extern "C" {
    int lqtk_QObject_children(lua_State* L);
    int lqtk_QObject_connect(lua_State* L);
    int lqtk_QObject_event(lua_State* L);
    int lqtk_QObject_objectName(lua_State* L);
    int lqtk_QObject_setObjectName(lua_State* L);
    int lqtk_QObject_setParent(lua_State* L);
}

/* ============================================================================================ */


struct lqtk_QAbstractItemModel_createIndex_Args
{
    FromLua<QAbstractItemModel*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
    FromLua<int> arg_2_3;
    ToLua<QModelIndex*> rslt_1;
};

extern "C" int lqtk_QAbstractItemModel_createIndex(lua_State* L)
{
    lqtk_QAbstractItemModel_createIndex_Args  argValues;
    lqtk_QAbstractItemModel_createIndex_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                QAbstractItemModelExportWrapper* wrapper = dynamic_cast<QAbstractItemModelExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'createIndex' is protected in QAbstractItemModel");
                }
                args->rslt_1 = 
                    wrapper->lqtk_QAbstractItemModel_createIndex(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                args->rslt_1.push(L, IS_OWNER);
                ObjectObserver* observer = ObjectObserver::assureObserver(L, args->arg_1_1.getValue());
                observer->startGuarding(L, -1);
                return 1;
            }
        } while (false); }
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            args->arg_2_3.check(L, argOffs+4);
            {
                QAbstractItemModelExportWrapper* wrapper = dynamic_cast<QAbstractItemModelExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'createIndex' is protected in QAbstractItemModel");
                }
                args->rslt_1 = 
                    wrapper->lqtk_QAbstractItemModel_createIndex(args->arg_2_1.getValue(), args->arg_2_2.getValue(), args->arg_2_3.getValue());
                args->rslt_1.push(L, IS_OWNER);
                ObjectObserver* observer = ObjectObserver::assureObserver(L, args->arg_1_1.getValue());
                observer->startGuarding(L, -1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QAbstractItemModel", "createIndex", nargs, "3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QAbstractItemModel_parent_Args
{
    FromLua<QAbstractItemModel*> arg_1_1;
    ToLua<QObject*> rslt_1;
};

extern "C" int lqtk_QAbstractItemModel_parent(lua_State* L)
{
    lqtk_QAbstractItemModel_parent_Args  argValues;
    lqtk_QAbstractItemModel_parent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QAbstractItemModel::parent();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QAbstractItemModel", "parent", nargs, "1,2");
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
        QAbstractItemModelBinding::QType* ptr = static_cast<QAbstractItemModelBinding::QType*>(objectPtr);
        if (targetClassInfo == &QAbstractItemModelBinding::classInfo) {
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
        QAbstractItemModel* ptr = (QAbstractItemModel*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QAbstractItemModel* obj = (QAbstractItemModel*) objectPtr;
        
        QAbstractItemModelWrapper* wrapper = dynamic_cast<QAbstractItemModelWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */

struct lqtk_QAbstractItemModel_new_Args
{
    FromLua<QObject*> arg_1_1;
    ToLua<QAbstractItemModel*> rslt_1;
};

extern "C" int lqtk_QAbstractItemModel_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QAbstractItemModel_new_Args  argValues;
    lqtk_QAbstractItemModel_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QAbstractItemModelBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QAbstractItemModel> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QAbstractItemModelWrapper* rslt = 
                    new QAbstractItemModelWrapper();
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
                QAbstractItemModelWrapper* rslt = 
                    new QAbstractItemModelWrapper(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QAbstractItemModel", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QAbstractItemModel", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QAbstractItemModel_new(lua_State* L)
{
    return lqtk_QAbstractItemModel_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QAbstractItemModelBinding::pushObject(lua_State* L, QAbstractItemModel* objPtr, OwnerType ownerType)
{
    QAbstractItemModelWrapper* wrapper = dynamic_cast<QAbstractItemModelWrapper*>(objPtr);
    if (!wrapper) {
        QAbstractTableModel* ptr1 = dynamic_cast<QAbstractTableModel*>(objPtr);
        if (ptr1) {
            return QAbstractTableModelBinding::pushObject(L, ptr1, ownerType);
        }
        QStandardItemModel* ptr2 = dynamic_cast<QStandardItemModel*>(objPtr);
        if (ptr2) {
            return QStandardItemModelBinding::pushObject(L, ptr2, ownerType);
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
        udata = ObjectUdata::pushNew<QAbstractItemModel>(L, hasUserValue);     // -> uval?, udata
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
    { "HorizontalSortHint", Member::INTEGER,              (void*) QAbstractItemModel::HorizontalSortHint },
    { "NoLayoutChangeHint", Member::INTEGER,              (void*) QAbstractItemModel::NoLayoutChangeHint },
    { "VerticalSortHint",   Member::INTEGER,              (void*) QAbstractItemModel::VerticalSortHint },
    { "children",           Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_children },
    { "connect",            Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_connect },
    { "createIndex",        Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractItemModel_createIndex },
    { "event",              Member::VIRTUAL_FUNCTION,     (void*) lqtk_QObject_event },
    { "objectName",         Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "parent",             Member::VIRTUAL_FUNCTION,     (void*) lqtk_QAbstractItemModel_parent },
    { "setObjectName",      Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",          Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { NULL,                 Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QAbstractItemModelBinding::classInfo = 
{
    "QAbstractItemModel",

    &QObjectBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    lqtk_QAbstractItemModel_constructor,
    lqtk_QAbstractItemModel_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    11,
    members
};

/* ============================================================================================ */

int QAbstractItemModelBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
