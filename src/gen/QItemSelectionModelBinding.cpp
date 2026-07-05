// Type: QItemSelectionModel
// Base: QObject

/* ============================================================================================ */

#include <QAbstractItemModel>
#include <QEvent>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QModelIndex>
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
#include "QAbstractItemModelBinding.hpp"
#include "QEventBinding.hpp"
#include "QItemSelectionBinding.hpp"
#include "QItemSelectionModelBinding.hpp"
#include "QModelIndexBinding.hpp"
#include "QObjectBinding.hpp"
#include "QObjectWrapper.hpp"
#include "QItemSelectionModelWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QItemSelectionModelWrapper::QItemSelectionModelWrapper()
        : QItemSelectionModel(),
          lqtk_stateGuard(nullptr)
    {}
    QItemSelectionModelWrapper::QItemSelectionModelWrapper(
                   QAbstractItemModel* arg1) 
        : QItemSelectionModel(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}
    QItemSelectionModelWrapper::QItemSelectionModelWrapper(
                   QAbstractItemModel* arg1, 
                   QObject* arg2) 
        : QItemSelectionModel(
                   arg1,
                   arg2),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QItemSelectionModelWrapper::lqtk_destruct(lua_State* L) {
        QItemSelectionModel* objPtr = (QItemSelectionModel*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QItemSelectionModelWrapper::~QItemSelectionModelWrapper() {
        trace::printf("Deleting lqtk::QItemSelectionModelWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->getL();
            if (L) {
                QItemSelectionModel* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QItemSelectionModel");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

    void QItemSelectionModelWrapper::lqtk_QItemSelectionModel_emitSelectionChanged(
                   QItemSelection arg1, 
                   QItemSelection arg2) 
    {
        return QItemSelectionModel::emitSelectionChanged(
                   arg1, 
                   arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QItemSelectionModelWrapper::clear1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        clear1CallArgs* args = (clear1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "clear") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 1, 0, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
            }
        }
        return 0;
    }

    void QItemSelectionModelWrapper::clear()
    {
        lua_State* L = getL();
        if (L) {
            clear1CallArgs args(
                    this
            );
            {
                BindingUtil::callLuaMethodImpl(L, clear1_doLua, &args, "QItemSelectionModel", "clear");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QItemSelectionModel::clear();
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QItemSelectionModelWrapper::clearCurrentIndex1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        clearCurrentIndex1CallArgs* args = (clearCurrentIndex1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "clearCurrentIndex") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 1, 0, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
            }
        }
        return 0;
    }

    void QItemSelectionModelWrapper::clearCurrentIndex()
    {
        lua_State* L = getL();
        if (L) {
            clearCurrentIndex1CallArgs args(
                    this
            );
            {
                BindingUtil::callLuaMethodImpl(L, clearCurrentIndex1_doLua, &args, "QItemSelectionModel", "clearCurrentIndex");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QItemSelectionModel::clearCurrentIndex();
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QItemSelectionModelWrapper::reset1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        reset1CallArgs* args = (reset1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "reset") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 1, 0, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
            }
        }
        return 0;
    }

    void QItemSelectionModelWrapper::reset()
    {
        lua_State* L = getL();
        if (L) {
            reset1CallArgs args(
                    this
            );
            {
                BindingUtil::callLuaMethodImpl(L, reset1_doLua, &args, "QItemSelectionModel", "reset");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QItemSelectionModel::reset();
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QItemSelectionModelWrapper::select1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        select1CallArgs* args = (select1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "select") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->arg2.push(L, IS_OWNER);
                args->arg3.push(L);
                args->wasCalled = true;
                int rc = lua_pcall(L, 3, 0, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
            }
        }
        return 0;
    }

    void QItemSelectionModelWrapper::select(
                   const QItemSelection& arg2, 
                   QItemSelectionModel::SelectionFlags arg3) 
    {
        lua_State* L = getL();
        if (L) {
            select1CallArgs args(
                    this,
                    arg2, 
                    arg3 
            );
            {
                BindingUtil::callLuaMethodImpl(L, select1_doLua, &args, "QItemSelectionModel", "select");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QItemSelectionModel::select(
                    arg2, 
                    arg3); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QItemSelectionModelWrapper::select2_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        select2CallArgs* args = (select2CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "select") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->arg2.push(L, IS_OWNER);
                args->arg3.push(L);
                args->wasCalled = true;
                int rc = lua_pcall(L, 3, 0, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
            }
        }
        return 0;
    }

    void QItemSelectionModelWrapper::select(
                   const QModelIndex& arg2, 
                   QItemSelectionModel::SelectionFlags arg3) 
    {
        lua_State* L = getL();
        if (L) {
            select2CallArgs args(
                    this,
                    arg2, 
                    arg3 
            );
            {
                BindingUtil::callLuaMethodImpl(L, select2_doLua, &args, "QItemSelectionModel", "select");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QItemSelectionModel::select(
                    arg2, 
                    arg3); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QItemSelectionModelWrapper::setCurrentIndex1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        setCurrentIndex1CallArgs* args = (setCurrentIndex1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "setCurrentIndex") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->arg2.push(L, IS_OWNER);
                args->arg3.push(L);
                args->wasCalled = true;
                int rc = lua_pcall(L, 3, 0, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
            }
        }
        return 0;
    }

    void QItemSelectionModelWrapper::setCurrentIndex(
                   const QModelIndex& arg2, 
                   QItemSelectionModel::SelectionFlags arg3) 
    {
        lua_State* L = getL();
        if (L) {
            setCurrentIndex1CallArgs args(
                    this,
                    arg2, 
                    arg3 
            );
            {
                BindingUtil::callLuaMethodImpl(L, setCurrentIndex1_doLua, &args, "QItemSelectionModel", "setCurrentIndex");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QItemSelectionModel::setCurrentIndex(
                    arg2, 
                    arg3); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QItemSelectionModelWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QObjectWrapper::event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QObjectWrapper::event1_doLua, &args, "QItemSelectionModel", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QItemSelectionModel", "event", msg);
                }
            }
        }
        return QItemSelectionModel::event(
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


struct lqtk_QItemSelectionModel_clear_Args
{
    FromLua<QItemSelectionModel*> arg_1_1;
};

extern "C" int lqtk_QItemSelectionModel_clear(lua_State* L)
{
    lqtk_QItemSelectionModel_clear_Args  argValues;
    lqtk_QItemSelectionModel_clear_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QItemSelectionModel::clear();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionModel", "clear", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionModel_clearCurrentIndex_Args
{
    FromLua<QItemSelectionModel*> arg_1_1;
};

extern "C" int lqtk_QItemSelectionModel_clearCurrentIndex(lua_State* L)
{
    lqtk_QItemSelectionModel_clearCurrentIndex_Args  argValues;
    lqtk_QItemSelectionModel_clearCurrentIndex_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QItemSelectionModel::clearCurrentIndex();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionModel", "clearCurrentIndex", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionModel_clearSelection_Args
{
    FromLua<QItemSelectionModel*> arg_1_1;
};

extern "C" int lqtk_QItemSelectionModel_clearSelection(lua_State* L)
{
    lqtk_QItemSelectionModel_clearSelection_Args  argValues;
    lqtk_QItemSelectionModel_clearSelection_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QItemSelectionModel::clearSelection();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionModel", "clearSelection", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionModel_columnIntersectsSelection_Args
{
    FromLua<QItemSelectionModel*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<QModelIndex*> arg_3_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QItemSelectionModel_columnIntersectsSelection(lua_State* L)
{
    lqtk_QItemSelectionModel_columnIntersectsSelection_Args  argValues;
    lqtk_QItemSelectionModel_columnIntersectsSelection_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionModel::columnIntersectsSelection(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionModel::columnIntersectsSelection(args->arg_2_1.getValue(), *args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionModel", "columnIntersectsSelection", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionModel_currentIndex_Args
{
    FromLua<QItemSelectionModel*> arg_1_1;
    ToLua<QModelIndex*> rslt_1;
};

extern "C" int lqtk_QItemSelectionModel_currentIndex(lua_State* L)
{
    lqtk_QItemSelectionModel_currentIndex_Args  argValues;
    lqtk_QItemSelectionModel_currentIndex_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionModel::currentIndex();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionModel", "currentIndex", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionModel_emitSelectionChanged_Args
{
    FromLua<QItemSelectionModel*> arg_1_1;
    FromLua<QItemSelection*> arg_2_1;
    FromLua<QItemSelection*> arg_2_2;
};

extern "C" int lqtk_QItemSelectionModel_emitSelectionChanged(lua_State* L)
{
    lqtk_QItemSelectionModel_emitSelectionChanged_Args  argValues;
    lqtk_QItemSelectionModel_emitSelectionChanged_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                QItemSelectionModelExportWrapper* wrapper = dynamic_cast<QItemSelectionModelExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'emitSelectionChanged' is protected in QItemSelectionModel");
                }
                    wrapper->lqtk_QItemSelectionModel_emitSelectionChanged(*args->arg_2_1.getValue(), *args->arg_2_2.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionModel", "emitSelectionChanged", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionModel_hasSelection_Args
{
    FromLua<QItemSelectionModel*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QItemSelectionModel_hasSelection(lua_State* L)
{
    lqtk_QItemSelectionModel_hasSelection_Args  argValues;
    lqtk_QItemSelectionModel_hasSelection_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionModel::hasSelection();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionModel", "hasSelection", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionModel_isColumnSelected_Args
{
    FromLua<QItemSelectionModel*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<QModelIndex*> arg_3_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QItemSelectionModel_isColumnSelected(lua_State* L)
{
    lqtk_QItemSelectionModel_isColumnSelected_Args  argValues;
    lqtk_QItemSelectionModel_isColumnSelected_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionModel::isColumnSelected(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionModel::isColumnSelected(args->arg_2_1.getValue(), *args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionModel", "isColumnSelected", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionModel_isRowSelected_Args
{
    FromLua<QItemSelectionModel*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<QModelIndex*> arg_3_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QItemSelectionModel_isRowSelected(lua_State* L)
{
    lqtk_QItemSelectionModel_isRowSelected_Args  argValues;
    lqtk_QItemSelectionModel_isRowSelected_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionModel::isRowSelected(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionModel::isRowSelected(args->arg_2_1.getValue(), *args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionModel", "isRowSelected", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionModel_isSelected_Args
{
    FromLua<QItemSelectionModel*> arg_1_1;
    FromLua<QModelIndex*> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QItemSelectionModel_isSelected(lua_State* L)
{
    lqtk_QItemSelectionModel_isSelected_Args  argValues;
    lqtk_QItemSelectionModel_isSelected_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionModel::isSelected(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionModel", "isSelected", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionModel_model_Args
{
    FromLua<QItemSelectionModel*> arg_1_1;
    ToLua<QAbstractItemModel*> rslt_1;
};

extern "C" int lqtk_QItemSelectionModel_model(lua_State* L)
{
    lqtk_QItemSelectionModel_model_Args  argValues;
    lqtk_QItemSelectionModel_model_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionModel::model();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionModel", "model", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionModel_reset_Args
{
    FromLua<QItemSelectionModel*> arg_1_1;
};

extern "C" int lqtk_QItemSelectionModel_reset(lua_State* L)
{
    lqtk_QItemSelectionModel_reset_Args  argValues;
    lqtk_QItemSelectionModel_reset_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QItemSelectionModel::reset();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionModel", "reset", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionModel_rowIntersectsSelection_Args
{
    FromLua<QItemSelectionModel*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<QModelIndex*> arg_3_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QItemSelectionModel_rowIntersectsSelection(lua_State* L)
{
    lqtk_QItemSelectionModel_rowIntersectsSelection_Args  argValues;
    lqtk_QItemSelectionModel_rowIntersectsSelection_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionModel::rowIntersectsSelection(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionModel::rowIntersectsSelection(args->arg_2_1.getValue(), *args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionModel", "rowIntersectsSelection", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionModel_select_Args
{
    FromLua<QItemSelectionModel*> arg_1_1;
    FromLua<QItemSelection*> arg_2_1;
    FromLua<QItemSelectionModel::SelectionFlags> arg_3_1;
    FromLua<QModelIndex*> arg_4_1;
};

extern "C" int lqtk_QItemSelectionModel_select(lua_State* L)
{
    lqtk_QItemSelectionModel_select_Args  argValues;
    lqtk_QItemSelectionModel_select_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QItemSelectionModel::select(*args->arg_2_1.getValue(), args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_4_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QItemSelectionModel::select(*args->arg_4_1.getValue(), args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            assert(false);
        }
        return util::argCountError(L, "QItemSelectionModel", "select", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionModel_selectedColumns_Args
{
    FromLua<QItemSelectionModel*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QList<QModelIndex>> rslt_1;
};

static int lqtk_QItemSelectionModel_selectedColumns_doLua(lua_State* L)
{
    lqtk_QItemSelectionModel_selectedColumns_Args* args = (lqtk_QItemSelectionModel_selectedColumns_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionModel::selectedColumns();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionModel::selectedColumns(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionModel", "selectedColumns", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QItemSelectionModel_selectedColumns(lua_State* L)
{
    try {
        lqtk_QItemSelectionModel_selectedColumns_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QItemSelectionModel_selectedColumns_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionModel_selectedIndexes_Args
{
    FromLua<QItemSelectionModel*> arg_1_1;
    ToLua<QList<QModelIndex>> rslt_1;
};

static int lqtk_QItemSelectionModel_selectedIndexes_doLua(lua_State* L)
{
    lqtk_QItemSelectionModel_selectedIndexes_Args* args = (lqtk_QItemSelectionModel_selectedIndexes_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionModel::selectedIndexes();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionModel", "selectedIndexes", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QItemSelectionModel_selectedIndexes(lua_State* L)
{
    try {
        lqtk_QItemSelectionModel_selectedIndexes_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QItemSelectionModel_selectedIndexes_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionModel_selectedRows_Args
{
    FromLua<QItemSelectionModel*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QList<QModelIndex>> rslt_1;
};

static int lqtk_QItemSelectionModel_selectedRows_doLua(lua_State* L)
{
    lqtk_QItemSelectionModel_selectedRows_Args* args = (lqtk_QItemSelectionModel_selectedRows_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionModel::selectedRows();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionModel::selectedRows(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionModel", "selectedRows", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QItemSelectionModel_selectedRows(lua_State* L)
{
    try {
        lqtk_QItemSelectionModel_selectedRows_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QItemSelectionModel_selectedRows_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionModel_setCurrentIndex_Args
{
    FromLua<QItemSelectionModel*> arg_1_1;
    FromLua<QModelIndex*> arg_2_1;
    FromLua<QItemSelectionModel::SelectionFlags> arg_3_1;
};

extern "C" int lqtk_QItemSelectionModel_setCurrentIndex(lua_State* L)
{
    lqtk_QItemSelectionModel_setCurrentIndex_Args  argValues;
    lqtk_QItemSelectionModel_setCurrentIndex_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QItemSelectionModel::setCurrentIndex(*args->arg_2_1.getValue(), args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionModel", "setCurrentIndex", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionModel_setModel_Args
{
    FromLua<QItemSelectionModel*> arg_1_1;
    FromLua<QAbstractItemModel*> arg_2_1;
};

extern "C" int lqtk_QItemSelectionModel_setModel(lua_State* L)
{
    lqtk_QItemSelectionModel_setModel_Args  argValues;
    lqtk_QItemSelectionModel_setModel_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QItemSelectionModel::setModel(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionModel", "setModel", nargs, "2");
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
        QItemSelectionModelBinding::QType* ptr = static_cast<QItemSelectionModelBinding::QType*>(objectPtr);
        if (targetClassInfo == &QItemSelectionModelBinding::classInfo) {
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
        QItemSelectionModel* ptr = (QItemSelectionModel*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QItemSelectionModel* obj = (QItemSelectionModel*) objectPtr;
        
        QItemSelectionModelWrapper* wrapper = dynamic_cast<QItemSelectionModelWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */

struct lqtk_QItemSelectionModel_new_Args
{
    FromLua<QAbstractItemModel*> arg_1_1;
    FromLua<QObject*> arg_2_1;
    ToLua<QItemSelectionModel*> rslt_1;
};

extern "C" int lqtk_QItemSelectionModel_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QItemSelectionModel_new_Args  argValues;
    lqtk_QItemSelectionModel_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QItemSelectionModelBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QItemSelectionModel> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QItemSelectionModelWrapper* rslt = 
                    new QItemSelectionModelWrapper();
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
                QItemSelectionModelWrapper* rslt = 
                    new QItemSelectionModelWrapper(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
          if (!lua_isnil(L, argOffs+1)) {
            args->arg_1_1.check(L, argOffs+1);
          }
          if (!lua_isnil(L, argOffs+2)) {
            args->arg_2_1.check(L, argOffs+2);
          }
            {
                QItemSelectionModelWrapper* rslt = 
                    new QItemSelectionModelWrapper(args->arg_1_1.getValue(), args->arg_2_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QItemSelectionModel", "new", nargs, "1,2,3");
        } else {
            return util::argCountError(L, "QItemSelectionModel", nullptr, nargs, "0,1,2");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QItemSelectionModel_new(lua_State* L)
{
    return lqtk_QItemSelectionModel_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QItemSelectionModelBinding::pushObject(lua_State* L, QItemSelectionModel* objPtr, OwnerType ownerType)
{
    QItemSelectionModelWrapper* wrapper = dynamic_cast<QItemSelectionModelWrapper*>(objPtr);
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
        udata = ObjectUdata::pushNew<QItemSelectionModel>(L, hasUserValue);     // -> uval?, udata
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
    { "Clear",                     Member::INTEGER,              (void*) QItemSelectionModel::Clear },
    { "ClearAndSelect",            Member::INTEGER,              (void*) QItemSelectionModel::ClearAndSelect },
    { "Columns",                   Member::INTEGER,              (void*) QItemSelectionModel::Columns },
    { "Current",                   Member::INTEGER,              (void*) QItemSelectionModel::Current },
    { "Deselect",                  Member::INTEGER,              (void*) QItemSelectionModel::Deselect },
    { "NoUpdate",                  Member::INTEGER,              (void*) QItemSelectionModel::NoUpdate },
    { "Rows",                      Member::INTEGER,              (void*) QItemSelectionModel::Rows },
    { "Select",                    Member::INTEGER,              (void*) QItemSelectionModel::Select },
    { "SelectCurrent",             Member::INTEGER,              (void*) QItemSelectionModel::SelectCurrent },
    { "Toggle",                    Member::INTEGER,              (void*) QItemSelectionModel::Toggle },
    { "ToggleCurrent",             Member::INTEGER,              (void*) QItemSelectionModel::ToggleCurrent },
    { "children",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_children },
    { "clear",                     Member::VIRTUAL_FUNCTION,     (void*) lqtk_QItemSelectionModel_clear },
    { "clearCurrentIndex",         Member::VIRTUAL_FUNCTION,     (void*) lqtk_QItemSelectionModel_clearCurrentIndex },
    { "clearSelection",            Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionModel_clearSelection },
    { "columnIntersectsSelection", Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionModel_columnIntersectsSelection },
    { "connect",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_connect },
    { "currentIndex",              Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionModel_currentIndex },
    { "emitSelectionChanged",      Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionModel_emitSelectionChanged },
    { "event",                     Member::VIRTUAL_FUNCTION,     (void*) lqtk_QObject_event },
    { "hasSelection",              Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionModel_hasSelection },
    { "isColumnSelected",          Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionModel_isColumnSelected },
    { "isRowSelected",             Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionModel_isRowSelected },
    { "isSelected",                Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionModel_isSelected },
    { "model",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionModel_model },
    { "objectName",                Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "parent",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "reset",                     Member::VIRTUAL_FUNCTION,     (void*) lqtk_QItemSelectionModel_reset },
    { "rowIntersectsSelection",    Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionModel_rowIntersectsSelection },
    { "select",                    Member::VIRTUAL_FUNCTION,     (void*) lqtk_QItemSelectionModel_select },
    { "selectedColumns",           Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionModel_selectedColumns },
    { "selectedIndexes",           Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionModel_selectedIndexes },
    { "selectedRows",              Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionModel_selectedRows },
    { "setCurrentIndex",           Member::VIRTUAL_FUNCTION,     (void*) lqtk_QItemSelectionModel_setCurrentIndex },
    { "setModel",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionModel_setModel },
    { "setObjectName",             Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { NULL,                        Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QItemSelectionModelBinding::classInfo = 
{
    "QItemSelectionModel",

    &QObjectBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    lqtk_QItemSelectionModel_constructor,
    lqtk_QItemSelectionModel_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    37,
    members
};

/* ============================================================================================ */

int QItemSelectionModelBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
