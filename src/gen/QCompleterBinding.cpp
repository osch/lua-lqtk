// Type: QCompleter
// Base: QObject

/* ============================================================================================ */

#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QCompleter>
#include <QEvent>
#include <QModelIndex>
#include <QObject>
#include <QRect>
#include <QString>
#include <QWidget>
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
#include "QAbstractItemViewBinding.hpp"
#include "QCompleterBinding.hpp"
#include "QEventBinding.hpp"
#include "QModelIndexBinding.hpp"
#include "QObjectBinding.hpp"
#include "QRectBinding.hpp"
#include "QStringBinding.hpp"
#include "QWidgetBinding.hpp"
#include "QtBinding.hpp"
#include "QObjectWrapper.hpp"
#include "QCompleterWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QCompleterWrapper::QCompleterWrapper()
        : QCompleter(),
          lqtk_stateGuard(nullptr)
    {}
    QCompleterWrapper::QCompleterWrapper(
                   QObject* arg1) 
        : QCompleter(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}
    QCompleterWrapper::QCompleterWrapper(
                   QAbstractItemModel* arg1) 
        : QCompleter(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}
    QCompleterWrapper::QCompleterWrapper(
                   QAbstractItemModel* arg1, 
                   QObject* arg2) 
        : QCompleter(
                   arg1,
                   arg2),
          lqtk_stateGuard(nullptr)
    {}
    QCompleterWrapper::QCompleterWrapper(
                   QStringList arg1) 
        : QCompleter(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}
    QCompleterWrapper::QCompleterWrapper(
                   QStringList arg1, 
                   QObject* arg2) 
        : QCompleter(
                   arg1,
                   arg2),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QCompleterWrapper::lqtk_destruct(lua_State* L) {
        QCompleter* objPtr = (QCompleter*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QCompleterWrapper::~QCompleterWrapper() {
        trace::printf("Deleting lqtk::QCompleterWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->getL();
            if (L) {
                QCompleter* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QCompleter");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

    bool QCompleterWrapper::lqtk_QCompleter_event(
                   QEvent* arg1) 
    {
        return QCompleter::event(
                   arg1); 
    }

    bool QCompleterWrapper::lqtk_QCompleter_eventFilter(
                   QObject* arg1, 
                   QEvent* arg2) 
    {
        return QCompleter::eventFilter(
                   arg1, 
                   arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QCompleterWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QObjectWrapper::event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QObjectWrapper::event1_doLua, &args, "QCompleter", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QCompleter", "event", msg);
                }
            }
        }
        return QCompleter::event(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QCompleterWrapper::eventFilter1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        eventFilter1CallArgs* args = (eventFilter1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "eventFilter") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->arg2.push(L, NOT_OWNER);
                args->arg3.push(L, NOT_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 3, 1, ehIndex);
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

    bool QCompleterWrapper::eventFilter(
                   QObject* arg2, 
                   QEvent* arg3) 
    {
        lua_State* L = getL();
        if (L) {
            eventFilter1CallArgs args(
                    this,
                    arg2, 
                    arg3 
            );
            {
                BindingUtil::callLuaMethodImpl(L, eventFilter1_doLua, &args, "QCompleter", "eventFilter");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QCompleter", "eventFilter", msg);
                }
            }
        }
        return QCompleter::eventFilter(
                    arg2, 
                    arg3); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QCompleterWrapper::pathFromIndex1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        pathFromIndex1CallArgs* args = (pathFromIndex1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "pathFromIndex") != LUA_TNIL) {        // -> uval, eh, member?
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

    QString QCompleterWrapper::pathFromIndex(
                   const QModelIndex& arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            pathFromIndex1CallArgs args(
                    const_cast<QCompleterWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, pathFromIndex1_doLua, &args, "QCompleter", "pathFromIndex");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a string";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QCompleter", "pathFromIndex", msg);
                }
            }
        }
        return QCompleter::pathFromIndex(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QCompleterWrapper::splitPath1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        splitPath1CallArgs* args = (splitPath1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "splitPath") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->arg2.push(L);
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

    QStringList QCompleterWrapper::splitPath(
                   const QString& arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            splitPath1CallArgs args(
                    const_cast<QCompleterWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, splitPath1_doLua, &args, "QCompleter", "splitPath");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a string list";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QCompleter", "splitPath", msg);
                }
            }
        }
        return QCompleter::splitPath(
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


struct lqtk_QCompleter_caseSensitivity_Args
{
    FromLua<QCompleter*> arg_1_1;
    ToLua<Qt::CaseSensitivity> rslt_1;
};

extern "C" int lqtk_QCompleter_caseSensitivity(lua_State* L)
{
    lqtk_QCompleter_caseSensitivity_Args  argValues;
    lqtk_QCompleter_caseSensitivity_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QCompleter::caseSensitivity();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "caseSensitivity", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_complete_Args
{
    FromLua<QCompleter*> arg_1_1;
    FromLua<QRect*> arg_2_1;
};

extern "C" int lqtk_QCompleter_complete(lua_State* L)
{
    lqtk_QCompleter_complete_Args  argValues;
    lqtk_QCompleter_complete_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QCompleter::complete();
                return 0;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QCompleter::complete(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "complete", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_completionColumn_Args
{
    FromLua<QCompleter*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QCompleter_completionColumn(lua_State* L)
{
    lqtk_QCompleter_completionColumn_Args  argValues;
    lqtk_QCompleter_completionColumn_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QCompleter::completionColumn();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "completionColumn", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_completionCount_Args
{
    FromLua<QCompleter*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QCompleter_completionCount(lua_State* L)
{
    lqtk_QCompleter_completionCount_Args  argValues;
    lqtk_QCompleter_completionCount_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QCompleter::completionCount();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "completionCount", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_completionMode_Args
{
    FromLua<QCompleter*> arg_1_1;
    ToLua<QCompleter::CompletionMode> rslt_1;
};

extern "C" int lqtk_QCompleter_completionMode(lua_State* L)
{
    lqtk_QCompleter_completionMode_Args  argValues;
    lqtk_QCompleter_completionMode_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QCompleter::completionMode();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "completionMode", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_completionModel_Args
{
    FromLua<QCompleter*> arg_1_1;
    ToLua<QAbstractItemModel*> rslt_1;
};

extern "C" int lqtk_QCompleter_completionModel(lua_State* L)
{
    lqtk_QCompleter_completionModel_Args  argValues;
    lqtk_QCompleter_completionModel_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QCompleter::completionModel();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "completionModel", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_completionPrefix_Args
{
    FromLua<QCompleter*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QCompleter_completionPrefix_doLua(lua_State* L)
{
    lqtk_QCompleter_completionPrefix_Args* args = (lqtk_QCompleter_completionPrefix_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QCompleter::completionPrefix();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "completionPrefix", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QCompleter_completionPrefix(lua_State* L)
{
    try {
        lqtk_QCompleter_completionPrefix_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QCompleter_completionPrefix_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_completionRole_Args
{
    FromLua<QCompleter*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QCompleter_completionRole(lua_State* L)
{
    lqtk_QCompleter_completionRole_Args  argValues;
    lqtk_QCompleter_completionRole_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QCompleter::completionRole();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "completionRole", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_currentCompletion_Args
{
    FromLua<QCompleter*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QCompleter_currentCompletion_doLua(lua_State* L)
{
    lqtk_QCompleter_currentCompletion_Args* args = (lqtk_QCompleter_currentCompletion_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QCompleter::currentCompletion();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "currentCompletion", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QCompleter_currentCompletion(lua_State* L)
{
    try {
        lqtk_QCompleter_currentCompletion_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QCompleter_currentCompletion_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_currentIndex_Args
{
    FromLua<QCompleter*> arg_1_1;
    ToLua<QModelIndex*> rslt_1;
};

extern "C" int lqtk_QCompleter_currentIndex(lua_State* L)
{
    lqtk_QCompleter_currentIndex_Args  argValues;
    lqtk_QCompleter_currentIndex_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QCompleter::currentIndex();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "currentIndex", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_currentRow_Args
{
    FromLua<QCompleter*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QCompleter_currentRow(lua_State* L)
{
    lqtk_QCompleter_currentRow_Args  argValues;
    lqtk_QCompleter_currentRow_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QCompleter::currentRow();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "currentRow", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_event_Args
{
    FromLua<QCompleter*> arg_1_1;
    FromLua<QEvent*> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QCompleter_event(lua_State* L)
{
    lqtk_QCompleter_event_Args  argValues;
    lqtk_QCompleter_event_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QCompleterExportWrapper* wrapper = dynamic_cast<QCompleterExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'event' is protected in QCompleter");
                }
                args->rslt_1 = 
                    wrapper->lqtk_QCompleter_event(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "event", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_eventFilter_Args
{
    FromLua<QCompleter*> arg_1_1;
    FromLua<QObject*> arg_2_1;
    FromLua<QEvent*> arg_3_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QCompleter_eventFilter(lua_State* L)
{
    lqtk_QCompleter_eventFilter_Args  argValues;
    lqtk_QCompleter_eventFilter_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                QCompleterExportWrapper* wrapper = dynamic_cast<QCompleterExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'eventFilter' is protected in QCompleter");
                }
                args->rslt_1 = 
                    wrapper->lqtk_QCompleter_eventFilter(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "eventFilter", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_filterMode_Args
{
    FromLua<QCompleter*> arg_1_1;
    ToLua<Qt::MatchFlags> rslt_1;
};

extern "C" int lqtk_QCompleter_filterMode(lua_State* L)
{
    lqtk_QCompleter_filterMode_Args  argValues;
    lqtk_QCompleter_filterMode_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QCompleter::filterMode();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "filterMode", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_maxVisibleItems_Args
{
    FromLua<QCompleter*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QCompleter_maxVisibleItems(lua_State* L)
{
    lqtk_QCompleter_maxVisibleItems_Args  argValues;
    lqtk_QCompleter_maxVisibleItems_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QCompleter::maxVisibleItems();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "maxVisibleItems", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_model_Args
{
    FromLua<QCompleter*> arg_1_1;
    ToLua<QAbstractItemModel*> rslt_1;
};

extern "C" int lqtk_QCompleter_model(lua_State* L)
{
    lqtk_QCompleter_model_Args  argValues;
    lqtk_QCompleter_model_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QCompleter::model();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "model", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_modelSorting_Args
{
    FromLua<QCompleter*> arg_1_1;
    ToLua<QCompleter::ModelSorting> rslt_1;
};

extern "C" int lqtk_QCompleter_modelSorting(lua_State* L)
{
    lqtk_QCompleter_modelSorting_Args  argValues;
    lqtk_QCompleter_modelSorting_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QCompleter::modelSorting();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "modelSorting", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_pathFromIndex_Args
{
    FromLua<QCompleter*> arg_1_1;
    FromLua<QModelIndex*> arg_2_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QCompleter_pathFromIndex_doLua(lua_State* L)
{
    lqtk_QCompleter_pathFromIndex_Args* args = (lqtk_QCompleter_pathFromIndex_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QCompleter::pathFromIndex(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "pathFromIndex", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QCompleter_pathFromIndex(lua_State* L)
{
    try {
        lqtk_QCompleter_pathFromIndex_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QCompleter_pathFromIndex_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_popup_Args
{
    FromLua<QCompleter*> arg_1_1;
    ToLua<QAbstractItemView*> rslt_1;
};

extern "C" int lqtk_QCompleter_popup(lua_State* L)
{
    lqtk_QCompleter_popup_Args  argValues;
    lqtk_QCompleter_popup_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QCompleter::popup();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "popup", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_setCaseSensitivity_Args
{
    FromLua<QCompleter*> arg_1_1;
    FromLua<Qt::CaseSensitivity> arg_2_1;
};

extern "C" int lqtk_QCompleter_setCaseSensitivity(lua_State* L)
{
    lqtk_QCompleter_setCaseSensitivity_Args  argValues;
    lqtk_QCompleter_setCaseSensitivity_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QCompleter::setCaseSensitivity(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "setCaseSensitivity", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_setCompletionColumn_Args
{
    FromLua<QCompleter*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QCompleter_setCompletionColumn(lua_State* L)
{
    lqtk_QCompleter_setCompletionColumn_Args  argValues;
    lqtk_QCompleter_setCompletionColumn_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QCompleter::setCompletionColumn(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "setCompletionColumn", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_setCompletionMode_Args
{
    FromLua<QCompleter*> arg_1_1;
    FromLua<QCompleter::CompletionMode> arg_2_1;
};

extern "C" int lqtk_QCompleter_setCompletionMode(lua_State* L)
{
    lqtk_QCompleter_setCompletionMode_Args  argValues;
    lqtk_QCompleter_setCompletionMode_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QCompleter::setCompletionMode(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "setCompletionMode", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_setCompletionPrefix_Args
{
    FromLua<QCompleter*> arg_1_1;
    FromLua<QString> arg_2_1;
};

static int lqtk_QCompleter_setCompletionPrefix_doLua(lua_State* L)
{
    lqtk_QCompleter_setCompletionPrefix_Args* args = (lqtk_QCompleter_setCompletionPrefix_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QCompleter::setCompletionPrefix(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "setCompletionPrefix", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QCompleter_setCompletionPrefix(lua_State* L)
{
    try {
        lqtk_QCompleter_setCompletionPrefix_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QCompleter_setCompletionPrefix_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_setCompletionRole_Args
{
    FromLua<QCompleter*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QCompleter_setCompletionRole(lua_State* L)
{
    lqtk_QCompleter_setCompletionRole_Args  argValues;
    lqtk_QCompleter_setCompletionRole_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QCompleter::setCompletionRole(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "setCompletionRole", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_setCurrentRow_Args
{
    FromLua<QCompleter*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QCompleter_setCurrentRow(lua_State* L)
{
    lqtk_QCompleter_setCurrentRow_Args  argValues;
    lqtk_QCompleter_setCurrentRow_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QCompleter::setCurrentRow(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "setCurrentRow", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_setFilterMode_Args
{
    FromLua<QCompleter*> arg_1_1;
    FromLua<Qt::MatchFlags> arg_2_1;
};

extern "C" int lqtk_QCompleter_setFilterMode(lua_State* L)
{
    lqtk_QCompleter_setFilterMode_Args  argValues;
    lqtk_QCompleter_setFilterMode_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QCompleter::setFilterMode(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "setFilterMode", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_setMaxVisibleItems_Args
{
    FromLua<QCompleter*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QCompleter_setMaxVisibleItems(lua_State* L)
{
    lqtk_QCompleter_setMaxVisibleItems_Args  argValues;
    lqtk_QCompleter_setMaxVisibleItems_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QCompleter::setMaxVisibleItems(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "setMaxVisibleItems", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_setModel_Args
{
    FromLua<QCompleter*> arg_1_1;
    FromLua<QAbstractItemModel*> arg_2_1;
};

extern "C" int lqtk_QCompleter_setModel(lua_State* L)
{
    lqtk_QCompleter_setModel_Args  argValues;
    lqtk_QCompleter_setModel_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QCompleter::setModel(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "setModel", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_setModelSorting_Args
{
    FromLua<QCompleter*> arg_1_1;
    FromLua<QCompleter::ModelSorting> arg_2_1;
};

extern "C" int lqtk_QCompleter_setModelSorting(lua_State* L)
{
    lqtk_QCompleter_setModelSorting_Args  argValues;
    lqtk_QCompleter_setModelSorting_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QCompleter::setModelSorting(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "setModelSorting", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_setPopup_Args
{
    FromLua<QCompleter*> arg_1_1;
    FromLua<QAbstractItemView*> arg_2_1;
};

extern "C" int lqtk_QCompleter_setPopup(lua_State* L)
{
    lqtk_QCompleter_setPopup_Args  argValues;
    lqtk_QCompleter_setPopup_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QCompleter::setPopup(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "setPopup", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_setWidget_Args
{
    FromLua<QCompleter*> arg_1_1;
    FromLua<QWidget*> arg_2_1;
};

extern "C" int lqtk_QCompleter_setWidget(lua_State* L)
{
    lqtk_QCompleter_setWidget_Args  argValues;
    lqtk_QCompleter_setWidget_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QCompleter::setWidget(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "setWidget", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_setWrapAround_Args
{
    FromLua<QCompleter*> arg_1_1;
    FromLua<bool> arg_2_1;
};

extern "C" int lqtk_QCompleter_setWrapAround(lua_State* L)
{
    lqtk_QCompleter_setWrapAround_Args  argValues;
    lqtk_QCompleter_setWrapAround_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QCompleter::setWrapAround(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "setWrapAround", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_splitPath_Args
{
    FromLua<QCompleter*> arg_1_1;
    FromLua<QString> arg_2_1;
    ToLua<QStringList> rslt_1;
};

static int lqtk_QCompleter_splitPath_doLua(lua_State* L)
{
    lqtk_QCompleter_splitPath_Args* args = (lqtk_QCompleter_splitPath_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QCompleter::splitPath(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "splitPath", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QCompleter_splitPath(lua_State* L)
{
    try {
        lqtk_QCompleter_splitPath_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QCompleter_splitPath_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_widget_Args
{
    FromLua<QCompleter*> arg_1_1;
    ToLua<QWidget*> rslt_1;
};

extern "C" int lqtk_QCompleter_widget(lua_State* L)
{
    lqtk_QCompleter_widget_Args  argValues;
    lqtk_QCompleter_widget_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QCompleter::widget();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "widget", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QCompleter_wrapAround_Args
{
    FromLua<QCompleter*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QCompleter_wrapAround(lua_State* L)
{
    lqtk_QCompleter_wrapAround_Args  argValues;
    lqtk_QCompleter_wrapAround_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QCompleter::wrapAround();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QCompleter", "wrapAround", nargs, "1");
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
        QCompleterBinding::QType* ptr = static_cast<QCompleterBinding::QType*>(objectPtr);
        if (targetClassInfo == &QCompleterBinding::classInfo) {
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
        QCompleter* ptr = (QCompleter*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QCompleter* obj = (QCompleter*) objectPtr;
        
        QCompleterWrapper* wrapper = dynamic_cast<QCompleterWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */

struct lqtk_QCompleter_new_Args
{
    explicit lqtk_QCompleter_new_Args(bool explicitNew)
        : explicitNew(explicitNew)
    {}
    bool explicitNew;
    FromLua<QObject*> arg_1_1;
    FromLua<QAbstractItemModel*> arg_2_1;
    FromLua<QStringList> arg_3_1;
    ToLua<QCompleter*> rslt_1;
};

static int lqtk_QCompleter_new_doLua(lua_State* L)
{
    lqtk_QCompleter_new_Args* args = (lqtk_QCompleter_new_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    bool explicitNew = args->explicitNew;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QCompleterBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QCompleter> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QCompleterWrapper* rslt = 
                    new QCompleterWrapper();
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
          if (!lua_isnil(L, argOffs+1)) {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
          }
            {
                QCompleterWrapper* rslt = 
                    new QCompleterWrapper(args->arg_1_1.getValue());
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
                QCompleterWrapper* rslt = 
                    new QCompleterWrapper(args->arg_2_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
          if (!lua_isnil(L, argOffs+2)) {
            if (!args->arg_1_1.test(L, argOffs+2)) break;
          }
            {
                QCompleterWrapper* rslt = 
                    new QCompleterWrapper(args->arg_2_1.getValue(), args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_3_1.test(L, argOffs+1)) break;
            {
                QCompleterWrapper* rslt = 
                    new QCompleterWrapper(args->arg_3_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
          if (!lua_isnil(L, argOffs+1)) {
            args->arg_1_1.check(L, argOffs+1);
          }
            assert(false);
        }
        if (nargs == 2) { do {
            if (!args->arg_3_1.test(L, argOffs+1)) break;
          if (!lua_isnil(L, argOffs+2)) {
            if (!args->arg_1_1.test(L, argOffs+2)) break;
          }
            {
                QCompleterWrapper* rslt = 
                    new QCompleterWrapper(args->arg_3_1.getValue(), args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_2_1.check(L, argOffs+1);
          if (!lua_isnil(L, argOffs+2)) {
            args->arg_1_1.check(L, argOffs+2);
          }
            assert(false);
        }
        if (explicitNew) {
            return util::argCountError(L, "QCompleter", "new", nargs, "1,2,3");
        } else {
            return util::argCountError(L, "QCompleter", nullptr, nargs, "0,1,2");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QCompleter_constructor(lua_State* L, bool explicitNew)
{
    try {
        lqtk_QCompleter_new_Args args(explicitNew);
        return BindingUtil::callMethodFromLua(L, lqtk_QCompleter_new_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QCompleter_new(lua_State* L)
{
    return lqtk_QCompleter_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QCompleterBinding::pushObject(lua_State* L, QCompleter* objPtr, OwnerType ownerType)
{
    QCompleterWrapper* wrapper = dynamic_cast<QCompleterWrapper*>(objPtr);
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
        udata = ObjectUdata::pushNew<QCompleter>(L, hasUserValue);     // -> uval?, udata
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
    { "CaseInsensitivelySortedModel", Member::INTEGER,              (void*) QCompleter::CaseInsensitivelySortedModel },
    { "CaseSensitivelySortedModel",   Member::INTEGER,              (void*) QCompleter::CaseSensitivelySortedModel },
    { "InlineCompletion",             Member::INTEGER,              (void*) QCompleter::InlineCompletion },
    { "PopupCompletion",              Member::INTEGER,              (void*) QCompleter::PopupCompletion },
    { "UnfilteredPopupCompletion",    Member::INTEGER,              (void*) QCompleter::UnfilteredPopupCompletion },
    { "UnsortedModel",                Member::INTEGER,              (void*) QCompleter::UnsortedModel },
    { "caseSensitivity",              Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_caseSensitivity },
    { "children",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_children },
    { "complete",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_complete },
    { "completionColumn",             Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_completionColumn },
    { "completionCount",              Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_completionCount },
    { "completionMode",               Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_completionMode },
    { "completionModel",              Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_completionModel },
    { "completionPrefix",             Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_completionPrefix },
    { "completionRole",               Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_completionRole },
    { "connect",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_connect },
    { "currentCompletion",            Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_currentCompletion },
    { "currentIndex",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_currentIndex },
    { "currentRow",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_currentRow },
    { "event",                        Member::VIRTUAL_FUNCTION,     (void*) lqtk_QCompleter_event },
    { "eventFilter",                  Member::VIRTUAL_FUNCTION,     (void*) lqtk_QCompleter_eventFilter },
    { "filterMode",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_filterMode },
    { "maxVisibleItems",              Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_maxVisibleItems },
    { "model",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_model },
    { "modelSorting",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_modelSorting },
    { "objectName",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "parent",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "pathFromIndex",                Member::VIRTUAL_FUNCTION,     (void*) lqtk_QCompleter_pathFromIndex },
    { "popup",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_popup },
    { "setCaseSensitivity",           Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_setCaseSensitivity },
    { "setCompletionColumn",          Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_setCompletionColumn },
    { "setCompletionMode",            Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_setCompletionMode },
    { "setCompletionPrefix",          Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_setCompletionPrefix },
    { "setCompletionRole",            Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_setCompletionRole },
    { "setCurrentRow",                Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_setCurrentRow },
    { "setFilterMode",                Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_setFilterMode },
    { "setMaxVisibleItems",           Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_setMaxVisibleItems },
    { "setModel",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_setModel },
    { "setModelSorting",              Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_setModelSorting },
    { "setObjectName",                Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { "setPopup",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_setPopup },
    { "setWidget",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_setWidget },
    { "setWrapAround",                Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_setWrapAround },
    { "splitPath",                    Member::VIRTUAL_FUNCTION,     (void*) lqtk_QCompleter_splitPath },
    { "widget",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_widget },
    { "wrapAround",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QCompleter_wrapAround },
    { NULL,                           Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QCompleterBinding::classInfo = 
{
    "QCompleter",

    &QObjectBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    lqtk_QCompleter_constructor,
    lqtk_QCompleter_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    47,
    members
};

/* ============================================================================================ */

int QCompleterBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
