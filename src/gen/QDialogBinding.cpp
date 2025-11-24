// Type: QDialog
// Base: QWidget

/* ============================================================================================ */

#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
#include <QEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QObject>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
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
#include "QCloseEventBinding.hpp"
#include "QContextMenuEventBinding.hpp"
#include "QDialogBinding.hpp"
#include "QEventBinding.hpp"
#include "QKeyEventBinding.hpp"
#include "QMouseEventBinding.hpp"
#include "QObjectBinding.hpp"
#include "QPaintEventBinding.hpp"
#include "QResizeEventBinding.hpp"
#include "QShowEventBinding.hpp"
#include "QSizeBinding.hpp"
#include "QWidgetBinding.hpp"
#include "QtBinding.hpp"
#include "QObjectWrapper.hpp"
#include "QWidgetWrapper.hpp"
#include "QDialogWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QDialogWrapper::QDialogWrapper()
        : QDialog(),
          lqtk_stateGuard(nullptr)
    {}
    QDialogWrapper::QDialogWrapper(
                   QWidget* arg1) 
        : QDialog(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}
    QDialogWrapper::QDialogWrapper(
                   QWidget* arg1, 
                   Qt::WindowFlags arg2) 
        : QDialog(
                   arg1,
                   arg2),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QDialogWrapper::lqtk_destruct(lua_State* L) {
        QDialog* objPtr = (QDialog*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QDialogWrapper::~QDialogWrapper() {
        trace::printf("Deleting lqtk::QDialogWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->L;
            if (L) {
                QDialog* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QDialog");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

    void QDialogWrapper::lqtk_QDialog_closeEvent(
                   QCloseEvent* arg1) 
    {
        return QDialog::closeEvent(
                   arg1); 
    }

    void QDialogWrapper::lqtk_QDialog_contextMenuEvent(
                   QContextMenuEvent* arg1) 
    {
        return QDialog::contextMenuEvent(
                   arg1); 
    }

    void QDialogWrapper::lqtk_QDialog_keyPressEvent(
                   QKeyEvent* arg1) 
    {
        return QDialog::keyPressEvent(
                   arg1); 
    }

    void QDialogWrapper::lqtk_QDialog_resizeEvent(
                   QResizeEvent* arg1) 
    {
        return QDialog::resizeEvent(
                   arg1); 
    }

    void QDialogWrapper::lqtk_QDialog_showEvent(
                   QShowEvent* arg1) 
    {
        return QDialog::showEvent(
                   arg1); 
    }

    void QDialogWrapper::lqtk_QWidget_closeEvent(
                   QCloseEvent* arg1) 
    {
        return QWidget::closeEvent(
                   arg1); 
    }

    bool QDialogWrapper::lqtk_QWidget_event(
                   QEvent* arg1) 
    {
        return QWidget::event(
                   arg1); 
    }

    void QDialogWrapper::lqtk_QWidget_mouseDoubleClickEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseDoubleClickEvent(
                   arg1); 
    }

    void QDialogWrapper::lqtk_QWidget_mouseMoveEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseMoveEvent(
                   arg1); 
    }

    void QDialogWrapper::lqtk_QWidget_mousePressEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mousePressEvent(
                   arg1); 
    }

    void QDialogWrapper::lqtk_QWidget_mouseReleaseEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseReleaseEvent(
                   arg1); 
    }

    void QDialogWrapper::lqtk_QWidget_paintEvent(
                   QPaintEvent* arg1) 
    {
        return QWidget::paintEvent(
                   arg1); 
    }

    void QDialogWrapper::lqtk_QWidget_resizeEvent(
                   QResizeEvent* arg1) 
    {
        return QWidget::resizeEvent(
                   arg1); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QDialogWrapper::accept1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        accept1CallArgs* args = (accept1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "accept") != LUA_TNIL) {        // -> uval, eh, member?
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

    void QDialogWrapper::accept()
    {
        lua_State* L = getL();
        if (L) {
            accept1CallArgs args(
                    this
            );
            {
                BindingUtil::callLuaMethodImpl(L, accept1_doLua, &args, "QDialog", "accept");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QDialog::accept();
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QDialogWrapper::closeEvent1_doLua(lua_State* L) 
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

    void QDialogWrapper::closeEvent(
                   QCloseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            closeEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, closeEvent1_doLua, &args, "QDialog", "closeEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QDialog::closeEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QDialogWrapper::contextMenuEvent1_doLua(lua_State* L) 
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

    void QDialogWrapper::contextMenuEvent(
                   QContextMenuEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            contextMenuEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, contextMenuEvent1_doLua, &args, "QDialog", "contextMenuEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QDialog::contextMenuEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QDialogWrapper::done1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        done1CallArgs* args = (done1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "done") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->arg2.push(L);
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

    void QDialogWrapper::done(
                   int arg2) 
    {
        lua_State* L = getL();
        if (L) {
            done1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, done1_doLua, &args, "QDialog", "done");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QDialog::done(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QDialogWrapper::keyPressEvent1_doLua(lua_State* L) 
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

    void QDialogWrapper::keyPressEvent(
                   QKeyEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            keyPressEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, keyPressEvent1_doLua, &args, "QDialog", "keyPressEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QDialog::keyPressEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QDialogWrapper::minimumSizeHint1_doLua(lua_State* L) 
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

    QSize QDialogWrapper::minimumSizeHint() const
    {
        lua_State* L = getL();
        if (L) {
            minimumSizeHint1CallArgs args(
                    const_cast<QDialogWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, minimumSizeHint1_doLua, &args, "QDialog", "minimumSizeHint");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QSize'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QDialog", "minimumSizeHint", msg);
                }
            }
        }
        return QDialog::minimumSizeHint();
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QDialogWrapper::open1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        open1CallArgs* args = (open1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "open") != LUA_TNIL) {        // -> uval, eh, member?
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

    void QDialogWrapper::open()
    {
        lua_State* L = getL();
        if (L) {
            open1CallArgs args(
                    this
            );
            {
                BindingUtil::callLuaMethodImpl(L, open1_doLua, &args, "QDialog", "open");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QDialog::open();
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QDialogWrapper::reject1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        reject1CallArgs* args = (reject1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "reject") != LUA_TNIL) {        // -> uval, eh, member?
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

    void QDialogWrapper::reject()
    {
        lua_State* L = getL();
        if (L) {
            reject1CallArgs args(
                    this
            );
            {
                BindingUtil::callLuaMethodImpl(L, reject1_doLua, &args, "QDialog", "reject");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QDialog::reject();
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QDialogWrapper::resizeEvent1_doLua(lua_State* L) 
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

    void QDialogWrapper::resizeEvent(
                   QResizeEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            resizeEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, resizeEvent1_doLua, &args, "QDialog", "resizeEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QDialog::resizeEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QDialogWrapper::setVisible1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        setVisible1CallArgs* args = (setVisible1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "setVisible") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->arg2.push(L);
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

    void QDialogWrapper::setVisible(
                   bool arg2) 
    {
        lua_State* L = getL();
        if (L) {
            setVisible1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, setVisible1_doLua, &args, "QDialog", "setVisible");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QDialog::setVisible(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QDialogWrapper::showEvent1_doLua(lua_State* L) 
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

    void QDialogWrapper::showEvent(
                   QShowEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            showEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, showEvent1_doLua, &args, "QDialog", "showEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QDialog::showEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QDialogWrapper::sizeHint1_doLua(lua_State* L) 
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

    QSize QDialogWrapper::sizeHint() const
    {
        lua_State* L = getL();
        if (L) {
            sizeHint1CallArgs args(
                    const_cast<QDialogWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, sizeHint1_doLua, &args, "QDialog", "sizeHint");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QSize'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QDialog", "sizeHint", msg);
                }
            }
        }
        return QDialog::sizeHint();
    }

/* -------------------------------------------------------------------------------------------- */
    bool QDialogWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::event1_doLua, &args, "QDialog", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QDialog", "event", msg);
                }
            }
        }
        return QDialog::event(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QDialogWrapper::hasHeightForWidth() const
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::hasHeightForWidth1CallArgs args(
                    const_cast<QDialogWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::hasHeightForWidth1_doLua, &args, "QDialog", "hasHeightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QDialog", "hasHeightForWidth", msg);
                }
            }
        }
        return QDialog::hasHeightForWidth();
    }

/* -------------------------------------------------------------------------------------------- */
    int QDialogWrapper::heightForWidth(
                   int arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::heightForWidth1CallArgs args(
                    const_cast<QDialogWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::heightForWidth1_doLua, &args, "QDialog", "heightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QDialog", "heightForWidth", msg);
                }
            }
        }
        return QDialog::heightForWidth(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QDialogWrapper::mouseDoubleClickEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseDoubleClickEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseDoubleClickEvent1_doLua, &args, "QDialog", "mouseDoubleClickEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QDialog::mouseDoubleClickEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QDialogWrapper::mouseMoveEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseMoveEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseMoveEvent1_doLua, &args, "QDialog", "mouseMoveEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QDialog::mouseMoveEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QDialogWrapper::mousePressEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mousePressEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mousePressEvent1_doLua, &args, "QDialog", "mousePressEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QDialog::mousePressEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QDialogWrapper::mouseReleaseEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseReleaseEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseReleaseEvent1_doLua, &args, "QDialog", "mouseReleaseEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QDialog::mouseReleaseEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QDialogWrapper::paintEvent(
                   QPaintEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::paintEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::paintEvent1_doLua, &args, "QDialog", "paintEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QDialog::paintEvent(
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
    int lqtk_QWidget_event(lua_State* L);
    int lqtk_QWidget_font(lua_State* L);
    int lqtk_QWidget_geometry(lua_State* L);
    int lqtk_QWidget_hasHeightForWidth(lua_State* L);
    int lqtk_QWidget_height(lua_State* L);
    int lqtk_QWidget_heightForWidth(lua_State* L);
    int lqtk_QWidget_hide(lua_State* L);
    int lqtk_QWidget_mouseDoubleClickEvent(lua_State* L);
    int lqtk_QWidget_mouseMoveEvent(lua_State* L);
    int lqtk_QWidget_mousePressEvent(lua_State* L);
    int lqtk_QWidget_mouseReleaseEvent(lua_State* L);
    int lqtk_QWidget_move(lua_State* L);
    int lqtk_QWidget_paintEvent(lua_State* L);
    int lqtk_QWidget_palette(lua_State* L);
    int lqtk_QWidget_parentWidget(lua_State* L);
    int lqtk_QWidget_resize(lua_State* L);
    int lqtk_QWidget_setBackgroundRole(lua_State* L);
    int lqtk_QWidget_setFont(lua_State* L);
    int lqtk_QWidget_setGeometry(lua_State* L);
    int lqtk_QWidget_setLayout(lua_State* L);
    int lqtk_QWidget_setSizePolicy(lua_State* L);
    int lqtk_QWidget_setWindowTitle(lua_State* L);
    int lqtk_QWidget_show(lua_State* L);
    int lqtk_QWidget_size(lua_State* L);
    int lqtk_QWidget_sizePolicy(lua_State* L);
    int lqtk_QWidget_update(lua_State* L);
    int lqtk_QWidget_width(lua_State* L);
    int lqtk_QObject_children(lua_State* L);
    int lqtk_QObject_connect(lua_State* L);
    int lqtk_QObject_objectName(lua_State* L);
    int lqtk_QObject_parent(lua_State* L);
    int lqtk_QObject_setObjectName(lua_State* L);
    int lqtk_QObject_setParent(lua_State* L);
}

/* ============================================================================================ */


struct lqtk_QDialog_accept_Args
{
    FromLua<QDialog*> arg_1_1;
};

extern "C" int lqtk_QDialog_accept(lua_State* L)
{
    lqtk_QDialog_accept_Args  argValues;
    lqtk_QDialog_accept_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QDialog::accept();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDialog", "accept", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDialog_closeEvent_Args
{
    FromLua<QDialog*> arg_1_1;
    FromLua<QCloseEvent*> arg_2_1;
};

extern "C" int lqtk_QDialog_closeEvent(lua_State* L)
{
    lqtk_QDialog_closeEvent_Args  argValues;
    lqtk_QDialog_closeEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QDialogExportWrapper* wrapper = dynamic_cast<QDialogExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'closeEvent' is protected in QDialog");
                }
                    wrapper->lqtk_QDialog_closeEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDialog", "closeEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDialog_contextMenuEvent_Args
{
    FromLua<QDialog*> arg_1_1;
    FromLua<QContextMenuEvent*> arg_2_1;
};

extern "C" int lqtk_QDialog_contextMenuEvent(lua_State* L)
{
    lqtk_QDialog_contextMenuEvent_Args  argValues;
    lqtk_QDialog_contextMenuEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QDialogExportWrapper* wrapper = dynamic_cast<QDialogExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'contextMenuEvent' is protected in QDialog");
                }
                    wrapper->lqtk_QDialog_contextMenuEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDialog", "contextMenuEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDialog_done_Args
{
    FromLua<QDialog*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QDialog_done(lua_State* L)
{
    lqtk_QDialog_done_Args  argValues;
    lqtk_QDialog_done_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QDialog::done(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDialog", "done", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDialog_isSizeGripEnabled_Args
{
    FromLua<QDialog*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QDialog_isSizeGripEnabled(lua_State* L)
{
    lqtk_QDialog_isSizeGripEnabled_Args  argValues;
    lqtk_QDialog_isSizeGripEnabled_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDialog::isSizeGripEnabled();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDialog", "isSizeGripEnabled", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDialog_keyPressEvent_Args
{
    FromLua<QDialog*> arg_1_1;
    FromLua<QKeyEvent*> arg_2_1;
};

extern "C" int lqtk_QDialog_keyPressEvent(lua_State* L)
{
    lqtk_QDialog_keyPressEvent_Args  argValues;
    lqtk_QDialog_keyPressEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QDialogExportWrapper* wrapper = dynamic_cast<QDialogExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'keyPressEvent' is protected in QDialog");
                }
                    wrapper->lqtk_QDialog_keyPressEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDialog", "keyPressEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDialog_minimumSizeHint_Args
{
    FromLua<QDialog*> arg_1_1;
    ToLua<QSize*> rslt_1;
};

extern "C" int lqtk_QDialog_minimumSizeHint(lua_State* L)
{
    lqtk_QDialog_minimumSizeHint_Args  argValues;
    lqtk_QDialog_minimumSizeHint_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDialog::minimumSizeHint();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDialog", "minimumSizeHint", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDialog_open_Args
{
    FromLua<QDialog*> arg_1_1;
};

extern "C" int lqtk_QDialog_open(lua_State* L)
{
    lqtk_QDialog_open_Args  argValues;
    lqtk_QDialog_open_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QDialog::open();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDialog", "open", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDialog_reject_Args
{
    FromLua<QDialog*> arg_1_1;
};

extern "C" int lqtk_QDialog_reject(lua_State* L)
{
    lqtk_QDialog_reject_Args  argValues;
    lqtk_QDialog_reject_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QDialog::reject();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDialog", "reject", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDialog_resizeEvent_Args
{
    FromLua<QDialog*> arg_1_1;
    FromLua<QResizeEvent*> arg_2_1;
};

extern "C" int lqtk_QDialog_resizeEvent(lua_State* L)
{
    lqtk_QDialog_resizeEvent_Args  argValues;
    lqtk_QDialog_resizeEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QDialogExportWrapper* wrapper = dynamic_cast<QDialogExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'resizeEvent' is protected in QDialog");
                }
                    wrapper->lqtk_QDialog_resizeEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDialog", "resizeEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDialog_result_Args
{
    FromLua<QDialog*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QDialog_result(lua_State* L)
{
    lqtk_QDialog_result_Args  argValues;
    lqtk_QDialog_result_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDialog::result();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDialog", "result", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDialog_setModal_Args
{
    FromLua<QDialog*> arg_1_1;
    FromLua<bool> arg_2_1;
};

extern "C" int lqtk_QDialog_setModal(lua_State* L)
{
    lqtk_QDialog_setModal_Args  argValues;
    lqtk_QDialog_setModal_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QDialog::setModal(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDialog", "setModal", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDialog_setResult_Args
{
    FromLua<QDialog*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QDialog_setResult(lua_State* L)
{
    lqtk_QDialog_setResult_Args  argValues;
    lqtk_QDialog_setResult_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QDialog::setResult(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDialog", "setResult", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDialog_setSizeGripEnabled_Args
{
    FromLua<QDialog*> arg_1_1;
    FromLua<bool> arg_2_1;
};

extern "C" int lqtk_QDialog_setSizeGripEnabled(lua_State* L)
{
    lqtk_QDialog_setSizeGripEnabled_Args  argValues;
    lqtk_QDialog_setSizeGripEnabled_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QDialog::setSizeGripEnabled(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDialog", "setSizeGripEnabled", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDialog_setVisible_Args
{
    FromLua<QDialog*> arg_1_1;
    FromLua<bool> arg_2_1;
};

extern "C" int lqtk_QDialog_setVisible(lua_State* L)
{
    lqtk_QDialog_setVisible_Args  argValues;
    lqtk_QDialog_setVisible_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QDialog::setVisible(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDialog", "setVisible", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDialog_showEvent_Args
{
    FromLua<QDialog*> arg_1_1;
    FromLua<QShowEvent*> arg_2_1;
};

extern "C" int lqtk_QDialog_showEvent(lua_State* L)
{
    lqtk_QDialog_showEvent_Args  argValues;
    lqtk_QDialog_showEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QDialogExportWrapper* wrapper = dynamic_cast<QDialogExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'showEvent' is protected in QDialog");
                }
                    wrapper->lqtk_QDialog_showEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDialog", "showEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDialog_sizeHint_Args
{
    FromLua<QDialog*> arg_1_1;
    ToLua<QSize*> rslt_1;
};

extern "C" int lqtk_QDialog_sizeHint(lua_State* L)
{
    lqtk_QDialog_sizeHint_Args  argValues;
    lqtk_QDialog_sizeHint_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDialog::sizeHint();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDialog", "sizeHint", nargs, "1");
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
        QDialogBinding::QType* ptr = static_cast<QDialogBinding::QType*>(objectPtr);
        if (targetClassInfo == &QDialogBinding::classInfo) {
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
        QDialog* ptr = (QDialog*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QDialog* obj = (QDialog*) objectPtr;
        
        QDialogWrapper* wrapper = dynamic_cast<QDialogWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */


struct lqtk_QDialog_new_Args
{
    FromLua<QWidget*> arg_1_1;
    FromLua<Qt::WindowFlags> arg_2_1;
    ToLua<QDialog*> rslt_1;
};

extern "C" int lqtk_QDialog_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QDialog_new_Args  argValues;
    lqtk_QDialog_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QDialogBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QDialog> expected");
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
                QDialogWrapper* rslt = 
                    new QDialogWrapper();
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
                QDialogWrapper* rslt = 
                    new QDialogWrapper(args->arg_1_1.getValue());
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
                QDialogWrapper* rslt = 
                    new QDialogWrapper(args->arg_1_1.getValue(), args->arg_2_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QDialog", "new", nargs, "1,2,3");
        } else {
            return util::argCountError(L, "QDialog", nullptr, nargs, "0,1,2");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QDialog_new(lua_State* L)
{
    return lqtk_QDialog_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QDialogBinding::pushObject(lua_State* L, QDialog* objPtr, OwnerType ownerType)
{
    QDialogWrapper* wrapper = dynamic_cast<QDialogWrapper*>(objPtr);
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
        udata = ObjectUdata::pushNew<QDialog>(L, hasUserValue);     // -> uval?, udata
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
    { "Accepted",              Member::INTEGER,              (void*) QDialog::Accepted },
    { "Rejected",              Member::INTEGER,              (void*) QDialog::Rejected },
    { "accept",                Member::VIRTUAL_FUNCTION,     (void*) lqtk_QDialog_accept },
    { "acceptDrops",           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_acceptDrops },
    { "accessibleDescription", Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_accessibleDescription },
    { "accessibleIdentifier",  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_accessibleIdentifier },
    { "accessibleName",        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_accessibleName },
    { "addActions",            Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_addActions },
    { "children",              Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_children },
    { "close",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_close },
    { "closeEvent",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QDialog_closeEvent },
    { "connect",               Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_connect },
    { "contextMenuEvent",      Member::VIRTUAL_FUNCTION,     (void*) lqtk_QDialog_contextMenuEvent },
    { "done",                  Member::VIRTUAL_FUNCTION,     (void*) lqtk_QDialog_done },
    { "event",                 Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_event },
    { "font",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_font },
    { "geometry",              Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_geometry },
    { "hasHeightForWidth",     Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_hasHeightForWidth },
    { "height",                Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_height },
    { "heightForWidth",        Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_heightForWidth },
    { "hide",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_hide },
    { "isSizeGripEnabled",     Member::NORMAL_FUNCTION,      (void*) lqtk_QDialog_isSizeGripEnabled },
    { "keyPressEvent",         Member::VIRTUAL_FUNCTION,     (void*) lqtk_QDialog_keyPressEvent },
    { "keyboardGrabber",       Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_keyboardGrabber },
    { "minimumSizeHint",       Member::VIRTUAL_FUNCTION,     (void*) lqtk_QDialog_minimumSizeHint },
    { "mouseDoubleClickEvent", Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mouseDoubleClickEvent },
    { "mouseGrabber",          Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_mouseGrabber },
    { "mouseMoveEvent",        Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mouseMoveEvent },
    { "mousePressEvent",       Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mousePressEvent },
    { "mouseReleaseEvent",     Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mouseReleaseEvent },
    { "move",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_move },
    { "objectName",            Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "open",                  Member::VIRTUAL_FUNCTION,     (void*) lqtk_QDialog_open },
    { "paintEvent",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_paintEvent },
    { "palette",               Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_palette },
    { "parent",                Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "parentWidget",          Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_parentWidget },
    { "reject",                Member::VIRTUAL_FUNCTION,     (void*) lqtk_QDialog_reject },
    { "resize",                Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_resize },
    { "resizeEvent",           Member::VIRTUAL_FUNCTION,     (void*) lqtk_QDialog_resizeEvent },
    { "result",                Member::NORMAL_FUNCTION,      (void*) lqtk_QDialog_result },
    { "setBackgroundRole",     Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setBackgroundRole },
    { "setFont",               Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setFont },
    { "setGeometry",           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setGeometry },
    { "setLayout",             Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setLayout },
    { "setModal",              Member::NORMAL_FUNCTION,      (void*) lqtk_QDialog_setModal },
    { "setObjectName",         Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",             Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { "setResult",             Member::NORMAL_FUNCTION,      (void*) lqtk_QDialog_setResult },
    { "setSizeGripEnabled",    Member::NORMAL_FUNCTION,      (void*) lqtk_QDialog_setSizeGripEnabled },
    { "setSizePolicy",         Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setSizePolicy },
    { "setTabOrder",           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setTabOrder },
    { "setVisible",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QDialog_setVisible },
    { "setWindowTitle",        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setWindowTitle },
    { "show",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_show },
    { "showEvent",             Member::VIRTUAL_FUNCTION,     (void*) lqtk_QDialog_showEvent },
    { "size",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_size },
    { "sizeHint",              Member::VIRTUAL_FUNCTION,     (void*) lqtk_QDialog_sizeHint },
    { "sizePolicy",            Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_sizePolicy },
    { "update",                Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_update },
    { "width",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_width },
    { NULL,                    Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QDialogBinding::classInfo = 
{
    "QDialog",

    &QWidgetBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    lqtk_QDialog_constructor,
    lqtk_QDialog_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    61,
    members
};

/* ============================================================================================ */

int QDialogBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
