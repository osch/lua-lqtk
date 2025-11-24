// Type: QAbstractButton
// Base: QWidget

/* ============================================================================================ */

#include <QAbstractButton>
#include <QCloseEvent>
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
#include "QAbstractButtonWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QAbstractButtonWrapper::QAbstractButtonWrapper()
        : QAbstractButton(),
          lqtk_stateGuard(nullptr)
    {}
    QAbstractButtonWrapper::QAbstractButtonWrapper(
                   QWidget* arg1) 
        : QAbstractButton(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QAbstractButtonWrapper::lqtk_destruct(lua_State* L) {
        QAbstractButton* objPtr = (QAbstractButton*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QAbstractButtonWrapper::~QAbstractButtonWrapper() {
        trace::printf("Deleting lqtk::QAbstractButtonWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->L;
            if (L) {
                QAbstractButton* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QAbstractButton");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

    void QAbstractButtonWrapper::lqtk_QWidget_closeEvent(
                   QCloseEvent* arg1) 
    {
        return QWidget::closeEvent(
                   arg1); 
    }

    bool QAbstractButtonWrapper::lqtk_QWidget_event(
                   QEvent* arg1) 
    {
        return QWidget::event(
                   arg1); 
    }

    void QAbstractButtonWrapper::lqtk_QWidget_mouseDoubleClickEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseDoubleClickEvent(
                   arg1); 
    }

    void QAbstractButtonWrapper::lqtk_QWidget_mouseMoveEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseMoveEvent(
                   arg1); 
    }

    void QAbstractButtonWrapper::lqtk_QWidget_mousePressEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mousePressEvent(
                   arg1); 
    }

    void QAbstractButtonWrapper::lqtk_QWidget_mouseReleaseEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseReleaseEvent(
                   arg1); 
    }

    void QAbstractButtonWrapper::lqtk_QWidget_paintEvent(
                   QPaintEvent* arg1) 
    {
        return QWidget::paintEvent(
                   arg1); 
    }

    void QAbstractButtonWrapper::lqtk_QWidget_resizeEvent(
                   QResizeEvent* arg1) 
    {
        return QWidget::resizeEvent(
                   arg1); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QAbstractButtonWrapper::paintEvent1_doLua(lua_State* L) 
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

    void QAbstractButtonWrapper::paintEvent(
                   QPaintEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            paintEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, paintEvent1_doLua, &args, "QAbstractButton", "paintEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        throw std::runtime_error("method 'QAbstractButton:paintEvent' not implemented");
    }

/* -------------------------------------------------------------------------------------------- */
    void QAbstractButtonWrapper::closeEvent(
                   QCloseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::closeEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::closeEvent1_doLua, &args, "QAbstractButton", "closeEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QAbstractButton::closeEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QAbstractButtonWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::event1_doLua, &args, "QAbstractButton", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QAbstractButton", "event", msg);
                }
            }
        }
        return QAbstractButton::event(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QAbstractButtonWrapper::hasHeightForWidth() const
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::hasHeightForWidth1CallArgs args(
                    const_cast<QAbstractButtonWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::hasHeightForWidth1_doLua, &args, "QAbstractButton", "hasHeightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QAbstractButton", "hasHeightForWidth", msg);
                }
            }
        }
        return QAbstractButton::hasHeightForWidth();
    }

