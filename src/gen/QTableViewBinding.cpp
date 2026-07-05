// Type: QTableView
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
#include <QTableView>
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
#include "QTableViewBinding.hpp"
#include "QVariantBinding.hpp"
#include "QWidgetBinding.hpp"
#include "QtBinding.hpp"
#include "QObjectWrapper.hpp"
#include "QWidgetWrapper.hpp"
#include "QFrameWrapper.hpp"
#include "QAbstractScrollAreaWrapper.hpp"
#include "QAbstractItemViewWrapper.hpp"
#include "QTableViewWrapper.hpp"
#include "QWidgetBinding2.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QTableViewWrapper::QTableViewWrapper()
        : QTableView(),
          lqtk_stateGuard(nullptr)
    {}
    QTableViewWrapper::QTableViewWrapper(
                   QWidget* arg1) 
        : QTableView(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QTableViewWrapper::lqtk_destruct(lua_State* L) {
        QTableView* objPtr = (QTableView*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QTableViewWrapper::~QTableViewWrapper() {
        trace::printf("Deleting lqtk::QTableViewWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->getL();
            if (L) {
                QTableView* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QTableView");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

    void QTableViewWrapper::lqtk_QAbstractItemView_resizeEvent(
                   QResizeEvent* arg1) 
    {
        return QAbstractItemView::resizeEvent(
                   arg1); 
    }

    void QTableViewWrapper::lqtk_QAbstractScrollArea_resizeEvent(
                   QResizeEvent* arg1) 
    {
        return QAbstractScrollArea::resizeEvent(
                   arg1); 
    }

    void QTableViewWrapper::lqtk_QWidget_closeEvent(
                   QCloseEvent* arg1) 
    {
        return QWidget::closeEvent(
                   arg1); 
    }

    bool QTableViewWrapper::lqtk_QWidget_event(
                   QEvent* arg1) 
    {
        return QWidget::event(
                   arg1); 
    }

    void QTableViewWrapper::lqtk_QWidget_mouseDoubleClickEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseDoubleClickEvent(
                   arg1); 
    }

    void QTableViewWrapper::lqtk_QWidget_mouseMoveEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseMoveEvent(
                   arg1); 
    }

    void QTableViewWrapper::lqtk_QWidget_mousePressEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mousePressEvent(
                   arg1); 
    }

    void QTableViewWrapper::lqtk_QWidget_mouseReleaseEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseReleaseEvent(
                   arg1); 
    }

    void QTableViewWrapper::lqtk_QWidget_paintEvent(
                   QPaintEvent* arg1) 
    {
        return QWidget::paintEvent(
                   arg1); 
    }

    void QTableViewWrapper::lqtk_QWidget_resizeEvent(
                   QResizeEvent* arg1) 
    {
        return QWidget::resizeEvent(
                   arg1); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QTableViewWrapper::setModel(
                   QAbstractItemModel* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QAbstractItemViewWrapper::setModel1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QAbstractItemViewWrapper::setModel1_doLua, &args, "QTableView", "setModel");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QTableView::setModel(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QTableViewWrapper::resizeEvent(
                   QResizeEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::resizeEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::resizeEvent1_doLua, &args, "QTableView", "resizeEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QTableView::resizeEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QTableViewWrapper::setSelectionModel(
                   QItemSelectionModel* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QAbstractItemViewWrapper::setSelectionModel1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QAbstractItemViewWrapper::setSelectionModel1_doLua, &args, "QTableView", "setSelectionModel");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QTableView::setSelectionModel(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QTableViewWrapper::closeEvent(
                   QCloseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::closeEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::closeEvent1_doLua, &args, "QTableView", "closeEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QTableView::closeEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QTableViewWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QObjectWrapper::event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QObjectWrapper::event1_doLua, &args, "QTableView", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QTableView", "event", msg);
                }
            }
        }
        return QTableView::event(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QTableViewWrapper::hasHeightForWidth() const
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::hasHeightForWidth1CallArgs args(
                    const_cast<QTableViewWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::hasHeightForWidth1_doLua, &args, "QTableView", "hasHeightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QTableView", "hasHeightForWidth", msg);
                }
            }
        }
        return QTableView::hasHeightForWidth();
    }

