// Type: QDialogButtonBox
// Base: QWidget

/* ============================================================================================ */

#include <QAbstractButton>
#include <QCloseEvent>
#include <QDialogButtonBox>
#include <QEvent>
#include <QMouseEvent>
#include <QObject>
#include <QPaintEvent>
#include <QPushButton>
#include <QResizeEvent>
#include <QString>
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
#include "QAbstractButtonBinding.hpp"
#include "QCloseEventBinding.hpp"
#include "QDialogButtonBoxBinding.hpp"
#include "QEventBinding.hpp"
#include "QMouseEventBinding.hpp"
#include "QObjectBinding.hpp"
#include "QPaintEventBinding.hpp"
#include "QPushButtonBinding.hpp"
#include "QResizeEventBinding.hpp"
#include "QStringBinding.hpp"
#include "QWidgetBinding.hpp"
#include "QObjectWrapper.hpp"
#include "QWidgetWrapper.hpp"
#include "QDialogButtonBoxWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QDialogButtonBoxWrapper::QDialogButtonBoxWrapper()
        : QDialogButtonBox(),
          lqtk_stateGuard(nullptr)
    {}
    QDialogButtonBoxWrapper::QDialogButtonBoxWrapper(
                   QWidget* arg1) 
        : QDialogButtonBox(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QDialogButtonBoxWrapper::lqtk_destruct(lua_State* L) {
        QDialogButtonBox* objPtr = (QDialogButtonBox*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QDialogButtonBoxWrapper::~QDialogButtonBoxWrapper() {
        trace::printf("Deleting lqtk::QDialogButtonBoxWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->L;
            if (L) {
                QDialogButtonBox* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QDialogButtonBox");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

    void QDialogButtonBoxWrapper::lqtk_QWidget_closeEvent(
                   QCloseEvent* arg1) 
    {
        return QWidget::closeEvent(
                   arg1); 
    }

    bool QDialogButtonBoxWrapper::lqtk_QWidget_event(
                   QEvent* arg1) 
    {
        return QWidget::event(
                   arg1); 
    }

    void QDialogButtonBoxWrapper::lqtk_QWidget_mouseDoubleClickEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseDoubleClickEvent(
                   arg1); 
    }

    void QDialogButtonBoxWrapper::lqtk_QWidget_mouseMoveEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseMoveEvent(
                   arg1); 
    }

    void QDialogButtonBoxWrapper::lqtk_QWidget_mousePressEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mousePressEvent(
                   arg1); 
    }

    void QDialogButtonBoxWrapper::lqtk_QWidget_mouseReleaseEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseReleaseEvent(
                   arg1); 
    }

    void QDialogButtonBoxWrapper::lqtk_QWidget_paintEvent(
                   QPaintEvent* arg1) 
    {
        return QWidget::paintEvent(
                   arg1); 
    }

    void QDialogButtonBoxWrapper::lqtk_QWidget_resizeEvent(
                   QResizeEvent* arg1) 
    {
        return QWidget::resizeEvent(
                   arg1); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QDialogButtonBoxWrapper::closeEvent(
                   QCloseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::closeEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::closeEvent1_doLua, &args, "QDialogButtonBox", "closeEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QDialogButtonBox::closeEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QDialogButtonBoxWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::event1_doLua, &args, "QDialogButtonBox", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QDialogButtonBox", "event", msg);
                }
            }
        }
        return QDialogButtonBox::event(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QDialogButtonBoxWrapper::hasHeightForWidth() const
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::hasHeightForWidth1CallArgs args(
                    const_cast<QDialogButtonBoxWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::hasHeightForWidth1_doLua, &args, "QDialogButtonBox", "hasHeightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QDialogButtonBox", "hasHeightForWidth", msg);
                }
            }
        }
        return QDialogButtonBox::hasHeightForWidth();
    }

