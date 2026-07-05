// Type: QHeaderView
// Base: QAbstractItemView

/* ============================================================================================ */

#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QCloseEvent>
#include <QEvent>
#include <QFrame>
#include <QHeaderView>
#include <QItemSelectionModel>
#include <QMouseEvent>
#include <QObject>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QSize>
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
#include "QAbstractItemModelBinding.hpp"
#include "QAbstractItemViewBinding.hpp"
#include "QAbstractScrollAreaBinding.hpp"
#include "QCloseEventBinding.hpp"
#include "QEventBinding.hpp"
#include "QFrameBinding.hpp"
#include "QHeaderViewBinding.hpp"
#include "QItemSelectionModelBinding.hpp"
#include "QMouseEventBinding.hpp"
#include "QObjectBinding.hpp"
#include "QPaintEventBinding.hpp"
#include "QResizeEventBinding.hpp"
#include "QSizeBinding.hpp"
#include "QVariantBinding.hpp"
#include "QWidgetBinding.hpp"
#include "QtBinding.hpp"
#include "QObjectWrapper.hpp"
#include "QWidgetWrapper.hpp"
#include "QFrameWrapper.hpp"
#include "QAbstractScrollAreaWrapper.hpp"
#include "QAbstractItemViewWrapper.hpp"
#include "QHeaderViewWrapper.hpp"
#include "QWidgetBinding2.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QHeaderViewWrapper::QHeaderViewWrapper(
                   Qt::Orientation arg1) 
        : QHeaderView(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}
    QHeaderViewWrapper::QHeaderViewWrapper(
                   Qt::Orientation arg1, 
                   QWidget* arg2) 
        : QHeaderView(
                   arg1,
                   arg2),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QHeaderViewWrapper::lqtk_destruct(lua_State* L) {
        QHeaderView* objPtr = (QHeaderView*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QHeaderViewWrapper::~QHeaderViewWrapper() {
        trace::printf("Deleting lqtk::QHeaderViewWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->getL();
            if (L) {
                QHeaderView* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QHeaderView");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

    void QHeaderViewWrapper::lqtk_QHeaderView_resizeSections()
    {
        return QHeaderView::resizeSections();
    }

    QSize QHeaderViewWrapper::lqtk_QHeaderView_sectionSizeFromContents(
                   int arg1) 
    {
        return QHeaderView::sectionSizeFromContents(
                   arg1); 
    }

    void QHeaderViewWrapper::lqtk_QAbstractItemView_resizeEvent(
                   QResizeEvent* arg1) 
    {
        return QAbstractItemView::resizeEvent(
                   arg1); 
    }

    void QHeaderViewWrapper::lqtk_QAbstractScrollArea_resizeEvent(
                   QResizeEvent* arg1) 
    {
        return QAbstractScrollArea::resizeEvent(
                   arg1); 
    }

    void QHeaderViewWrapper::lqtk_QWidget_closeEvent(
                   QCloseEvent* arg1) 
    {
        return QWidget::closeEvent(
                   arg1); 
    }

    bool QHeaderViewWrapper::lqtk_QWidget_event(
                   QEvent* arg1) 
    {
        return QWidget::event(
                   arg1); 
    }

    void QHeaderViewWrapper::lqtk_QWidget_mouseDoubleClickEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseDoubleClickEvent(
                   arg1); 
    }

    void QHeaderViewWrapper::lqtk_QWidget_mouseMoveEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseMoveEvent(
                   arg1); 
    }

    void QHeaderViewWrapper::lqtk_QWidget_mousePressEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mousePressEvent(
                   arg1); 
    }

    void QHeaderViewWrapper::lqtk_QWidget_mouseReleaseEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseReleaseEvent(
                   arg1); 
    }

    void QHeaderViewWrapper::lqtk_QWidget_paintEvent(
                   QPaintEvent* arg1) 
    {
        return QWidget::paintEvent(
                   arg1); 
    }

    void QHeaderViewWrapper::lqtk_QWidget_resizeEvent(
                   QResizeEvent* arg1) 
    {
        return QWidget::resizeEvent(
                   arg1); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QHeaderViewWrapper::sectionSizeFromContents1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        sectionSizeFromContents1CallArgs* args = (sectionSizeFromContents1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "sectionSizeFromContents") != LUA_TNIL) {        // -> uval, eh, member?
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

    QSize QHeaderViewWrapper::sectionSizeFromContents(
                   int arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            sectionSizeFromContents1CallArgs args(
                    const_cast<QHeaderViewWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, sectionSizeFromContents1_doLua, &args, "QHeaderView", "sectionSizeFromContents");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QSize'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QHeaderView", "sectionSizeFromContents", msg);
                }
            }
        }
        return QHeaderView::sectionSizeFromContents(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QHeaderViewWrapper::resizeEvent(
                   QResizeEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::resizeEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::resizeEvent1_doLua, &args, "QHeaderView", "resizeEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QHeaderView::resizeEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QHeaderViewWrapper::setModel(
                   QAbstractItemModel* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QAbstractItemViewWrapper::setModel1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QAbstractItemViewWrapper::setModel1_doLua, &args, "QHeaderView", "setModel");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QHeaderView::setModel(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QHeaderViewWrapper::setSelectionModel(
                   QItemSelectionModel* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QAbstractItemViewWrapper::setSelectionModel1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QAbstractItemViewWrapper::setSelectionModel1_doLua, &args, "QHeaderView", "setSelectionModel");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QHeaderView::setSelectionModel(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QHeaderViewWrapper::closeEvent(
                   QCloseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::closeEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::closeEvent1_doLua, &args, "QHeaderView", "closeEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QHeaderView::closeEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QHeaderViewWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QObjectWrapper::event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QObjectWrapper::event1_doLua, &args, "QHeaderView", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QHeaderView", "event", msg);
                }
            }
        }
        return QHeaderView::event(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QHeaderViewWrapper::hasHeightForWidth() const
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::hasHeightForWidth1CallArgs args(
                    const_cast<QHeaderViewWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::hasHeightForWidth1_doLua, &args, "QHeaderView", "hasHeightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QHeaderView", "hasHeightForWidth", msg);
                }
            }
        }
        return QHeaderView::hasHeightForWidth();
    }

