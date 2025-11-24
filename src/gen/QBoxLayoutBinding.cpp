// Type: QBoxLayout
// Base: QLayout

/* ============================================================================================ */

#include <QBoxLayout>
#include <QEvent>
#include <QHBoxLayout>
#include <QLayout>
#include <QLayoutItem>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QVBoxLayout>
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
#include "QBoxLayoutBinding.hpp"
#include "QEventBinding.hpp"
#include "QHBoxLayoutBinding.hpp"
#include "QLayoutBinding.hpp"
#include "QLayoutItemBinding.hpp"
#include "QObjectBinding.hpp"
#include "QRectBinding.hpp"
#include "QSizeBinding.hpp"
#include "QVBoxLayoutBinding.hpp"
#include "QWidgetBinding.hpp"
#include "QtBinding.hpp"
#include "QObjectWrapper.hpp"
#include "QLayoutWrapper.hpp"
#include "QBoxLayoutWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QBoxLayoutWrapper::QBoxLayoutWrapper(
                   QBoxLayout::Direction arg1) 
        : QBoxLayout(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}
    QBoxLayoutWrapper::QBoxLayoutWrapper(
                   QBoxLayout::Direction arg1, 
                   QWidget* arg2) 
        : QBoxLayout(
                   arg1,
                   arg2),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QBoxLayoutWrapper::lqtk_destruct(lua_State* L) {
        QBoxLayout* objPtr = (QBoxLayout*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QBoxLayoutWrapper::~QBoxLayoutWrapper() {
        trace::printf("Deleting lqtk::QBoxLayoutWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->L;
            if (L) {
                QBoxLayout* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QBoxLayout");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QBoxLayoutWrapper::addItem1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        addItem1CallArgs* args = (addItem1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "addItem") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->arg2.push(L, NOT_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 2, 0, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
            }
        }
        return 0;
    }

    void QBoxLayoutWrapper::addItem(
                   QLayoutItem* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            addItem1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, addItem1_doLua, &args, "QBoxLayout", "addItem");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QBoxLayout::addItem(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QBoxLayoutWrapper::count1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        count1CallArgs* args = (count1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "count") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 1, 1, ehIndex);
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

    int QBoxLayoutWrapper::count() const
    {
        lua_State* L = getL();
        if (L) {
            count1CallArgs args(
                    const_cast<QBoxLayoutWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, count1_doLua, &args, "QBoxLayout", "count");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QBoxLayout", "count", msg);
                }
            }
        }
        return QBoxLayout::count();
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QBoxLayoutWrapper::hasHeightForWidth1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        hasHeightForWidth1CallArgs* args = (hasHeightForWidth1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "hasHeightForWidth") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 1, 1, ehIndex);
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

    bool QBoxLayoutWrapper::hasHeightForWidth() const
    {
        lua_State* L = getL();
        if (L) {
            hasHeightForWidth1CallArgs args(
                    const_cast<QBoxLayoutWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, hasHeightForWidth1_doLua, &args, "QBoxLayout", "hasHeightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QBoxLayout", "hasHeightForWidth", msg);
                }
            }
        }
        return QBoxLayout::hasHeightForWidth();
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QBoxLayoutWrapper::heightForWidth1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        heightForWidth1CallArgs* args = (heightForWidth1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "heightForWidth") != LUA_TNIL) {        // -> uval, eh, member?
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

    int QBoxLayoutWrapper::heightForWidth(
                   int arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            heightForWidth1CallArgs args(
                    const_cast<QBoxLayoutWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, heightForWidth1_doLua, &args, "QBoxLayout", "heightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QBoxLayout", "heightForWidth", msg);
                }
            }
        }
        return QBoxLayout::heightForWidth(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QBoxLayoutWrapper::itemAt1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        itemAt1CallArgs* args = (itemAt1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "itemAt") != LUA_TNIL) {        // -> uval, eh, member?
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
                if (lua_isnil(L, -1)) {
                    args->hasValidResult = true;
                } else {
                    args->hasValidResult = args->rslt.test(L, -1);
                }
            }
        }
        return 0;
    }

    QLayoutItem* QBoxLayoutWrapper::itemAt(
                   int arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            itemAt1CallArgs args(
                    const_cast<QBoxLayoutWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, itemAt1_doLua, &args, "QBoxLayout", "itemAt");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QLayoutItem*?'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QBoxLayout", "itemAt", msg);
                }
            }
        }
        return QBoxLayout::itemAt(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QBoxLayoutWrapper::sizeHint1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        sizeHint1CallArgs* args = (sizeHint1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "sizeHint") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 1, 1, ehIndex);
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

    QSize QBoxLayoutWrapper::sizeHint() const
    {
        lua_State* L = getL();
        if (L) {
            sizeHint1CallArgs args(
                    const_cast<QBoxLayoutWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, sizeHint1_doLua, &args, "QBoxLayout", "sizeHint");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QSize'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QBoxLayout", "sizeHint", msg);
                }
            }
        }
        return QBoxLayout::sizeHint();
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QBoxLayoutWrapper::takeAt1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        takeAt1CallArgs* args = (takeAt1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "takeAt") != LUA_TNIL) {        // -> uval, eh, member?
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
                if (lua_isnil(L, -1)) {
                    args->hasValidResult = true;
                } else {
                    args->hasValidResult = args->rslt.test(L, -1);
                }
            }
        }
        return 0;
    }

    QLayoutItem* QBoxLayoutWrapper::takeAt(
                   int arg2) 
    {
        lua_State* L = getL();
        if (L) {
            takeAt1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, takeAt1_doLua, &args, "QBoxLayout", "takeAt");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QLayoutItem@?'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QBoxLayout", "takeAt", msg);
                }
            }
        }
        return QBoxLayout::takeAt(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    QRect QBoxLayoutWrapper::geometry() const
    {
        lua_State* L = getL();
        if (L) {
            QLayoutWrapper::geometry1CallArgs args(
                    const_cast<QBoxLayoutWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, QLayoutWrapper::geometry1_doLua, &args, "QBoxLayout", "geometry");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QRect'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QBoxLayout", "geometry", msg);
                }
            }
        }
        return QBoxLayout::geometry();
    }

