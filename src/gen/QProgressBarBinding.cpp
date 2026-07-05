// Type: QProgressBar
// Base: QWidget

/* ============================================================================================ */

#include <QCloseEvent>
#include <QEvent>
#include <QMouseEvent>
#include <QObject>
#include <QPaintEvent>
#include <QProgressBar>
#include <QResizeEvent>
#include <QSize>
#include <QString>
#include <QVariant>
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
#include "QEventBinding.hpp"
#include "QMouseEventBinding.hpp"
#include "QObjectBinding.hpp"
#include "QPaintEventBinding.hpp"
#include "QProgressBarBinding.hpp"
#include "QResizeEventBinding.hpp"
#include "QSizeBinding.hpp"
#include "QStringBinding.hpp"
#include "QVariantBinding.hpp"
#include "QWidgetBinding.hpp"
#include "QtBinding.hpp"
#include "QObjectWrapper.hpp"
#include "QWidgetWrapper.hpp"
#include "QProgressBarWrapper.hpp"
#include "QWidgetBinding2.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QProgressBarWrapper::QProgressBarWrapper()
        : QProgressBar(),
          lqtk_stateGuard(nullptr)
    {}
    QProgressBarWrapper::QProgressBarWrapper(
                   QWidget* arg1) 
        : QProgressBar(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QProgressBarWrapper::lqtk_destruct(lua_State* L) {
        QProgressBar* objPtr = (QProgressBar*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QProgressBarWrapper::~QProgressBarWrapper() {
        trace::printf("Deleting lqtk::QProgressBarWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->getL();
            if (L) {
                QProgressBar* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QProgressBar");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

    bool QProgressBarWrapper::lqtk_QProgressBar_event(
                   QEvent* arg1) 
    {
        return QProgressBar::event(
                   arg1); 
    }

    void QProgressBarWrapper::lqtk_QProgressBar_paintEvent(
                   QPaintEvent* arg1) 
    {
        return QProgressBar::paintEvent(
                   arg1); 
    }

    void QProgressBarWrapper::lqtk_QWidget_closeEvent(
                   QCloseEvent* arg1) 
    {
        return QWidget::closeEvent(
                   arg1); 
    }

    bool QProgressBarWrapper::lqtk_QWidget_event(
                   QEvent* arg1) 
    {
        return QWidget::event(
                   arg1); 
    }

    void QProgressBarWrapper::lqtk_QWidget_mouseDoubleClickEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseDoubleClickEvent(
                   arg1); 
    }

    void QProgressBarWrapper::lqtk_QWidget_mouseMoveEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseMoveEvent(
                   arg1); 
    }

    void QProgressBarWrapper::lqtk_QWidget_mousePressEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mousePressEvent(
                   arg1); 
    }

    void QProgressBarWrapper::lqtk_QWidget_mouseReleaseEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseReleaseEvent(
                   arg1); 
    }

    void QProgressBarWrapper::lqtk_QWidget_paintEvent(
                   QPaintEvent* arg1) 
    {
        return QWidget::paintEvent(
                   arg1); 
    }

    void QProgressBarWrapper::lqtk_QWidget_resizeEvent(
                   QResizeEvent* arg1) 
    {
        return QWidget::resizeEvent(
                   arg1); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QProgressBarWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QObjectWrapper::event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QObjectWrapper::event1_doLua, &args, "QProgressBar", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QProgressBar", "event", msg);
                }
            }
        }
        return QProgressBar::event(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QProgressBarWrapper::minimumSizeHint1_doLua(lua_State* L) 
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

    QSize QProgressBarWrapper::minimumSizeHint() const
    {
        lua_State* L = getL();
        if (L) {
            minimumSizeHint1CallArgs args(
                    const_cast<QProgressBarWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, minimumSizeHint1_doLua, &args, "QProgressBar", "minimumSizeHint");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QSize'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QProgressBar", "minimumSizeHint", msg);
                }
            }
        }
        return QProgressBar::minimumSizeHint();
    }

