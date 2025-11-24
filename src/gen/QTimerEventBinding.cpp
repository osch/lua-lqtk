// Type: QTimerEvent
// Base: QEvent

/* ============================================================================================ */

#include <QEvent>
#include <QObject>
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
#include "QEventBinding.hpp"
#include "QObjectBinding.hpp"
#include "QTimerEventBinding.hpp"

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


struct lqtk_QTimerEvent_timerId_Args
{
    FromLua<QTimerEvent*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QTimerEvent_timerId(lua_State* L)
{
    lqtk_QTimerEvent_timerId_Args  argValues;
    lqtk_QTimerEvent_timerId_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTimerEvent::timerId();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimerEvent", "timerId", nargs, "1");
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
        QTimerEventBinding::QType* ptr = static_cast<QTimerEventBinding::QType*>(objectPtr);
        if (targetClassInfo == &QTimerEventBinding::classInfo) {
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
        QTimerEvent* ptr = (QTimerEvent*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QTimerEvent_new_Args
{
    FromLua<int> arg_1_1;
    ToLua<QTimerEvent*> rslt_1;
};

extern "C" int lqtk_QTimerEvent_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QTimerEvent_new_Args  argValues;
    lqtk_QTimerEvent_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QTimerEventBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QTimerEvent> expected");
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
                QTimerEvent* rslt = 
                    new QTimerEvent(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QTimerEvent", "new", nargs, "2");
        } else {
            return util::argCountError(L, "QTimerEvent", nullptr, nargs, "1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QTimerEvent_new(lua_State* L)
{
    return lqtk_QTimerEvent_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QTimerEventBinding::pushObject(lua_State* L, QTimerEvent* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QTimerEvent>(L, hasUserValue);     // -> uval?, udata
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
    { "ActionAdded",                      Member::INTEGER,              (void*) QTimerEvent::ActionAdded },
    { "ActionChanged",                    Member::INTEGER,              (void*) QTimerEvent::ActionChanged },
    { "ActionRemoved",                    Member::INTEGER,              (void*) QTimerEvent::ActionRemoved },
    { "ActivationChange",                 Member::INTEGER,              (void*) QTimerEvent::ActivationChange },
    { "ApplicationActivate",              Member::INTEGER,              (void*) QTimerEvent::ApplicationActivate },
    { "ApplicationActivated",             Member::INTEGER,              (void*) QTimerEvent::ApplicationActivated },
    { "ApplicationDeactivate",            Member::INTEGER,              (void*) QTimerEvent::ApplicationDeactivate },
    { "ApplicationFontChange",            Member::INTEGER,              (void*) QTimerEvent::ApplicationFontChange },
    { "ApplicationLayoutDirectionChange", Member::INTEGER,              (void*) QTimerEvent::ApplicationLayoutDirectionChange },
    { "ApplicationPaletteChange",         Member::INTEGER,              (void*) QTimerEvent::ApplicationPaletteChange },
    { "ApplicationStateChange",           Member::INTEGER,              (void*) QTimerEvent::ApplicationStateChange },
    { "ApplicationWindowIconChange",      Member::INTEGER,              (void*) QTimerEvent::ApplicationWindowIconChange },
    { "ChildAdded",                       Member::INTEGER,              (void*) QTimerEvent::ChildAdded },
    { "ChildPolished",                    Member::INTEGER,              (void*) QTimerEvent::ChildPolished },
    { "ChildRemoved",                     Member::INTEGER,              (void*) QTimerEvent::ChildRemoved },
    { "ChildWindowAdded",                 Member::INTEGER,              (void*) QTimerEvent::ChildWindowAdded },
    { "ChildWindowRemoved",               Member::INTEGER,              (void*) QTimerEvent::ChildWindowRemoved },
    { "Clipboard",                        Member::INTEGER,              (void*) QTimerEvent::Clipboard },
    { "Close",                            Member::INTEGER,              (void*) QTimerEvent::Close },
    { "CloseSoftwareInputPanel",          Member::INTEGER,              (void*) QTimerEvent::CloseSoftwareInputPanel },
    { "ContentsRectChange",               Member::INTEGER,              (void*) QTimerEvent::ContentsRectChange },
    { "ContextMenu",                      Member::INTEGER,              (void*) QTimerEvent::ContextMenu },
    { "CursorChange",                     Member::INTEGER,              (void*) QTimerEvent::CursorChange },
    { "DeferredDelete",                   Member::INTEGER,              (void*) QTimerEvent::DeferredDelete },
    { "DevicePixelRatioChange",           Member::INTEGER,              (void*) QTimerEvent::DevicePixelRatioChange },
    { "DragEnter",                        Member::INTEGER,              (void*) QTimerEvent::DragEnter },
    { "DragLeave",                        Member::INTEGER,              (void*) QTimerEvent::DragLeave },
    { "DragMove",                         Member::INTEGER,              (void*) QTimerEvent::DragMove },
    { "Drop",                             Member::INTEGER,              (void*) QTimerEvent::Drop },
    { "DynamicPropertyChange",            Member::INTEGER,              (void*) QTimerEvent::DynamicPropertyChange },
    { "EnabledChange",                    Member::INTEGER,              (void*) QTimerEvent::EnabledChange },
    { "Enter",                            Member::INTEGER,              (void*) QTimerEvent::Enter },
    { "EnterWhatsThisMode",               Member::INTEGER,              (void*) QTimerEvent::EnterWhatsThisMode },
    { "Expose",                           Member::INTEGER,              (void*) QTimerEvent::Expose },
    { "FileOpen",                         Member::INTEGER,              (void*) QTimerEvent::FileOpen },
    { "FocusAboutToChange",               Member::INTEGER,              (void*) QTimerEvent::FocusAboutToChange },
    { "FocusIn",                          Member::INTEGER,              (void*) QTimerEvent::FocusIn },
    { "FocusOut",                         Member::INTEGER,              (void*) QTimerEvent::FocusOut },
    { "FontChange",                       Member::INTEGER,              (void*) QTimerEvent::FontChange },
    { "Gesture",                          Member::INTEGER,              (void*) QTimerEvent::Gesture },
    { "GestureOverride",                  Member::INTEGER,              (void*) QTimerEvent::GestureOverride },
    { "GrabKeyboard",                     Member::INTEGER,              (void*) QTimerEvent::GrabKeyboard },
    { "GrabMouse",                        Member::INTEGER,              (void*) QTimerEvent::GrabMouse },
    { "GraphicsSceneContextMenu",         Member::INTEGER,              (void*) QTimerEvent::GraphicsSceneContextMenu },
    { "GraphicsSceneDragEnter",           Member::INTEGER,              (void*) QTimerEvent::GraphicsSceneDragEnter },
    { "GraphicsSceneDragLeave",           Member::INTEGER,              (void*) QTimerEvent::GraphicsSceneDragLeave },
    { "GraphicsSceneDragMove",            Member::INTEGER,              (void*) QTimerEvent::GraphicsSceneDragMove },
    { "GraphicsSceneDrop",                Member::INTEGER,              (void*) QTimerEvent::GraphicsSceneDrop },
    { "GraphicsSceneHelp",                Member::INTEGER,              (void*) QTimerEvent::GraphicsSceneHelp },
    { "GraphicsSceneHoverEnter",          Member::INTEGER,              (void*) QTimerEvent::GraphicsSceneHoverEnter },
    { "GraphicsSceneHoverLeave",          Member::INTEGER,              (void*) QTimerEvent::GraphicsSceneHoverLeave },
    { "GraphicsSceneHoverMove",           Member::INTEGER,              (void*) QTimerEvent::GraphicsSceneHoverMove },
    { "GraphicsSceneLeave",               Member::INTEGER,              (void*) QTimerEvent::GraphicsSceneLeave },
    { "GraphicsSceneMouseDoubleClick",    Member::INTEGER,              (void*) QTimerEvent::GraphicsSceneMouseDoubleClick },
    { "GraphicsSceneMouseMove",           Member::INTEGER,              (void*) QTimerEvent::GraphicsSceneMouseMove },
    { "GraphicsSceneMousePress",          Member::INTEGER,              (void*) QTimerEvent::GraphicsSceneMousePress },
    { "GraphicsSceneMouseRelease",        Member::INTEGER,              (void*) QTimerEvent::GraphicsSceneMouseRelease },
    { "GraphicsSceneMove",                Member::INTEGER,              (void*) QTimerEvent::GraphicsSceneMove },
    { "GraphicsSceneResize",              Member::INTEGER,              (void*) QTimerEvent::GraphicsSceneResize },
    { "GraphicsSceneWheel",               Member::INTEGER,              (void*) QTimerEvent::GraphicsSceneWheel },
    { "Hide",                             Member::INTEGER,              (void*) QTimerEvent::Hide },
    { "HideToParent",                     Member::INTEGER,              (void*) QTimerEvent::HideToParent },
    { "HoverEnter",                       Member::INTEGER,              (void*) QTimerEvent::HoverEnter },
    { "HoverLeave",                       Member::INTEGER,              (void*) QTimerEvent::HoverLeave },
    { "HoverMove",                        Member::INTEGER,              (void*) QTimerEvent::HoverMove },
    { "IconDrag",                         Member::INTEGER,              (void*) QTimerEvent::IconDrag },
    { "IconTextChange",                   Member::INTEGER,              (void*) QTimerEvent::IconTextChange },
    { "InputMethod",                      Member::INTEGER,              (void*) QTimerEvent::InputMethod },
    { "InputMethodQuery",                 Member::INTEGER,              (void*) QTimerEvent::InputMethodQuery },
    { "KeyPress",                         Member::INTEGER,              (void*) QTimerEvent::KeyPress },
    { "KeyRelease",                       Member::INTEGER,              (void*) QTimerEvent::KeyRelease },
    { "KeyboardLayoutChange",             Member::INTEGER,              (void*) QTimerEvent::KeyboardLayoutChange },
    { "LanguageChange",                   Member::INTEGER,              (void*) QTimerEvent::LanguageChange },
    { "LayoutDirectionChange",            Member::INTEGER,              (void*) QTimerEvent::LayoutDirectionChange },
    { "LayoutRequest",                    Member::INTEGER,              (void*) QTimerEvent::LayoutRequest },
    { "Leave",                            Member::INTEGER,              (void*) QTimerEvent::Leave },
    { "LeaveWhatsThisMode",               Member::INTEGER,              (void*) QTimerEvent::LeaveWhatsThisMode },
    { "LocaleChange",                     Member::INTEGER,              (void*) QTimerEvent::LocaleChange },
    { "MacSizeChange",                    Member::INTEGER,              (void*) QTimerEvent::MacSizeChange },
    { "MetaCall",                         Member::INTEGER,              (void*) QTimerEvent::MetaCall },
    { "ModifiedChange",                   Member::INTEGER,              (void*) QTimerEvent::ModifiedChange },
    { "MouseButtonDblClick",              Member::INTEGER,              (void*) QTimerEvent::MouseButtonDblClick },
    { "MouseButtonPress",                 Member::INTEGER,              (void*) QTimerEvent::MouseButtonPress },
    { "MouseButtonRelease",               Member::INTEGER,              (void*) QTimerEvent::MouseButtonRelease },
    { "MouseMove",                        Member::INTEGER,              (void*) QTimerEvent::MouseMove },
    { "MouseTrackingChange",              Member::INTEGER,              (void*) QTimerEvent::MouseTrackingChange },
    { "Move",                             Member::INTEGER,              (void*) QTimerEvent::Move },
    { "NativeGesture",                    Member::INTEGER,              (void*) QTimerEvent::NativeGesture },
    { "NonClientAreaMouseButtonDblClick", Member::INTEGER,              (void*) QTimerEvent::NonClientAreaMouseButtonDblClick },
    { "NonClientAreaMouseButtonPress",    Member::INTEGER,              (void*) QTimerEvent::NonClientAreaMouseButtonPress },
    { "NonClientAreaMouseButtonRelease",  Member::INTEGER,              (void*) QTimerEvent::NonClientAreaMouseButtonRelease },
    { "NonClientAreaMouseMove",           Member::INTEGER,              (void*) QTimerEvent::NonClientAreaMouseMove },
    { "None",                             Member::INTEGER,              (void*) QTimerEvent::None },
    { "OrientationChange",                Member::INTEGER,              (void*) QTimerEvent::OrientationChange },
    { "Paint",                            Member::INTEGER,              (void*) QTimerEvent::Paint },
    { "PaletteChange",                    Member::INTEGER,              (void*) QTimerEvent::PaletteChange },
    { "ParentAboutToChange",              Member::INTEGER,              (void*) QTimerEvent::ParentAboutToChange },
    { "ParentChange",                     Member::INTEGER,              (void*) QTimerEvent::ParentChange },
    { "ParentWindowAboutToChange",        Member::INTEGER,              (void*) QTimerEvent::ParentWindowAboutToChange },
    { "ParentWindowChange",               Member::INTEGER,              (void*) QTimerEvent::ParentWindowChange },
    { "PlatformPanel",                    Member::INTEGER,              (void*) QTimerEvent::PlatformPanel },
    { "PlatformSurface",                  Member::INTEGER,              (void*) QTimerEvent::PlatformSurface },
    { "Polish",                           Member::INTEGER,              (void*) QTimerEvent::Polish },
    { "PolishRequest",                    Member::INTEGER,              (void*) QTimerEvent::PolishRequest },
    { "QueryWhatsThis",                   Member::INTEGER,              (void*) QTimerEvent::QueryWhatsThis },
    { "Quit",                             Member::INTEGER,              (void*) QTimerEvent::Quit },
    { "ReadOnlyChange",                   Member::INTEGER,              (void*) QTimerEvent::ReadOnlyChange },
    { "RequestSoftwareInputPanel",        Member::INTEGER,              (void*) QTimerEvent::RequestSoftwareInputPanel },
    { "Resize",                           Member::INTEGER,              (void*) QTimerEvent::Resize },
    { "SafeAreaMarginsChange",            Member::INTEGER,              (void*) QTimerEvent::SafeAreaMarginsChange },
    { "Scroll",                           Member::INTEGER,              (void*) QTimerEvent::Scroll },
    { "ScrollPrepare",                    Member::INTEGER,              (void*) QTimerEvent::ScrollPrepare },
    { "Shortcut",                         Member::INTEGER,              (void*) QTimerEvent::Shortcut },
    { "ShortcutOverride",                 Member::INTEGER,              (void*) QTimerEvent::ShortcutOverride },
    { "Show",                             Member::INTEGER,              (void*) QTimerEvent::Show },
    { "ShowToParent",                     Member::INTEGER,              (void*) QTimerEvent::ShowToParent },
    { "SockAct",                          Member::INTEGER,              (void*) QTimerEvent::SockAct },
    { "StateMachineSignal",               Member::INTEGER,              (void*) QTimerEvent::StateMachineSignal },
    { "StateMachineWrapped",              Member::INTEGER,              (void*) QTimerEvent::StateMachineWrapped },
    { "StatusTip",                        Member::INTEGER,              (void*) QTimerEvent::StatusTip },
    { "StyleChange",                      Member::INTEGER,              (void*) QTimerEvent::StyleChange },
    { "TabletEnterProximity",             Member::INTEGER,              (void*) QTimerEvent::TabletEnterProximity },
    { "TabletLeaveProximity",             Member::INTEGER,              (void*) QTimerEvent::TabletLeaveProximity },
    { "TabletMove",                       Member::INTEGER,              (void*) QTimerEvent::TabletMove },
    { "TabletPress",                      Member::INTEGER,              (void*) QTimerEvent::TabletPress },
    { "TabletRelease",                    Member::INTEGER,              (void*) QTimerEvent::TabletRelease },
    { "TabletTrackingChange",             Member::INTEGER,              (void*) QTimerEvent::TabletTrackingChange },
    { "ThreadChange",                     Member::INTEGER,              (void*) QTimerEvent::ThreadChange },
    { "Timer",                            Member::INTEGER,              (void*) QTimerEvent::Timer },
    { "ToolBarChange",                    Member::INTEGER,              (void*) QTimerEvent::ToolBarChange },
    { "ToolTip",                          Member::INTEGER,              (void*) QTimerEvent::ToolTip },
    { "ToolTipChange",                    Member::INTEGER,              (void*) QTimerEvent::ToolTipChange },
    { "TouchBegin",                       Member::INTEGER,              (void*) QTimerEvent::TouchBegin },
    { "TouchCancel",                      Member::INTEGER,              (void*) QTimerEvent::TouchCancel },
    { "TouchEnd",                         Member::INTEGER,              (void*) QTimerEvent::TouchEnd },
    { "TouchUpdate",                      Member::INTEGER,              (void*) QTimerEvent::TouchUpdate },
    { "UngrabKeyboard",                   Member::INTEGER,              (void*) QTimerEvent::UngrabKeyboard },
    { "UngrabMouse",                      Member::INTEGER,              (void*) QTimerEvent::UngrabMouse },
    { "UpdateLater",                      Member::INTEGER,              (void*) QTimerEvent::UpdateLater },
    { "UpdateRequest",                    Member::INTEGER,              (void*) QTimerEvent::UpdateRequest },
    { "WhatsThis",                        Member::INTEGER,              (void*) QTimerEvent::WhatsThis },
    { "WhatsThisClicked",                 Member::INTEGER,              (void*) QTimerEvent::WhatsThisClicked },
    { "Wheel",                            Member::INTEGER,              (void*) QTimerEvent::Wheel },
    { "WinEventAct",                      Member::INTEGER,              (void*) QTimerEvent::WinEventAct },
    { "WinIdChange",                      Member::INTEGER,              (void*) QTimerEvent::WinIdChange },
    { "WindowActivate",                   Member::INTEGER,              (void*) QTimerEvent::WindowActivate },
    { "WindowBlocked",                    Member::INTEGER,              (void*) QTimerEvent::WindowBlocked },
    { "WindowDeactivate",                 Member::INTEGER,              (void*) QTimerEvent::WindowDeactivate },
    { "WindowIconChange",                 Member::INTEGER,              (void*) QTimerEvent::WindowIconChange },
    { "WindowStateChange",                Member::INTEGER,              (void*) QTimerEvent::WindowStateChange },
    { "WindowTitleChange",                Member::INTEGER,              (void*) QTimerEvent::WindowTitleChange },
    { "WindowUnblocked",                  Member::INTEGER,              (void*) QTimerEvent::WindowUnblocked },
    { "ZOrderChange",                     Member::INTEGER,              (void*) QTimerEvent::ZOrderChange },
    { "accept",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_accept },
    { "ignore",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_ignore },
    { "isAccepted",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_isAccepted },
    { "setAccepted",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_setAccepted },
    { "timerId",                          Member::NORMAL_FUNCTION,      (void*) lqtk_QTimerEvent_timerId },
    { "type",                             Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_type },
    { NULL,                               Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QTimerEventBinding::classInfo = 
{
    "QTimerEvent",

    &QEventBinding::classInfo,

    false, // isQObject
    false, // needsGuard
    lqtk_QTimerEvent_constructor,
    lqtk_QTimerEvent_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    159,
    members
};

/* ============================================================================================ */

int QTimerEventBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
