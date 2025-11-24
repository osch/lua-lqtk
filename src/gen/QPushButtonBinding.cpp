// Type: QPushButton
// Base: QAbstractButton

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
#include "QPushButtonWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QPushButtonWrapper::QPushButtonWrapper()
        : QPushButton(),
          lqtk_stateGuard(nullptr)
    {}
    QPushButtonWrapper::QPushButtonWrapper(
                   QWidget* arg1) 
        : QPushButton(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}
    QPushButtonWrapper::QPushButtonWrapper(
                   QString arg1) 
        : QPushButton(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}
    QPushButtonWrapper::QPushButtonWrapper(
                   QString arg1, 
                   QWidget* arg2) 
        : QPushButton(
                   arg1,
                   arg2),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QPushButtonWrapper::lqtk_destruct(lua_State* L) {
        QPushButton* objPtr = (QPushButton*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QPushButtonWrapper::~QPushButtonWrapper() {
        trace::printf("Deleting lqtk::QPushButtonWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->L;
            if (L) {
                QPushButton* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QPushButton");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

    void QPushButtonWrapper::lqtk_QPushButton_paintEvent(
                   QPaintEvent* arg1) 
    {
        return QPushButton::paintEvent(
                   arg1); 
    }

    void QPushButtonWrapper::lqtk_QWidget_closeEvent(
                   QCloseEvent* arg1) 
    {
        return QWidget::closeEvent(
                   arg1); 
    }

    bool QPushButtonWrapper::lqtk_QWidget_event(
                   QEvent* arg1) 
    {
        return QWidget::event(
                   arg1); 
    }

    void QPushButtonWrapper::lqtk_QWidget_mouseDoubleClickEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseDoubleClickEvent(
                   arg1); 
    }

    void QPushButtonWrapper::lqtk_QWidget_mouseMoveEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseMoveEvent(
                   arg1); 
    }

    void QPushButtonWrapper::lqtk_QWidget_mousePressEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mousePressEvent(
                   arg1); 
    }

    void QPushButtonWrapper::lqtk_QWidget_mouseReleaseEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseReleaseEvent(
                   arg1); 
    }

    void QPushButtonWrapper::lqtk_QWidget_paintEvent(
                   QPaintEvent* arg1) 
    {
        return QWidget::paintEvent(
                   arg1); 
    }

    void QPushButtonWrapper::lqtk_QWidget_resizeEvent(
                   QResizeEvent* arg1) 
    {
        return QWidget::resizeEvent(
                   arg1); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QPushButtonWrapper::paintEvent1_doLua(lua_State* L) 
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

    void QPushButtonWrapper::paintEvent(
                   QPaintEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            paintEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, paintEvent1_doLua, &args, "QPushButton", "paintEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QPushButton::paintEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QPushButtonWrapper::closeEvent(
                   QCloseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::closeEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::closeEvent1_doLua, &args, "QPushButton", "closeEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QPushButton::closeEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QPushButtonWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::event1_doLua, &args, "QPushButton", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QPushButton", "event", msg);
                }
            }
        }
        return QPushButton::event(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QPushButtonWrapper::hasHeightForWidth() const
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::hasHeightForWidth1CallArgs args(
                    const_cast<QPushButtonWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::hasHeightForWidth1_doLua, &args, "QPushButton", "hasHeightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QPushButton", "hasHeightForWidth", msg);
                }
            }
        }
        return QPushButton::hasHeightForWidth();
    }

/* -------------------------------------------------------------------------------------------- */
    int QPushButtonWrapper::heightForWidth(
                   int arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::heightForWidth1CallArgs args(
                    const_cast<QPushButtonWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::heightForWidth1_doLua, &args, "QPushButton", "heightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QPushButton", "heightForWidth", msg);
                }
            }
        }
        return QPushButton::heightForWidth(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QPushButtonWrapper::mouseDoubleClickEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseDoubleClickEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseDoubleClickEvent1_doLua, &args, "QPushButton", "mouseDoubleClickEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QPushButton::mouseDoubleClickEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QPushButtonWrapper::mouseMoveEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseMoveEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseMoveEvent1_doLua, &args, "QPushButton", "mouseMoveEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QPushButton::mouseMoveEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QPushButtonWrapper::mousePressEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mousePressEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mousePressEvent1_doLua, &args, "QPushButton", "mousePressEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QPushButton::mousePressEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QPushButtonWrapper::mouseReleaseEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseReleaseEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseReleaseEvent1_doLua, &args, "QPushButton", "mouseReleaseEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QPushButton::mouseReleaseEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QPushButtonWrapper::resizeEvent(
                   QResizeEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::resizeEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::resizeEvent1_doLua, &args, "QPushButton", "resizeEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QPushButton::resizeEvent(
                    arg2); 
    }

} // namespace lqtk