/* -------------------------------------------------------------------------------------------- */
    void QProgressBarWrapper::paintEvent(
                   QPaintEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::paintEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::paintEvent1_doLua, &args, "QProgressBar", "paintEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QProgressBar::paintEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QProgressBarWrapper::sizeHint1_doLua(lua_State* L) 
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

    QSize QProgressBarWrapper::sizeHint() const
    {
        lua_State* L = getL();
        if (L) {
            sizeHint1CallArgs args(
                    const_cast<QProgressBarWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, sizeHint1_doLua, &args, "QProgressBar", "sizeHint");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QSize'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QProgressBar", "sizeHint", msg);
                }
            }
        }
        return QProgressBar::sizeHint();
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QProgressBarWrapper::text1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        text1CallArgs* args = (text1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "text") != LUA_TNIL) {        // -> uval, eh, member?
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

    QString QProgressBarWrapper::text() const
    {
        lua_State* L = getL();
        if (L) {
            text1CallArgs args(
                    const_cast<QProgressBarWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, text1_doLua, &args, "QProgressBar", "text");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a string";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QProgressBar", "text", msg);
                }
            }
        }
        return QProgressBar::text();
    }

/* -------------------------------------------------------------------------------------------- */
    void QProgressBarWrapper::closeEvent(
                   QCloseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::closeEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::closeEvent1_doLua, &args, "QProgressBar", "closeEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QProgressBar::closeEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QProgressBarWrapper::hasHeightForWidth() const
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::hasHeightForWidth1CallArgs args(
                    const_cast<QProgressBarWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::hasHeightForWidth1_doLua, &args, "QProgressBar", "hasHeightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QProgressBar", "hasHeightForWidth", msg);
                }
            }
        }
        return QProgressBar::hasHeightForWidth();
    }