/* -------------------------------------------------------------------------------------------- */
    int QAbstractButtonWrapper::heightForWidth(
                   int arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::heightForWidth1CallArgs args(
                    const_cast<QAbstractButtonWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::heightForWidth1_doLua, &args, "QAbstractButton", "heightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QAbstractButton", "heightForWidth", msg);
                }
            }
        }
        return QAbstractButton::heightForWidth(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QAbstractButtonWrapper::mouseDoubleClickEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseDoubleClickEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseDoubleClickEvent1_doLua, &args, "QAbstractButton", "mouseDoubleClickEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QAbstractButton::mouseDoubleClickEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QAbstractButtonWrapper::mouseMoveEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseMoveEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseMoveEvent1_doLua, &args, "QAbstractButton", "mouseMoveEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QAbstractButton::mouseMoveEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QAbstractButtonWrapper::mousePressEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mousePressEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mousePressEvent1_doLua, &args, "QAbstractButton", "mousePressEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QAbstractButton::mousePressEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QAbstractButtonWrapper::mouseReleaseEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseReleaseEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseReleaseEvent1_doLua, &args, "QAbstractButton", "mouseReleaseEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QAbstractButton::mouseReleaseEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QAbstractButtonWrapper::resizeEvent(
                   QResizeEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::resizeEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::resizeEvent1_doLua, &args, "QAbstractButton", "resizeEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QAbstractButton::resizeEvent(
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


struct lqtk_QAbstractButton_setText_Args
{
    FromLua<QAbstractButton*> arg_1_1;
    FromLua<QString> arg_2_1;
};

static int lqtk_QAbstractButton_setText_doLua(lua_State* L)
{
    lqtk_QAbstractButton_setText_Args* args = (lqtk_QAbstractButton_setText_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QAbstractButton::setText(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QAbstractButton", "setText", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QAbstractButton_setText(lua_State* L)
{
    try {
        lqtk_QAbstractButton_setText_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QAbstractButton_setText_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QAbstractButton_text_Args
{
    FromLua<QAbstractButton*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QAbstractButton_text_doLua(lua_State* L)
{
    lqtk_QAbstractButton_text_Args* args = (lqtk_QAbstractButton_text_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QAbstractButton::text();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QAbstractButton", "text", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QAbstractButton_text(lua_State* L)
{
    try {
        lqtk_QAbstractButton_text_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QAbstractButton_text_doLua, &args);
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
        QAbstractButtonBinding::QType* ptr = static_cast<QAbstractButtonBinding::QType*>(objectPtr);
        if (targetClassInfo == &QAbstractButtonBinding::classInfo) {
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
        QAbstractButton* ptr = (QAbstractButton*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QAbstractButton* obj = (QAbstractButton*) objectPtr;
        
        QAbstractButtonWrapper* wrapper = dynamic_cast<QAbstractButtonWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */


struct lqtk_QAbstractButton_new_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<QAbstractButton*> rslt_1;
};

extern "C" int lqtk_QAbstractButton_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QAbstractButton_new_Args  argValues;
    lqtk_QAbstractButton_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QAbstractButtonBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QAbstractButton> expected");
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
                QAbstractButtonWrapper* rslt = 
                    new QAbstractButtonWrapper();
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
                QAbstractButtonWrapper* rslt = 
                    new QAbstractButtonWrapper(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QAbstractButton", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QAbstractButton", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QAbstractButton_new(lua_State* L)
{
    return lqtk_QAbstractButton_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QAbstractButtonBinding::pushObject(lua_State* L, QAbstractButton* objPtr, OwnerType ownerType)
{
    QAbstractButtonWrapper* wrapper = dynamic_cast<QAbstractButtonWrapper*>(objPtr);
    if (!wrapper) {
        QPushButton* ptr1 = dynamic_cast<QPushButton*>(objPtr);
        if (ptr1) {
            return QPushButtonBinding::pushObject(L, ptr1, ownerType);
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
        udata = ObjectUdata::pushNew<QAbstractButton>(L, hasUserValue);     // -> uval?, udata
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
    { "setText",               Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractButton_setText },
    { "setWindowTitle",        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setWindowTitle },
    { "show",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_show },
    { "size",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_size },
    { "sizeHint",              Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_sizeHint },
    { "sizePolicy",            Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_sizePolicy },
    { "text",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractButton_text },
    { "update",                Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_update },
    { "width",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_width },
    { NULL,                    Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QAbstractButtonBinding::classInfo = 
{
    "QAbstractButton",

    &QWidgetBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    lqtk_QAbstractButton_constructor,
    lqtk_QAbstractButton_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    46,
    members
};

/* ============================================================================================ */

int QAbstractButtonBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