/* ============================================================================================ */

extern "C" {
    int lqtk_QAbstractButton_setText(lua_State* L);
    int lqtk_QAbstractButton_text(lua_State* L);
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


struct lqtk_QPushButton_paintEvent_Args
{
    FromLua<QPushButton*> arg_1_1;
    FromLua<QPaintEvent*> arg_2_1;
};

extern "C" int lqtk_QPushButton_paintEvent(lua_State* L)
{
    lqtk_QPushButton_paintEvent_Args  argValues;
    lqtk_QPushButton_paintEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QPushButtonExportWrapper* wrapper = dynamic_cast<QPushButtonExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'paintEvent' is protected in QPushButton");
                }
                    wrapper->lqtk_QPushButton_paintEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPushButton", "paintEvent", nargs, "2");
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
        QPushButtonBinding::QType* ptr = static_cast<QPushButtonBinding::QType*>(objectPtr);
        if (targetClassInfo == &QPushButtonBinding::classInfo) {
            return ptr;
        }
        if (targetClassInfo == &QAbstractButtonBinding::classInfo) {
            return static_cast<QAbstractButtonBinding::QType*>(ptr);
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
        QPushButton* ptr = (QPushButton*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QPushButton* obj = (QPushButton*) objectPtr;
        
        QPushButtonWrapper* wrapper = dynamic_cast<QPushButtonWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */


struct lqtk_QPushButton_new_Args
{
    explicit lqtk_QPushButton_new_Args(bool explicitNew)
        : explicitNew(explicitNew)
    {}
    bool explicitNew;
    FromLua<QWidget*> arg_1_1;
    FromLua<QString> arg_2_1;
    ToLua<QPushButton*> rslt_1;
};

static int lqtk_QPushButton_new_doLua(lua_State* L)
{
    lqtk_QPushButton_new_Args* args = (lqtk_QPushButton_new_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    bool explicitNew = args->explicitNew;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QPushButtonBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QPushButton> expected");
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
                QPushButtonWrapper* rslt = 
                    new QPushButtonWrapper();
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                QPushButtonWrapper* rslt = 
                    new QPushButtonWrapper(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                QPushButtonWrapper* rslt = 
                    new QPushButtonWrapper(args->arg_2_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        if (nargs == 2) { do {
            args->arg_2_1.check(L, argOffs+1);
            args->arg_1_1.check(L, argOffs+2);
            {
                QPushButtonWrapper* rslt = 
                    new QPushButtonWrapper(args->arg_2_1.getValue(), args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QPushButton", "new", nargs, "1,2,3");
        } else {
            return util::argCountError(L, "QPushButton", nullptr, nargs, "0,1,2");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QPushButton_constructor(lua_State* L, bool explicitNew)
{
    try {
        lqtk_QPushButton_new_Args args(explicitNew);
        return BindingUtil::callMethodFromLua(L, lqtk_QPushButton_new_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QPushButton_new(lua_State* L)
{
    return lqtk_QPushButton_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QPushButtonBinding::pushObject(lua_State* L, QPushButton* objPtr, OwnerType ownerType)
{
    QPushButtonWrapper* wrapper = dynamic_cast<QPushButtonWrapper*>(objPtr);
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
        udata = ObjectUdata::pushNew<QPushButton>(L, hasUserValue);     // -> uval?, udata
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
    { "paintEvent",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QPushButton_paintEvent },
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

const ClassInfo QPushButtonBinding::classInfo = 
{
    "QPushButton",

    &QAbstractButtonBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    lqtk_QPushButton_constructor,
    lqtk_QPushButton_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    47,
    members
};

/* ============================================================================================ */

int QPushButtonBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
