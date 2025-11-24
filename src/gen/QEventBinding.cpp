// Type: QEvent
// Base: nil

/* ============================================================================================ */

#include <QCloseEvent>
#include <QEvent>
#include <QInputEvent>
#include <QObject>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>
#include <QTimerEvent>

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
#include "QInputEventBinding.hpp"
#include "QObjectBinding.hpp"
#include "QPaintEventBinding.hpp"
#include "QResizeEventBinding.hpp"
#include "QShowEventBinding.hpp"
#include "QTimerEventBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QEvent_accept_Args
{
    FromLua<QEvent*> arg_1_1;
};

extern "C" int lqtk_QEvent_accept(lua_State* L)
{
    lqtk_QEvent_accept_Args  argValues;
    lqtk_QEvent_accept_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QEvent::accept();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QEvent", "accept", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QEvent_ignore_Args
{
    FromLua<QEvent*> arg_1_1;
};

extern "C" int lqtk_QEvent_ignore(lua_State* L)
{
    lqtk_QEvent_ignore_Args  argValues;
    lqtk_QEvent_ignore_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QEvent::ignore();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QEvent", "ignore", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QEvent_isAccepted_Args
{
    FromLua<QEvent*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QEvent_isAccepted(lua_State* L)
{
    lqtk_QEvent_isAccepted_Args  argValues;
    lqtk_QEvent_isAccepted_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QEvent::isAccepted();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QEvent", "isAccepted", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QEvent_setAccepted_Args
{
    FromLua<QEvent*> arg_1_1;
    FromLua<bool> arg_2_1;
};

extern "C" int lqtk_QEvent_setAccepted(lua_State* L)
{
    lqtk_QEvent_setAccepted_Args  argValues;
    lqtk_QEvent_setAccepted_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QEvent::setAccepted(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QEvent", "setAccepted", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QEvent_type_Args
{
    FromLua<QEvent*> arg_1_1;
    ToLua<QEvent::Type> rslt_1;
};

extern "C" int lqtk_QEvent_type(lua_State* L)
{
    lqtk_QEvent_type_Args  argValues;
    lqtk_QEvent_type_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QEvent::type();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QEvent", "type", nargs, "1");
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
        QEventBinding::QType* ptr = static_cast<QEventBinding::QType*>(objectPtr);
        if (targetClassInfo == &QEventBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QEvent* ptr = (QEvent*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

ObjectUdata* QEventBinding::pushObject(lua_State* L, QEvent* objPtr, OwnerType ownerType)
{
        QCloseEvent* ptr1 = dynamic_cast<QCloseEvent*>(objPtr);
        if (ptr1) {
            return QCloseEventBinding::pushObject(L, ptr1, ownerType);
        }
        QInputEvent* ptr2 = dynamic_cast<QInputEvent*>(objPtr);
        if (ptr2) {
            return QInputEventBinding::pushObject(L, ptr2, ownerType);
        }
        QPaintEvent* ptr3 = dynamic_cast<QPaintEvent*>(objPtr);
        if (ptr3) {
            return QPaintEventBinding::pushObject(L, ptr3, ownerType);
        }
        QResizeEvent* ptr4 = dynamic_cast<QResizeEvent*>(objPtr);
        if (ptr4) {
            return QResizeEventBinding::pushObject(L, ptr4, ownerType);
        }
        QShowEvent* ptr5 = dynamic_cast<QShowEvent*>(objPtr);
        if (ptr5) {
            return QShowEventBinding::pushObject(L, ptr5, ownerType);
        }
        QTimerEvent* ptr6 = dynamic_cast<QTimerEvent*>(objPtr);
        if (ptr6) {
            return QTimerEventBinding::pushObject(L, ptr6, ownerType);
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
        udata = ObjectUdata::pushNew<QEvent>(L, hasUserValue);     // -> uval?, udata
        udata->setRawPtr(L, -1, objPtr, ownerType);                      // -> uval?, udata
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
    { "ActionAdded",                      Member::INTEGER,              (void*) QEvent::ActionAdded },
    { "ActionChanged",                    Member::INTEGER,              (void*) QEvent::ActionChanged },
    { "ActionRemoved",                    Member::INTEGER,              (void*) QEvent::ActionRemoved },
    { "ActivationChange",                 Member::INTEGER,              (void*) QEvent::ActivationChange },
    { "ApplicationActivate",              Member::INTEGER,              (void*) QEvent::ApplicationActivate },
    { "ApplicationActivated",             Member::INTEGER,              (void*) QEvent::ApplicationActivated },
    { "ApplicationDeactivate",            Member::INTEGER,              (void*) QEvent::ApplicationDeactivate },
    { "ApplicationFontChange",            Member::INTEGER,              (void*) QEvent::ApplicationFontChange },
    { "ApplicationLayoutDirectionChange", Member::INTEGER,              (void*) QEvent::ApplicationLayoutDirectionChange },
    { "ApplicationPaletteChange",         Member::INTEGER,              (void*) QEvent::ApplicationPaletteChange },
    { "ApplicationStateChange",           Member::INTEGER,              (void*) QEvent::ApplicationStateChange },
    { "ApplicationWindowIconChange",      Member::INTEGER,              (void*) QEvent::ApplicationWindowIconChange },
    { "ChildAdded",                       Member::INTEGER,              (void*) QEvent::ChildAdded },
    { "ChildPolished",                    Member::INTEGER,              (void*) QEvent::ChildPolished },
    { "ChildRemoved",                     Member::INTEGER,              (void*) QEvent::ChildRemoved },
    { "ChildWindowAdded",                 Member::INTEGER,              (void*) QEvent::ChildWindowAdded },
    { "ChildWindowRemoved",               Member::INTEGER,              (void*) QEvent::ChildWindowRemoved },
    { "Clipboard",                        Member::INTEGER,              (void*) QEvent::Clipboard },
    { "Close",                            Member::INTEGER,              (void*) QEvent::Close },
    { "CloseSoftwareInputPanel",          Member::INTEGER,              (void*) QEvent::CloseSoftwareInputPanel },
    { "ContentsRectChange",               Member::INTEGER,              (void*) QEvent::ContentsRectChange },
    { "ContextMenu",                      Member::INTEGER,              (void*) QEvent::ContextMenu },
    { "CursorChange",                     Member::INTEGER,              (void*) QEvent::CursorChange },
    { "DeferredDelete",                   Member::INTEGER,              (void*) QEvent::DeferredDelete },
    { "DevicePixelRatioChange",           Member::INTEGER,              (void*) QEvent::DevicePixelRatioChange },
    { "DragEnter",                        Member::INTEGER,              (void*) QEvent::DragEnter },
    { "DragLeave",                        Member::INTEGER,              (void*) QEvent::DragLeave },
    { "DragMove",                         Member::INTEGER,              (void*) QEvent::DragMove },
    { "Drop",                             Member::INTEGER,              (void*) QEvent::Drop },
    { "DynamicPropertyChange",            Member::INTEGER,              (void*) QEvent::DynamicPropertyChange },
    { "EnabledChange",                    Member::INTEGER,              (void*) QEvent::EnabledChange },
    { "Enter",                            Member::INTEGER,              (void*) QEvent::Enter },
    { "EnterWhatsThisMode",               Member::INTEGER,              (void*) QEvent::EnterWhatsThisMode },
    { "Expose",                           Member::INTEGER,              (void*) QEvent::Expose },
    { "FileOpen",                         Member::INTEGER,              (void*) QEvent::FileOpen },
    { "FocusAboutToChange",               Member::INTEGER,              (void*) QEvent::FocusAboutToChange },
    { "FocusIn",                          Member::INTEGER,              (void*) QEvent::FocusIn },
    { "FocusOut",                         Member::INTEGER,              (void*) QEvent::FocusOut },
    { "FontChange",                       Member::INTEGER,              (void*) QEvent::FontChange },
    { "Gesture",                          Member::INTEGER,              (void*) QEvent::Gesture },
    { "GestureOverride",                  Member::INTEGER,              (void*) QEvent::GestureOverride },
    { "GrabKeyboard",                     Member::INTEGER,              (void*) QEvent::GrabKeyboard },
    { "GrabMouse",                        Member::INTEGER,              (void*) QEvent::GrabMouse },
    { "GraphicsSceneContextMenu",         Member::INTEGER,              (void*) QEvent::GraphicsSceneContextMenu },
    { "GraphicsSceneDragEnter",           Member::INTEGER,              (void*) QEvent::GraphicsSceneDragEnter },
    { "GraphicsSceneDragLeave",           Member::INTEGER,              (void*) QEvent::GraphicsSceneDragLeave },
    { "GraphicsSceneDragMove",            Member::INTEGER,              (void*) QEvent::GraphicsSceneDragMove },
    { "GraphicsSceneDrop",                Member::INTEGER,              (void*) QEvent::GraphicsSceneDrop },
    { "GraphicsSceneHelp",                Member::INTEGER,              (void*) QEvent::GraphicsSceneHelp },
    { "GraphicsSceneHoverEnter",          Member::INTEGER,              (void*) QEvent::GraphicsSceneHoverEnter },
    { "GraphicsSceneHoverLeave",          Member::INTEGER,              (void*) QEvent::GraphicsSceneHoverLeave },
    { "GraphicsSceneHoverMove",           Member::INTEGER,              (void*) QEvent::GraphicsSceneHoverMove },
    { "GraphicsSceneLeave",               Member::INTEGER,              (void*) QEvent::GraphicsSceneLeave },
    { "GraphicsSceneMouseDoubleClick",    Member::INTEGER,              (void*) QEvent::GraphicsSceneMouseDoubleClick },
    { "GraphicsSceneMouseMove",           Member::INTEGER,              (void*) QEvent::GraphicsSceneMouseMove },
    { "GraphicsSceneMousePress",          Member::INTEGER,              (void*) QEvent::GraphicsSceneMousePress },
    { "GraphicsSceneMouseRelease",        Member::INTEGER,              (void*) QEvent::GraphicsSceneMouseRelease },
    { "GraphicsSceneMove",                Member::INTEGER,              (void*) QEvent::GraphicsSceneMove },
    { "GraphicsSceneResize",              Member::INTEGER,              (void*) QEvent::GraphicsSceneResize },
    { "GraphicsSceneWheel",               Member::INTEGER,              (void*) QEvent::GraphicsSceneWheel },
    { "Hide",                             Member::INTEGER,              (void*) QEvent::Hide },
    { "HideToParent",                     Member::INTEGER,              (void*) QEvent::HideToParent },
    { "HoverEnter",                       Member::INTEGER,              (void*) QEvent::HoverEnter },
    { "HoverLeave",                       Member::INTEGER,              (void*) QEvent::HoverLeave },
    { "HoverMove",                        Member::INTEGER,              (void*) QEvent::HoverMove },
    { "IconDrag",                         Member::INTEGER,              (void*) QEvent::IconDrag },
    { "IconTextChange",                   Member::INTEGER,              (void*) QEvent::IconTextChange },
    { "InputMethod",                      Member::INTEGER,              (void*) QEvent::InputMethod },
    { "InputMethodQuery",                 Member::INTEGER,              (void*) QEvent::InputMethodQuery },
    { "KeyPress",                         Member::INTEGER,              (void*) QEvent::KeyPress },
    { "KeyRelease",                       Member::INTEGER,              (void*) QEvent::KeyRelease },
    { "KeyboardLayoutChange",             Member::INTEGER,              (void*) QEvent::KeyboardLayoutChange },
    { "LanguageChange",                   Member::INTEGER,              (void*) QEvent::LanguageChange },
    { "LayoutDirectionChange",            Member::INTEGER,              (void*) QEvent::LayoutDirectionChange },
    { "LayoutRequest",                    Member::INTEGER,              (void*) QEvent::LayoutRequest },
    { "Leave",                            Member::INTEGER,              (void*) QEvent::Leave },
    { "LeaveWhatsThisMode",               Member::INTEGER,              (void*) QEvent::LeaveWhatsThisMode },
    { "LocaleChange",                     Member::INTEGER,              (void*) QEvent::LocaleChange },
    { "MacSizeChange",                    Member::INTEGER,              (void*) QEvent::MacSizeChange },
    { "MetaCall",                         Member::INTEGER,              (void*) QEvent::MetaCall },
    { "ModifiedChange",                   Member::INTEGER,              (void*) QEvent::ModifiedChange },
    { "MouseButtonDblClick",              Member::INTEGER,              (void*) QEvent::MouseButtonDblClick },
    { "MouseButtonPress",                 Member::INTEGER,              (void*) QEvent::MouseButtonPress },
    { "MouseButtonRelease",               Member::INTEGER,              (void*) QEvent::MouseButtonRelease },
    { "MouseMove",                        Member::INTEGER,              (void*) QEvent::MouseMove },
    { "MouseTrackingChange",              Member::INTEGER,              (void*) QEvent::MouseTrackingChange },
    { "Move",                             Member::INTEGER,              (void*) QEvent::Move },
    { "NativeGesture",                    Member::INTEGER,              (void*) QEvent::NativeGesture },
    { "NonClientAreaMouseButtonDblClick", Member::INTEGER,              (void*) QEvent::NonClientAreaMouseButtonDblClick },
    { "NonClientAreaMouseButtonPress",    Member::INTEGER,              (void*) QEvent::NonClientAreaMouseButtonPress },
    { "NonClientAreaMouseButtonRelease",  Member::INTEGER,              (void*) QEvent::NonClientAreaMouseButtonRelease },
    { "NonClientAreaMouseMove",           Member::INTEGER,              (void*) QEvent::NonClientAreaMouseMove },
    { "None",                             Member::INTEGER,              (void*) QEvent::None },
    { "OrientationChange",                Member::INTEGER,              (void*) QEvent::OrientationChange },
    { "Paint",                            Member::INTEGER,              (void*) QEvent::Paint },
    { "PaletteChange",                    Member::INTEGER,              (void*) QEvent::PaletteChange },
    { "ParentAboutToChange",              Member::INTEGER,              (void*) QEvent::ParentAboutToChange },
    { "ParentChange",                     Member::INTEGER,              (void*) QEvent::ParentChange },
    { "ParentWindowAboutToChange",        Member::INTEGER,              (void*) QEvent::ParentWindowAboutToChange },
    { "ParentWindowChange",               Member::INTEGER,              (void*) QEvent::ParentWindowChange },
    { "PlatformPanel",                    Member::INTEGER,              (void*) QEvent::PlatformPanel },
    { "PlatformSurface",                  Member::INTEGER,              (void*) QEvent::PlatformSurface },
    { "Polish",                           Member::INTEGER,              (void*) QEvent::Polish },
    { "PolishRequest",                    Member::INTEGER,              (void*) QEvent::PolishRequest },
    { "QueryWhatsThis",                   Member::INTEGER,              (void*) QEvent::QueryWhatsThis },
    { "Quit",                             Member::INTEGER,              (void*) QEvent::Quit },
    { "ReadOnlyChange",                   Member::INTEGER,              (void*) QEvent::ReadOnlyChange },
    { "RequestSoftwareInputPanel",        Member::INTEGER,              (void*) QEvent::RequestSoftwareInputPanel },
    { "Resize",                           Member::INTEGER,              (void*) QEvent::Resize },
    { "SafeAreaMarginsChange",            Member::INTEGER,              (void*) QEvent::SafeAreaMarginsChange },
    { "Scroll",                           Member::INTEGER,              (void*) QEvent::Scroll },
    { "ScrollPrepare",                    Member::INTEGER,              (void*) QEvent::ScrollPrepare },
    { "Shortcut",                         Member::INTEGER,              (void*) QEvent::Shortcut },
    { "ShortcutOverride",                 Member::INTEGER,              (void*) QEvent::ShortcutOverride },
    { "Show",                             Member::INTEGER,              (void*) QEvent::Show },
    { "ShowToParent",                     Member::INTEGER,              (void*) QEvent::ShowToParent },
    { "SockAct",                          Member::INTEGER,              (void*) QEvent::SockAct },
    { "StateMachineSignal",               Member::INTEGER,              (void*) QEvent::StateMachineSignal },
    { "StateMachineWrapped",              Member::INTEGER,              (void*) QEvent::StateMachineWrapped },
    { "StatusTip",                        Member::INTEGER,              (void*) QEvent::StatusTip },
    { "StyleChange",                      Member::INTEGER,              (void*) QEvent::StyleChange },
    { "TabletEnterProximity",             Member::INTEGER,              (void*) QEvent::TabletEnterProximity },
    { "TabletLeaveProximity",             Member::INTEGER,              (void*) QEvent::TabletLeaveProximity },
    { "TabletMove",                       Member::INTEGER,              (void*) QEvent::TabletMove },
    { "TabletPress",                      Member::INTEGER,              (void*) QEvent::TabletPress },
    { "TabletRelease",                    Member::INTEGER,              (void*) QEvent::TabletRelease },
    { "TabletTrackingChange",             Member::INTEGER,              (void*) QEvent::TabletTrackingChange },
    { "ThreadChange",                     Member::INTEGER,              (void*) QEvent::ThreadChange },
    { "Timer",                            Member::INTEGER,              (void*) QEvent::Timer },
    { "ToolBarChange",                    Member::INTEGER,              (void*) QEvent::ToolBarChange },
    { "ToolTip",                          Member::INTEGER,              (void*) QEvent::ToolTip },
    { "ToolTipChange",                    Member::INTEGER,              (void*) QEvent::ToolTipChange },
    { "TouchBegin",                       Member::INTEGER,              (void*) QEvent::TouchBegin },
    { "TouchCancel",                      Member::INTEGER,              (void*) QEvent::TouchCancel },
    { "TouchEnd",                         Member::INTEGER,              (void*) QEvent::TouchEnd },
    { "TouchUpdate",                      Member::INTEGER,              (void*) QEvent::TouchUpdate },
    { "UngrabKeyboard",                   Member::INTEGER,              (void*) QEvent::UngrabKeyboard },
    { "UngrabMouse",                      Member::INTEGER,              (void*) QEvent::UngrabMouse },
    { "UpdateLater",                      Member::INTEGER,              (void*) QEvent::UpdateLater },
    { "UpdateRequest",                    Member::INTEGER,              (void*) QEvent::UpdateRequest },
    { "WhatsThis",                        Member::INTEGER,              (void*) QEvent::WhatsThis },
    { "WhatsThisClicked",                 Member::INTEGER,              (void*) QEvent::WhatsThisClicked },
    { "Wheel",                            Member::INTEGER,              (void*) QEvent::Wheel },
    { "WinEventAct",                      Member::INTEGER,              (void*) QEvent::WinEventAct },
    { "WinIdChange",                      Member::INTEGER,              (void*) QEvent::WinIdChange },
    { "WindowActivate",                   Member::INTEGER,              (void*) QEvent::WindowActivate },
    { "WindowBlocked",                    Member::INTEGER,              (void*) QEvent::WindowBlocked },
    { "WindowDeactivate",                 Member::INTEGER,              (void*) QEvent::WindowDeactivate },
    { "WindowIconChange",                 Member::INTEGER,              (void*) QEvent::WindowIconChange },
    { "WindowStateChange",                Member::INTEGER,              (void*) QEvent::WindowStateChange },
    { "WindowTitleChange",                Member::INTEGER,              (void*) QEvent::WindowTitleChange },
    { "WindowUnblocked",                  Member::INTEGER,              (void*) QEvent::WindowUnblocked },
    { "ZOrderChange",                     Member::INTEGER,              (void*) QEvent::ZOrderChange },
    { "accept",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_accept },
    { "ignore",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_ignore },
    { "isAccepted",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_isAccepted },
    { "setAccepted",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_setAccepted },
    { "type",                             Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_type },
    { NULL,                               Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QEventBinding::classInfo = 
{
    "QEvent",

    NULL,

    false, // isQObject
    false, // needsGuard
    NULL, // constructFunc
    NULL, // newFunc
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    158,
    members
};

/* ============================================================================================ */

int QEventBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
