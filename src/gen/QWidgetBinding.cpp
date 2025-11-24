// Type: QWidget
// Base: QObject

/* ============================================================================================ */

#include <QAbstractButton>
#include <QAction>
#include <QCloseEvent>
#include <QDialog>
#include <QDialogButtonBox>
#include <QEvent>
#include <QFont>
#include <QFrame>
#include <QLayout>
#include <QLineEdit>
#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QMouseEvent>
#include <QObject>
#include <QOpenGLWidget>
#include <QPaintEvent>
#include <QPalette>
#include <QPoint>
#include <QRect>
#include <QResizeEvent>
#include <QSize>
#include <QSizePolicy>
#include <QString>
#include <QTabWidget>
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
#include "QAbstractButtonBinding.hpp"
#include "QActionBinding.hpp"
#include "QCloseEventBinding.hpp"
#include "QDialogBinding.hpp"
#include "QDialogButtonBoxBinding.hpp"
#include "QEventBinding.hpp"
#include "QFontBinding.hpp"
#include "QFrameBinding.hpp"
#include "QLayoutBinding.hpp"
#include "QLineEditBinding.hpp"
#include "QMainWindowBinding.hpp"
#include "QMenuBinding.hpp"
#include "QMenuBarBinding.hpp"
#include "QMouseEventBinding.hpp"
#include "QObjectBinding.hpp"
#include "QOpenGLWidgetBinding.hpp"
#include "QPaintEventBinding.hpp"
#include "QPaletteBinding.hpp"
#include "QPointBinding.hpp"
#include "QRectBinding.hpp"
#include "QResizeEventBinding.hpp"
#include "QSizeBinding.hpp"
#include "QSizePolicyBinding.hpp"
#include "QStringBinding.hpp"
#include "QTabWidgetBinding.hpp"
#include "QWidgetBinding.hpp"
#include "QtBinding.hpp"
#include "QObjectWrapper.hpp"
#include "QWidgetWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QWidgetWrapper::QWidgetWrapper()
        : QWidget(),
          lqtk_stateGuard(nullptr)
    {}
    QWidgetWrapper::QWidgetWrapper(
                   QWidget* arg1) 
        : QWidget(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}
    QWidgetWrapper::QWidgetWrapper(
                   QWidget* arg1, 
                   Qt::WindowFlags arg2) 
        : QWidget(
                   arg1,
                   arg2),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QWidgetWrapper::lqtk_destruct(lua_State* L) {
        QWidget* objPtr = (QWidget*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QWidgetWrapper::~QWidgetWrapper() {
        trace::printf("Deleting lqtk::QWidgetWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->L;
            if (L) {
                QWidget* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QWidget");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

    void QWidgetWrapper::lqtk_QWidget_closeEvent(
                   QCloseEvent* arg1) 
    {
        return QWidget::closeEvent(
                   arg1); 
    }

    bool QWidgetWrapper::lqtk_QWidget_event(
                   QEvent* arg1) 
    {
        return QWidget::event(
                   arg1); 
    }

    void QWidgetWrapper::lqtk_QWidget_mouseDoubleClickEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseDoubleClickEvent(
                   arg1); 
    }

    void QWidgetWrapper::lqtk_QWidget_mouseMoveEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseMoveEvent(
                   arg1); 
    }

    void QWidgetWrapper::lqtk_QWidget_mousePressEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mousePressEvent(
                   arg1); 
    }

    void QWidgetWrapper::lqtk_QWidget_mouseReleaseEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseReleaseEvent(
                   arg1); 
    }

    void QWidgetWrapper::lqtk_QWidget_paintEvent(
                   QPaintEvent* arg1) 
    {
        return QWidget::paintEvent(
                   arg1); 
    }

    void QWidgetWrapper::lqtk_QWidget_resizeEvent(
                   QResizeEvent* arg1) 
    {
        return QWidget::resizeEvent(
                   arg1); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QWidgetWrapper::closeEvent1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        closeEvent1CallArgs* args = (closeEvent1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "closeEvent") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                int memberIdx = lua_gettop(L);
                ObjectUdata* temp2 = args->arg2.push(L, NOT_OWNER);
                int tempIdx2 = lua_gettop(L);
                lua_pushvalue(L, memberIdx);
                args->arg1.push(L, NOT_OWNER);
                lua_pushvalue(L, tempIdx2);
                args->wasCalled = true;
                int rc = lua_pcall(L, 2, 0, ehIndex);
                temp2->invalidate(L, tempIdx2);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
            }
        }
        return 0;
    }

    void QWidgetWrapper::closeEvent(
                   QCloseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            closeEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, closeEvent1_doLua, &args, "QWidget", "closeEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QWidget::closeEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QWidgetWrapper::event1_doLua(lua_State* L) 
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

    bool QWidgetWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, event1_doLua, &args, "QWidget", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QWidget", "event", msg);
                }
            }
        }
        return QWidget::event(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QWidgetWrapper::hasHeightForWidth1_doLua(lua_State* L) 
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

    bool QWidgetWrapper::hasHeightForWidth() const
    {
        lua_State* L = getL();
        if (L) {
            hasHeightForWidth1CallArgs args(
                    const_cast<QWidgetWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, hasHeightForWidth1_doLua, &args, "QWidget", "hasHeightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QWidget", "hasHeightForWidth", msg);
                }
            }
        }
        return QWidget::hasHeightForWidth();
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QWidgetWrapper::heightForWidth1_doLua(lua_State* L) 
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

    int QWidgetWrapper::heightForWidth(
                   int arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            heightForWidth1CallArgs args(
                    const_cast<QWidgetWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, heightForWidth1_doLua, &args, "QWidget", "heightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QWidget", "heightForWidth", msg);
                }
            }
        }
        return QWidget::heightForWidth(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QWidgetWrapper::mouseDoubleClickEvent1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        mouseDoubleClickEvent1CallArgs* args = (mouseDoubleClickEvent1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "mouseDoubleClickEvent") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                int memberIdx = lua_gettop(L);
                ObjectUdata* temp2 = args->arg2.push(L, NOT_OWNER);
                int tempIdx2 = lua_gettop(L);
                lua_pushvalue(L, memberIdx);
                args->arg1.push(L, NOT_OWNER);
                lua_pushvalue(L, tempIdx2);
                args->wasCalled = true;
                int rc = lua_pcall(L, 2, 0, ehIndex);
                temp2->invalidate(L, tempIdx2);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
            }
        }
        return 0;
    }

    void QWidgetWrapper::mouseDoubleClickEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            mouseDoubleClickEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, mouseDoubleClickEvent1_doLua, &args, "QWidget", "mouseDoubleClickEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QWidget::mouseDoubleClickEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QWidgetWrapper::mouseMoveEvent1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        mouseMoveEvent1CallArgs* args = (mouseMoveEvent1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "mouseMoveEvent") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                int memberIdx = lua_gettop(L);
                ObjectUdata* temp2 = args->arg2.push(L, NOT_OWNER);
                int tempIdx2 = lua_gettop(L);
                lua_pushvalue(L, memberIdx);
                args->arg1.push(L, NOT_OWNER);
                lua_pushvalue(L, tempIdx2);
                args->wasCalled = true;
                int rc = lua_pcall(L, 2, 0, ehIndex);
                temp2->invalidate(L, tempIdx2);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
            }
        }
        return 0;
    }

    void QWidgetWrapper::mouseMoveEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            mouseMoveEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, mouseMoveEvent1_doLua, &args, "QWidget", "mouseMoveEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QWidget::mouseMoveEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QWidgetWrapper::mousePressEvent1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        mousePressEvent1CallArgs* args = (mousePressEvent1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "mousePressEvent") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                int memberIdx = lua_gettop(L);
                ObjectUdata* temp2 = args->arg2.push(L, NOT_OWNER);
                int tempIdx2 = lua_gettop(L);
                lua_pushvalue(L, memberIdx);
                args->arg1.push(L, NOT_OWNER);
                lua_pushvalue(L, tempIdx2);
                args->wasCalled = true;
                int rc = lua_pcall(L, 2, 0, ehIndex);
                temp2->invalidate(L, tempIdx2);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
            }
        }
        return 0;
    }

    void QWidgetWrapper::mousePressEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            mousePressEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, mousePressEvent1_doLua, &args, "QWidget", "mousePressEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QWidget::mousePressEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QWidgetWrapper::mouseReleaseEvent1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        mouseReleaseEvent1CallArgs* args = (mouseReleaseEvent1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "mouseReleaseEvent") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                int memberIdx = lua_gettop(L);
                ObjectUdata* temp2 = args->arg2.push(L, NOT_OWNER);
                int tempIdx2 = lua_gettop(L);
                lua_pushvalue(L, memberIdx);
                args->arg1.push(L, NOT_OWNER);
                lua_pushvalue(L, tempIdx2);
                args->wasCalled = true;
                int rc = lua_pcall(L, 2, 0, ehIndex);
                temp2->invalidate(L, tempIdx2);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
            }
        }
        return 0;
    }

    void QWidgetWrapper::mouseReleaseEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            mouseReleaseEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, mouseReleaseEvent1_doLua, &args, "QWidget", "mouseReleaseEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QWidget::mouseReleaseEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QWidgetWrapper::paintEvent1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        paintEvent1CallArgs* args = (paintEvent1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "paintEvent") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                int memberIdx = lua_gettop(L);
                ObjectUdata* temp2 = args->arg2.push(L, NOT_OWNER);
                int tempIdx2 = lua_gettop(L);
                lua_pushvalue(L, memberIdx);
                args->arg1.push(L, NOT_OWNER);
                lua_pushvalue(L, tempIdx2);
                args->wasCalled = true;
                int rc = lua_pcall(L, 2, 0, ehIndex);
                temp2->invalidate(L, tempIdx2);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
            }
        }
        return 0;
    }

    void QWidgetWrapper::paintEvent(
                   QPaintEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            paintEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, paintEvent1_doLua, &args, "QWidget", "paintEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QWidget::paintEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QWidgetWrapper::resizeEvent1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        resizeEvent1CallArgs* args = (resizeEvent1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "resizeEvent") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                int memberIdx = lua_gettop(L);
                ObjectUdata* temp2 = args->arg2.push(L, NOT_OWNER);
                int tempIdx2 = lua_gettop(L);
                lua_pushvalue(L, memberIdx);
                args->arg1.push(L, NOT_OWNER);
                lua_pushvalue(L, tempIdx2);
                args->wasCalled = true;
                int rc = lua_pcall(L, 2, 0, ehIndex);
                temp2->invalidate(L, tempIdx2);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
            }
        }
        return 0;
    }

    void QWidgetWrapper::resizeEvent(
                   QResizeEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            resizeEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, resizeEvent1_doLua, &args, "QWidget", "resizeEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QWidget::resizeEvent(
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


struct lqtk_QWidget_keyboardGrabber_Args
{
    ToLua<QWidget*> rslt_1;
};

extern "C" int lqtk_QWidget_keyboardGrabber(lua_State* L)
{
    lqtk_QWidget_keyboardGrabber_Args  argValues;
    lqtk_QWidget_keyboardGrabber_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 =
                    QWidget::keyboardGrabber();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "keyboardGrabber", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_mouseGrabber_Args
{
    ToLua<QWidget*> rslt_1;
};

extern "C" int lqtk_QWidget_mouseGrabber(lua_State* L)
{
    lqtk_QWidget_mouseGrabber_Args  argValues;
    lqtk_QWidget_mouseGrabber_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 =
                    QWidget::mouseGrabber();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "mouseGrabber", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_setTabOrder_Args
{
    FromLua<QWidget*> arg_1_1;
    FromLua<QWidget*> arg_1_2;
};

extern "C" int lqtk_QWidget_setTabOrder(lua_State* L)
{
    lqtk_QWidget_setTabOrder_Args  argValues;
    lqtk_QWidget_setTabOrder_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                    QWidget::setTabOrder(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "setTabOrder", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_acceptDrops_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QWidget_acceptDrops(lua_State* L)
{
    lqtk_QWidget_acceptDrops_Args  argValues;
    lqtk_QWidget_acceptDrops_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QWidget::acceptDrops();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "acceptDrops", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_accessibleDescription_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QWidget_accessibleDescription_doLua(lua_State* L)
{
    lqtk_QWidget_accessibleDescription_Args* args = (lqtk_QWidget_accessibleDescription_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QWidget::accessibleDescription();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "accessibleDescription", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QWidget_accessibleDescription(lua_State* L)
{
    try {
        lqtk_QWidget_accessibleDescription_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QWidget_accessibleDescription_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_accessibleIdentifier_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QWidget_accessibleIdentifier_doLua(lua_State* L)
{
    lqtk_QWidget_accessibleIdentifier_Args* args = (lqtk_QWidget_accessibleIdentifier_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QWidget::accessibleIdentifier();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "accessibleIdentifier", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QWidget_accessibleIdentifier(lua_State* L)
{
    try {
        lqtk_QWidget_accessibleIdentifier_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QWidget_accessibleIdentifier_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_accessibleName_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QWidget_accessibleName_doLua(lua_State* L)
{
    lqtk_QWidget_accessibleName_Args* args = (lqtk_QWidget_accessibleName_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QWidget::accessibleName();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "accessibleName", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QWidget_accessibleName(lua_State* L)
{
    try {
        lqtk_QWidget_accessibleName_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QWidget_accessibleName_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_addActions_Args
{
    FromLua<QWidget*> arg_1_1;
    FromLua<QList<QAction*>> arg_2_1;
};

static int lqtk_QWidget_addActions_doLua(lua_State* L)
{
    lqtk_QWidget_addActions_Args* args = (lqtk_QWidget_addActions_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QWidget::addActions(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "addActions", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QWidget_addActions(lua_State* L)
{
    try {
        lqtk_QWidget_addActions_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QWidget_addActions_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_close_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QWidget_close(lua_State* L)
{
    lqtk_QWidget_close_Args  argValues;
    lqtk_QWidget_close_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QWidget::close();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "close", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_closeEvent_Args
{
    FromLua<QWidget*> arg_1_1;
    FromLua<QCloseEvent*> arg_2_1;
};

extern "C" int lqtk_QWidget_closeEvent(lua_State* L)
{
    lqtk_QWidget_closeEvent_Args  argValues;
    lqtk_QWidget_closeEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QWidgetExportWrapper* wrapper = dynamic_cast<QWidgetExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'closeEvent' is protected in QWidget");
                }
                    wrapper->lqtk_QWidget_closeEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "closeEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_event_Args
{
    FromLua<QWidget*> arg_1_1;
    FromLua<QEvent*> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QWidget_event(lua_State* L)
{
    lqtk_QWidget_event_Args  argValues;
    lqtk_QWidget_event_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QWidgetExportWrapper* wrapper = dynamic_cast<QWidgetExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'event' is protected in QWidget");
                }
                args->rslt_1 = 
                    wrapper->lqtk_QWidget_event(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "event", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_font_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<QFont*> rslt_1;
};

extern "C" int lqtk_QWidget_font(lua_State* L)
{
    lqtk_QWidget_font_Args  argValues;
    lqtk_QWidget_font_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QWidget::font();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "font", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_geometry_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<QRect*> rslt_1;
};

extern "C" int lqtk_QWidget_geometry(lua_State* L)
{
    lqtk_QWidget_geometry_Args  argValues;
    lqtk_QWidget_geometry_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QWidget::geometry();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "geometry", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_hasHeightForWidth_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QWidget_hasHeightForWidth(lua_State* L)
{
    lqtk_QWidget_hasHeightForWidth_Args  argValues;
    lqtk_QWidget_hasHeightForWidth_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QWidget::hasHeightForWidth();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "hasHeightForWidth", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_height_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QWidget_height(lua_State* L)
{
    lqtk_QWidget_height_Args  argValues;
    lqtk_QWidget_height_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QWidget::height();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "height", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_heightForWidth_Args
{
    FromLua<QWidget*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QWidget_heightForWidth(lua_State* L)
{
    lqtk_QWidget_heightForWidth_Args  argValues;
    lqtk_QWidget_heightForWidth_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QWidget::heightForWidth(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "heightForWidth", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_hide_Args
{
    FromLua<QWidget*> arg_1_1;
};

extern "C" int lqtk_QWidget_hide(lua_State* L)
{
    lqtk_QWidget_hide_Args  argValues;
    lqtk_QWidget_hide_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QWidget::hide();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "hide", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_mouseDoubleClickEvent_Args
{
    FromLua<QWidget*> arg_1_1;
    FromLua<QMouseEvent*> arg_2_1;
};

extern "C" int lqtk_QWidget_mouseDoubleClickEvent(lua_State* L)
{
    lqtk_QWidget_mouseDoubleClickEvent_Args  argValues;
    lqtk_QWidget_mouseDoubleClickEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QWidgetExportWrapper* wrapper = dynamic_cast<QWidgetExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'mouseDoubleClickEvent' is protected in QWidget");
                }
                    wrapper->lqtk_QWidget_mouseDoubleClickEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "mouseDoubleClickEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_mouseMoveEvent_Args
{
    FromLua<QWidget*> arg_1_1;
    FromLua<QMouseEvent*> arg_2_1;
};

extern "C" int lqtk_QWidget_mouseMoveEvent(lua_State* L)
{
    lqtk_QWidget_mouseMoveEvent_Args  argValues;
    lqtk_QWidget_mouseMoveEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QWidgetExportWrapper* wrapper = dynamic_cast<QWidgetExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'mouseMoveEvent' is protected in QWidget");
                }
                    wrapper->lqtk_QWidget_mouseMoveEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "mouseMoveEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_mousePressEvent_Args
{
    FromLua<QWidget*> arg_1_1;
    FromLua<QMouseEvent*> arg_2_1;
};

extern "C" int lqtk_QWidget_mousePressEvent(lua_State* L)
{
    lqtk_QWidget_mousePressEvent_Args  argValues;
    lqtk_QWidget_mousePressEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QWidgetExportWrapper* wrapper = dynamic_cast<QWidgetExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'mousePressEvent' is protected in QWidget");
                }
                    wrapper->lqtk_QWidget_mousePressEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "mousePressEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_mouseReleaseEvent_Args
{
    FromLua<QWidget*> arg_1_1;
    FromLua<QMouseEvent*> arg_2_1;
};

extern "C" int lqtk_QWidget_mouseReleaseEvent(lua_State* L)
{
    lqtk_QWidget_mouseReleaseEvent_Args  argValues;
    lqtk_QWidget_mouseReleaseEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QWidgetExportWrapper* wrapper = dynamic_cast<QWidgetExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'mouseReleaseEvent' is protected in QWidget");
                }
                    wrapper->lqtk_QWidget_mouseReleaseEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "mouseReleaseEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_move_Args
{
    FromLua<QWidget*> arg_1_1;
    FromLua<QPoint*> arg_2_1;
    FromLua<int> arg_3_1;
    FromLua<int> arg_3_2;
};

extern "C" int lqtk_QWidget_move(lua_State* L)
{
    lqtk_QWidget_move_Args  argValues;
    lqtk_QWidget_move_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QWidget::move(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            args->arg_3_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QWidget::move(args->arg_3_1.getValue(), args->arg_3_2.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "move", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_paintEvent_Args
{
    FromLua<QWidget*> arg_1_1;
    FromLua<QPaintEvent*> arg_2_1;
};

extern "C" int lqtk_QWidget_paintEvent(lua_State* L)
{
    lqtk_QWidget_paintEvent_Args  argValues;
    lqtk_QWidget_paintEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QWidgetExportWrapper* wrapper = dynamic_cast<QWidgetExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'paintEvent' is protected in QWidget");
                }
                    wrapper->lqtk_QWidget_paintEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "paintEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_palette_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<QPalette*> rslt_1;
};

extern "C" int lqtk_QWidget_palette(lua_State* L)
{
    lqtk_QWidget_palette_Args  argValues;
    lqtk_QWidget_palette_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QWidget::palette();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "palette", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_parentWidget_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<QWidget*> rslt_1;
};

extern "C" int lqtk_QWidget_parentWidget(lua_State* L)
{
    lqtk_QWidget_parentWidget_Args  argValues;
    lqtk_QWidget_parentWidget_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QWidget::parentWidget();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "parentWidget", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_resize_Args
{
    FromLua<QWidget*> arg_1_1;
    FromLua<QSize*> arg_2_1;
    FromLua<int> arg_3_1;
    FromLua<int> arg_3_2;
};

extern "C" int lqtk_QWidget_resize(lua_State* L)
{
    lqtk_QWidget_resize_Args  argValues;
    lqtk_QWidget_resize_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QWidget::resize(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            args->arg_3_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QWidget::resize(args->arg_3_1.getValue(), args->arg_3_2.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "resize", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_resizeEvent_Args
{
    FromLua<QWidget*> arg_1_1;
    FromLua<QResizeEvent*> arg_2_1;
};

extern "C" int lqtk_QWidget_resizeEvent(lua_State* L)
{
    lqtk_QWidget_resizeEvent_Args  argValues;
    lqtk_QWidget_resizeEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QWidgetExportWrapper* wrapper = dynamic_cast<QWidgetExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'resizeEvent' is protected in QWidget");
                }
                    wrapper->lqtk_QWidget_resizeEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "resizeEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_setBackgroundRole_Args
{
    FromLua<QWidget*> arg_1_1;
    FromLua<QPalette::ColorRole> arg_2_1;
};

extern "C" int lqtk_QWidget_setBackgroundRole(lua_State* L)
{
    lqtk_QWidget_setBackgroundRole_Args  argValues;
    lqtk_QWidget_setBackgroundRole_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QWidget::setBackgroundRole(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "setBackgroundRole", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_setFont_Args
{
    FromLua<QWidget*> arg_1_1;
    FromLua<QFont*> arg_2_1;
};

extern "C" int lqtk_QWidget_setFont(lua_State* L)
{
    lqtk_QWidget_setFont_Args  argValues;
    lqtk_QWidget_setFont_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QWidget::setFont(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "setFont", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_setGeometry_Args
{
    FromLua<QWidget*> arg_1_1;
    FromLua<QRect*> arg_2_1;
};

extern "C" int lqtk_QWidget_setGeometry(lua_State* L)
{
    lqtk_QWidget_setGeometry_Args  argValues;
    lqtk_QWidget_setGeometry_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QWidget::setGeometry(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "setGeometry", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_setLayout_Args
{
    FromLua<QWidget*> arg_1_1;
    FromLua<QLayout*> arg_2_1;
};

extern "C" int lqtk_QWidget_setLayout(lua_State* L)
{
    lqtk_QWidget_setLayout_Args  argValues;
    lqtk_QWidget_setLayout_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QWidget::setLayout(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "setLayout", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_setSizePolicy_Args
{
    FromLua<QWidget*> arg_1_1;
    FromLua<QSizePolicy*> arg_2_1;
};

extern "C" int lqtk_QWidget_setSizePolicy(lua_State* L)
{
    lqtk_QWidget_setSizePolicy_Args  argValues;
    lqtk_QWidget_setSizePolicy_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QWidget::setSizePolicy(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "setSizePolicy", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_setWindowTitle_Args
{
    FromLua<QWidget*> arg_1_1;
    FromLua<QString> arg_2_1;
};

static int lqtk_QWidget_setWindowTitle_doLua(lua_State* L)
{
    lqtk_QWidget_setWindowTitle_Args* args = (lqtk_QWidget_setWindowTitle_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QWidget::setWindowTitle(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "setWindowTitle", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QWidget_setWindowTitle(lua_State* L)
{
    try {
        lqtk_QWidget_setWindowTitle_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QWidget_setWindowTitle_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_show_Args
{
    FromLua<QWidget*> arg_1_1;
};

extern "C" int lqtk_QWidget_show(lua_State* L)
{
    lqtk_QWidget_show_Args  argValues;
    lqtk_QWidget_show_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QWidget::show();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "show", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_size_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<QSize*> rslt_1;
};

extern "C" int lqtk_QWidget_size(lua_State* L)
{
    lqtk_QWidget_size_Args  argValues;
    lqtk_QWidget_size_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QWidget::size();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "size", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_sizeHint_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<QSize*> rslt_1;
};

extern "C" int lqtk_QWidget_sizeHint(lua_State* L)
{
    lqtk_QWidget_sizeHint_Args  argValues;
    lqtk_QWidget_sizeHint_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QWidget::sizeHint();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "sizeHint", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_sizePolicy_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<QSizePolicy*> rslt_1;
};

extern "C" int lqtk_QWidget_sizePolicy(lua_State* L)
{
    lqtk_QWidget_sizePolicy_Args  argValues;
    lqtk_QWidget_sizePolicy_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QWidget::sizePolicy();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "sizePolicy", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_update_Args
{
    FromLua<QWidget*> arg_1_1;
};

extern "C" int lqtk_QWidget_update(lua_State* L)
{
    lqtk_QWidget_update_Args  argValues;
    lqtk_QWidget_update_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QWidget::update();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "update", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidget_width_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QWidget_width(lua_State* L)
{
    lqtk_QWidget_width_Args  argValues;
    lqtk_QWidget_width_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QWidget::width();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWidget", "width", nargs, "1");
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
        QWidgetBinding::QType* ptr = static_cast<QWidgetBinding::QType*>(objectPtr);
        if (targetClassInfo == &QWidgetBinding::classInfo) {
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
        QWidget* ptr = (QWidget*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QWidget* obj = (QWidget*) objectPtr;
        
        QWidgetWrapper* wrapper = dynamic_cast<QWidgetWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */


struct lqtk_QWidget_new_Args
{
    FromLua<QWidget*> arg_1_1;
    FromLua<Qt::WindowFlags> arg_2_1;
    ToLua<QWidget*> rslt_1;
};

extern "C" int lqtk_QWidget_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QWidget_new_Args  argValues;
    lqtk_QWidget_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QWidgetBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QWidget> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }

        QWidgetBinding::intercept_new();

        if (nargs == 0) { do {
            {
                QWidgetWrapper* rslt = 
                    new QWidgetWrapper();
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
                QWidgetWrapper* rslt = 
                    new QWidgetWrapper(args->arg_1_1.getValue());
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
            args->arg_2_1.check(L, argOffs+2);
            {
                QWidgetWrapper* rslt = 
                    new QWidgetWrapper(args->arg_1_1.getValue(), args->arg_2_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QWidget", "new", nargs, "1,2,3");
        } else {
            return util::argCountError(L, "QWidget", nullptr, nargs, "0,1,2");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QWidget_new(lua_State* L)
{
    return lqtk_QWidget_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QWidgetBinding::pushObject(lua_State* L, QWidget* objPtr, OwnerType ownerType)
{
    QWidgetWrapper* wrapper = dynamic_cast<QWidgetWrapper*>(objPtr);
    if (!wrapper) {
        QAbstractButton* ptr1 = dynamic_cast<QAbstractButton*>(objPtr);
        if (ptr1) {
            return QAbstractButtonBinding::pushObject(L, ptr1, ownerType);
        }
        QDialog* ptr2 = dynamic_cast<QDialog*>(objPtr);
        if (ptr2) {
            return QDialogBinding::pushObject(L, ptr2, ownerType);
        }
        QDialogButtonBox* ptr3 = dynamic_cast<QDialogButtonBox*>(objPtr);
        if (ptr3) {
            return QDialogButtonBoxBinding::pushObject(L, ptr3, ownerType);
        }
        QFrame* ptr4 = dynamic_cast<QFrame*>(objPtr);
        if (ptr4) {
            return QFrameBinding::pushObject(L, ptr4, ownerType);
        }
        QLineEdit* ptr5 = dynamic_cast<QLineEdit*>(objPtr);
        if (ptr5) {
            return QLineEditBinding::pushObject(L, ptr5, ownerType);
        }
        QMainWindow* ptr6 = dynamic_cast<QMainWindow*>(objPtr);
        if (ptr6) {
            return QMainWindowBinding::pushObject(L, ptr6, ownerType);
        }
        QMenu* ptr7 = dynamic_cast<QMenu*>(objPtr);
        if (ptr7) {
            return QMenuBinding::pushObject(L, ptr7, ownerType);
        }
        QMenuBar* ptr8 = dynamic_cast<QMenuBar*>(objPtr);
        if (ptr8) {
            return QMenuBarBinding::pushObject(L, ptr8, ownerType);
        }
        QOpenGLWidget* ptr9 = dynamic_cast<QOpenGLWidget*>(objPtr);
        if (ptr9) {
            return QOpenGLWidgetBinding::pushObject(L, ptr9, ownerType);
        }
        QTabWidget* ptr10 = dynamic_cast<QTabWidget*>(objPtr);
        if (ptr10) {
            return QTabWidgetBinding::pushObject(L, ptr10, ownerType);
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
        udata = ObjectUdata::pushNew<QWidget>(L, hasUserValue);     // -> uval?, udata
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
    { "acceptDrops",           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_acceptDrops },
    { "accessibleDescription", Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_accessibleDescription },
    { "accessibleIdentifier",  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_accessibleIdentifier },
    { "accessibleName",        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_accessibleName },
    { "addActions",            Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_addActions },
    { "children",              Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_children },
    { "close",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_close },
    { "closeEvent",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_closeEvent },
    { "connect",               Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_connect },
    { "event",                 Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_event },
    { "font",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_font },
    { "geometry",              Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_geometry },
    { "hasHeightForWidth",     Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_hasHeightForWidth },
    { "height",                Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_height },
    { "heightForWidth",        Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_heightForWidth },
    { "hide",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_hide },
    { "keyboardGrabber",       Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_keyboardGrabber },
    { "mouseDoubleClickEvent", Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mouseDoubleClickEvent },
    { "mouseGrabber",          Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_mouseGrabber },
    { "mouseMoveEvent",        Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mouseMoveEvent },
    { "mousePressEvent",       Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mousePressEvent },
    { "mouseReleaseEvent",     Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mouseReleaseEvent },
    { "move",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_move },
    { "objectName",            Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "paintEvent",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_paintEvent },
    { "palette",               Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_palette },
    { "parent",                Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "parentWidget",          Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_parentWidget },
    { "resize",                Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_resize },
    { "resizeEvent",           Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_resizeEvent },
    { "setBackgroundRole",     Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setBackgroundRole },
    { "setFont",               Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setFont },
    { "setGeometry",           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setGeometry },
    { "setLayout",             Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setLayout },
    { "setObjectName",         Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",             Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { "setSizePolicy",         Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setSizePolicy },
    { "setTabOrder",           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setTabOrder },
    { "setWindowTitle",        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setWindowTitle },
    { "show",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_show },
    { "size",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_size },
    { "sizeHint",              Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_sizeHint },
    { "sizePolicy",            Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_sizePolicy },
    { "update",                Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_update },
    { "width",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_width },
    { NULL,                    Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QWidgetBinding::classInfo = 
{
    "QWidget",

    &QObjectBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    lqtk_QWidget_constructor,
    lqtk_QWidget_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    45,
    members
};

/* ============================================================================================ */

int QWidgetBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
