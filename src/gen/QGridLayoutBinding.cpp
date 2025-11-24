// Type: QGridLayout
// Base: QLayout

/* ============================================================================================ */

#include <QEvent>
#include <QGridLayout>
#include <QLayout>
#include <QLayoutItem>
#include <QObject>
#include <QRect>
#include <QSize>
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
#include "QEventBinding.hpp"
#include "QGridLayoutBinding.hpp"
#include "QLayoutBinding.hpp"
#include "QLayoutItemBinding.hpp"
#include "QObjectBinding.hpp"
#include "QRectBinding.hpp"
#include "QSizeBinding.hpp"
#include "QWidgetBinding.hpp"
#include "QObjectWrapper.hpp"
#include "QLayoutWrapper.hpp"
#include "QGridLayoutWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QGridLayoutWrapper::QGridLayoutWrapper()
        : QGridLayout(),
          lqtk_stateGuard(nullptr)
    {}
    QGridLayoutWrapper::QGridLayoutWrapper(
                   QWidget* arg1) 
        : QGridLayout(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QGridLayoutWrapper::lqtk_destruct(lua_State* L) {
        QGridLayout* objPtr = (QGridLayout*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QGridLayoutWrapper::~QGridLayoutWrapper() {
        trace::printf("Deleting lqtk::QGridLayoutWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->L;
            if (L) {
                QGridLayout* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QGridLayout");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

    void QGridLayoutWrapper::lqtk_QGridLayout_addItem(
                   QLayoutItem* arg1) 
    {
        return QGridLayout::addItem(
                   arg1); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QGridLayoutWrapper::addItem1_doLua(lua_State* L) 
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

    void QGridLayoutWrapper::addItem(
                   QLayoutItem* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            addItem1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, addItem1_doLua, &args, "QGridLayout", "addItem");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QGridLayout::addItem(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QGridLayoutWrapper::count1_doLua(lua_State* L) 
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

    int QGridLayoutWrapper::count() const
    {
        lua_State* L = getL();
        if (L) {
            count1CallArgs args(
                    const_cast<QGridLayoutWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, count1_doLua, &args, "QGridLayout", "count");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QGridLayout", "count", msg);
                }
            }
        }
        return QGridLayout::count();
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QGridLayoutWrapper::hasHeightForWidth1_doLua(lua_State* L) 
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

    bool QGridLayoutWrapper::hasHeightForWidth() const
    {
        lua_State* L = getL();
        if (L) {
            hasHeightForWidth1CallArgs args(
                    const_cast<QGridLayoutWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, hasHeightForWidth1_doLua, &args, "QGridLayout", "hasHeightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QGridLayout", "hasHeightForWidth", msg);
                }
            }
        }
        return QGridLayout::hasHeightForWidth();
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QGridLayoutWrapper::heightForWidth1_doLua(lua_State* L) 
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

    int QGridLayoutWrapper::heightForWidth(
                   int arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            heightForWidth1CallArgs args(
                    const_cast<QGridLayoutWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, heightForWidth1_doLua, &args, "QGridLayout", "heightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QGridLayout", "heightForWidth", msg);
                }
            }
        }
        return QGridLayout::heightForWidth(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QGridLayoutWrapper::itemAt1_doLua(lua_State* L) 
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

    QLayoutItem* QGridLayoutWrapper::itemAt(
                   int arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            itemAt1CallArgs args(
                    const_cast<QGridLayoutWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, itemAt1_doLua, &args, "QGridLayout", "itemAt");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QLayoutItem*?'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QGridLayout", "itemAt", msg);
                }
            }
        }
        return QGridLayout::itemAt(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QGridLayoutWrapper::sizeHint1_doLua(lua_State* L) 
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

    QSize QGridLayoutWrapper::sizeHint() const
    {
        lua_State* L = getL();
        if (L) {
            sizeHint1CallArgs args(
                    const_cast<QGridLayoutWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, sizeHint1_doLua, &args, "QGridLayout", "sizeHint");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QSize'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QGridLayout", "sizeHint", msg);
                }
            }
        }
        return QGridLayout::sizeHint();
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QGridLayoutWrapper::takeAt1_doLua(lua_State* L) 
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

    QLayoutItem* QGridLayoutWrapper::takeAt(
                   int arg2) 
    {
        lua_State* L = getL();
        if (L) {
            takeAt1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, takeAt1_doLua, &args, "QGridLayout", "takeAt");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QLayoutItem@?'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QGridLayout", "takeAt", msg);
                }
            }
        }
        return QGridLayout::takeAt(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    QRect QGridLayoutWrapper::geometry() const
    {
        lua_State* L = getL();
        if (L) {
            QLayoutWrapper::geometry1CallArgs args(
                    const_cast<QGridLayoutWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, QLayoutWrapper::geometry1_doLua, &args, "QGridLayout", "geometry");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QRect'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QGridLayout", "geometry", msg);
                }
            }
        }
        return QGridLayout::geometry();
    }