/* -------------------------------------------------------------------------------------------- */
    int QTableViewWrapper::heightForWidth(
                   int arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::heightForWidth1CallArgs args(
                    const_cast<QTableViewWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::heightForWidth1_doLua, &args, "QTableView", "heightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QTableView", "heightForWidth", msg);
                }
            }
        }
        return QTableView::heightForWidth(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    QVariant QTableViewWrapper::inputMethodQuery(
                   Qt::InputMethodQuery arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::inputMethodQuery1CallArgs args(
                    const_cast<QTableViewWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::inputMethodQuery1_doLua, &args, "QTableView", "inputMethodQuery");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QVariant'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QTableView", "inputMethodQuery", msg);
                }
            }
        }
        return QTableView::inputMethodQuery(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QTableViewWrapper::mouseDoubleClickEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseDoubleClickEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseDoubleClickEvent1_doLua, &args, "QTableView", "mouseDoubleClickEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QTableView::mouseDoubleClickEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QTableViewWrapper::mouseMoveEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseMoveEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseMoveEvent1_doLua, &args, "QTableView", "mouseMoveEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QTableView::mouseMoveEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QTableViewWrapper::mousePressEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mousePressEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mousePressEvent1_doLua, &args, "QTableView", "mousePressEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QTableView::mousePressEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QTableViewWrapper::mouseReleaseEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseReleaseEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseReleaseEvent1_doLua, &args, "QTableView", "mouseReleaseEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QTableView::mouseReleaseEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QTableViewWrapper::paintEvent(
                   QPaintEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::paintEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::paintEvent1_doLua, &args, "QTableView", "paintEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QTableView::paintEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QTableViewWrapper::setVisible(
                   bool arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::setVisible1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::setVisible1_doLua, &args, "QTableView", "setVisible");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QTableView::setVisible(
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


struct lqtk_QTableView_horizontalHeader_Args
{
    FromLua<QTableView*> arg_1_1;
    ToLua<QHeaderView*> rslt_1;
};

extern "C" int lqtk_QTableView_horizontalHeader(lua_State* L)
{
    lqtk_QTableView_horizontalHeader_Args  argValues;
    lqtk_QTableView_horizontalHeader_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTableView::horizontalHeader();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTableView", "horizontalHeader", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTableView_resizeColumnToContents_Args
{
    FromLua<QTableView*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QTableView_resizeColumnToContents(lua_State* L)
{
    lqtk_QTableView_resizeColumnToContents_Args  argValues;
    lqtk_QTableView_resizeColumnToContents_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QTableView::resizeColumnToContents(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QTableView", "resizeColumnToContents", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTableView_resizeColumnsToContents_Args
{
    FromLua<QTableView*> arg_1_1;
};

extern "C" int lqtk_QTableView_resizeColumnsToContents(lua_State* L)
{
    lqtk_QTableView_resizeColumnsToContents_Args  argValues;
    lqtk_QTableView_resizeColumnsToContents_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QTableView::resizeColumnsToContents();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QTableView", "resizeColumnsToContents", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTableView_resizeRowToContents_Args
{
    FromLua<QTableView*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QTableView_resizeRowToContents(lua_State* L)
{
    lqtk_QTableView_resizeRowToContents_Args  argValues;
    lqtk_QTableView_resizeRowToContents_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QTableView::resizeRowToContents(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QTableView", "resizeRowToContents", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTableView_resizeRowsToContents_Args
{
    FromLua<QTableView*> arg_1_1;
};

extern "C" int lqtk_QTableView_resizeRowsToContents(lua_State* L)
{
    lqtk_QTableView_resizeRowsToContents_Args  argValues;
    lqtk_QTableView_resizeRowsToContents_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QTableView::resizeRowsToContents();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QTableView", "resizeRowsToContents", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTableView_setHorizontalHeader_Args
{
    FromLua<QTableView*> arg_1_1;
    FromLua<QHeaderView*> arg_2_1;
};

extern "C" int lqtk_QTableView_setHorizontalHeader(lua_State* L)
{
    lqtk_QTableView_setHorizontalHeader_Args  argValues;
    lqtk_QTableView_setHorizontalHeader_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QTableView::setHorizontalHeader(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QTableView", "setHorizontalHeader", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTableView_setModel_Args
{
    FromLua<QTableView*> arg_1_1;
    FromLua<QAbstractItemModel*> arg_2_1;
};

extern "C" int lqtk_QTableView_setModel(lua_State* L)
{
    lqtk_QTableView_setModel_Args  argValues;
    lqtk_QTableView_setModel_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
          if (!lua_isnil(L, argOffs+2)) {
            args->arg_2_1.check(L, argOffs+2);
          }
            {
                    args->arg_1_1.getValue()->QTableView::setModel(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QTableView", "setModel", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTableView_setShowGrid_Args
{
    FromLua<QTableView*> arg_1_1;
    FromLua<bool> arg_2_1;
};

extern "C" int lqtk_QTableView_setShowGrid(lua_State* L)
{
    lqtk_QTableView_setShowGrid_Args  argValues;
    lqtk_QTableView_setShowGrid_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QTableView::setShowGrid(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QTableView", "setShowGrid", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTableView_setWordWrap_Args
{
    FromLua<QTableView*> arg_1_1;
    FromLua<bool> arg_2_1;
};

extern "C" int lqtk_QTableView_setWordWrap(lua_State* L)
{
    lqtk_QTableView_setWordWrap_Args  argValues;
    lqtk_QTableView_setWordWrap_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QTableView::setWordWrap(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QTableView", "setWordWrap", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTableView_verticalHeader_Args
{
    FromLua<QTableView*> arg_1_1;
    ToLua<QHeaderView*> rslt_1;
};

extern "C" int lqtk_QTableView_verticalHeader(lua_State* L)
{
    lqtk_QTableView_verticalHeader_Args  argValues;
    lqtk_QTableView_verticalHeader_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTableView::verticalHeader();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTableView", "verticalHeader", nargs, "1");
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
        QTableViewBinding::QType* ptr = static_cast<QTableViewBinding::QType*>(objectPtr);
        if (targetClassInfo == &QTableViewBinding::classInfo) {
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
        QTableView* ptr = (QTableView*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QTableView* obj = (QTableView*) objectPtr;
        
        QTableViewWrapper* wrapper = dynamic_cast<QTableViewWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */

struct lqtk_QTableView_new_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<QTableView*> rslt_1;
};

extern "C" int lqtk_QTableView_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QTableView_new_Args  argValues;
    lqtk_QTableView_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QTableViewBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QTableView> expected");
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
                QTableViewWrapper* rslt = 
                    new QTableViewWrapper();
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
                QTableViewWrapper* rslt = 
                    new QTableViewWrapper(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QTableView", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QTableView", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QTableView_new(lua_State* L)
{
    return lqtk_QTableView_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QTableViewBinding::pushObject(lua_State* L, QTableView* objPtr, OwnerType ownerType)
{
    QTableViewWrapper* wrapper = dynamic_cast<QTableViewWrapper*>(objPtr);
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
        udata = ObjectUdata::pushNew<QTableView>(L, hasUserValue);     // -> uval?, udata
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
    { "AdjustIgnored",               Member::INTEGER,              (void*) QTableView::AdjustIgnored },
    { "AdjustToContents",            Member::INTEGER,              (void*) QTableView::AdjustToContents },
    { "AdjustToContentsOnFirstShow", Member::INTEGER,              (void*) QTableView::AdjustToContentsOnFirstShow },
    { "EnsureVisible",               Member::INTEGER,              (void*) QTableView::EnsureVisible },
    { "PositionAtBottom",            Member::INTEGER,              (void*) QTableView::PositionAtBottom },
    { "PositionAtCenter",            Member::INTEGER,              (void*) QTableView::PositionAtCenter },
    { "PositionAtTop",               Member::INTEGER,              (void*) QTableView::PositionAtTop },
    { "ScrollPerItem",               Member::INTEGER,              (void*) QTableView::ScrollPerItem },
    { "ScrollPerPixel",              Member::INTEGER,              (void*) QTableView::ScrollPerPixel },
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
    { "horizontalHeader",            Member::NORMAL_FUNCTION,      (void*) lqtk_QTableView_horizontalHeader },
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
    { "resizeColumnToContents",      Member::NORMAL_FUNCTION,      (void*) lqtk_QTableView_resizeColumnToContents },
    { "resizeColumnsToContents",     Member::NORMAL_FUNCTION,      (void*) lqtk_QTableView_resizeColumnsToContents },
    { "resizeEvent",                 Member::VIRTUAL_FUNCTION,     (void*) lqtk_QAbstractItemView_resizeEvent },
    { "resizeRowToContents",         Member::NORMAL_FUNCTION,      (void*) lqtk_QTableView_resizeRowToContents },
    { "resizeRowsToContents",        Member::NORMAL_FUNCTION,      (void*) lqtk_QTableView_resizeRowsToContents },
    { "setAlternatingRowColors",     Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractItemView_setAlternatingRowColors },
    { "setBackgroundRole",           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setBackgroundRole },
    { "setFont",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setFont },
    { "setGeometry",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setGeometry },
    { "setHorizontalHeader",         Member::NORMAL_FUNCTION,      (void*) lqtk_QTableView_setHorizontalHeader },
    { "setHorizontalScrollMode",     Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractItemView_setHorizontalScrollMode },
    { "setLayout",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setLayout },
    { "setModel",                    Member::VIRTUAL_FUNCTION,     (void*) lqtk_QTableView_setModel },
    { "setObjectName",               Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { "setSelectionModel",           Member::VIRTUAL_FUNCTION,     (void*) lqtk_QAbstractItemView_setSelectionModel },
    { "setShowGrid",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QTableView_setShowGrid },
    { "setSizeAdjustPolicy",         Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractScrollArea_setSizeAdjustPolicy },
    { "setSizePolicy",               Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setSizePolicy },
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
    { "setWordWrap",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QTableView_setWordWrap },
    { "show",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_show },
    { "size",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_size },
    { "sizeAdjustPolicy",            Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractScrollArea_sizeAdjustPolicy },
    { "sizeHint",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_sizeHint },
    { "sizePolicy",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_sizePolicy },
    { "update",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_update },
    { "verticalHeader",              Member::NORMAL_FUNCTION,      (void*) lqtk_QTableView_verticalHeader },
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

const ClassInfo QTableViewBinding::classInfo = 
{
    "QTableView",

    &QAbstractItemViewBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    lqtk_QTableView_constructor,
    lqtk_QTableView_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    90,
    members
};

/* ============================================================================================ */

int QTableViewBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
