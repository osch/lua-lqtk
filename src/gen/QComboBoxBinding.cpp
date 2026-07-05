// Type: QComboBox
// Base: QWidget

/* ============================================================================================ */

#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QCloseEvent>
#include <QComboBox>
#include <QCompleter>
#include <QContextMenuEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QLineEdit>
#include <QModelIndex>
#include <QMouseEvent>
#include <QObject>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QVariant>
#include <QWheelEvent>
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
#include "QCloseEventBinding.hpp"
#include "QComboBoxBinding.hpp"
#include "QCompleterBinding.hpp"
#include "QContextMenuEventBinding.hpp"
#include "QEventBinding.hpp"
#include "QFocusEventBinding.hpp"
#include "QHideEventBinding.hpp"
#include "QIconBinding.hpp"
#include "QInputMethodEventBinding.hpp"
#include "QKeyEventBinding.hpp"
#include "QLineEditBinding.hpp"
#include "QModelIndexBinding.hpp"
#include "QMouseEventBinding.hpp"
#include "QObjectBinding.hpp"
#include "QPaintEventBinding.hpp"
#include "QResizeEventBinding.hpp"
#include "QShowEventBinding.hpp"
#include "QSizeBinding.hpp"
#include "QStringBinding.hpp"
#include "QVariantBinding.hpp"
#include "QWheelEventBinding.hpp"
#include "QWidgetBinding.hpp"
#include "QtBinding.hpp"
#include "QObjectWrapper.hpp"
#include "QWidgetWrapper.hpp"
#include "QComboBoxWrapper.hpp"
#include "QWidgetBinding2.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QComboBoxWrapper::QComboBoxWrapper()
        : QComboBox(),
          lqtk_stateGuard(nullptr)
    {}
    QComboBoxWrapper::QComboBoxWrapper(
                   QWidget* arg1) 
        : QComboBox(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QComboBoxWrapper::lqtk_destruct(lua_State* L) {
        QComboBox* objPtr = (QComboBox*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QComboBoxWrapper::~QComboBoxWrapper() {
        trace::printf("Deleting lqtk::QComboBoxWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->getL();
            if (L) {
                QComboBox* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QComboBox");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

    void QComboBoxWrapper::lqtk_QComboBox_changeEvent(
                   QEvent* arg1) 
    {
        return QComboBox::changeEvent(
                   arg1); 
    }

    void QComboBoxWrapper::lqtk_QComboBox_contextMenuEvent(
                   QContextMenuEvent* arg1) 
    {
        return QComboBox::contextMenuEvent(
                   arg1); 
    }

    void QComboBoxWrapper::lqtk_QComboBox_focusInEvent(
                   QFocusEvent* arg1) 
    {
        return QComboBox::focusInEvent(
                   arg1); 
    }

    void QComboBoxWrapper::lqtk_QComboBox_focusOutEvent(
                   QFocusEvent* arg1) 
    {
        return QComboBox::focusOutEvent(
                   arg1); 
    }

    void QComboBoxWrapper::lqtk_QComboBox_hideEvent(
                   QHideEvent* arg1) 
    {
        return QComboBox::hideEvent(
                   arg1); 
    }

    void QComboBoxWrapper::lqtk_QComboBox_inputMethodEvent(
                   QInputMethodEvent* arg1) 
    {
        return QComboBox::inputMethodEvent(
                   arg1); 
    }

    void QComboBoxWrapper::lqtk_QComboBox_keyPressEvent(
                   QKeyEvent* arg1) 
    {
        return QComboBox::keyPressEvent(
                   arg1); 
    }

    void QComboBoxWrapper::lqtk_QComboBox_keyReleaseEvent(
                   QKeyEvent* arg1) 
    {
        return QComboBox::keyReleaseEvent(
                   arg1); 
    }

    void QComboBoxWrapper::lqtk_QComboBox_mousePressEvent(
                   QMouseEvent* arg1) 
    {
        return QComboBox::mousePressEvent(
                   arg1); 
    }

    void QComboBoxWrapper::lqtk_QComboBox_mouseReleaseEvent(
                   QMouseEvent* arg1) 
    {
        return QComboBox::mouseReleaseEvent(
                   arg1); 
    }

    void QComboBoxWrapper::lqtk_QComboBox_paintEvent(
                   QPaintEvent* arg1) 
    {
        return QComboBox::paintEvent(
                   arg1); 
    }

    void QComboBoxWrapper::lqtk_QComboBox_resizeEvent(
                   QResizeEvent* arg1) 
    {
        return QComboBox::resizeEvent(
                   arg1); 
    }

    void QComboBoxWrapper::lqtk_QComboBox_showEvent(
                   QShowEvent* arg1) 
    {
        return QComboBox::showEvent(
                   arg1); 
    }

    void QComboBoxWrapper::lqtk_QComboBox_wheelEvent(
                   QWheelEvent* arg1) 
    {
        return QComboBox::wheelEvent(
                   arg1); 
    }

    void QComboBoxWrapper::lqtk_QWidget_closeEvent(
                   QCloseEvent* arg1) 
    {
        return QWidget::closeEvent(
                   arg1); 
    }

    bool QComboBoxWrapper::lqtk_QWidget_event(
                   QEvent* arg1) 
    {
        return QWidget::event(
                   arg1); 
    }

    void QComboBoxWrapper::lqtk_QWidget_mouseDoubleClickEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseDoubleClickEvent(
                   arg1); 
    }

    void QComboBoxWrapper::lqtk_QWidget_mouseMoveEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseMoveEvent(
                   arg1); 
    }

    void QComboBoxWrapper::lqtk_QWidget_mousePressEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mousePressEvent(
                   arg1); 
    }

    void QComboBoxWrapper::lqtk_QWidget_mouseReleaseEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseReleaseEvent(
                   arg1); 
    }

    void QComboBoxWrapper::lqtk_QWidget_paintEvent(
                   QPaintEvent* arg1) 
    {
        return QWidget::paintEvent(
                   arg1); 
    }

    void QComboBoxWrapper::lqtk_QWidget_resizeEvent(
                   QResizeEvent* arg1) 
    {
        return QWidget::resizeEvent(
                   arg1); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QComboBoxWrapper::changeEvent1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        changeEvent1CallArgs* args = (changeEvent1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "changeEvent") != LUA_TNIL) {        // -> uval, eh, member?
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

    void QComboBoxWrapper::changeEvent(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            changeEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, changeEvent1_doLua, &args, "QComboBox", "changeEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QComboBox::changeEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QComboBoxWrapper::contextMenuEvent1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        contextMenuEvent1CallArgs* args = (contextMenuEvent1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "contextMenuEvent") != LUA_TNIL) {        // -> uval, eh, member?
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

    void QComboBoxWrapper::contextMenuEvent(
                   QContextMenuEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            contextMenuEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, contextMenuEvent1_doLua, &args, "QComboBox", "contextMenuEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QComboBox::contextMenuEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QComboBoxWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QObjectWrapper::event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QObjectWrapper::event1_doLua, &args, "QComboBox", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QComboBox", "event", msg);
                }
            }
        }
        return QComboBox::event(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QComboBoxWrapper::focusInEvent1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        focusInEvent1CallArgs* args = (focusInEvent1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "focusInEvent") != LUA_TNIL) {        // -> uval, eh, member?
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

    void QComboBoxWrapper::focusInEvent(
                   QFocusEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            focusInEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, focusInEvent1_doLua, &args, "QComboBox", "focusInEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QComboBox::focusInEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QComboBoxWrapper::focusOutEvent1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        focusOutEvent1CallArgs* args = (focusOutEvent1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "focusOutEvent") != LUA_TNIL) {        // -> uval, eh, member?
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

    void QComboBoxWrapper::focusOutEvent(
                   QFocusEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            focusOutEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, focusOutEvent1_doLua, &args, "QComboBox", "focusOutEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QComboBox::focusOutEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QComboBoxWrapper::hideEvent1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        hideEvent1CallArgs* args = (hideEvent1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "hideEvent") != LUA_TNIL) {        // -> uval, eh, member?
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

    void QComboBoxWrapper::hideEvent(
                   QHideEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            hideEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, hideEvent1_doLua, &args, "QComboBox", "hideEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QComboBox::hideEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QComboBoxWrapper::hidePopup1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        hidePopup1CallArgs* args = (hidePopup1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "hidePopup") != LUA_TNIL) {        // -> uval, eh, member?
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

    void QComboBoxWrapper::hidePopup()
    {
        lua_State* L = getL();
        if (L) {
            hidePopup1CallArgs args(
                    this
            );
            {
                BindingUtil::callLuaMethodImpl(L, hidePopup1_doLua, &args, "QComboBox", "hidePopup");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QComboBox::hidePopup();
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QComboBoxWrapper::inputMethodEvent1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        inputMethodEvent1CallArgs* args = (inputMethodEvent1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "inputMethodEvent") != LUA_TNIL) {        // -> uval, eh, member?
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

    void QComboBoxWrapper::inputMethodEvent(
                   QInputMethodEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            inputMethodEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, inputMethodEvent1_doLua, &args, "QComboBox", "inputMethodEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QComboBox::inputMethodEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    QVariant QComboBoxWrapper::inputMethodQuery(
                   Qt::InputMethodQuery arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::inputMethodQuery1CallArgs args(
                    const_cast<QComboBoxWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::inputMethodQuery1_doLua, &args, "QComboBox", "inputMethodQuery");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QVariant'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QComboBox", "inputMethodQuery", msg);
                }
            }
        }
        return QComboBox::inputMethodQuery(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QComboBoxWrapper::keyPressEvent1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        keyPressEvent1CallArgs* args = (keyPressEvent1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "keyPressEvent") != LUA_TNIL) {        // -> uval, eh, member?
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

    void QComboBoxWrapper::keyPressEvent(
                   QKeyEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            keyPressEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, keyPressEvent1_doLua, &args, "QComboBox", "keyPressEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QComboBox::keyPressEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QComboBoxWrapper::keyReleaseEvent1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        keyReleaseEvent1CallArgs* args = (keyReleaseEvent1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "keyReleaseEvent") != LUA_TNIL) {        // -> uval, eh, member?
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

    void QComboBoxWrapper::keyReleaseEvent(
                   QKeyEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            keyReleaseEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, keyReleaseEvent1_doLua, &args, "QComboBox", "keyReleaseEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QComboBox::keyReleaseEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QComboBoxWrapper::minimumSizeHint1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        minimumSizeHint1CallArgs* args = (minimumSizeHint1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "minimumSizeHint") != LUA_TNIL) {        // -> uval, eh, member?
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

    QSize QComboBoxWrapper::minimumSizeHint() const
    {
        lua_State* L = getL();
        if (L) {
            minimumSizeHint1CallArgs args(
                    const_cast<QComboBoxWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, minimumSizeHint1_doLua, &args, "QComboBox", "minimumSizeHint");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QSize'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QComboBox", "minimumSizeHint", msg);
                }
            }
        }
        return QComboBox::minimumSizeHint();
    }

/* -------------------------------------------------------------------------------------------- */
    void QComboBoxWrapper::mousePressEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mousePressEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mousePressEvent1_doLua, &args, "QComboBox", "mousePressEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QComboBox::mousePressEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QComboBoxWrapper::mouseReleaseEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseReleaseEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseReleaseEvent1_doLua, &args, "QComboBox", "mouseReleaseEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QComboBox::mouseReleaseEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QComboBoxWrapper::paintEvent(
                   QPaintEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::paintEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::paintEvent1_doLua, &args, "QComboBox", "paintEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QComboBox::paintEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QComboBoxWrapper::resizeEvent(
                   QResizeEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::resizeEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::resizeEvent1_doLua, &args, "QComboBox", "resizeEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QComboBox::resizeEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QComboBoxWrapper::setModel1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        setModel1CallArgs* args = (setModel1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "setModel") != LUA_TNIL) {        // -> uval, eh, member?
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

    void QComboBoxWrapper::setModel(
                   QAbstractItemModel* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            setModel1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, setModel1_doLua, &args, "QComboBox", "setModel");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QComboBox::setModel(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QComboBoxWrapper::showEvent1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        showEvent1CallArgs* args = (showEvent1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "showEvent") != LUA_TNIL) {        // -> uval, eh, member?
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

    void QComboBoxWrapper::showEvent(
                   QShowEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            showEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, showEvent1_doLua, &args, "QComboBox", "showEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QComboBox::showEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QComboBoxWrapper::showPopup1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        showPopup1CallArgs* args = (showPopup1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "showPopup") != LUA_TNIL) {        // -> uval, eh, member?
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

    void QComboBoxWrapper::showPopup()
    {
        lua_State* L = getL();
        if (L) {
            showPopup1CallArgs args(
                    this
            );
            {
                BindingUtil::callLuaMethodImpl(L, showPopup1_doLua, &args, "QComboBox", "showPopup");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QComboBox::showPopup();
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QComboBoxWrapper::sizeHint1_doLua(lua_State* L) 
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

    QSize QComboBoxWrapper::sizeHint() const
    {
        lua_State* L = getL();
        if (L) {
            sizeHint1CallArgs args(
                    const_cast<QComboBoxWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, sizeHint1_doLua, &args, "QComboBox", "sizeHint");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QSize'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QComboBox", "sizeHint", msg);
                }
            }
        }
        return QComboBox::sizeHint();
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QComboBoxWrapper::wheelEvent1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        wheelEvent1CallArgs* args = (wheelEvent1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "wheelEvent") != LUA_TNIL) {        // -> uval, eh, member?
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

    void QComboBoxWrapper::wheelEvent(
                   QWheelEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            wheelEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, wheelEvent1_doLua, &args, "QComboBox", "wheelEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QComboBox::wheelEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QComboBoxWrapper::closeEvent(
                   QCloseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::closeEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::closeEvent1_doLua, &args, "QComboBox", "closeEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QComboBox::closeEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QComboBoxWrapper::hasHeightForWidth() const
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::hasHeightForWidth1CallArgs args(
                    const_cast<QComboBoxWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::hasHeightForWidth1_doLua, &args, "QComboBox", "hasHeightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QComboBox", "hasHeightForWidth", msg);
                }
            }
        }
        return QComboBox::hasHeightForWidth();
    }

/* -------------------------------------------------------------------------------------------- */
    int QComboBoxWrapper::heightForWidth(
                   int arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::heightForWidth1CallArgs args(
                    const_cast<QComboBoxWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::heightForWidth1_doLua, &args, "QComboBox", "heightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QComboBox", "heightForWidth", msg);
                }
            }
        }
        return QComboBox::heightForWidth(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QComboBoxWrapper::mouseDoubleClickEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseDoubleClickEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseDoubleClickEvent1_doLua, &args, "QComboBox", "mouseDoubleClickEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QComboBox::mouseDoubleClickEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QComboBoxWrapper::mouseMoveEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseMoveEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseMoveEvent1_doLua, &args, "QComboBox", "mouseMoveEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QComboBox::mouseMoveEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QComboBoxWrapper::setVisible(
                   bool arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::setVisible1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::setVisible1_doLua, &args, "QComboBox", "setVisible");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QComboBox::setVisible(
                    arg2); 
    }

} // namespace lqtk

/* ============================================================================================ */

extern "C" {
    int lqtk_QWidget_keyboardGrabber(lua_State* L);
    int lqtk_QWidget_mouseGrabber(lua_State* L);
    int lqtk_QWidget_setTabOrder(lua_State* L);
    int lqtk_QWidget_acceptDrops(lua_State* L);
    int lqtk_QWidget_accessibleDescription(lua_State* L);
    int lqtk_QWidget_accessibleIdentifier(lua_State* L);
    int lqtk_QWidget_accessibleName(lua_State* L);
    int lqtk_QWidget_addActions(lua_State* L);
    int lqtk_QWidget_close(lua_State* L);
    int lqtk_QWidget_closeEvent(lua_State* L);
    int lqtk_QWidget_font(lua_State* L);
    int lqtk_QWidget_geometry(lua_State* L);
    int lqtk_QWidget_hasHeightForWidth(lua_State* L);
    int lqtk_QWidget_height(lua_State* L);
    int lqtk_QWidget_heightForWidth(lua_State* L);
    int lqtk_QWidget_hide(lua_State* L);
    int lqtk_QWidget_mouseDoubleClickEvent(lua_State* L);
    int lqtk_QWidget_mouseMoveEvent(lua_State* L);
    int lqtk_QWidget_move(lua_State* L);
    int lqtk_QWidget_palette(lua_State* L);
    int lqtk_QWidget_parentWidget(lua_State* L);
    int lqtk_QWidget_resize(lua_State* L);
    int lqtk_QWidget_setBackgroundRole(lua_State* L);
    int lqtk_QWidget_setFont(lua_State* L);
    int lqtk_QWidget_setGeometry(lua_State* L);
    int lqtk_QWidget_setLayout(lua_State* L);
    int lqtk_QWidget_setSizePolicy(lua_State* L);
    int lqtk_QWidget_setStyleSheet(lua_State* L);
    int lqtk_QWidget_setToolTip(lua_State* L);
    int lqtk_QWidget_setToolTipDuration(lua_State* L);
    int lqtk_QWidget_setUpdatesEnabled(lua_State* L);
    int lqtk_QWidget_setVisible(lua_State* L);
    int lqtk_QWidget_setWhatsThis(lua_State* L);
    int lqtk_QWidget_setWindowFilePath(lua_State* L);
    int lqtk_QWidget_setWindowFlag(lua_State* L);
    int lqtk_QWidget_setWindowFlags(lua_State* L);
    int lqtk_QWidget_setWindowTitle(lua_State* L);
    int lqtk_QWidget_show(lua_State* L);
    int lqtk_QWidget_size(lua_State* L);
    int lqtk_QWidget_sizePolicy(lua_State* L);
    int lqtk_QWidget_update(lua_State* L);
    int lqtk_QWidget_width(lua_State* L);
    int lqtk_QWidget_windowFlags(lua_State* L);
    int lqtk_QWidget_windowModality(lua_State* L);
    int lqtk_QWidget_windowOpacity(lua_State* L);
    int lqtk_QWidget_windowRole(lua_State* L);
    int lqtk_QWidget_windowState(lua_State* L);
    int lqtk_QObject_children(lua_State* L);
    int lqtk_QObject_connect(lua_State* L);
    int lqtk_QObject_objectName(lua_State* L);
    int lqtk_QObject_parent(lua_State* L);
    int lqtk_QObject_setObjectName(lua_State* L);
    int lqtk_QObject_setParent(lua_State* L);
}

/* ============================================================================================ */


struct lqtk_QComboBox_addItem_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<QVariant*> arg_3_1;
    FromLua<QIcon*> arg_4_1;
};

static int lqtk_QComboBox_addItem_doLua(lua_State* L)
{
    lqtk_QComboBox_addItem_Args* args = (lqtk_QComboBox_addItem_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QComboBox::addItem(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QComboBox::addItem(args->arg_2_1.getValue(), *args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_4_1.test(L, argOffs+2)) break;
            if (!args->arg_2_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QComboBox::addItem(*args->arg_4_1.getValue(), args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            assert(false);
        }
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_4_1.check(L, argOffs+2);
            args->arg_2_1.check(L, argOffs+3);
            args->arg_3_1.check(L, argOffs+4);
            {
                    args->arg_1_1.getValue()->QComboBox::addItem(*args->arg_4_1.getValue(), args->arg_2_1.getValue(), *args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "addItem", nargs, "2,3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QComboBox_addItem(lua_State* L)
{
    try {
        lqtk_QComboBox_addItem_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QComboBox_addItem_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_addItems_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QStringList> arg_2_1;
};

static int lqtk_QComboBox_addItems_doLua(lua_State* L)
{
    lqtk_QComboBox_addItems_Args* args = (lqtk_QComboBox_addItems_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QComboBox::addItems(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "addItems", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QComboBox_addItems(lua_State* L)
{
    try {
        lqtk_QComboBox_addItems_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QComboBox_addItems_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_changeEvent_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QEvent*> arg_2_1;
};

extern "C" int lqtk_QComboBox_changeEvent(lua_State* L)
{
    lqtk_QComboBox_changeEvent_Args  argValues;
    lqtk_QComboBox_changeEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QComboBoxExportWrapper* wrapper = dynamic_cast<QComboBoxExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'changeEvent' is protected in QComboBox");
                }
                    wrapper->lqtk_QComboBox_changeEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "changeEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_clear_Args
{
    FromLua<QComboBox*> arg_1_1;
};

extern "C" int lqtk_QComboBox_clear(lua_State* L)
{
    lqtk_QComboBox_clear_Args  argValues;
    lqtk_QComboBox_clear_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QComboBox::clear();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "clear", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_clearEditText_Args
{
    FromLua<QComboBox*> arg_1_1;
};

extern "C" int lqtk_QComboBox_clearEditText(lua_State* L)
{
    lqtk_QComboBox_clearEditText_Args  argValues;
    lqtk_QComboBox_clearEditText_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QComboBox::clearEditText();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "clearEditText", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_completer_Args
{
    FromLua<QComboBox*> arg_1_1;
    ToLua<QCompleter*> rslt_1;
};

extern "C" int lqtk_QComboBox_completer(lua_State* L)
{
    lqtk_QComboBox_completer_Args  argValues;
    lqtk_QComboBox_completer_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::completer();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "completer", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_contextMenuEvent_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QContextMenuEvent*> arg_2_1;
};

extern "C" int lqtk_QComboBox_contextMenuEvent(lua_State* L)
{
    lqtk_QComboBox_contextMenuEvent_Args  argValues;
    lqtk_QComboBox_contextMenuEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QComboBoxExportWrapper* wrapper = dynamic_cast<QComboBoxExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'contextMenuEvent' is protected in QComboBox");
                }
                    wrapper->lqtk_QComboBox_contextMenuEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "contextMenuEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_count_Args
{
    FromLua<QComboBox*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QComboBox_count(lua_State* L)
{
    lqtk_QComboBox_count_Args  argValues;
    lqtk_QComboBox_count_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::count();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "count", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_currentData_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QVariant*> rslt_1;
};

extern "C" int lqtk_QComboBox_currentData(lua_State* L)
{
    lqtk_QComboBox_currentData_Args  argValues;
    lqtk_QComboBox_currentData_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::currentData();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::currentData(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "currentData", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_currentIndex_Args
{
    FromLua<QComboBox*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QComboBox_currentIndex(lua_State* L)
{
    lqtk_QComboBox_currentIndex_Args  argValues;
    lqtk_QComboBox_currentIndex_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::currentIndex();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "currentIndex", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_currentText_Args
{
    FromLua<QComboBox*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QComboBox_currentText_doLua(lua_State* L)
{
    lqtk_QComboBox_currentText_Args* args = (lqtk_QComboBox_currentText_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::currentText();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "currentText", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QComboBox_currentText(lua_State* L)
{
    try {
        lqtk_QComboBox_currentText_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QComboBox_currentText_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_duplicatesEnabled_Args
{
    FromLua<QComboBox*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QComboBox_duplicatesEnabled(lua_State* L)
{
    lqtk_QComboBox_duplicatesEnabled_Args  argValues;
    lqtk_QComboBox_duplicatesEnabled_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::duplicatesEnabled();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "duplicatesEnabled", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_event_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QEvent*> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QComboBox_event(lua_State* L)
{
    lqtk_QComboBox_event_Args  argValues;
    lqtk_QComboBox_event_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::event(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "event", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_findData_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QVariant*> arg_2_1;
    FromLua<int> arg_3_1;
    FromLua<Qt::MatchFlags> arg_4_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QComboBox_findData(lua_State* L)
{
    lqtk_QComboBox_findData_Args  argValues;
    lqtk_QComboBox_findData_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::findData(*args->arg_2_1.getValue());
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
                    args->arg_1_1.getValue()->QComboBox::findData(*args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_4_1.check(L, argOffs+4);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::findData(*args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_4_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "findData", nargs, "2,3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_findText_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<Qt::MatchFlags> arg_3_1;
    ToLua<int> rslt_1;
};

static int lqtk_QComboBox_findText_doLua(lua_State* L)
{
    lqtk_QComboBox_findText_Args* args = (lqtk_QComboBox_findText_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::findText(args->arg_2_1.getValue());
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
                    args->arg_1_1.getValue()->QComboBox::findText(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "findText", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QComboBox_findText(lua_State* L)
{
    try {
        lqtk_QComboBox_findText_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QComboBox_findText_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_focusInEvent_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QFocusEvent*> arg_2_1;
};

extern "C" int lqtk_QComboBox_focusInEvent(lua_State* L)
{
    lqtk_QComboBox_focusInEvent_Args  argValues;
    lqtk_QComboBox_focusInEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QComboBoxExportWrapper* wrapper = dynamic_cast<QComboBoxExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'focusInEvent' is protected in QComboBox");
                }
                    wrapper->lqtk_QComboBox_focusInEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "focusInEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_focusOutEvent_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QFocusEvent*> arg_2_1;
};

extern "C" int lqtk_QComboBox_focusOutEvent(lua_State* L)
{
    lqtk_QComboBox_focusOutEvent_Args  argValues;
    lqtk_QComboBox_focusOutEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QComboBoxExportWrapper* wrapper = dynamic_cast<QComboBoxExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'focusOutEvent' is protected in QComboBox");
                }
                    wrapper->lqtk_QComboBox_focusOutEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "focusOutEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_hasFrame_Args
{
    FromLua<QComboBox*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QComboBox_hasFrame(lua_State* L)
{
    lqtk_QComboBox_hasFrame_Args  argValues;
    lqtk_QComboBox_hasFrame_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::hasFrame();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "hasFrame", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_hideEvent_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QHideEvent*> arg_2_1;
};

extern "C" int lqtk_QComboBox_hideEvent(lua_State* L)
{
    lqtk_QComboBox_hideEvent_Args  argValues;
    lqtk_QComboBox_hideEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QComboBoxExportWrapper* wrapper = dynamic_cast<QComboBoxExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'hideEvent' is protected in QComboBox");
                }
                    wrapper->lqtk_QComboBox_hideEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "hideEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_hidePopup_Args
{
    FromLua<QComboBox*> arg_1_1;
};

extern "C" int lqtk_QComboBox_hidePopup(lua_State* L)
{
    lqtk_QComboBox_hidePopup_Args  argValues;
    lqtk_QComboBox_hidePopup_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QComboBox::hidePopup();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "hidePopup", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_iconSize_Args
{
    FromLua<QComboBox*> arg_1_1;
    ToLua<QSize*> rslt_1;
};

extern "C" int lqtk_QComboBox_iconSize(lua_State* L)
{
    lqtk_QComboBox_iconSize_Args  argValues;
    lqtk_QComboBox_iconSize_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::iconSize();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "iconSize", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_inputMethodEvent_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QInputMethodEvent*> arg_2_1;
};

extern "C" int lqtk_QComboBox_inputMethodEvent(lua_State* L)
{
    lqtk_QComboBox_inputMethodEvent_Args  argValues;
    lqtk_QComboBox_inputMethodEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QComboBoxExportWrapper* wrapper = dynamic_cast<QComboBoxExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'inputMethodEvent' is protected in QComboBox");
                }
                    wrapper->lqtk_QComboBox_inputMethodEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "inputMethodEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_inputMethodQuery_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<Qt::InputMethodQuery> arg_2_1;
    ToLua<QVariant*> rslt_1;
};

extern "C" int lqtk_QComboBox_inputMethodQuery(lua_State* L)
{
    lqtk_QComboBox_inputMethodQuery_Args  argValues;
    lqtk_QComboBox_inputMethodQuery_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::inputMethodQuery(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "inputMethodQuery", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_insertItem_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<QString> arg_3_1;
    FromLua<QVariant*> arg_4_1;
};

static int lqtk_QComboBox_insertItem_doLua(lua_State* L)
{
    lqtk_QComboBox_insertItem_Args* args = (lqtk_QComboBox_insertItem_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QComboBox::insertItem(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_4_1.check(L, argOffs+4);
            {
                    args->arg_1_1.getValue()->QComboBox::insertItem(args->arg_2_1.getValue(), args->arg_3_1.getValue(), *args->arg_4_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "insertItem", nargs, "3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QComboBox_insertItem(lua_State* L)
{
    try {
        lqtk_QComboBox_insertItem_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QComboBox_insertItem_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_insertItems_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<QStringList> arg_3_1;
};

static int lqtk_QComboBox_insertItems_doLua(lua_State* L)
{
    lqtk_QComboBox_insertItems_Args* args = (lqtk_QComboBox_insertItems_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QComboBox::insertItems(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "insertItems", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QComboBox_insertItems(lua_State* L)
{
    try {
        lqtk_QComboBox_insertItems_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QComboBox_insertItems_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_insertPolicy_Args
{
    FromLua<QComboBox*> arg_1_1;
    ToLua<QComboBox::InsertPolicy> rslt_1;
};

extern "C" int lqtk_QComboBox_insertPolicy(lua_State* L)
{
    lqtk_QComboBox_insertPolicy_Args  argValues;
    lqtk_QComboBox_insertPolicy_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::insertPolicy();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "insertPolicy", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_insertSeparator_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QComboBox_insertSeparator(lua_State* L)
{
    lqtk_QComboBox_insertSeparator_Args  argValues;
    lqtk_QComboBox_insertSeparator_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QComboBox::insertSeparator(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "insertSeparator", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_isEditable_Args
{
    FromLua<QComboBox*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QComboBox_isEditable(lua_State* L)
{
    lqtk_QComboBox_isEditable_Args  argValues;
    lqtk_QComboBox_isEditable_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::isEditable();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "isEditable", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_itemData_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
    ToLua<QVariant*> rslt_1;
};

extern "C" int lqtk_QComboBox_itemData(lua_State* L)
{
    lqtk_QComboBox_itemData_Args  argValues;
    lqtk_QComboBox_itemData_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::itemData(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::itemData(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "itemData", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_itemIcon_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QIcon*> rslt_1;
};

extern "C" int lqtk_QComboBox_itemIcon(lua_State* L)
{
    lqtk_QComboBox_itemIcon_Args  argValues;
    lqtk_QComboBox_itemIcon_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::itemIcon(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "itemIcon", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_itemText_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QComboBox_itemText_doLua(lua_State* L)
{
    lqtk_QComboBox_itemText_Args* args = (lqtk_QComboBox_itemText_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::itemText(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "itemText", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QComboBox_itemText(lua_State* L)
{
    try {
        lqtk_QComboBox_itemText_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QComboBox_itemText_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_keyPressEvent_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QKeyEvent*> arg_2_1;
};

extern "C" int lqtk_QComboBox_keyPressEvent(lua_State* L)
{
    lqtk_QComboBox_keyPressEvent_Args  argValues;
    lqtk_QComboBox_keyPressEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QComboBoxExportWrapper* wrapper = dynamic_cast<QComboBoxExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'keyPressEvent' is protected in QComboBox");
                }
                    wrapper->lqtk_QComboBox_keyPressEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "keyPressEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_keyReleaseEvent_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QKeyEvent*> arg_2_1;
};

extern "C" int lqtk_QComboBox_keyReleaseEvent(lua_State* L)
{
    lqtk_QComboBox_keyReleaseEvent_Args  argValues;
    lqtk_QComboBox_keyReleaseEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QComboBoxExportWrapper* wrapper = dynamic_cast<QComboBoxExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'keyReleaseEvent' is protected in QComboBox");
                }
                    wrapper->lqtk_QComboBox_keyReleaseEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "keyReleaseEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_lineEdit_Args
{
    FromLua<QComboBox*> arg_1_1;
    ToLua<QLineEdit*> rslt_1;
};

extern "C" int lqtk_QComboBox_lineEdit(lua_State* L)
{
    lqtk_QComboBox_lineEdit_Args  argValues;
    lqtk_QComboBox_lineEdit_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::lineEdit();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "lineEdit", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_maxCount_Args
{
    FromLua<QComboBox*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QComboBox_maxCount(lua_State* L)
{
    lqtk_QComboBox_maxCount_Args  argValues;
    lqtk_QComboBox_maxCount_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::maxCount();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "maxCount", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_maxVisibleItems_Args
{
    FromLua<QComboBox*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QComboBox_maxVisibleItems(lua_State* L)
{
    lqtk_QComboBox_maxVisibleItems_Args  argValues;
    lqtk_QComboBox_maxVisibleItems_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::maxVisibleItems();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "maxVisibleItems", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_minimumContentsLength_Args
{
    FromLua<QComboBox*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QComboBox_minimumContentsLength(lua_State* L)
{
    lqtk_QComboBox_minimumContentsLength_Args  argValues;
    lqtk_QComboBox_minimumContentsLength_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::minimumContentsLength();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "minimumContentsLength", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_minimumSizeHint_Args
{
    FromLua<QComboBox*> arg_1_1;
    ToLua<QSize*> rslt_1;
};

extern "C" int lqtk_QComboBox_minimumSizeHint(lua_State* L)
{
    lqtk_QComboBox_minimumSizeHint_Args  argValues;
    lqtk_QComboBox_minimumSizeHint_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::minimumSizeHint();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "minimumSizeHint", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_model_Args
{
    FromLua<QComboBox*> arg_1_1;
    ToLua<QAbstractItemModel*> rslt_1;
};

extern "C" int lqtk_QComboBox_model(lua_State* L)
{
    lqtk_QComboBox_model_Args  argValues;
    lqtk_QComboBox_model_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::model();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "model", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_modelColumn_Args
{
    FromLua<QComboBox*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QComboBox_modelColumn(lua_State* L)
{
    lqtk_QComboBox_modelColumn_Args  argValues;
    lqtk_QComboBox_modelColumn_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::modelColumn();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "modelColumn", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_mousePressEvent_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QMouseEvent*> arg_2_1;
};

extern "C" int lqtk_QComboBox_mousePressEvent(lua_State* L)
{
    lqtk_QComboBox_mousePressEvent_Args  argValues;
    lqtk_QComboBox_mousePressEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QComboBoxExportWrapper* wrapper = dynamic_cast<QComboBoxExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'mousePressEvent' is protected in QComboBox");
                }
                    wrapper->lqtk_QComboBox_mousePressEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "mousePressEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_mouseReleaseEvent_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QMouseEvent*> arg_2_1;
};

extern "C" int lqtk_QComboBox_mouseReleaseEvent(lua_State* L)
{
    lqtk_QComboBox_mouseReleaseEvent_Args  argValues;
    lqtk_QComboBox_mouseReleaseEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QComboBoxExportWrapper* wrapper = dynamic_cast<QComboBoxExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'mouseReleaseEvent' is protected in QComboBox");
                }
                    wrapper->lqtk_QComboBox_mouseReleaseEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "mouseReleaseEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_paintEvent_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QPaintEvent*> arg_2_1;
};

extern "C" int lqtk_QComboBox_paintEvent(lua_State* L)
{
    lqtk_QComboBox_paintEvent_Args  argValues;
    lqtk_QComboBox_paintEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QComboBoxExportWrapper* wrapper = dynamic_cast<QComboBoxExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'paintEvent' is protected in QComboBox");
                }
                    wrapper->lqtk_QComboBox_paintEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "paintEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_placeholderText_Args
{
    FromLua<QComboBox*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QComboBox_placeholderText_doLua(lua_State* L)
{
    lqtk_QComboBox_placeholderText_Args* args = (lqtk_QComboBox_placeholderText_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::placeholderText();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "placeholderText", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QComboBox_placeholderText(lua_State* L)
{
    try {
        lqtk_QComboBox_placeholderText_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QComboBox_placeholderText_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_removeItem_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QComboBox_removeItem(lua_State* L)
{
    lqtk_QComboBox_removeItem_Args  argValues;
    lqtk_QComboBox_removeItem_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QComboBox::removeItem(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "removeItem", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_resizeEvent_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QResizeEvent*> arg_2_1;
};

extern "C" int lqtk_QComboBox_resizeEvent(lua_State* L)
{
    lqtk_QComboBox_resizeEvent_Args  argValues;
    lqtk_QComboBox_resizeEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QComboBoxExportWrapper* wrapper = dynamic_cast<QComboBoxExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'resizeEvent' is protected in QComboBox");
                }
                    wrapper->lqtk_QComboBox_resizeEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "resizeEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_rootModelIndex_Args
{
    FromLua<QComboBox*> arg_1_1;
    ToLua<QModelIndex*> rslt_1;
};

extern "C" int lqtk_QComboBox_rootModelIndex(lua_State* L)
{
    lqtk_QComboBox_rootModelIndex_Args  argValues;
    lqtk_QComboBox_rootModelIndex_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::rootModelIndex();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "rootModelIndex", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_setCompleter_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QCompleter*> arg_2_1;
};

extern "C" int lqtk_QComboBox_setCompleter(lua_State* L)
{
    lqtk_QComboBox_setCompleter_Args  argValues;
    lqtk_QComboBox_setCompleter_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QComboBox::setCompleter(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "setCompleter", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_setCurrentIndex_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QComboBox_setCurrentIndex(lua_State* L)
{
    lqtk_QComboBox_setCurrentIndex_Args  argValues;
    lqtk_QComboBox_setCurrentIndex_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QComboBox::setCurrentIndex(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "setCurrentIndex", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_setCurrentText_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QString> arg_2_1;
};

static int lqtk_QComboBox_setCurrentText_doLua(lua_State* L)
{
    lqtk_QComboBox_setCurrentText_Args* args = (lqtk_QComboBox_setCurrentText_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QComboBox::setCurrentText(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "setCurrentText", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QComboBox_setCurrentText(lua_State* L)
{
    try {
        lqtk_QComboBox_setCurrentText_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QComboBox_setCurrentText_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_setDuplicatesEnabled_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<bool> arg_2_1;
};

extern "C" int lqtk_QComboBox_setDuplicatesEnabled(lua_State* L)
{
    lqtk_QComboBox_setDuplicatesEnabled_Args  argValues;
    lqtk_QComboBox_setDuplicatesEnabled_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QComboBox::setDuplicatesEnabled(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "setDuplicatesEnabled", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_setEditText_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QString> arg_2_1;
};

static int lqtk_QComboBox_setEditText_doLua(lua_State* L)
{
    lqtk_QComboBox_setEditText_Args* args = (lqtk_QComboBox_setEditText_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QComboBox::setEditText(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "setEditText", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QComboBox_setEditText(lua_State* L)
{
    try {
        lqtk_QComboBox_setEditText_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QComboBox_setEditText_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_setEditable_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<bool> arg_2_1;
};

extern "C" int lqtk_QComboBox_setEditable(lua_State* L)
{
    lqtk_QComboBox_setEditable_Args  argValues;
    lqtk_QComboBox_setEditable_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QComboBox::setEditable(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "setEditable", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_setFrame_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<bool> arg_2_1;
};

extern "C" int lqtk_QComboBox_setFrame(lua_State* L)
{
    lqtk_QComboBox_setFrame_Args  argValues;
    lqtk_QComboBox_setFrame_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QComboBox::setFrame(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "setFrame", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_setIconSize_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QSize*> arg_2_1;
};

extern "C" int lqtk_QComboBox_setIconSize(lua_State* L)
{
    lqtk_QComboBox_setIconSize_Args  argValues;
    lqtk_QComboBox_setIconSize_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QComboBox::setIconSize(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "setIconSize", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_setInsertPolicy_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QComboBox::InsertPolicy> arg_2_1;
};

extern "C" int lqtk_QComboBox_setInsertPolicy(lua_State* L)
{
    lqtk_QComboBox_setInsertPolicy_Args  argValues;
    lqtk_QComboBox_setInsertPolicy_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QComboBox::setInsertPolicy(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "setInsertPolicy", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_setItemData_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
    FromLua<QVariant*> arg_3_1;
};

extern "C" int lqtk_QComboBox_setItemData(lua_State* L)
{
    lqtk_QComboBox_setItemData_Args  argValues;
    lqtk_QComboBox_setItemData_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QComboBox::setItemData(args->arg_2_1.getValue(), *args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_2_2.check(L, argOffs+4);
            {
                    args->arg_1_1.getValue()->QComboBox::setItemData(args->arg_2_1.getValue(), *args->arg_3_1.getValue(), args->arg_2_2.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "setItemData", nargs, "3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_setItemIcon_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<QIcon*> arg_3_1;
};

extern "C" int lqtk_QComboBox_setItemIcon(lua_State* L)
{
    lqtk_QComboBox_setItemIcon_Args  argValues;
    lqtk_QComboBox_setItemIcon_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QComboBox::setItemIcon(args->arg_2_1.getValue(), *args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "setItemIcon", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_setItemText_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<QString> arg_3_1;
};

static int lqtk_QComboBox_setItemText_doLua(lua_State* L)
{
    lqtk_QComboBox_setItemText_Args* args = (lqtk_QComboBox_setItemText_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QComboBox::setItemText(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "setItemText", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QComboBox_setItemText(lua_State* L)
{
    try {
        lqtk_QComboBox_setItemText_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QComboBox_setItemText_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_setLineEdit_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QLineEdit*> arg_2_1;
};

extern "C" int lqtk_QComboBox_setLineEdit(lua_State* L)
{
    lqtk_QComboBox_setLineEdit_Args  argValues;
    lqtk_QComboBox_setLineEdit_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QComboBox::setLineEdit(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "setLineEdit", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_setMaxCount_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QComboBox_setMaxCount(lua_State* L)
{
    lqtk_QComboBox_setMaxCount_Args  argValues;
    lqtk_QComboBox_setMaxCount_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QComboBox::setMaxCount(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "setMaxCount", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_setMaxVisibleItems_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QComboBox_setMaxVisibleItems(lua_State* L)
{
    lqtk_QComboBox_setMaxVisibleItems_Args  argValues;
    lqtk_QComboBox_setMaxVisibleItems_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QComboBox::setMaxVisibleItems(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "setMaxVisibleItems", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_setMinimumContentsLength_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QComboBox_setMinimumContentsLength(lua_State* L)
{
    lqtk_QComboBox_setMinimumContentsLength_Args  argValues;
    lqtk_QComboBox_setMinimumContentsLength_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QComboBox::setMinimumContentsLength(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "setMinimumContentsLength", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_setModel_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QAbstractItemModel*> arg_2_1;
};

extern "C" int lqtk_QComboBox_setModel(lua_State* L)
{
    lqtk_QComboBox_setModel_Args  argValues;
    lqtk_QComboBox_setModel_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QComboBox::setModel(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "setModel", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_setModelColumn_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QComboBox_setModelColumn(lua_State* L)
{
    lqtk_QComboBox_setModelColumn_Args  argValues;
    lqtk_QComboBox_setModelColumn_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QComboBox::setModelColumn(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "setModelColumn", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_setPlaceholderText_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QString> arg_2_1;
};

static int lqtk_QComboBox_setPlaceholderText_doLua(lua_State* L)
{
    lqtk_QComboBox_setPlaceholderText_Args* args = (lqtk_QComboBox_setPlaceholderText_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QComboBox::setPlaceholderText(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "setPlaceholderText", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QComboBox_setPlaceholderText(lua_State* L)
{
    try {
        lqtk_QComboBox_setPlaceholderText_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QComboBox_setPlaceholderText_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_setRootModelIndex_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QModelIndex*> arg_2_1;
};

extern "C" int lqtk_QComboBox_setRootModelIndex(lua_State* L)
{
    lqtk_QComboBox_setRootModelIndex_Args  argValues;
    lqtk_QComboBox_setRootModelIndex_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QComboBox::setRootModelIndex(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "setRootModelIndex", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_setSizeAdjustPolicy_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QComboBox::SizeAdjustPolicy> arg_2_1;
};

extern "C" int lqtk_QComboBox_setSizeAdjustPolicy(lua_State* L)
{
    lqtk_QComboBox_setSizeAdjustPolicy_Args  argValues;
    lqtk_QComboBox_setSizeAdjustPolicy_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QComboBox::setSizeAdjustPolicy(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "setSizeAdjustPolicy", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_setView_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QAbstractItemView*> arg_2_1;
};

extern "C" int lqtk_QComboBox_setView(lua_State* L)
{
    lqtk_QComboBox_setView_Args  argValues;
    lqtk_QComboBox_setView_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QComboBox::setView(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "setView", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_showEvent_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QShowEvent*> arg_2_1;
};

extern "C" int lqtk_QComboBox_showEvent(lua_State* L)
{
    lqtk_QComboBox_showEvent_Args  argValues;
    lqtk_QComboBox_showEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QComboBoxExportWrapper* wrapper = dynamic_cast<QComboBoxExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'showEvent' is protected in QComboBox");
                }
                    wrapper->lqtk_QComboBox_showEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "showEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_showPopup_Args
{
    FromLua<QComboBox*> arg_1_1;
};

extern "C" int lqtk_QComboBox_showPopup(lua_State* L)
{
    lqtk_QComboBox_showPopup_Args  argValues;
    lqtk_QComboBox_showPopup_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QComboBox::showPopup();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "showPopup", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_sizeAdjustPolicy_Args
{
    FromLua<QComboBox*> arg_1_1;
    ToLua<QComboBox::SizeAdjustPolicy> rslt_1;
};

extern "C" int lqtk_QComboBox_sizeAdjustPolicy(lua_State* L)
{
    lqtk_QComboBox_sizeAdjustPolicy_Args  argValues;
    lqtk_QComboBox_sizeAdjustPolicy_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::sizeAdjustPolicy();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "sizeAdjustPolicy", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_sizeHint_Args
{
    FromLua<QComboBox*> arg_1_1;
    ToLua<QSize*> rslt_1;
};

extern "C" int lqtk_QComboBox_sizeHint(lua_State* L)
{
    lqtk_QComboBox_sizeHint_Args  argValues;
    lqtk_QComboBox_sizeHint_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::sizeHint();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "sizeHint", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_view_Args
{
    FromLua<QComboBox*> arg_1_1;
    ToLua<QAbstractItemView*> rslt_1;
};

extern "C" int lqtk_QComboBox_view(lua_State* L)
{
    lqtk_QComboBox_view_Args  argValues;
    lqtk_QComboBox_view_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QComboBox::view();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "view", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QComboBox_wheelEvent_Args
{
    FromLua<QComboBox*> arg_1_1;
    FromLua<QWheelEvent*> arg_2_1;
};

extern "C" int lqtk_QComboBox_wheelEvent(lua_State* L)
{
    lqtk_QComboBox_wheelEvent_Args  argValues;
    lqtk_QComboBox_wheelEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QComboBoxExportWrapper* wrapper = dynamic_cast<QComboBoxExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'wheelEvent' is protected in QComboBox");
                }
                    wrapper->lqtk_QComboBox_wheelEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QComboBox", "wheelEvent", nargs, "2");
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
        QComboBoxBinding::QType* ptr = static_cast<QComboBoxBinding::QType*>(objectPtr);
        if (targetClassInfo == &QComboBoxBinding::classInfo) {
            return ptr;
        }
        if (targetClassInfo == &QWidgetBinding::classInfo) {
            return static_cast<QWidgetBinding::QType*>(ptr);
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
        QComboBox* ptr = (QComboBox*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QComboBox* obj = (QComboBox*) objectPtr;
        
        QComboBoxWrapper* wrapper = dynamic_cast<QComboBoxWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */

struct lqtk_QComboBox_new_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<QComboBox*> rslt_1;
};

extern "C" int lqtk_QComboBox_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QComboBox_new_Args  argValues;
    lqtk_QComboBox_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QComboBoxBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QComboBox> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }

        QWidgetBinding2::assert_new();

        if (nargs == 0) { do {
            {
                QComboBoxWrapper* rslt = 
                    new QComboBoxWrapper();
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
                QComboBoxWrapper* rslt = 
                    new QComboBoxWrapper(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QComboBox", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QComboBox", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QComboBox_new(lua_State* L)
{
    return lqtk_QComboBox_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QComboBoxBinding::pushObject(lua_State* L, QComboBox* objPtr, OwnerType ownerType)
{
    QComboBoxWrapper* wrapper = dynamic_cast<QComboBoxWrapper*>(objPtr);
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
        udata = ObjectUdata::pushNew<QComboBox>(L, hasUserValue);     // -> uval?, udata
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
    { "AdjustToContents",                      Member::INTEGER,              (void*) QComboBox::AdjustToContents },
    { "AdjustToContentsOnFirstShow",           Member::INTEGER,              (void*) QComboBox::AdjustToContentsOnFirstShow },
    { "AdjustToMinimumContentsLengthWithIcon", Member::INTEGER,              (void*) QComboBox::AdjustToMinimumContentsLengthWithIcon },
    { "InsertAfterCurrent",                    Member::INTEGER,              (void*) QComboBox::InsertAfterCurrent },
    { "InsertAlphabetically",                  Member::INTEGER,              (void*) QComboBox::InsertAlphabetically },
    { "InsertAtBottom",                        Member::INTEGER,              (void*) QComboBox::InsertAtBottom },
    { "InsertAtCurrent",                       Member::INTEGER,              (void*) QComboBox::InsertAtCurrent },
    { "InsertAtTop",                           Member::INTEGER,              (void*) QComboBox::InsertAtTop },
    { "InsertBeforeCurrent",                   Member::INTEGER,              (void*) QComboBox::InsertBeforeCurrent },
    { "NoInsert",                              Member::INTEGER,              (void*) QComboBox::NoInsert },
    { "acceptDrops",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_acceptDrops },
    { "accessibleDescription",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_accessibleDescription },
    { "accessibleIdentifier",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_accessibleIdentifier },
    { "accessibleName",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_accessibleName },
    { "addActions",                            Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_addActions },
    { "addItem",                               Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_addItem },
    { "addItems",                              Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_addItems },
    { "changeEvent",                           Member::VIRTUAL_FUNCTION,     (void*) lqtk_QComboBox_changeEvent },
    { "children",                              Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_children },
    { "clear",                                 Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_clear },
    { "clearEditText",                         Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_clearEditText },
    { "close",                                 Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_close },
    { "closeEvent",                            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_closeEvent },
    { "completer",                             Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_completer },
    { "connect",                               Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_connect },
    { "contextMenuEvent",                      Member::VIRTUAL_FUNCTION,     (void*) lqtk_QComboBox_contextMenuEvent },
    { "count",                                 Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_count },
    { "currentData",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_currentData },
    { "currentIndex",                          Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_currentIndex },
    { "currentText",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_currentText },
    { "duplicatesEnabled",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_duplicatesEnabled },
    { "event",                                 Member::VIRTUAL_FUNCTION,     (void*) lqtk_QComboBox_event },
    { "findData",                              Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_findData },
    { "findText",                              Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_findText },
    { "focusInEvent",                          Member::VIRTUAL_FUNCTION,     (void*) lqtk_QComboBox_focusInEvent },
    { "focusOutEvent",                         Member::VIRTUAL_FUNCTION,     (void*) lqtk_QComboBox_focusOutEvent },
    { "font",                                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_font },
    { "geometry",                              Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_geometry },
    { "hasFrame",                              Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_hasFrame },
    { "hasHeightForWidth",                     Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_hasHeightForWidth },
    { "height",                                Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_height },
    { "heightForWidth",                        Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_heightForWidth },
    { "hide",                                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_hide },
    { "hideEvent",                             Member::VIRTUAL_FUNCTION,     (void*) lqtk_QComboBox_hideEvent },
    { "hidePopup",                             Member::VIRTUAL_FUNCTION,     (void*) lqtk_QComboBox_hidePopup },
    { "iconSize",                              Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_iconSize },
    { "inputMethodEvent",                      Member::VIRTUAL_FUNCTION,     (void*) lqtk_QComboBox_inputMethodEvent },
    { "inputMethodQuery",                      Member::VIRTUAL_FUNCTION,     (void*) lqtk_QComboBox_inputMethodQuery },
    { "insertItem",                            Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_insertItem },
    { "insertItems",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_insertItems },
    { "insertPolicy",                          Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_insertPolicy },
    { "insertSeparator",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_insertSeparator },
    { "isEditable",                            Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_isEditable },
    { "itemData",                              Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_itemData },
    { "itemIcon",                              Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_itemIcon },
    { "itemText",                              Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_itemText },
    { "keyPressEvent",                         Member::VIRTUAL_FUNCTION,     (void*) lqtk_QComboBox_keyPressEvent },
    { "keyReleaseEvent",                       Member::VIRTUAL_FUNCTION,     (void*) lqtk_QComboBox_keyReleaseEvent },
    { "keyboardGrabber",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_keyboardGrabber },
    { "lineEdit",                              Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_lineEdit },
    { "maxCount",                              Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_maxCount },
    { "maxVisibleItems",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_maxVisibleItems },
    { "minimumContentsLength",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_minimumContentsLength },
    { "minimumSizeHint",                       Member::VIRTUAL_FUNCTION,     (void*) lqtk_QComboBox_minimumSizeHint },
    { "model",                                 Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_model },
    { "modelColumn",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_modelColumn },
    { "mouseDoubleClickEvent",                 Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mouseDoubleClickEvent },
    { "mouseGrabber",                          Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_mouseGrabber },
    { "mouseMoveEvent",                        Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mouseMoveEvent },
    { "mousePressEvent",                       Member::VIRTUAL_FUNCTION,     (void*) lqtk_QComboBox_mousePressEvent },
    { "mouseReleaseEvent",                     Member::VIRTUAL_FUNCTION,     (void*) lqtk_QComboBox_mouseReleaseEvent },
    { "move",                                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_move },
    { "objectName",                            Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "paintEvent",                            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QComboBox_paintEvent },
    { "palette",                               Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_palette },
    { "parent",                                Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "parentWidget",                          Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_parentWidget },
    { "placeholderText",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_placeholderText },
    { "removeItem",                            Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_removeItem },
    { "resize",                                Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_resize },
    { "resizeEvent",                           Member::VIRTUAL_FUNCTION,     (void*) lqtk_QComboBox_resizeEvent },
    { "rootModelIndex",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_rootModelIndex },
    { "setBackgroundRole",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setBackgroundRole },
    { "setCompleter",                          Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_setCompleter },
    { "setCurrentIndex",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_setCurrentIndex },
    { "setCurrentText",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_setCurrentText },
    { "setDuplicatesEnabled",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_setDuplicatesEnabled },
    { "setEditText",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_setEditText },
    { "setEditable",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_setEditable },
    { "setFont",                               Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setFont },
    { "setFrame",                              Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_setFrame },
    { "setGeometry",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setGeometry },
    { "setIconSize",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_setIconSize },
    { "setInsertPolicy",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_setInsertPolicy },
    { "setItemData",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_setItemData },
    { "setItemIcon",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_setItemIcon },
    { "setItemText",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_setItemText },
    { "setLayout",                             Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setLayout },
    { "setLineEdit",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_setLineEdit },
    { "setMaxCount",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_setMaxCount },
    { "setMaxVisibleItems",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_setMaxVisibleItems },
    { "setMinimumContentsLength",              Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_setMinimumContentsLength },
    { "setModel",                              Member::VIRTUAL_FUNCTION,     (void*) lqtk_QComboBox_setModel },
    { "setModelColumn",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_setModelColumn },
    { "setObjectName",                         Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",                             Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { "setPlaceholderText",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_setPlaceholderText },
    { "setRootModelIndex",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_setRootModelIndex },
    { "setSizeAdjustPolicy",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_setSizeAdjustPolicy },
    { "setSizePolicy",                         Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setSizePolicy },
    { "setStyleSheet",                         Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setStyleSheet },
    { "setTabOrder",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setTabOrder },
    { "setToolTip",                            Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setToolTip },
    { "setToolTipDuration",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setToolTipDuration },
    { "setUpdatesEnabled",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setUpdatesEnabled },
    { "setView",                               Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_setView },
    { "setVisible",                            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_setVisible },
    { "setWhatsThis",                          Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setWhatsThis },
    { "setWindowFilePath",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setWindowFilePath },
    { "setWindowFlag",                         Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setWindowFlag },
    { "setWindowFlags",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setWindowFlags },
    { "setWindowTitle",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setWindowTitle },
    { "show",                                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_show },
    { "showEvent",                             Member::VIRTUAL_FUNCTION,     (void*) lqtk_QComboBox_showEvent },
    { "showPopup",                             Member::VIRTUAL_FUNCTION,     (void*) lqtk_QComboBox_showPopup },
    { "size",                                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_size },
    { "sizeAdjustPolicy",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_sizeAdjustPolicy },
    { "sizeHint",                              Member::VIRTUAL_FUNCTION,     (void*) lqtk_QComboBox_sizeHint },
    { "sizePolicy",                            Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_sizePolicy },
    { "update",                                Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_update },
    { "view",                                  Member::NORMAL_FUNCTION,      (void*) lqtk_QComboBox_view },
    { "wheelEvent",                            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QComboBox_wheelEvent },
    { "width",                                 Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_width },
    { "windowFlags",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_windowFlags },
    { "windowModality",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_windowModality },
    { "windowOpacity",                         Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_windowOpacity },
    { "windowRole",                            Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_windowRole },
    { "windowState",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_windowState },
    { NULL,                                    Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QComboBoxBinding::classInfo = 
{
    "QComboBox",

    &QWidgetBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    lqtk_QComboBox_constructor,
    lqtk_QComboBox_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    138,
    members
};

/* ============================================================================================ */

int QComboBoxBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