/* -------------------------------------------------------------------------------------------- */
    int QHeaderViewWrapper::heightForWidth(
                   int arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::heightForWidth1CallArgs args(
                    const_cast<QHeaderViewWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::heightForWidth1_doLua, &args, "QHeaderView", "heightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QHeaderView", "heightForWidth", msg);
                }
            }
        }
        return QHeaderView::heightForWidth(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    QVariant QHeaderViewWrapper::inputMethodQuery(
                   Qt::InputMethodQuery arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::inputMethodQuery1CallArgs args(
                    const_cast<QHeaderViewWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::inputMethodQuery1_doLua, &args, "QHeaderView", "inputMethodQuery");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QVariant'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QHeaderView", "inputMethodQuery", msg);
                }
            }
        }
        return QHeaderView::inputMethodQuery(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QHeaderViewWrapper::mouseDoubleClickEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseDoubleClickEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseDoubleClickEvent1_doLua, &args, "QHeaderView", "mouseDoubleClickEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QHeaderView::mouseDoubleClickEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QHeaderViewWrapper::mouseMoveEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseMoveEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseMoveEvent1_doLua, &args, "QHeaderView", "mouseMoveEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QHeaderView::mouseMoveEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QHeaderViewWrapper::mousePressEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mousePressEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mousePressEvent1_doLua, &args, "QHeaderView", "mousePressEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QHeaderView::mousePressEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QHeaderViewWrapper::mouseReleaseEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseReleaseEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseReleaseEvent1_doLua, &args, "QHeaderView", "mouseReleaseEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QHeaderView::mouseReleaseEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QHeaderViewWrapper::paintEvent(
                   QPaintEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::paintEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::paintEvent1_doLua, &args, "QHeaderView", "paintEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QHeaderView::paintEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QHeaderViewWrapper::setVisible(
                   bool arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::setVisible1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::setVisible1_doLua, &args, "QHeaderView", "setVisible");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QHeaderView::setVisible(
                    arg2); 
    }

} // namespace lqtk

/* ============================================================================================ */