/* -------------------------------------------------------------------------------------------- */
    int QProgressBarWrapper::heightForWidth(
                   int arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::heightForWidth1CallArgs args(
                    const_cast<QProgressBarWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::heightForWidth1_doLua, &args, "QProgressBar", "heightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QProgressBar", "heightForWidth", msg);
                }
            }
        }
        return QProgressBar::heightForWidth(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    QVariant QProgressBarWrapper::inputMethodQuery(
                   Qt::InputMethodQuery arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::inputMethodQuery1CallArgs args(
                    const_cast<QProgressBarWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::inputMethodQuery1_doLua, &args, "QProgressBar", "inputMethodQuery");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QVariant'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QProgressBar", "inputMethodQuery", msg);
                }
            }
        }
        return QProgressBar::inputMethodQuery(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QProgressBarWrapper::mouseDoubleClickEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseDoubleClickEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseDoubleClickEvent1_doLua, &args, "QProgressBar", "mouseDoubleClickEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QProgressBar::mouseDoubleClickEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QProgressBarWrapper::mouseMoveEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseMoveEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseMoveEvent1_doLua, &args, "QProgressBar", "mouseMoveEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QProgressBar::mouseMoveEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QProgressBarWrapper::mousePressEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mousePressEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mousePressEvent1_doLua, &args, "QProgressBar", "mousePressEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QProgressBar::mousePressEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QProgressBarWrapper::mouseReleaseEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseReleaseEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseReleaseEvent1_doLua, &args, "QProgressBar", "mouseReleaseEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QProgressBar::mouseReleaseEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QProgressBarWrapper::resizeEvent(
                   QResizeEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::resizeEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::resizeEvent1_doLua, &args, "QProgressBar", "resizeEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QProgressBar::resizeEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QProgressBarWrapper::setVisible(
                   bool arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::setVisible1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::setVisible1_doLua, &args, "QProgressBar", "setVisible");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QProgressBar::setVisible(
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
    int lqtk_QWidget_inputMethodQuery(lua_State* L);
    int lqtk_QWidget_mouseDoubleClickEvent(lua_State* L);
    int lqtk_QWidget_mouseMoveEvent(lua_State* L);
    int lqtk_QWidget_mousePressEvent(lua_State* L);
    int lqtk_QWidget_mouseReleaseEvent(lua_State* L);
    int lqtk_QWidget_move(lua_State* L);
    int lqtk_QWidget_palette(lua_State* L);
    int lqtk_QWidget_parentWidget(lua_State* L);
    int lqtk_QWidget_resize(lua_State* L);
    int lqtk_QWidget_resizeEvent(lua_State* L);
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


struct lqtk_QProgressBar_alignment_Args
{
    FromLua<QProgressBar*> arg_1_1;
    ToLua<Qt::Alignment> rslt_1;
};

extern "C" int lqtk_QProgressBar_alignment(lua_State* L)
{
    lqtk_QProgressBar_alignment_Args  argValues;
    lqtk_QProgressBar_alignment_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QProgressBar::alignment();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "alignment", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_event_Args
{
    FromLua<QProgressBar*> arg_1_1;
    FromLua<QEvent*> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QProgressBar_event(lua_State* L)
{
    lqtk_QProgressBar_event_Args  argValues;
    lqtk_QProgressBar_event_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QProgressBarExportWrapper* wrapper = dynamic_cast<QProgressBarExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'event' is protected in QProgressBar");
                }
                args->rslt_1 = 
                    wrapper->lqtk_QProgressBar_event(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "event", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_format_Args
{
    FromLua<QProgressBar*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QProgressBar_format_doLua(lua_State* L)
{
    lqtk_QProgressBar_format_Args* args = (lqtk_QProgressBar_format_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QProgressBar::format();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "format", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QProgressBar_format(lua_State* L)
{
    try {
        lqtk_QProgressBar_format_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QProgressBar_format_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_invertedAppearance_Args
{
    FromLua<QProgressBar*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QProgressBar_invertedAppearance(lua_State* L)
{
    lqtk_QProgressBar_invertedAppearance_Args  argValues;
    lqtk_QProgressBar_invertedAppearance_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QProgressBar::invertedAppearance();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "invertedAppearance", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_isTextVisible_Args
{
    FromLua<QProgressBar*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QProgressBar_isTextVisible(lua_State* L)
{
    lqtk_QProgressBar_isTextVisible_Args  argValues;
    lqtk_QProgressBar_isTextVisible_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QProgressBar::isTextVisible();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "isTextVisible", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_maximum_Args
{
    FromLua<QProgressBar*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QProgressBar_maximum(lua_State* L)
{
    lqtk_QProgressBar_maximum_Args  argValues;
    lqtk_QProgressBar_maximum_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QProgressBar::maximum();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "maximum", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_minimum_Args
{
    FromLua<QProgressBar*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QProgressBar_minimum(lua_State* L)
{
    lqtk_QProgressBar_minimum_Args  argValues;
    lqtk_QProgressBar_minimum_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QProgressBar::minimum();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "minimum", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_minimumSizeHint_Args
{
    FromLua<QProgressBar*> arg_1_1;
    ToLua<QSize*> rslt_1;
};

extern "C" int lqtk_QProgressBar_minimumSizeHint(lua_State* L)
{
    lqtk_QProgressBar_minimumSizeHint_Args  argValues;
    lqtk_QProgressBar_minimumSizeHint_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QProgressBar::minimumSizeHint();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "minimumSizeHint", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_orientation_Args
{
    FromLua<QProgressBar*> arg_1_1;
    ToLua<Qt::Orientation> rslt_1;
};

extern "C" int lqtk_QProgressBar_orientation(lua_State* L)
{
    lqtk_QProgressBar_orientation_Args  argValues;
    lqtk_QProgressBar_orientation_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QProgressBar::orientation();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "orientation", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_paintEvent_Args
{
    FromLua<QProgressBar*> arg_1_1;
    FromLua<QPaintEvent*> arg_2_1;
};

extern "C" int lqtk_QProgressBar_paintEvent(lua_State* L)
{
    lqtk_QProgressBar_paintEvent_Args  argValues;
    lqtk_QProgressBar_paintEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QProgressBarExportWrapper* wrapper = dynamic_cast<QProgressBarExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'paintEvent' is protected in QProgressBar");
                }
                    wrapper->lqtk_QProgressBar_paintEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "paintEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_reset_Args
{
    FromLua<QProgressBar*> arg_1_1;
};

extern "C" int lqtk_QProgressBar_reset(lua_State* L)
{
    lqtk_QProgressBar_reset_Args  argValues;
    lqtk_QProgressBar_reset_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QProgressBar::reset();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "reset", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_resetFormat_Args
{
    FromLua<QProgressBar*> arg_1_1;
};

extern "C" int lqtk_QProgressBar_resetFormat(lua_State* L)
{
    lqtk_QProgressBar_resetFormat_Args  argValues;
    lqtk_QProgressBar_resetFormat_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QProgressBar::resetFormat();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "resetFormat", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_setAlignment_Args
{
    FromLua<QProgressBar*> arg_1_1;
    FromLua<Qt::Alignment> arg_2_1;
};

extern "C" int lqtk_QProgressBar_setAlignment(lua_State* L)
{
    lqtk_QProgressBar_setAlignment_Args  argValues;
    lqtk_QProgressBar_setAlignment_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QProgressBar::setAlignment(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "setAlignment", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_setFormat_Args
{
    FromLua<QProgressBar*> arg_1_1;
    FromLua<QString> arg_2_1;
};

static int lqtk_QProgressBar_setFormat_doLua(lua_State* L)
{
    lqtk_QProgressBar_setFormat_Args* args = (lqtk_QProgressBar_setFormat_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QProgressBar::setFormat(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "setFormat", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QProgressBar_setFormat(lua_State* L)
{
    try {
        lqtk_QProgressBar_setFormat_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QProgressBar_setFormat_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_setInvertedAppearance_Args
{
    FromLua<QProgressBar*> arg_1_1;
    FromLua<bool> arg_2_1;
};

extern "C" int lqtk_QProgressBar_setInvertedAppearance(lua_State* L)
{
    lqtk_QProgressBar_setInvertedAppearance_Args  argValues;
    lqtk_QProgressBar_setInvertedAppearance_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QProgressBar::setInvertedAppearance(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "setInvertedAppearance", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_setMaximum_Args
{
    FromLua<QProgressBar*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QProgressBar_setMaximum(lua_State* L)
{
    lqtk_QProgressBar_setMaximum_Args  argValues;
    lqtk_QProgressBar_setMaximum_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QProgressBar::setMaximum(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "setMaximum", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_setMinimum_Args
{
    FromLua<QProgressBar*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QProgressBar_setMinimum(lua_State* L)
{
    lqtk_QProgressBar_setMinimum_Args  argValues;
    lqtk_QProgressBar_setMinimum_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QProgressBar::setMinimum(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "setMinimum", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_setOrientation_Args
{
    FromLua<QProgressBar*> arg_1_1;
    FromLua<Qt::Orientation> arg_2_1;
};

extern "C" int lqtk_QProgressBar_setOrientation(lua_State* L)
{
    lqtk_QProgressBar_setOrientation_Args  argValues;
    lqtk_QProgressBar_setOrientation_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QProgressBar::setOrientation(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "setOrientation", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_setRange_Args
{
    FromLua<QProgressBar*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
};

extern "C" int lqtk_QProgressBar_setRange(lua_State* L)
{
    lqtk_QProgressBar_setRange_Args  argValues;
    lqtk_QProgressBar_setRange_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QProgressBar::setRange(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "setRange", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_setTextDirection_Args
{
    FromLua<QProgressBar*> arg_1_1;
    FromLua<QProgressBar::Direction> arg_2_1;
};

extern "C" int lqtk_QProgressBar_setTextDirection(lua_State* L)
{
    lqtk_QProgressBar_setTextDirection_Args  argValues;
    lqtk_QProgressBar_setTextDirection_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QProgressBar::setTextDirection(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "setTextDirection", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_setTextVisible_Args
{
    FromLua<QProgressBar*> arg_1_1;
    FromLua<bool> arg_2_1;
};

extern "C" int lqtk_QProgressBar_setTextVisible(lua_State* L)
{
    lqtk_QProgressBar_setTextVisible_Args  argValues;
    lqtk_QProgressBar_setTextVisible_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QProgressBar::setTextVisible(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "setTextVisible", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_setValue_Args
{
    FromLua<QProgressBar*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QProgressBar_setValue(lua_State* L)
{
    lqtk_QProgressBar_setValue_Args  argValues;
    lqtk_QProgressBar_setValue_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QProgressBar::setValue(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "setValue", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_sizeHint_Args
{
    FromLua<QProgressBar*> arg_1_1;
    ToLua<QSize*> rslt_1;
};

extern "C" int lqtk_QProgressBar_sizeHint(lua_State* L)
{
    lqtk_QProgressBar_sizeHint_Args  argValues;
    lqtk_QProgressBar_sizeHint_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QProgressBar::sizeHint();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "sizeHint", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_text_Args
{
    FromLua<QProgressBar*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QProgressBar_text_doLua(lua_State* L)
{
    lqtk_QProgressBar_text_Args* args = (lqtk_QProgressBar_text_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QProgressBar::text();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "text", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QProgressBar_text(lua_State* L)
{
    try {
        lqtk_QProgressBar_text_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QProgressBar_text_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_textDirection_Args
{
    FromLua<QProgressBar*> arg_1_1;
    ToLua<QProgressBar::Direction> rslt_1;
};

extern "C" int lqtk_QProgressBar_textDirection(lua_State* L)
{
    lqtk_QProgressBar_textDirection_Args  argValues;
    lqtk_QProgressBar_textDirection_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QProgressBar::textDirection();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "textDirection", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QProgressBar_value_Args
{
    FromLua<QProgressBar*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QProgressBar_value(lua_State* L)
{
    lqtk_QProgressBar_value_Args  argValues;
    lqtk_QProgressBar_value_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QProgressBar::value();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QProgressBar", "value", nargs, "1");
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
        QProgressBarBinding::QType* ptr = static_cast<QProgressBarBinding::QType*>(objectPtr);
        if (targetClassInfo == &QProgressBarBinding::classInfo) {
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
        QProgressBar* ptr = (QProgressBar*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QProgressBar* obj = (QProgressBar*) objectPtr;
        
        QProgressBarWrapper* wrapper = dynamic_cast<QProgressBarWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */

struct lqtk_QProgressBar_new_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<QProgressBar*> rslt_1;
};

extern "C" int lqtk_QProgressBar_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QProgressBar_new_Args  argValues;
    lqtk_QProgressBar_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QProgressBarBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QProgressBar> expected");
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
                QProgressBarWrapper* rslt = 
                    new QProgressBarWrapper();
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
                QProgressBarWrapper* rslt = 
                    new QProgressBarWrapper(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QProgressBar", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QProgressBar", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QProgressBar_new(lua_State* L)
{
    return lqtk_QProgressBar_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QProgressBarBinding::pushObject(lua_State* L, QProgressBar* objPtr, OwnerType ownerType)
{
    QProgressBarWrapper* wrapper = dynamic_cast<QProgressBarWrapper*>(objPtr);
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
        udata = ObjectUdata::pushNew<QProgressBar>(L, hasUserValue);     // -> uval?, udata
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
    { "BottomToTop",           Member::INTEGER,              (void*) QProgressBar::BottomToTop },
    { "TopToBottom",           Member::INTEGER,              (void*) QProgressBar::TopToBottom },
    { "acceptDrops",           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_acceptDrops },
    { "accessibleDescription", Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_accessibleDescription },
    { "accessibleIdentifier",  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_accessibleIdentifier },
    { "accessibleName",        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_accessibleName },
    { "addActions",            Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_addActions },
    { "alignment",             Member::NORMAL_FUNCTION,      (void*) lqtk_QProgressBar_alignment },
    { "children",              Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_children },
    { "close",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_close },
    { "closeEvent",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_closeEvent },
    { "connect",               Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_connect },
    { "event",                 Member::VIRTUAL_FUNCTION,     (void*) lqtk_QProgressBar_event },
    { "font",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_font },
    { "format",                Member::NORMAL_FUNCTION,      (void*) lqtk_QProgressBar_format },
    { "geometry",              Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_geometry },
    { "hasHeightForWidth",     Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_hasHeightForWidth },
    { "height",                Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_height },
    { "heightForWidth",        Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_heightForWidth },
    { "hide",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_hide },
    { "inputMethodQuery",      Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_inputMethodQuery },
    { "invertedAppearance",    Member::NORMAL_FUNCTION,      (void*) lqtk_QProgressBar_invertedAppearance },
    { "isTextVisible",         Member::NORMAL_FUNCTION,      (void*) lqtk_QProgressBar_isTextVisible },
    { "keyboardGrabber",       Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_keyboardGrabber },
    { "maximum",               Member::NORMAL_FUNCTION,      (void*) lqtk_QProgressBar_maximum },
    { "minimum",               Member::NORMAL_FUNCTION,      (void*) lqtk_QProgressBar_minimum },
    { "minimumSizeHint",       Member::VIRTUAL_FUNCTION,     (void*) lqtk_QProgressBar_minimumSizeHint },
    { "mouseDoubleClickEvent", Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mouseDoubleClickEvent },
    { "mouseGrabber",          Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_mouseGrabber },
    { "mouseMoveEvent",        Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mouseMoveEvent },
    { "mousePressEvent",       Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mousePressEvent },
    { "mouseReleaseEvent",     Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mouseReleaseEvent },
    { "move",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_move },
    { "objectName",            Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "orientation",           Member::NORMAL_FUNCTION,      (void*) lqtk_QProgressBar_orientation },
    { "paintEvent",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QProgressBar_paintEvent },
    { "palette",               Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_palette },
    { "parent",                Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "parentWidget",          Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_parentWidget },
    { "reset",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QProgressBar_reset },
    { "resetFormat",           Member::NORMAL_FUNCTION,      (void*) lqtk_QProgressBar_resetFormat },
    { "resize",                Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_resize },
    { "resizeEvent",           Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_resizeEvent },
    { "setAlignment",          Member::NORMAL_FUNCTION,      (void*) lqtk_QProgressBar_setAlignment },
    { "setBackgroundRole",     Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setBackgroundRole },
    { "setFont",               Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setFont },
    { "setFormat",             Member::NORMAL_FUNCTION,      (void*) lqtk_QProgressBar_setFormat },
    { "setGeometry",           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setGeometry },
    { "setInvertedAppearance", Member::NORMAL_FUNCTION,      (void*) lqtk_QProgressBar_setInvertedAppearance },
    { "setLayout",             Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setLayout },
    { "setMaximum",            Member::NORMAL_FUNCTION,      (void*) lqtk_QProgressBar_setMaximum },
    { "setMinimum",            Member::NORMAL_FUNCTION,      (void*) lqtk_QProgressBar_setMinimum },
    { "setObjectName",         Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setOrientation",        Member::NORMAL_FUNCTION,      (void*) lqtk_QProgressBar_setOrientation },
    { "setParent",             Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { "setRange",              Member::NORMAL_FUNCTION,      (void*) lqtk_QProgressBar_setRange },
    { "setSizePolicy",         Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setSizePolicy },
    { "setStyleSheet",         Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setStyleSheet },
    { "setTabOrder",           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setTabOrder },
    { "setTextDirection",      Member::NORMAL_FUNCTION,      (void*) lqtk_QProgressBar_setTextDirection },
    { "setTextVisible",        Member::NORMAL_FUNCTION,      (void*) lqtk_QProgressBar_setTextVisible },
    { "setToolTip",            Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setToolTip },
    { "setToolTipDuration",    Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setToolTipDuration },
    { "setUpdatesEnabled",     Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setUpdatesEnabled },
    { "setValue",              Member::NORMAL_FUNCTION,      (void*) lqtk_QProgressBar_setValue },
    { "setVisible",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_setVisible },
    { "setWhatsThis",          Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setWhatsThis },
    { "setWindowFilePath",     Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setWindowFilePath },
    { "setWindowFlag",         Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setWindowFlag },
    { "setWindowFlags",        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setWindowFlags },
    { "setWindowTitle",        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setWindowTitle },
    { "show",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_show },
    { "size",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_size },
    { "sizeHint",              Member::VIRTUAL_FUNCTION,     (void*) lqtk_QProgressBar_sizeHint },
    { "sizePolicy",            Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_sizePolicy },
    { "text",                  Member::VIRTUAL_FUNCTION,     (void*) lqtk_QProgressBar_text },
    { "textDirection",         Member::NORMAL_FUNCTION,      (void*) lqtk_QProgressBar_textDirection },
    { "update",                Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_update },
    { "value",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QProgressBar_value },
    { "width",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_width },
    { "windowFlags",           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_windowFlags },
    { "windowModality",        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_windowModality },
    { "windowOpacity",         Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_windowOpacity },
    { "windowRole",            Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_windowRole },
    { "windowState",           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_windowState },
    { NULL,                    Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QProgressBarBinding::classInfo = 
{
    "QProgressBar",

    &QWidgetBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    lqtk_QProgressBar_constructor,
    lqtk_QProgressBar_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    85,
    members
};

/* ============================================================================================ */

int QProgressBarBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
