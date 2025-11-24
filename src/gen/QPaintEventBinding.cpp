// Type: QPaintEvent
// Base: QEvent

/* ============================================================================================ */

#include <QEvent>
#include <QObject>
#include <QPaintEvent>
#include <QRect>

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
#include "QObjectBinding.hpp"
#include "QPaintEventBinding.hpp"
#include "QRectBinding.hpp"

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


struct lqtk_QPaintEvent_rect_Args
{
    FromLua<QPaintEvent*> arg_1_1;
    ToLua<QRect*> rslt_1;
};

extern "C" int lqtk_QPaintEvent_rect(lua_State* L)
{
    lqtk_QPaintEvent_rect_Args  argValues;
    lqtk_QPaintEvent_rect_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPaintEvent::rect();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPaintEvent", "rect", nargs, "1");
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
        QPaintEventBinding::QType* ptr = static_cast<QPaintEventBinding::QType*>(objectPtr);
        if (targetClassInfo == &QPaintEventBinding::classInfo) {
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
        QPaintEvent* ptr = (QPaintEvent*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QPaintEvent_new_Args
{
    FromLua<QRect*> arg_1_1;
    ToLua<QPaintEvent*> rslt_1;
};

extern "C" int lqtk_QPaintEvent_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QPaintEvent_new_Args  argValues;
    lqtk_QPaintEvent_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QPaintEventBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QPaintEvent> expected");
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
                QPaintEvent* rslt = 
                    new QPaintEvent(*args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QPaintEvent", "new", nargs, "2");
        } else {
            return util::argCountError(L, "QPaintEvent", nullptr, nargs, "1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QPaintEvent_new(lua_State* L)
{
    return lqtk_QPaintEvent_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QPaintEventBinding::pushObject(lua_State* L, QPaintEvent* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QPaintEvent>(L, hasUserValue);     // -> uval?, udata
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
    { "ActionAdded",                      Member::INTEGER,              (void*) QPaintEvent::ActionAdded },
    { "ActionChanged",                    Member::INTEGER,              (void*) QPaintEvent::ActionChanged },
    { "ActionRemoved",                    Member::INTEGER,              (void*) QPaintEvent::ActionRemoved },
    { "ActivationChange",                 Member::INTEGER,              (void*) QPaintEvent::ActivationChange },
    { "ApplicationActivate",              Member::INTEGER,              (void*) QPaintEvent::ApplicationActivate },
    { "ApplicationActivated",             Member::INTEGER,              (void*) QPaintEvent::ApplicationActivated },
    { "ApplicationDeactivate",            Member::INTEGER,              (void*) QPaintEvent::ApplicationDeactivate },
    { "ApplicationFontChange",            Member::INTEGER,              (void*) QPaintEvent::ApplicationFontChange },
    { "ApplicationLayoutDirectionChange", Member::INTEGER,              (void*) QPaintEvent::ApplicationLayoutDirectionChange },
    { "ApplicationPaletteChange",         Member::INTEGER,              (void*) QPaintEvent::ApplicationPaletteChange },
    { "ApplicationStateChange",           Member::INTEGER,              (void*) QPaintEvent::ApplicationStateChange },
    { "ApplicationWindowIconChange",      Member::INTEGER,              (void*) QPaintEvent::ApplicationWindowIconChange },
    { "ChildAdded",                       Member::INTEGER,              (void*) QPaintEvent::ChildAdded },
    { "ChildPolished",                    Member::INTEGER,              (void*) QPaintEvent::ChildPolished },
    { "ChildRemoved",                     Member::INTEGER,              (void*) QPaintEvent::ChildRemoved },
    { "ChildWindowAdded",                 Member::INTEGER,              (void*) QPaintEvent::ChildWindowAdded },
    { "ChildWindowRemoved",               Member::INTEGER,              (void*) QPaintEvent::ChildWindowRemoved },
    { "Clipboard",                        Member::INTEGER,              (void*) QPaintEvent::Clipboard },
    { "Close",                            Member::INTEGER,              (void*) QPaintEvent::Close },
    { "CloseSoftwareInputPanel",          Member::INTEGER,              (void*) QPaintEvent::CloseSoftwareInputPanel },
    { "ContentsRectChange",               Member::INTEGER,              (void*) QPaintEvent::ContentsRectChange },
    { "ContextMenu",                      Member::INTEGER,              (void*) QPaintEvent::ContextMenu },
    { "CursorChange",                     Member::INTEGER,              (void*) QPaintEvent::CursorChange },
    { "DeferredDelete",                   Member::INTEGER,              (void*) QPaintEvent::DeferredDelete },
    { "DevicePixelRatioChange",           Member::INTEGER,              (void*) QPaintEvent::DevicePixelRatioChange },
    { "DragEnter",                        Member::INTEGER,              (void*) QPaintEvent::DragEnter },
    { "DragLeave",                        Member::INTEGER,              (void*) QPaintEvent::DragLeave },
    { "DragMove",                         Member::INTEGER,              (void*) QPaintEvent::DragMove },
    { "Drop",                             Member::INTEGER,              (void*) QPaintEvent::Drop },
    { "DynamicPropertyChange",            Member::INTEGER,              (void*) QPaintEvent::DynamicPropertyChange },
    { "EnabledChange",                    Member::INTEGER,              (void*) QPaintEvent::EnabledChange },
    { "Enter",                            Member::INTEGER,              (void*) QPaintEvent::Enter },
    { "EnterWhatsThisMode",               Member::INTEGER,              (void*) QPaintEvent::EnterWhatsThisMode },
    { "Expose",                           Member::INTEGER,              (void*) QPaintEvent::Expose },
    { "FileOpen",                         Member::INTEGER,              (void*) QPaintEvent::FileOpen },
    { "FocusAboutToChange",               Member::INTEGER,              (void*) QPaintEvent::FocusAboutToChange },
    { "FocusIn",                          Member::INTEGER,              (void*) QPaintEvent::FocusIn },
    { "FocusOut",                         Member::INTEGER,              (void*) QPaintEvent::FocusOut },
    { "FontChange",                       Member::INTEGER,              (void*) QPaintEvent::FontChange },
    { "Gesture",                          Member::INTEGER,              (void*) QPaintEvent::Gesture },
    { "GestureOverride",                  Member::INTEGER,              (void*) QPaintEvent::GestureOverride },
    { "GrabKeyboard",                     Member::INTEGER,              (void*) QPaintEvent::GrabKeyboard },
    { "GrabMouse",                        Member::INTEGER,              (void*) QPaintEvent::GrabMouse },
    { "GraphicsSceneContextMenu",         Member::INTEGER,              (void*) QPaintEvent::GraphicsSceneContextMenu },
    { "GraphicsSceneDragEnter",           Member::INTEGER,              (void*) QPaintEvent::GraphicsSceneDragEnter },
    { "GraphicsSceneDragLeave",           Member::INTEGER,              (void*) QPaintEvent::GraphicsSceneDragLeave },
    { "GraphicsSceneDragMove",            Member::INTEGER,              (void*) QPaintEvent::GraphicsSceneDragMove },
    { "GraphicsSceneDrop",                Member::INTEGER,              (void*) QPaintEvent::GraphicsSceneDrop },
    { "GraphicsSceneHelp",                Member::INTEGER,              (void*) QPaintEvent::GraphicsSceneHelp },
    { "GraphicsSceneHoverEnter",          Member::INTEGER,              (void*) QPaintEvent::GraphicsSceneHoverEnter },
    { "GraphicsSceneHoverLeave",          Member::INTEGER,              (void*) QPaintEvent::GraphicsSceneHoverLeave },
    { "GraphicsSceneHoverMove",           Member::INTEGER,              (void*) QPaintEvent::GraphicsSceneHoverMove },
    { "GraphicsSceneLeave",               Member::INTEGER,              (void*) QPaintEvent::GraphicsSceneLeave },
    { "GraphicsSceneMouseDoubleClick",    Member::INTEGER,              (void*) QPaintEvent::GraphicsSceneMouseDoubleClick },
    { "GraphicsSceneMouseMove",           Member::INTEGER,              (void*) QPaintEvent::GraphicsSceneMouseMove },
    { "GraphicsSceneMousePress",          Member::INTEGER,              (void*) QPaintEvent::GraphicsSceneMousePress },
    { "GraphicsSceneMouseRelease",        Member::INTEGER,              (void*) QPaintEvent::GraphicsSceneMouseRelease },
    { "GraphicsSceneMove",                Member::INTEGER,              (void*) QPaintEvent::GraphicsSceneMove },
    { "GraphicsSceneResize",              Member::INTEGER,              (void*) QPaintEvent::GraphicsSceneResize },
    { "GraphicsSceneWheel",               Member::INTEGER,              (void*) QPaintEvent::GraphicsSceneWheel },
    { "Hide",                             Member::INTEGER,              (void*) QPaintEvent::Hide },
    { "HideToParent",                     Member::INTEGER,              (void*) QPaintEvent::HideToParent },
    { "HoverEnter",                       Member::INTEGER,              (void*) QPaintEvent::HoverEnter },
    { "HoverLeave",                       Member::INTEGER,              (void*) QPaintEvent::HoverLeave },
    { "HoverMove",                        Member::INTEGER,              (void*) QPaintEvent::HoverMove },
    { "IconDrag",                         Member::INTEGER,              (void*) QPaintEvent::IconDrag },
    { "IconTextChange",                   Member::INTEGER,              (void*) QPaintEvent::IconTextChange },
    { "InputMethod",                      Member::INTEGER,              (void*) QPaintEvent::InputMethod },
    { "InputMethodQuery",                 Member::INTEGER,              (void*) QPaintEvent::InputMethodQuery },
    { "KeyPress",                         Member::INTEGER,              (void*) QPaintEvent::KeyPress },
    { "KeyRelease",                       Member::INTEGER,              (void*) QPaintEvent::KeyRelease },
    { "KeyboardLayoutChange",             Member::INTEGER,              (void*) QPaintEvent::KeyboardLayoutChange },
    { "LanguageChange",                   Member::INTEGER,              (void*) QPaintEvent::LanguageChange },
    { "LayoutDirectionChange",            Member::INTEGER,              (void*) QPaintEvent::LayoutDirectionChange },
    { "LayoutRequest",                    Member::INTEGER,              (void*) QPaintEvent::LayoutRequest },
    { "Leave",                            Member::INTEGER,              (void*) QPaintEvent::Leave },
    { "LeaveWhatsThisMode",               Member::INTEGER,              (void*) QPaintEvent::LeaveWhatsThisMode },
    { "LocaleChange",                     Member::INTEGER,              (void*) QPaintEvent::LocaleChange },
    { "MacSizeChange",                    Member::INTEGER,              (void*) QPaintEvent::MacSizeChange },
    { "MetaCall",                         Member::INTEGER,              (void*) QPaintEvent::MetaCall },
    { "ModifiedChange",                   Member::INTEGER,              (void*) QPaintEvent::ModifiedChange },
    { "MouseButtonDblClick",              Member::INTEGER,              (void*) QPaintEvent::MouseButtonDblClick },
    { "MouseButtonPress",                 Member::INTEGER,              (void*) QPaintEvent::MouseButtonPress },
    { "MouseButtonRelease",               Member::INTEGER,              (void*) QPaintEvent::MouseButtonRelease },
    { "MouseMove",                        Member::INTEGER,              (void*) QPaintEvent::MouseMove },
    { "MouseTrackingChange",              Member::INTEGER,              (void*) QPaintEvent::MouseTrackingChange },
    { "Move",                             Member::INTEGER,              (void*) QPaintEvent::Move },
    { "NativeGesture",                    Member::INTEGER,              (void*) QPaintEvent::NativeGesture },
    { "NonClientAreaMouseButtonDblClick", Member::INTEGER,              (void*) QPaintEvent::NonClientAreaMouseButtonDblClick },
    { "NonClientAreaMouseButtonPress",    Member::INTEGER,              (void*) QPaintEvent::NonClientAreaMouseButtonPress },
    { "NonClientAreaMouseButtonRelease",  Member::INTEGER,              (void*) QPaintEvent::NonClientAreaMouseButtonRelease },
    { "NonClientAreaMouseMove",           Member::INTEGER,              (void*) QPaintEvent::NonClientAreaMouseMove },
    { "None",                             Member::INTEGER,              (void*) QPaintEvent::None },
    { "OrientationChange",                Member::INTEGER,              (void*) QPaintEvent::OrientationChange },
    { "Paint",                            Member::INTEGER,              (void*) QPaintEvent::Paint },
    { "PaletteChange",                    Member::INTEGER,              (void*) QPaintEvent::PaletteChange },
    { "ParentAboutToChange",              Member::INTEGER,              (void*) QPaintEvent::ParentAboutToChange },
    { "ParentChange",                     Member::INTEGER,              (void*) QPaintEvent::ParentChange },
    { "ParentWindowAboutToChange",        Member::INTEGER,              (void*) QPaintEvent::ParentWindowAboutToChange },
    { "ParentWindowChange",               Member::INTEGER,              (void*) QPaintEvent::ParentWindowChange },
    { "PlatformPanel",                    Member::INTEGER,              (void*) QPaintEvent::PlatformPanel },
    { "PlatformSurface",                  Member::INTEGER,              (void*) QPaintEvent::PlatformSurface },
    { "Polish",                           Member::INTEGER,              (void*) QPaintEvent::Polish },
    { "PolishRequest",                    Member::INTEGER,              (void*) QPaintEvent::PolishRequest },
    { "QueryWhatsThis",                   Member::INTEGER,              (void*) QPaintEvent::QueryWhatsThis },
    { "Quit",                             Member::INTEGER,              (void*) QPaintEvent::Quit },
    { "ReadOnlyChange",                   Member::INTEGER,              (void*) QPaintEvent::ReadOnlyChange },
    { "RequestSoftwareInputPanel",        Member::INTEGER,              (void*) QPaintEvent::RequestSoftwareInputPanel },
    { "Resize",                           Member::INTEGER,              (void*) QPaintEvent::Resize },
    { "SafeAreaMarginsChange",            Member::INTEGER,              (void*) QPaintEvent::SafeAreaMarginsChange },
    { "Scroll",                           Member::INTEGER,              (void*) QPaintEvent::Scroll },
    { "ScrollPrepare",                    Member::INTEGER,              (void*) QPaintEvent::ScrollPrepare },
    { "Shortcut",                         Member::INTEGER,              (void*) QPaintEvent::Shortcut },
    { "ShortcutOverride",                 Member::INTEGER,              (void*) QPaintEvent::ShortcutOverride },
    { "Show",                             Member::INTEGER,              (void*) QPaintEvent::Show },
    { "ShowToParent",                     Member::INTEGER,              (void*) QPaintEvent::ShowToParent },
    { "SockAct",                          Member::INTEGER,              (void*) QPaintEvent::SockAct },
    { "StateMachineSignal",               Member::INTEGER,              (void*) QPaintEvent::StateMachineSignal },
    { "StateMachineWrapped",              Member::INTEGER,              (void*) QPaintEvent::StateMachineWrapped },
    { "StatusTip",                        Member::INTEGER,              (void*) QPaintEvent::StatusTip },
    { "StyleChange",                      Member::INTEGER,              (void*) QPaintEvent::StyleChange },
    { "TabletEnterProximity",             Member::INTEGER,              (void*) QPaintEvent::TabletEnterProximity },
    { "TabletLeaveProximity",             Member::INTEGER,              (void*) QPaintEvent::TabletLeaveProximity },
    { "TabletMove",                       Member::INTEGER,              (void*) QPaintEvent::TabletMove },
    { "TabletPress",                      Member::INTEGER,              (void*) QPaintEvent::TabletPress },
    { "TabletRelease",                    Member::INTEGER,              (void*) QPaintEvent::TabletRelease },
    { "TabletTrackingChange",             Member::INTEGER,              (void*) QPaintEvent::TabletTrackingChange },
    { "ThreadChange",                     Member::INTEGER,              (void*) QPaintEvent::ThreadChange },
    { "Timer",                            Member::INTEGER,              (void*) QPaintEvent::Timer },
    { "ToolBarChange",                    Member::INTEGER,              (void*) QPaintEvent::ToolBarChange },
    { "ToolTip",                          Member::INTEGER,              (void*) QPaintEvent::ToolTip },
    { "ToolTipChange",                    Member::INTEGER,              (void*) QPaintEvent::ToolTipChange },
    { "TouchBegin",                       Member::INTEGER,              (void*) QPaintEvent::TouchBegin },
    { "TouchCancel",                      Member::INTEGER,              (void*) QPaintEvent::TouchCancel },
    { "TouchEnd",                         Member::INTEGER,              (void*) QPaintEvent::TouchEnd },
    { "TouchUpdate",                      Member::INTEGER,              (void*) QPaintEvent::TouchUpdate },
    { "UngrabKeyboard",                   Member::INTEGER,              (void*) QPaintEvent::UngrabKeyboard },
    { "UngrabMouse",                      Member::INTEGER,              (void*) QPaintEvent::UngrabMouse },
    { "UpdateLater",                      Member::INTEGER,              (void*) QPaintEvent::UpdateLater },
    { "UpdateRequest",                    Member::INTEGER,              (void*) QPaintEvent::UpdateRequest },
    { "WhatsThis",                        Member::INTEGER,              (void*) QPaintEvent::WhatsThis },
    { "WhatsThisClicked",                 Member::INTEGER,              (void*) QPaintEvent::WhatsThisClicked },
    { "Wheel",                            Member::INTEGER,              (void*) QPaintEvent::Wheel },
    { "WinEventAct",                      Member::INTEGER,              (void*) QPaintEvent::WinEventAct },
    { "WinIdChange",                      Member::INTEGER,              (void*) QPaintEvent::WinIdChange },
    { "WindowActivate",                   Member::INTEGER,              (void*) QPaintEvent::WindowActivate },
    { "WindowBlocked",                    Member::INTEGER,              (void*) QPaintEvent::WindowBlocked },
    { "WindowDeactivate",                 Member::INTEGER,              (void*) QPaintEvent::WindowDeactivate },
    { "WindowIconChange",                 Member::INTEGER,              (void*) QPaintEvent::WindowIconChange },
    { "WindowStateChange",                Member::INTEGER,              (void*) QPaintEvent::WindowStateChange },
    { "WindowTitleChange",                Member::INTEGER,              (void*) QPaintEvent::WindowTitleChange },
    { "WindowUnblocked",                  Member::INTEGER,              (void*) QPaintEvent::WindowUnblocked },
    { "ZOrderChange",                     Member::INTEGER,              (void*) QPaintEvent::ZOrderChange },
    { "accept",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_accept },
    { "ignore",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_ignore },
    { "isAccepted",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_isAccepted },
    { "rect",                             Member::NORMAL_FUNCTION,      (void*) lqtk_QPaintEvent_rect },
    { "setAccepted",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_setAccepted },
    { "type",                             Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_type },
    { NULL,                               Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QPaintEventBinding::classInfo = 
{
    "QPaintEvent",

    &QEventBinding::classInfo,

    false, // isQObject
    false, // needsGuard
    lqtk_QPaintEvent_constructor,
    lqtk_QPaintEvent_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    159,
    members
};

/* ============================================================================================ */

int QPaintEventBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