extern "C" {
    int lqtk_QAbstractItemView_horizontalScrollMode(lua_State* L);
    int lqtk_QAbstractItemView_model(lua_State* L);
    int lqtk_QAbstractItemView_resetHorizontalScrollMode(lua_State* L);
    int lqtk_QAbstractItemView_resetVerticalScrollMode(lua_State* L);
    int lqtk_QAbstractItemView_resizeEvent(lua_State* L);
    int lqtk_QAbstractItemView_setAlternatingRowColors(lua_State* L);
    int lqtk_QAbstractItemView_setHorizontalScrollMode(lua_State* L);
    int lqtk_QAbstractItemView_setModel(lua_State* L);
    int lqtk_QAbstractItemView_setSelectionModel(lua_State* L);
    int lqtk_QAbstractItemView_setVerticalScrollMode(lua_State* L);
    int lqtk_QAbstractItemView_verticalScrollMode(lua_State* L);
    int lqtk_QAbstractScrollArea_setSizeAdjustPolicy(lua_State* L);
    int lqtk_QAbstractScrollArea_sizeAdjustPolicy(lua_State* L);
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
    int lqtk_QWidget_event(lua_State* L);
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
    int lqtk_QWidget_paintEvent(lua_State* L);
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
    int lqtk_QWidget_sizeHint(lua_State* L);
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


struct lqtk_QHeaderView_resizeSection_Args
{
    FromLua<QHeaderView*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
};

extern "C" int lqtk_QHeaderView_resizeSection(lua_State* L)
{
    lqtk_QHeaderView_resizeSection_Args  argValues;
    lqtk_QHeaderView_resizeSection_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QHeaderView::resizeSection(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QHeaderView", "resizeSection", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QHeaderView_resizeSections_Args
{
    FromLua<QHeaderView*> arg_1_1;
    FromLua<QHeaderView::ResizeMode> arg_2_1;
};

extern "C" int lqtk_QHeaderView_resizeSections(lua_State* L)
{
    lqtk_QHeaderView_resizeSections_Args  argValues;
    lqtk_QHeaderView_resizeSections_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                QHeaderViewExportWrapper* wrapper = dynamic_cast<QHeaderViewExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'resizeSections' is protected in QHeaderView");
                }
                    wrapper->lqtk_QHeaderView_resizeSections();
                return 0;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QHeaderView::resizeSections(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QHeaderView", "resizeSections", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QHeaderView_sectionSize_Args
{
    FromLua<QHeaderView*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QHeaderView_sectionSize(lua_State* L)
{
    lqtk_QHeaderView_sectionSize_Args  argValues;
    lqtk_QHeaderView_sectionSize_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QHeaderView::sectionSize(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QHeaderView", "sectionSize", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QHeaderView_sectionSizeFromContents_Args
{
    FromLua<QHeaderView*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QSize*> rslt_1;
};

extern "C" int lqtk_QHeaderView_sectionSizeFromContents(lua_State* L)
{
    lqtk_QHeaderView_sectionSizeFromContents_Args  argValues;
    lqtk_QHeaderView_sectionSizeFromContents_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QHeaderViewExportWrapper* wrapper = dynamic_cast<QHeaderViewExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'sectionSizeFromContents' is protected in QHeaderView");
                }
                args->rslt_1 = 
                    wrapper->lqtk_QHeaderView_sectionSizeFromContents(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QHeaderView", "sectionSizeFromContents", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QHeaderView_sectionSizeHint_Args
{
    FromLua<QHeaderView*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QHeaderView_sectionSizeHint(lua_State* L)
{
    lqtk_QHeaderView_sectionSizeHint_Args  argValues;
    lqtk_QHeaderView_sectionSizeHint_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QHeaderView::sectionSizeHint(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QHeaderView", "sectionSizeHint", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QHeaderView_setResizeContentsPrecision_Args
{
    FromLua<QHeaderView*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QHeaderView_setResizeContentsPrecision(lua_State* L)
{
    lqtk_QHeaderView_setResizeContentsPrecision_Args  argValues;
    lqtk_QHeaderView_setResizeContentsPrecision_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QHeaderView::setResizeContentsPrecision(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QHeaderView", "setResizeContentsPrecision", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QHeaderView_setStretchLastSection_Args
{
    FromLua<QHeaderView*> arg_1_1;
    FromLua<bool> arg_2_1;
};

extern "C" int lqtk_QHeaderView_setStretchLastSection(lua_State* L)
{
    lqtk_QHeaderView_setStretchLastSection_Args  argValues;
    lqtk_QHeaderView_setStretchLastSection_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QHeaderView::setStretchLastSection(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QHeaderView", "setStretchLastSection", nargs, "2");
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
        QHeaderViewBinding::QType* ptr = static_cast<QHeaderViewBinding::QType*>(objectPtr);
        if (targetClassInfo == &QHeaderViewBinding::classInfo) {
            return ptr;
        }
        if (targetClassInfo == &QAbstractItemViewBinding::classInfo) {
            return static_cast<QAbstractItemViewBinding::QType*>(ptr);
        }
        if (targetClassInfo == &QAbstractScrollAreaBinding::classInfo) {
            return static_cast<QAbstractScrollAreaBinding::QType*>(ptr);
        }
        if (targetClassInfo == &QFrameBinding::classInfo) {
            return static_cast<QFrameBinding::QType*>(ptr);
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
        QHeaderView* ptr = (QHeaderView*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QHeaderView* obj = (QHeaderView*) objectPtr;
        
        QHeaderViewWrapper* wrapper = dynamic_cast<QHeaderViewWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */

struct lqtk_QHeaderView_new_Args
{
    FromLua<Qt::Orientation> arg_1_1;
    FromLua<QWidget*> arg_2_1;
    ToLua<QHeaderView*> rslt_1;
};

extern "C" int lqtk_QHeaderView_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QHeaderView_new_Args  argValues;
    lqtk_QHeaderView_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QHeaderViewBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QHeaderView> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }

        QWidgetBinding2::assert_new();

        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                QHeaderViewWrapper* rslt = 
                    new QHeaderViewWrapper(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
          if (!lua_isnil(L, argOffs+2)) {
            args->arg_2_1.check(L, argOffs+2);
          }
            {
                QHeaderViewWrapper* rslt = 
                    new QHeaderViewWrapper(args->arg_1_1.getValue(), args->arg_2_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QHeaderView", "new", nargs, "2,3");
        } else {
            return util::argCountError(L, "QHeaderView", nullptr, nargs, "1,2");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QHeaderView_new(lua_State* L)
{
    return lqtk_QHeaderView_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QHeaderViewBinding::pushObject(lua_State* L, QHeaderView* objPtr, OwnerType ownerType)
{
    QHeaderViewWrapper* wrapper = dynamic_cast<QHeaderViewWrapper*>(objPtr);
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
        udata = ObjectUdata::pushNew<QHeaderView>(L, hasUserValue);     // -> uval?, udata
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
    { "AdjustIgnored",               Member::INTEGER,              (void*) QHeaderView::AdjustIgnored },
    { "AdjustToContents",            Member::INTEGER,              (void*) QHeaderView::AdjustToContents },
    { "AdjustToContentsOnFirstShow", Member::INTEGER,              (void*) QHeaderView::AdjustToContentsOnFirstShow },
    { "Custom",                      Member::INTEGER,              (void*) QHeaderView::Custom },
    { "EnsureVisible",               Member::INTEGER,              (void*) QHeaderView::EnsureVisible },
    { "Fixed",                       Member::INTEGER,              (void*) QHeaderView::Fixed },
    { "Interactive",                 Member::INTEGER,              (void*) QHeaderView::Interactive },
    { "PositionAtBottom",            Member::INTEGER,              (void*) QHeaderView::PositionAtBottom },
    { "PositionAtCenter",            Member::INTEGER,              (void*) QHeaderView::PositionAtCenter },
    { "PositionAtTop",               Member::INTEGER,              (void*) QHeaderView::PositionAtTop },
    { "ResizeToContents",            Member::INTEGER,              (void*) QHeaderView::ResizeToContents },
    { "ScrollPerItem",               Member::INTEGER,              (void*) QHeaderView::ScrollPerItem },
    { "ScrollPerPixel",              Member::INTEGER,              (void*) QHeaderView::ScrollPerPixel },
    { "Stretch",                     Member::INTEGER,              (void*) QHeaderView::Stretch },
    { "acceptDrops",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_acceptDrops },
    { "accessibleDescription",       Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_accessibleDescription },
    { "accessibleIdentifier",        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_accessibleIdentifier },
    { "accessibleName",              Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_accessibleName },
    { "addActions",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_addActions },
    { "children",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_children },
    { "close",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_close },
    { "closeEvent",                  Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_closeEvent },
    { "connect",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_connect },
    { "event",                       Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_event },
    { "font",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_font },
    { "geometry",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_geometry },
    { "hasHeightForWidth",           Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_hasHeightForWidth },
    { "height",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_height },
    { "heightForWidth",              Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_heightForWidth },
    { "hide",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_hide },
    { "horizontalScrollMode",        Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractItemView_horizontalScrollMode },
    { "inputMethodQuery",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_inputMethodQuery },
    { "keyboardGrabber",             Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_keyboardGrabber },
    { "model",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractItemView_model },
    { "mouseDoubleClickEvent",       Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mouseDoubleClickEvent },
    { "mouseGrabber",                Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_mouseGrabber },
    { "mouseMoveEvent",              Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mouseMoveEvent },
    { "mousePressEvent",             Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mousePressEvent },
    { "mouseReleaseEvent",           Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mouseReleaseEvent },
    { "move",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_move },
    { "objectName",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "paintEvent",                  Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_paintEvent },
    { "palette",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_palette },
    { "parent",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "parentWidget",                Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_parentWidget },
    { "resetHorizontalScrollMode",   Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractItemView_resetHorizontalScrollMode },
    { "resetVerticalScrollMode",     Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractItemView_resetVerticalScrollMode },
    { "resize",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_resize },
    { "resizeEvent",                 Member::VIRTUAL_FUNCTION,     (void*) lqtk_QAbstractItemView_resizeEvent },
    { "resizeSection",               Member::NORMAL_FUNCTION,      (void*) lqtk_QHeaderView_resizeSection },
    { "resizeSections",              Member::NORMAL_FUNCTION,      (void*) lqtk_QHeaderView_resizeSections },
    { "sectionSize",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QHeaderView_sectionSize },
    { "sectionSizeFromContents",     Member::VIRTUAL_FUNCTION,     (void*) lqtk_QHeaderView_sectionSizeFromContents },
    { "sectionSizeHint",             Member::NORMAL_FUNCTION,      (void*) lqtk_QHeaderView_sectionSizeHint },
    { "setAlternatingRowColors",     Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractItemView_setAlternatingRowColors },
    { "setBackgroundRole",           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setBackgroundRole },
    { "setFont",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setFont },
    { "setGeometry",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setGeometry },
    { "setHorizontalScrollMode",     Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractItemView_setHorizontalScrollMode },
    { "setLayout",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setLayout },
    { "setModel",                    Member::VIRTUAL_FUNCTION,     (void*) lqtk_QAbstractItemView_setModel },
    { "setObjectName",               Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { "setResizeContentsPrecision",  Member::NORMAL_FUNCTION,      (void*) lqtk_QHeaderView_setResizeContentsPrecision },
    { "setSelectionModel",           Member::VIRTUAL_FUNCTION,     (void*) lqtk_QAbstractItemView_setSelectionModel },
    { "setSizeAdjustPolicy",         Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractScrollArea_setSizeAdjustPolicy },
    { "setSizePolicy",               Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setSizePolicy },
    { "setStretchLastSection",       Member::NORMAL_FUNCTION,      (void*) lqtk_QHeaderView_setStretchLastSection },
    { "setStyleSheet",               Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setStyleSheet },
    { "setTabOrder",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setTabOrder },
    { "setToolTip",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setToolTip },
    { "setToolTipDuration",          Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setToolTipDuration },
    { "setUpdatesEnabled",           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setUpdatesEnabled },
    { "setVerticalScrollMode",       Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractItemView_setVerticalScrollMode },
    { "setVisible",                  Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_setVisible },
    { "setWhatsThis",                Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setWhatsThis },
    { "setWindowFilePath",           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setWindowFilePath },
    { "setWindowFlag",               Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setWindowFlag },
    { "setWindowFlags",              Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setWindowFlags },
    { "setWindowTitle",              Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setWindowTitle },
    { "show",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_show },
    { "size",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_size },
    { "sizeAdjustPolicy",            Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractScrollArea_sizeAdjustPolicy },
    { "sizeHint",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_sizeHint },
    { "sizePolicy",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_sizePolicy },
    { "update",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_update },
    { "verticalScrollMode",          Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractItemView_verticalScrollMode },
    { "width",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_width },
    { "windowFlags",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_windowFlags },
    { "windowModality",              Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_windowModality },
    { "windowOpacity",               Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_windowOpacity },
    { "windowRole",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_windowRole },
    { "windowState",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_windowState },
    { NULL,                          Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QHeaderViewBinding::classInfo = 
{
    "QHeaderView",

    &QAbstractItemViewBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    lqtk_QHeaderView_constructor,
    lqtk_QHeaderView_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    93,
    members
};

/* ============================================================================================ */

int QHeaderViewBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