/* -------------------------------------------------------------------------------------------- */
    void QBoxLayoutWrapper::setGeometry(
                   const QRect& arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QLayoutWrapper::setGeometry1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QLayoutWrapper::setGeometry1_doLua, &args, "QBoxLayout", "setGeometry");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QBoxLayout::setGeometry(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QBoxLayoutWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QObjectWrapper::event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QObjectWrapper::event1_doLua, &args, "QBoxLayout", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QBoxLayout", "event", msg);
                }
            }
        }
        return QBoxLayout::event(
                    arg2); 
    }

} // namespace lqtk

/* ============================================================================================ */

extern "C" {
    int lqtk_QLayout_geometry(lua_State* L);
    int lqtk_QLayout_parentWidget(lua_State* L);
    int lqtk_QLayout_setGeometry(lua_State* L);
    int lqtk_QObject_children(lua_State* L);
    int lqtk_QObject_connect(lua_State* L);
    int lqtk_QObject_event(lua_State* L);
    int lqtk_QObject_objectName(lua_State* L);
    int lqtk_QObject_parent(lua_State* L);
    int lqtk_QObject_setObjectName(lua_State* L);
    int lqtk_QObject_setParent(lua_State* L);
}

/* ============================================================================================ */


struct lqtk_QBoxLayout_addItem_Args
{
    FromLua<QBoxLayout*> arg_1_1;
    FromLua<QLayoutItem*> arg_2_1;
};

