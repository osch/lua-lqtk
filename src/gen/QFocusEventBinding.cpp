// Type: QFocusEvent
// Base: QEvent

/* ============================================================================================ */

#include <QEvent>
#include <QFocusEvent>
#include <QObject>
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
#include "QEventBinding.hpp"
#include "QFocusEventBinding.hpp"
#include "QObjectBinding.hpp"
#include "QtBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

extern "C" {
    int lqtk_QEvent_accept(lua_State* L);
    int lqtk_QEvent_ignore(lua_State* L);
    int lqtk_QEvent_isAccepted(lua_State* L);
    int lqtk_QEvent_setAccepted(lua_State* L);
    int lqtk_QEvent_type(lua_State* L);
}

/* ============================================================================================ */


struct lqtk_QFocusEvent_gotFocus_Args
{
    FromLua<QFocusEvent*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFocusEvent_gotFocus(lua_State* L)
{
    lqtk_QFocusEvent_gotFocus_Args  argValues;
    lqtk_QFocusEvent_gotFocus_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFocusEvent::gotFocus();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFocusEvent", "gotFocus", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFocusEvent_lostFocus_Args
{
    FromLua<QFocusEvent*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFocusEvent_lostFocus(lua_State* L)
{
    lqtk_QFocusEvent_lostFocus_Args  argValues;
    lqtk_QFocusEvent_lostFocus_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFocusEvent::lostFocus();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFocusEvent", "lostFocus", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFocusEvent_reason_Args
{
    FromLua<QFocusEvent*> arg_1_1;
    ToLua<Qt::FocusReason> rslt_1;
};

extern "C" int lqtk_QFocusEvent_reason(lua_State* L)
{
    lqtk_QFocusEvent_reason_Args  argValues;
    lqtk_QFocusEvent_reason_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFocusEvent::reason();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFocusEvent", "reason", nargs, "1");
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
        QFocusEventBinding::QType* ptr = static_cast<QFocusEventBinding::QType*>(objectPtr);
        if (targetClassInfo == &QFocusEventBinding::classInfo) {
            return ptr;
        }
        if (targetClassInfo == &QEventBinding::classInfo) {
            return static_cast<QEventBinding::QType*>(ptr);
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QFocusEvent* ptr = (QFocusEvent*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

struct lqtk_QFocusEvent_new_Args
{
    FromLua<QEvent::Type> arg_1_1;
    FromLua<Qt::FocusReason> arg_2_1;
    ToLua<QFocusEvent*> rslt_1;
};

extern "C" int lqtk_QFocusEvent_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QFocusEvent_new_Args  argValues;
    lqtk_QFocusEvent_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QFocusEventBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QFocusEvent> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                QFocusEvent* rslt = 
                    new QFocusEvent(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QFocusEvent* rslt = 
                    new QFocusEvent(args->arg_1_1.getValue(), args->arg_2_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QFocusEvent", "new", nargs, "2,3");
        } else {
            return util::argCountError(L, "QFocusEvent", nullptr, nargs, "1,2");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QFocusEvent_new(lua_State* L)
{
    return lqtk_QFocusEvent_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QFocusEventBinding::pushObject(lua_State* L, QFocusEvent* objPtr, OwnerType ownerType)
{
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
        udata = ObjectUdata::pushNew<QFocusEvent>(L, hasUserValue);     // -> uval?, udata
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
    { "ActionAdded",                      Member::INTEGER,              (void*) QFocusEvent::ActionAdded },
    { "ActionChanged",                    Member::INTEGER,              (void*) QFocusEvent::ActionChanged },
    { "ActionRemoved",                    Member::INTEGER,              (void*) QFocusEvent::ActionRemoved },
    { "ActivationChange",                 Member::INTEGER,              (void*) QFocusEvent::ActivationChange },
    { "ApplicationActivate",              Member::INTEGER,              (void*) QFocusEvent::ApplicationActivate },
    { "ApplicationActivated",             Member::INTEGER,              (void*) QFocusEvent::ApplicationActivated },
    { "ApplicationDeactivate",            Member::INTEGER,              (void*) QFocusEvent::ApplicationDeactivate },
    { "ApplicationFontChange",            Member::INTEGER,              (void*) QFocusEvent::ApplicationFontChange },
    { "ApplicationLayoutDirectionChange", Member::INTEGER,              (void*) QFocusEvent::ApplicationLayoutDirectionChange },
    { "ApplicationPaletteChange",         Member::INTEGER,              (void*) QFocusEvent::ApplicationPaletteChange },
    { "ApplicationStateChange",           Member::INTEGER,              (void*) QFocusEvent::ApplicationStateChange },
    { "ApplicationWindowIconChange",      Member::INTEGER,              (void*) QFocusEvent::ApplicationWindowIconChange },
    { "ChildAdded",                       Member::INTEGER,              (void*) QFocusEvent::ChildAdded },
    { "ChildPolished",                    Member::INTEGER,              (void*) QFocusEvent::ChildPolished },
    { "ChildRemoved",                     Member::INTEGER,              (void*) QFocusEvent::ChildRemoved },
    { "ChildWindowAdded",                 Member::INTEGER,              (void*) QFocusEvent::ChildWindowAdded },
    { "ChildWindowRemoved",               Member::INTEGER,              (void*) QFocusEvent::ChildWindowRemoved },
    { "Clipboard",                        Member::INTEGER,              (void*) QFocusEvent::Clipboard },
    { "Close",                            Member::INTEGER,              (void*) QFocusEvent::Close },
    { "CloseSoftwareInputPanel",          Member::INTEGER,              (void*) QFocusEvent::CloseSoftwareInputPanel },
    { "ContentsRectChange",               Member::INTEGER,              (void*) QFocusEvent::ContentsRectChange },
    { "ContextMenu",                      Member::INTEGER,              (void*) QFocusEvent::ContextMenu },
    { "CursorChange",                     Member::INTEGER,              (void*) QFocusEvent::CursorChange },
    { "DeferredDelete",                   Member::INTEGER,              (void*) QFocusEvent::DeferredDelete },
    { "DevicePixelRatioChange",           Member::INTEGER,              (void*) QFocusEvent::DevicePixelRatioChange },
    { "DragEnter",                        Member::INTEGER,              (void*) QFocusEvent::DragEnter },
    { "DragLeave",                        Member::INTEGER,              (void*) QFocusEvent::DragLeave },
    { "DragMove",                         Member::INTEGER,              (void*) QFocusEvent::DragMove },
    { "Drop",                             Member::INTEGER,              (void*) QFocusEvent::Drop },
    { "DynamicPropertyChange",            Member::INTEGER,              (void*) QFocusEvent::DynamicPropertyChange },
    { "EnabledChange",                    Member::INTEGER,              (void*) QFocusEvent::EnabledChange },
    { "Enter",                            Member::INTEGER,              (void*) QFocusEvent::Enter },
    { "EnterWhatsThisMode",               Member::INTEGER,              (void*) QFocusEvent::EnterWhatsThisMode },
    { "Expose",                           Member::INTEGER,              (void*) QFocusEvent::Expose },
    { "FileOpen",                         Member::INTEGER,              (void*) QFocusEvent::FileOpen },
    { "FocusAboutToChange",               Member::INTEGER,              (void*) QFocusEvent::FocusAboutToChange },
    { "FocusIn",                          Member::INTEGER,              (void*) QFocusEvent::FocusIn },
    { "FocusOut",                         Member::INTEGER,              (void*) QFocusEvent::FocusOut },
    { "FontChange",                       Member::INTEGER,              (void*) QFocusEvent::FontChange },
    { "Gesture",                          Member::INTEGER,              (void*) QFocusEvent::Gesture },
    { "GestureOverride",                  Member::INTEGER,              (void*) QFocusEvent::GestureOverride },
    { "GrabKeyboard",                     Member::INTEGER,              (void*) QFocusEvent::GrabKeyboard },
    { "GrabMouse",                        Member::INTEGER,              (void*) QFocusEvent::GrabMouse },
    { "GraphicsSceneContextMenu",         Member::INTEGER,              (void*) QFocusEvent::GraphicsSceneContextMenu },
    { "GraphicsSceneDragEnter",           Member::INTEGER,              (void*) QFocusEvent::GraphicsSceneDragEnter },
    { "GraphicsSceneDragLeave",           Member::INTEGER,              (void*) QFocusEvent::GraphicsSceneDragLeave },
    { "GraphicsSceneDragMove",            Member::INTEGER,              (void*) QFocusEvent::GraphicsSceneDragMove },
    { "GraphicsSceneDrop",                Member::INTEGER,              (void*) QFocusEvent::GraphicsSceneDrop },
    { "GraphicsSceneHelp",                Member::INTEGER,              (void*) QFocusEvent::GraphicsSceneHelp },
    { "GraphicsSceneHoverEnter",          Member::INTEGER,              (void*) QFocusEvent::GraphicsSceneHoverEnter },
    { "GraphicsSceneHoverLeave",          Member::INTEGER,              (void*) QFocusEvent::GraphicsSceneHoverLeave },
    { "GraphicsSceneHoverMove",           Member::INTEGER,              (void*) QFocusEvent::GraphicsSceneHoverMove },
    { "GraphicsSceneLeave",               Member::INTEGER,              (void*) QFocusEvent::GraphicsSceneLeave },
    { "GraphicsSceneMouseDoubleClick",    Member::INTEGER,              (void*) QFocusEvent::GraphicsSceneMouseDoubleClick },
    { "GraphicsSceneMouseMove",           Member::INTEGER,              (void*) QFocusEvent::GraphicsSceneMouseMove },
    { "GraphicsSceneMousePress",          Member::INTEGER,              (void*) QFocusEvent::GraphicsSceneMousePress },
    { "GraphicsSceneMouseRelease",        Member::INTEGER,              (void*) QFocusEvent::GraphicsSceneMouseRelease },
    { "GraphicsSceneMove",                Member::INTEGER,              (void*) QFocusEvent::GraphicsSceneMove },
    { "GraphicsSceneResize",              Member::INTEGER,              (void*) QFocusEvent::GraphicsSceneResize },
    { "GraphicsSceneWheel",               Member::INTEGER,              (void*) QFocusEvent::GraphicsSceneWheel },
    { "Hide",                             Member::INTEGER,              (void*) QFocusEvent::Hide },
    { "HideToParent",                     Member::INTEGER,              (void*) QFocusEvent::HideToParent },
    { "HoverEnter",                       Member::INTEGER,              (void*) QFocusEvent::HoverEnter },
    { "HoverLeave",                       Member::INTEGER,              (void*) QFocusEvent::HoverLeave },
    { "HoverMove",                        Member::INTEGER,              (void*) QFocusEvent::HoverMove },
    { "IconDrag",                         Member::INTEGER,              (void*) QFocusEvent::IconDrag },
    { "IconTextChange",                   Member::INTEGER,              (void*) QFocusEvent::IconTextChange },
    { "InputMethod",                      Member::INTEGER,              (void*) QFocusEvent::InputMethod },
    { "InputMethodQuery",                 Member::INTEGER,              (void*) QFocusEvent::InputMethodQuery },
    { "KeyPress",                         Member::INTEGER,              (void*) QFocusEvent::KeyPress },
    { "KeyRelease",                       Member::INTEGER,              (void*) QFocusEvent::KeyRelease },
    { "KeyboardLayoutChange",             Member::INTEGER,              (void*) QFocusEvent::KeyboardLayoutChange },
    { "LanguageChange",                   Member::INTEGER,              (void*) QFocusEvent::LanguageChange },
    { "LayoutDirectionChange",            Member::INTEGER,              (void*) QFocusEvent::LayoutDirectionChange },
    { "LayoutRequest",                    Member::INTEGER,              (void*) QFocusEvent::LayoutRequest },
    { "Leave",                            Member::INTEGER,              (void*) QFocusEvent::Leave },
    { "LeaveWhatsThisMode",               Member::INTEGER,              (void*) QFocusEvent::LeaveWhatsThisMode },
    { "LocaleChange",                     Member::INTEGER,              (void*) QFocusEvent::LocaleChange },
    { "MacSizeChange",                    Member::INTEGER,              (void*) QFocusEvent::MacSizeChange },
    { "MetaCall",                         Member::INTEGER,              (void*) QFocusEvent::MetaCall },
    { "ModifiedChange",                   Member::INTEGER,              (void*) QFocusEvent::ModifiedChange },
    { "MouseButtonDblClick",              Member::INTEGER,              (void*) QFocusEvent::MouseButtonDblClick },
    { "MouseButtonPress",                 Member::INTEGER,              (void*) QFocusEvent::MouseButtonPress },
    { "MouseButtonRelease",               Member::INTEGER,              (void*) QFocusEvent::MouseButtonRelease },
    { "MouseMove",                        Member::INTEGER,              (void*) QFocusEvent::MouseMove },
    { "MouseTrackingChange",              Member::INTEGER,              (void*) QFocusEvent::MouseTrackingChange },
    { "Move",                             Member::INTEGER,              (void*) QFocusEvent::Move },
    { "NativeGesture",                    Member::INTEGER,              (void*) QFocusEvent::NativeGesture },
    { "NonClientAreaMouseButtonDblClick", Member::INTEGER,              (void*) QFocusEvent::NonClientAreaMouseButtonDblClick },
    { "NonClientAreaMouseButtonPress",    Member::INTEGER,              (void*) QFocusEvent::NonClientAreaMouseButtonPress },
    { "NonClientAreaMouseButtonRelease",  Member::INTEGER,              (void*) QFocusEvent::NonClientAreaMouseButtonRelease },
    { "NonClientAreaMouseMove",           Member::INTEGER,              (void*) QFocusEvent::NonClientAreaMouseMove },
    { "None",                             Member::INTEGER,              (void*) QFocusEvent::None },
    { "OrientationChange",                Member::INTEGER,              (void*) QFocusEvent::OrientationChange },
    { "Paint",                            Member::INTEGER,              (void*) QFocusEvent::Paint },
    { "PaletteChange",                    Member::INTEGER,              (void*) QFocusEvent::PaletteChange },
    { "ParentAboutToChange",              Member::INTEGER,              (void*) QFocusEvent::ParentAboutToChange },
    { "ParentChange",                     Member::INTEGER,              (void*) QFocusEvent::ParentChange },
    { "ParentWindowAboutToChange",        Member::INTEGER,              (void*) QFocusEvent::ParentWindowAboutToChange },
    { "ParentWindowChange",               Member::INTEGER,              (void*) QFocusEvent::ParentWindowChange },
    { "PlatformPanel",                    Member::INTEGER,              (void*) QFocusEvent::PlatformPanel },
    { "PlatformSurface",                  Member::INTEGER,              (void*) QFocusEvent::PlatformSurface },
    { "Polish",                           Member::INTEGER,              (void*) QFocusEvent::Polish },
    { "PolishRequest",                    Member::INTEGER,              (void*) QFocusEvent::PolishRequest },
    { "QueryWhatsThis",                   Member::INTEGER,              (void*) QFocusEvent::QueryWhatsThis },
    { "Quit",                             Member::INTEGER,              (void*) QFocusEvent::Quit },
    { "ReadOnlyChange",                   Member::INTEGER,              (void*) QFocusEvent::ReadOnlyChange },
    { "RequestSoftwareInputPanel",        Member::INTEGER,              (void*) QFocusEvent::RequestSoftwareInputPanel },
    { "Resize",                           Member::INTEGER,              (void*) QFocusEvent::Resize },
    { "SafeAreaMarginsChange",            Member::INTEGER,              (void*) QFocusEvent::SafeAreaMarginsChange },
    { "Scroll",                           Member::INTEGER,              (void*) QFocusEvent::Scroll },
    { "ScrollPrepare",                    Member::INTEGER,              (void*) QFocusEvent::ScrollPrepare },
    { "Shortcut",                         Member::INTEGER,              (void*) QFocusEvent::Shortcut },
    { "ShortcutOverride",                 Member::INTEGER,              (void*) QFocusEvent::ShortcutOverride },
    { "Show",                             Member::INTEGER,              (void*) QFocusEvent::Show },
    { "ShowToParent",                     Member::INTEGER,              (void*) QFocusEvent::ShowToParent },
    { "SockAct",                          Member::INTEGER,              (void*) QFocusEvent::SockAct },
    { "StateMachineSignal",               Member::INTEGER,              (void*) QFocusEvent::StateMachineSignal },
    { "StateMachineWrapped",              Member::INTEGER,              (void*) QFocusEvent::StateMachineWrapped },
    { "StatusTip",                        Member::INTEGER,              (void*) QFocusEvent::StatusTip },
    { "StyleChange",                      Member::INTEGER,              (void*) QFocusEvent::StyleChange },
    { "TabletEnterProximity",             Member::INTEGER,              (void*) QFocusEvent::TabletEnterProximity },
    { "TabletLeaveProximity",             Member::INTEGER,              (void*) QFocusEvent::TabletLeaveProximity },
    { "TabletMove",                       Member::INTEGER,              (void*) QFocusEvent::TabletMove },
    { "TabletPress",                      Member::INTEGER,              (void*) QFocusEvent::TabletPress },
    { "TabletRelease",                    Member::INTEGER,              (void*) QFocusEvent::TabletRelease },
    { "TabletTrackingChange",             Member::INTEGER,              (void*) QFocusEvent::TabletTrackingChange },
    { "ThreadChange",                     Member::INTEGER,              (void*) QFocusEvent::ThreadChange },
    { "Timer",                            Member::INTEGER,              (void*) QFocusEvent::Timer },
    { "ToolBarChange",                    Member::INTEGER,              (void*) QFocusEvent::ToolBarChange },
    { "ToolTip",                          Member::INTEGER,              (void*) QFocusEvent::ToolTip },
    { "ToolTipChange",                    Member::INTEGER,              (void*) QFocusEvent::ToolTipChange },
    { "TouchBegin",                       Member::INTEGER,              (void*) QFocusEvent::TouchBegin },
    { "TouchCancel",                      Member::INTEGER,              (void*) QFocusEvent::TouchCancel },
    { "TouchEnd",                         Member::INTEGER,              (void*) QFocusEvent::TouchEnd },
    { "TouchUpdate",                      Member::INTEGER,              (void*) QFocusEvent::TouchUpdate },
    { "UngrabKeyboard",                   Member::INTEGER,              (void*) QFocusEvent::UngrabKeyboard },
    { "UngrabMouse",                      Member::INTEGER,              (void*) QFocusEvent::UngrabMouse },
    { "UpdateLater",                      Member::INTEGER,              (void*) QFocusEvent::UpdateLater },
    { "UpdateRequest",                    Member::INTEGER,              (void*) QFocusEvent::UpdateRequest },
    { "WhatsThis",                        Member::INTEGER,              (void*) QFocusEvent::WhatsThis },
    { "WhatsThisClicked",                 Member::INTEGER,              (void*) QFocusEvent::WhatsThisClicked },
    { "Wheel",                            Member::INTEGER,              (void*) QFocusEvent::Wheel },
    { "WinEventAct",                      Member::INTEGER,              (void*) QFocusEvent::WinEventAct },
    { "WinIdChange",                      Member::INTEGER,              (void*) QFocusEvent::WinIdChange },
    { "WindowActivate",                   Member::INTEGER,              (void*) QFocusEvent::WindowActivate },
    { "WindowBlocked",                    Member::INTEGER,              (void*) QFocusEvent::WindowBlocked },
    { "WindowDeactivate",                 Member::INTEGER,              (void*) QFocusEvent::WindowDeactivate },
    { "WindowIconChange",                 Member::INTEGER,              (void*) QFocusEvent::WindowIconChange },
    { "WindowStateChange",                Member::INTEGER,              (void*) QFocusEvent::WindowStateChange },
    { "WindowTitleChange",                Member::INTEGER,              (void*) QFocusEvent::WindowTitleChange },
    { "WindowUnblocked",                  Member::INTEGER,              (void*) QFocusEvent::WindowUnblocked },
    { "ZOrderChange",                     Member::INTEGER,              (void*) QFocusEvent::ZOrderChange },
    { "accept",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_accept },
    { "gotFocus",                         Member::NORMAL_FUNCTION,      (void*) lqtk_QFocusEvent_gotFocus },
    { "ignore",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_ignore },
    { "isAccepted",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_isAccepted },
    { "lostFocus",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QFocusEvent_lostFocus },
    { "reason",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QFocusEvent_reason },
    { "setAccepted",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_setAccepted },
    { "type",                             Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_type },
    { NULL,                               Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QFocusEventBinding::classInfo = 
{
    "QFocusEvent",

    &QEventBinding::classInfo,

    false, // isQObject
    false, // needsGuard
    lqtk_QFocusEvent_constructor,
    lqtk_QFocusEvent_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    161,
    members
};

/* ============================================================================================ */

int QFocusEventBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