/* -------------------------------------------------------------------------------------------- */
    void QGridLayoutWrapper::setGeometry(
                   const QRect& arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QLayoutWrapper::setGeometry1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QLayoutWrapper::setGeometry1_doLua, &args, "QGridLayout", "setGeometry");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QGridLayout::setGeometry(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QGridLayoutWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QObjectWrapper::event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QObjectWrapper::event1_doLua, &args, "QGridLayout", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QGridLayout", "event", msg);
                }
            }
        }
        return QGridLayout::event(
                    arg2); 
    }

} // namespace lqtk

/* ============================================================================================ */

extern "C" {
    int lqtk_QLayout_addWidget(lua_State* L);
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


struct lqtk_QGridLayout_addItem_Args
{
    FromLua<QGridLayout*> arg_1_1;
    FromLua<QLayoutItem*> arg_2_1;
};

extern "C" int lqtk_QGridLayout_addItem(lua_State* L)
{
    lqtk_QGridLayout_addItem_Args  argValues;
    lqtk_QGridLayout_addItem_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QGridLayoutExportWrapper* wrapper = dynamic_cast<QGridLayoutExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'addItem' is protected in QGridLayout");
                }
                    wrapper->lqtk_QGridLayout_addItem(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QGridLayout", "addItem", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QGridLayout_count_Args
{
    FromLua<QGridLayout*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QGridLayout_count(lua_State* L)
{
    lqtk_QGridLayout_count_Args  argValues;
    lqtk_QGridLayout_count_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QGridLayout::count();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QGridLayout", "count", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QGridLayout_hasHeightForWidth_Args
{
    FromLua<QGridLayout*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QGridLayout_hasHeightForWidth(lua_State* L)
{
    lqtk_QGridLayout_hasHeightForWidth_Args  argValues;
    lqtk_QGridLayout_hasHeightForWidth_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QGridLayout::hasHeightForWidth();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QGridLayout", "hasHeightForWidth", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QGridLayout_heightForWidth_Args
{
    FromLua<QGridLayout*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QGridLayout_heightForWidth(lua_State* L)
{
    lqtk_QGridLayout_heightForWidth_Args  argValues;
    lqtk_QGridLayout_heightForWidth_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QGridLayout::heightForWidth(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QGridLayout", "heightForWidth", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QGridLayout_itemAt_Args
{
    FromLua<QGridLayout*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QLayoutItem*> rslt_1;
};

extern "C" int lqtk_QGridLayout_itemAt(lua_State* L)
{
    lqtk_QGridLayout_itemAt_Args  argValues;
    lqtk_QGridLayout_itemAt_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QGridLayout::itemAt(args->arg_2_1.getValue());
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QGridLayout", "itemAt", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QGridLayout_sizeHint_Args
{
    FromLua<QGridLayout*> arg_1_1;
    ToLua<QSize*> rslt_1;
};

extern "C" int lqtk_QGridLayout_sizeHint(lua_State* L)
{
    lqtk_QGridLayout_sizeHint_Args  argValues;
    lqtk_QGridLayout_sizeHint_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QGridLayout::sizeHint();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QGridLayout", "sizeHint", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QGridLayout_takeAt_Args
{
    FromLua<QGridLayout*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QLayoutItem*> rslt_1;
};

extern "C" int lqtk_QGridLayout_takeAt(lua_State* L)
{
    lqtk_QGridLayout_takeAt_Args  argValues;
    lqtk_QGridLayout_takeAt_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QGridLayout::takeAt(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QGridLayout", "takeAt", nargs, "2");
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
        QGridLayoutBinding::QType* ptr = static_cast<QGridLayoutBinding::QType*>(objectPtr);
        if (targetClassInfo == &QGridLayoutBinding::classInfo) {
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
        QGridLayout* ptr = (QGridLayout*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QGridLayout* obj = (QGridLayout*) objectPtr;
        
        QGridLayoutWrapper* wrapper = dynamic_cast<QGridLayoutWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */


struct lqtk_QGridLayout_new_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<QGridLayout*> rslt_1;
};

extern "C" int lqtk_QGridLayout_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QGridLayout_new_Args  argValues;
    lqtk_QGridLayout_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QGridLayoutBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QGridLayout> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QGridLayoutWrapper* rslt = 
                    new QGridLayoutWrapper();
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
                QGridLayoutWrapper* rslt = 
                    new QGridLayoutWrapper(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QGridLayout", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QGridLayout", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QGridLayout_new(lua_State* L)
{
    return lqtk_QGridLayout_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QGridLayoutBinding::pushObject(lua_State* L, QGridLayout* objPtr, OwnerType ownerType)
{
    QGridLayoutWrapper* wrapper = dynamic_cast<QGridLayoutWrapper*>(objPtr);
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
        udata = ObjectUdata::pushNew<QGridLayout>(L, hasUserValue);     // -> uval?, udata
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
    { "addItem",           Member::VIRTUAL_FUNCTION,     (void*) lqtk_QGridLayout_addItem },
    { "addWidget",         Member::NORMAL_FUNCTION,      (void*) lqtk_QLayout_addWidget },
    { "children",          Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_children },
    { "connect",           Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_connect },
    { "count",             Member::VIRTUAL_FUNCTION,     (void*) lqtk_QGridLayout_count },
    { "event",             Member::VIRTUAL_FUNCTION,     (void*) lqtk_QObject_event },
    { "geometry",          Member::VIRTUAL_FUNCTION,     (void*) lqtk_QLayout_geometry },
    { "hasHeightForWidth", Member::VIRTUAL_FUNCTION,     (void*) lqtk_QGridLayout_hasHeightForWidth },
    { "heightForWidth",    Member::VIRTUAL_FUNCTION,     (void*) lqtk_QGridLayout_heightForWidth },
    { "itemAt",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QGridLayout_itemAt },
    { "objectName",        Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "parent",            Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "parentWidget",      Member::NORMAL_FUNCTION,      (void*) lqtk_QLayout_parentWidget },
    { "setGeometry",       Member::VIRTUAL_FUNCTION,     (void*) lqtk_QLayout_setGeometry },
    { "setObjectName",     Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",         Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { "sizeHint",          Member::VIRTUAL_FUNCTION,     (void*) lqtk_QGridLayout_sizeHint },
    { "takeAt",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QGridLayout_takeAt },
    { NULL,                Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QGridLayoutBinding::classInfo = 
{
    "QGridLayout",

    &QLayoutBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    lqtk_QGridLayout_constructor,
    lqtk_QGridLayout_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    18,
    members
};

/* ============================================================================================ */

int QGridLayoutBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