extern "C" int lqtk_QBoxLayout_addItem(lua_State* L)
{
    lqtk_QBoxLayout_addItem_Args  argValues;
    lqtk_QBoxLayout_addItem_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QBoxLayout::addItem(args->arg_2_1.getValue());
                args->arg_2_1.unsetOwnership();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QBoxLayout", "addItem", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QBoxLayout_addLayout_Args
{
    FromLua<QBoxLayout*> arg_1_1;
    FromLua<QLayout*> arg_2_1;
    FromLua<int> arg_3_1;
};

extern "C" int lqtk_QBoxLayout_addLayout(lua_State* L)
{
    lqtk_QBoxLayout_addLayout_Args  argValues;
    lqtk_QBoxLayout_addLayout_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QBoxLayout::addLayout(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QBoxLayout::addLayout(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QBoxLayout", "addLayout", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QBoxLayout_addWidget_Args
{
    FromLua<QBoxLayout*> arg_1_1;
    FromLua<QWidget*> arg_2_1;
    FromLua<int> arg_3_1;
    FromLua<Qt::Alignment> arg_4_1;
};

extern "C" int lqtk_QBoxLayout_addWidget(lua_State* L)
{
    lqtk_QBoxLayout_addWidget_Args  argValues;
    lqtk_QBoxLayout_addWidget_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QBoxLayout::addWidget(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QBoxLayout::addWidget(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_4_1.check(L, argOffs+4);
            {
                    args->arg_1_1.getValue()->QBoxLayout::addWidget(args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_4_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QBoxLayout", "addWidget", nargs, "2,3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QBoxLayout_count_Args
{
    FromLua<QBoxLayout*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QBoxLayout_count(lua_State* L)
{
    lqtk_QBoxLayout_count_Args  argValues;
    lqtk_QBoxLayout_count_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QBoxLayout::count();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QBoxLayout", "count", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QBoxLayout_hasHeightForWidth_Args
{
    FromLua<QBoxLayout*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QBoxLayout_hasHeightForWidth(lua_State* L)
{
    lqtk_QBoxLayout_hasHeightForWidth_Args  argValues;
    lqtk_QBoxLayout_hasHeightForWidth_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QBoxLayout::hasHeightForWidth();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QBoxLayout", "hasHeightForWidth", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QBoxLayout_heightForWidth_Args
{
    FromLua<QBoxLayout*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QBoxLayout_heightForWidth(lua_State* L)
{
    lqtk_QBoxLayout_heightForWidth_Args  argValues;
    lqtk_QBoxLayout_heightForWidth_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QBoxLayout::heightForWidth(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QBoxLayout", "heightForWidth", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QBoxLayout_itemAt_Args
{
    FromLua<QBoxLayout*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QLayoutItem*> rslt_1;
};

extern "C" int lqtk_QBoxLayout_itemAt(lua_State* L)
{
    lqtk_QBoxLayout_itemAt_Args  argValues;
    lqtk_QBoxLayout_itemAt_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QBoxLayout::itemAt(args->arg_2_1.getValue());
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QBoxLayout", "itemAt", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QBoxLayout_sizeHint_Args
{
    FromLua<QBoxLayout*> arg_1_1;
    ToLua<QSize*> rslt_1;
};

extern "C" int lqtk_QBoxLayout_sizeHint(lua_State* L)
{
    lqtk_QBoxLayout_sizeHint_Args  argValues;
    lqtk_QBoxLayout_sizeHint_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QBoxLayout::sizeHint();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QBoxLayout", "sizeHint", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QBoxLayout_takeAt_Args
{
    FromLua<QBoxLayout*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QLayoutItem*> rslt_1;
};

extern "C" int lqtk_QBoxLayout_takeAt(lua_State* L)
{
    lqtk_QBoxLayout_takeAt_Args  argValues;
    lqtk_QBoxLayout_takeAt_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QBoxLayout::takeAt(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QBoxLayout", "takeAt", nargs, "2");
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
        QBoxLayoutBinding::QType* ptr = static_cast<QBoxLayoutBinding::QType*>(objectPtr);
        if (targetClassInfo == &QBoxLayoutBinding::classInfo) {
            return ptr;
        }
        if (targetClassInfo == &QLayoutBinding::classInfo) {
            return static_cast<QLayoutBinding::QType*>(ptr);
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
        QBoxLayout* ptr = (QBoxLayout*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QBoxLayout* obj = (QBoxLayout*) objectPtr;
        
        QBoxLayoutWrapper* wrapper = dynamic_cast<QBoxLayoutWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */


struct lqtk_QBoxLayout_new_Args
{
    FromLua<QBoxLayout::Direction> arg_1_1;
    FromLua<QWidget*> arg_2_1;
    ToLua<QBoxLayout*> rslt_1;
};

extern "C" int lqtk_QBoxLayout_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QBoxLayout_new_Args  argValues;
    lqtk_QBoxLayout_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QBoxLayoutBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QBoxLayout> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                QBoxLayoutWrapper* rslt = 
                    new QBoxLayoutWrapper(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QBoxLayoutWrapper* rslt = 
                    new QBoxLayoutWrapper(args->arg_1_1.getValue(), args->arg_2_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QBoxLayout", "new", nargs, "2,3");
        } else {
            return util::argCountError(L, "QBoxLayout", nullptr, nargs, "1,2");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QBoxLayout_new(lua_State* L)
{
    return lqtk_QBoxLayout_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QBoxLayoutBinding::pushObject(lua_State* L, QBoxLayout* objPtr, OwnerType ownerType)
{
    QBoxLayoutWrapper* wrapper = dynamic_cast<QBoxLayoutWrapper*>(objPtr);
    if (!wrapper) {
        QHBoxLayout* ptr1 = dynamic_cast<QHBoxLayout*>(objPtr);
        if (ptr1) {
            return QHBoxLayoutBinding::pushObject(L, ptr1, ownerType);
        }
        QVBoxLayout* ptr2 = dynamic_cast<QVBoxLayout*>(objPtr);
        if (ptr2) {
            return QVBoxLayoutBinding::pushObject(L, ptr2, ownerType);
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
        udata = ObjectUdata::pushNew<QBoxLayout>(L, hasUserValue);     // -> uval?, udata
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
    { "BottomToTop",       Member::INTEGER,              (void*) QBoxLayout::BottomToTop },
    { "LeftToRight",       Member::INTEGER,              (void*) QBoxLayout::LeftToRight },
    { "RightToLeft",       Member::INTEGER,              (void*) QBoxLayout::RightToLeft },
    { "TopToBottom",       Member::INTEGER,              (void*) QBoxLayout::TopToBottom },
    { "addItem",           Member::VIRTUAL_FUNCTION,     (void*) lqtk_QBoxLayout_addItem },
    { "addLayout",         Member::NORMAL_FUNCTION,      (void*) lqtk_QBoxLayout_addLayout },
    { "addWidget",         Member::NORMAL_FUNCTION,      (void*) lqtk_QBoxLayout_addWidget },
    { "children",          Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_children },
    { "connect",           Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_connect },
    { "count",             Member::VIRTUAL_FUNCTION,     (void*) lqtk_QBoxLayout_count },
    { "event",             Member::VIRTUAL_FUNCTION,     (void*) lqtk_QObject_event },
    { "geometry",          Member::VIRTUAL_FUNCTION,     (void*) lqtk_QLayout_geometry },
    { "hasHeightForWidth", Member::VIRTUAL_FUNCTION,     (void*) lqtk_QBoxLayout_hasHeightForWidth },
    { "heightForWidth",    Member::VIRTUAL_FUNCTION,     (void*) lqtk_QBoxLayout_heightForWidth },
    { "itemAt",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QBoxLayout_itemAt },
    { "objectName",        Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "parent",            Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "parentWidget",      Member::NORMAL_FUNCTION,      (void*) lqtk_QLayout_parentWidget },
    { "setGeometry",       Member::VIRTUAL_FUNCTION,     (void*) lqtk_QLayout_setGeometry },
    { "setObjectName",     Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",         Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { "sizeHint",          Member::VIRTUAL_FUNCTION,     (void*) lqtk_QBoxLayout_sizeHint },
    { "takeAt",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QBoxLayout_takeAt },
    { NULL,                Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QBoxLayoutBinding::classInfo = 
{
    "QBoxLayout",

    &QLayoutBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    lqtk_QBoxLayout_constructor,
    lqtk_QBoxLayout_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    23,
    members
};

/* ============================================================================================ */

int QBoxLayoutBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