/* -------------------------------------------------------------------------------------------- */
    int QDialogButtonBoxWrapper::heightForWidth(
                   int arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::heightForWidth1CallArgs args(
                    const_cast<QDialogButtonBoxWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::heightForWidth1_doLua, &args, "QDialogButtonBox", "heightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QDialogButtonBox", "heightForWidth", msg);
                }
            }
        }
        return QDialogButtonBox::heightForWidth(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QDialogButtonBoxWrapper::mouseDoubleClickEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseDoubleClickEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseDoubleClickEvent1_doLua, &args, "QDialogButtonBox", "mouseDoubleClickEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QDialogButtonBox::mouseDoubleClickEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QDialogButtonBoxWrapper::mouseMoveEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseMoveEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseMoveEvent1_doLua, &args, "QDialogButtonBox", "mouseMoveEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QDialogButtonBox::mouseMoveEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QDialogButtonBoxWrapper::mousePressEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mousePressEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mousePressEvent1_doLua, &args, "QDialogButtonBox", "mousePressEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QDialogButtonBox::mousePressEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QDialogButtonBoxWrapper::mouseReleaseEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseReleaseEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseReleaseEvent1_doLua, &args, "QDialogButtonBox", "mouseReleaseEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QDialogButtonBox::mouseReleaseEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QDialogButtonBoxWrapper::paintEvent(
                   QPaintEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::paintEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::paintEvent1_doLua, &args, "QDialogButtonBox", "paintEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QDialogButtonBox::paintEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QDialogButtonBoxWrapper::resizeEvent(
                   QResizeEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::resizeEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::resizeEvent1_doLua, &args, "QDialogButtonBox", "resizeEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QDialogButtonBox::resizeEvent(
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
    int lqtk_QWidget_resizeEvent(lua_State* L);
    int lqtk_QWidget_setBackgroundRole(lua_State* L);
    int lqtk_QWidget_setFont(lua_State* L);
    int lqtk_QWidget_setGeometry(lua_State* L);
    int lqtk_QWidget_setLayout(lua_State* L);
    int lqtk_QWidget_setSizePolicy(lua_State* L);
    int lqtk_QWidget_setWindowTitle(lua_State* L);
    int lqtk_QWidget_show(lua_State* L);
    int lqtk_QWidget_size(lua_State* L);
    int lqtk_QWidget_sizeHint(lua_State* L);
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


struct lqtk_QDialogButtonBox_addButton_Args
{
    FromLua<QDialogButtonBox*> arg_1_1;
    FromLua<QAbstractButton*> arg_2_1;
    FromLua<QDialogButtonBox::ButtonRole> arg_3_1;
    FromLua<QDialogButtonBox::StandardButton> arg_4_1;
    FromLua<QString> arg_5_1;
    ToLua<QPushButton*> rslt_1;
};

static int lqtk_QDialogButtonBox_addButton_doLua(lua_State* L)
{
    lqtk_QDialogButtonBox_addButton_Args* args = (lqtk_QDialogButtonBox_addButton_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QDialogButtonBox::addButton(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->arg_2_1.unsetOwnership();
                return 0;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_4_1.check(L, argOffs+2);
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QDialogButtonBox::addButton(args->arg_4_1.getValue());
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_5_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QDialogButtonBox::addButton(args->arg_5_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 3) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            assert(false);
        }
        return util::argCountError(L, "QDialogButtonBox", "addButton", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDialogButtonBox_addButton(lua_State* L)
{
    try {
        lqtk_QDialogButtonBox_addButton_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDialogButtonBox_addButton_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDialogButtonBox_buttons_Args
{
    FromLua<QDialogButtonBox*> arg_1_1;
    ToLua<QList<QAbstractButton*>> rslt_1;
};

static int lqtk_QDialogButtonBox_buttons_doLua(lua_State* L)
{
    lqtk_QDialogButtonBox_buttons_Args* args = (lqtk_QDialogButtonBox_buttons_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDialogButtonBox::buttons();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDialogButtonBox", "buttons", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDialogButtonBox_buttons(lua_State* L)
{
    try {
        lqtk_QDialogButtonBox_buttons_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDialogButtonBox_buttons_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDialogButtonBox_centerButtons_Args
{
    FromLua<QDialogButtonBox*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QDialogButtonBox_centerButtons(lua_State* L)
{
    lqtk_QDialogButtonBox_centerButtons_Args  argValues;
    lqtk_QDialogButtonBox_centerButtons_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDialogButtonBox::centerButtons();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDialogButtonBox", "centerButtons", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDialogButtonBox_setCenterButtons_Args
{
    FromLua<QDialogButtonBox*> arg_1_1;
    FromLua<bool> arg_2_1;
};

extern "C" int lqtk_QDialogButtonBox_setCenterButtons(lua_State* L)
{
    lqtk_QDialogButtonBox_setCenterButtons_Args  argValues;
    lqtk_QDialogButtonBox_setCenterButtons_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QDialogButtonBox::setCenterButtons(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDialogButtonBox", "setCenterButtons", nargs, "2");
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
        QDialogButtonBoxBinding::QType* ptr = static_cast<QDialogButtonBoxBinding::QType*>(objectPtr);
        if (targetClassInfo == &QDialogButtonBoxBinding::classInfo) {
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
        QDialogButtonBox* ptr = (QDialogButtonBox*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QDialogButtonBox* obj = (QDialogButtonBox*) objectPtr;
        
        QDialogButtonBoxWrapper* wrapper = dynamic_cast<QDialogButtonBoxWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */


struct lqtk_QDialogButtonBox_new_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<QDialogButtonBox*> rslt_1;
};

extern "C" int lqtk_QDialogButtonBox_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QDialogButtonBox_new_Args  argValues;
    lqtk_QDialogButtonBox_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QDialogButtonBoxBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QDialogButtonBox> expected");
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
                QDialogButtonBoxWrapper* rslt = 
                    new QDialogButtonBoxWrapper();
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
                QDialogButtonBoxWrapper* rslt = 
                    new QDialogButtonBoxWrapper(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QDialogButtonBox", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QDialogButtonBox", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QDialogButtonBox_new(lua_State* L)
{
    return lqtk_QDialogButtonBox_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QDialogButtonBoxBinding::pushObject(lua_State* L, QDialogButtonBox* objPtr, OwnerType ownerType)
{
    QDialogButtonBoxWrapper* wrapper = dynamic_cast<QDialogButtonBoxWrapper*>(objPtr);
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
        udata = ObjectUdata::pushNew<QDialogButtonBox>(L, hasUserValue);     // -> uval?, udata
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
    { "Abort",                 Member::INTEGER,              (void*) QDialogButtonBox::Abort },
    { "AcceptRole",            Member::INTEGER,              (void*) QDialogButtonBox::AcceptRole },
    { "ActionRole",            Member::INTEGER,              (void*) QDialogButtonBox::ActionRole },
    { "Apply",                 Member::INTEGER,              (void*) QDialogButtonBox::Apply },
    { "ApplyRole",             Member::INTEGER,              (void*) QDialogButtonBox::ApplyRole },
    { "Cancel",                Member::INTEGER,              (void*) QDialogButtonBox::Cancel },
    { "Close",                 Member::INTEGER,              (void*) QDialogButtonBox::Close },
    { "DestructiveRole",       Member::INTEGER,              (void*) QDialogButtonBox::DestructiveRole },
    { "Discard",               Member::INTEGER,              (void*) QDialogButtonBox::Discard },
    { "Help",                  Member::INTEGER,              (void*) QDialogButtonBox::Help },
    { "HelpRole",              Member::INTEGER,              (void*) QDialogButtonBox::HelpRole },
    { "Ignore",                Member::INTEGER,              (void*) QDialogButtonBox::Ignore },
    { "InvalidRole",           Member::INTEGER,              (void*) QDialogButtonBox::InvalidRole },
    { "No",                    Member::INTEGER,              (void*) QDialogButtonBox::No },
    { "NoButton",              Member::INTEGER,              (void*) QDialogButtonBox::NoButton },
    { "NoRole",                Member::INTEGER,              (void*) QDialogButtonBox::NoRole },
    { "NoToAll",               Member::INTEGER,              (void*) QDialogButtonBox::NoToAll },
    { "Ok",                    Member::INTEGER,              (void*) QDialogButtonBox::Ok },
    { "Open",                  Member::INTEGER,              (void*) QDialogButtonBox::Open },
    { "RejectRole",            Member::INTEGER,              (void*) QDialogButtonBox::RejectRole },
    { "Reset",                 Member::INTEGER,              (void*) QDialogButtonBox::Reset },
    { "ResetRole",             Member::INTEGER,              (void*) QDialogButtonBox::ResetRole },
    { "RestoreDefaults",       Member::INTEGER,              (void*) QDialogButtonBox::RestoreDefaults },
    { "Retry",                 Member::INTEGER,              (void*) QDialogButtonBox::Retry },
    { "Save",                  Member::INTEGER,              (void*) QDialogButtonBox::Save },
    { "SaveAll",               Member::INTEGER,              (void*) QDialogButtonBox::SaveAll },
    { "Yes",                   Member::INTEGER,              (void*) QDialogButtonBox::Yes },
    { "YesRole",               Member::INTEGER,              (void*) QDialogButtonBox::YesRole },
    { "YesToAll",              Member::INTEGER,              (void*) QDialogButtonBox::YesToAll },
    { "acceptDrops",           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_acceptDrops },
    { "accessibleDescription", Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_accessibleDescription },
    { "accessibleIdentifier",  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_accessibleIdentifier },
    { "accessibleName",        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_accessibleName },
    { "addActions",            Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_addActions },
    { "addButton",             Member::NORMAL_FUNCTION,      (void*) lqtk_QDialogButtonBox_addButton },
    { "buttons",               Member::NORMAL_FUNCTION,      (void*) lqtk_QDialogButtonBox_buttons },
    { "centerButtons",         Member::NORMAL_FUNCTION,      (void*) lqtk_QDialogButtonBox_centerButtons },
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
    { "setCenterButtons",      Member::NORMAL_FUNCTION,      (void*) lqtk_QDialogButtonBox_setCenterButtons },
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

const ClassInfo QDialogButtonBoxBinding::classInfo = 
{
    "QDialogButtonBox",

    &QWidgetBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    lqtk_QDialogButtonBox_constructor,
    lqtk_QDialogButtonBox_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    78,
    members
};

/* ============================================================================================ */

int QDialogButtonBoxBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
