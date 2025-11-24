// Type: QMouseEvent
// Base: QSinglePointEvent

/* ============================================================================================ */

#include <QEvent>
#include <QInputEvent>
#include <QMouseEvent>
#include <QObject>
#include <QPointF>
#include <QPointerEvent>
#include <QSinglePointEvent>
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
#include "QInputEventBinding.hpp"
#include "QMouseEventBinding.hpp"
#include "QObjectBinding.hpp"
#include "QPointFBinding.hpp"
#include "QPointerEventBinding.hpp"
#include "QSinglePointEventBinding.hpp"
#include "QtBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

extern "C" {
    int lqtk_QSinglePointEvent_button(lua_State* L);
    int lqtk_QSinglePointEvent_buttons(lua_State* L);
    int lqtk_QSinglePointEvent_exclusivePointGrabber(lua_State* L);
    int lqtk_QSinglePointEvent_globalPosition(lua_State* L);
    int lqtk_QSinglePointEvent_isBeginEvent(lua_State* L);
    int lqtk_QSinglePointEvent_isEndEvent(lua_State* L);
    int lqtk_QSinglePointEvent_isUpdateEvent(lua_State* L);
    int lqtk_QSinglePointEvent_position(lua_State* L);
    int lqtk_QSinglePointEvent_scenePosition(lua_State* L);
    int lqtk_QSinglePointEvent_setExclusivePointGrabber(lua_State* L);
    int lqtk_QEvent_accept(lua_State* L);
    int lqtk_QEvent_ignore(lua_State* L);
    int lqtk_QEvent_isAccepted(lua_State* L);
    int lqtk_QEvent_setAccepted(lua_State* L);
    int lqtk_QEvent_type(lua_State* L);
}

/* ============================================================================================ */


struct lqtk_QMouseEvent_flags_Args
{
    FromLua<QMouseEvent*> arg_1_1;
    ToLua<Qt::MouseEventFlags> rslt_1;
};

extern "C" int lqtk_QMouseEvent_flags(lua_State* L)
{
    lqtk_QMouseEvent_flags_Args  argValues;
    lqtk_QMouseEvent_flags_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QMouseEvent::flags();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QMouseEvent", "flags", nargs, "1");
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
        QMouseEventBinding::QType* ptr = static_cast<QMouseEventBinding::QType*>(objectPtr);
        if (targetClassInfo == &QMouseEventBinding::classInfo) {
            return ptr;
        }
        if (targetClassInfo == &QSinglePointEventBinding::classInfo) {
            return static_cast<QSinglePointEventBinding::QType*>(ptr);
        }
        if (targetClassInfo == &QPointerEventBinding::classInfo) {
            return static_cast<QPointerEventBinding::QType*>(ptr);
        }
        if (targetClassInfo == &QInputEventBinding::classInfo) {
            return static_cast<QInputEventBinding::QType*>(ptr);
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
        QMouseEvent* ptr = (QMouseEvent*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QMouseEvent_new_Args
{
    FromLua<QEvent::Type> arg_1_1;
    FromLua<QPointF*> arg_2_1;
    FromLua<QPointF*> arg_2_2;
    FromLua<QPointF*> arg_2_3;
    FromLua<Qt::MouseButton> arg_3_1;
    FromLua<Qt::MouseButtons> arg_4_1;
    FromLua<Qt::KeyboardModifiers> arg_5_1;
    ToLua<QMouseEvent*> rslt_1;
};

extern "C" int lqtk_QMouseEvent_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QMouseEvent_new_Args  argValues;
    lqtk_QMouseEvent_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QMouseEventBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QMouseEvent> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 6) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            args->arg_3_1.check(L, argOffs+4);
            args->arg_4_1.check(L, argOffs+5);
            args->arg_5_1.check(L, argOffs+6);
            {
                QMouseEvent* rslt = 
                    new QMouseEvent(args->arg_1_1.getValue(), *args->arg_2_1.getValue(), *args->arg_2_2.getValue(), args->arg_3_1.getValue(), args->arg_4_1.getValue(), args->arg_5_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 7) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            args->arg_2_3.check(L, argOffs+4);
            args->arg_3_1.check(L, argOffs+5);
            args->arg_4_1.check(L, argOffs+6);
            args->arg_5_1.check(L, argOffs+7);
            {
                QMouseEvent* rslt = 
                    new QMouseEvent(args->arg_1_1.getValue(), *args->arg_2_1.getValue(), *args->arg_2_2.getValue(), *args->arg_2_3.getValue(), args->arg_3_1.getValue(), args->arg_4_1.getValue(), args->arg_5_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QMouseEvent", "new", nargs, "7,8");
        } else {
            return util::argCountError(L, "QMouseEvent", nullptr, nargs, "6,7");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QMouseEvent_new(lua_State* L)
{
    return lqtk_QMouseEvent_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QMouseEventBinding::pushObject(lua_State* L, QMouseEvent* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QMouseEvent>(L, hasUserValue);     // -> uval?, udata
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
    { "ActionAdded",                      Member::INTEGER,              (void*) QMouseEvent::ActionAdded },
    { "ActionChanged",                    Member::INTEGER,              (void*) QMouseEvent::ActionChanged },
    { "ActionRemoved",                    Member::INTEGER,              (void*) QMouseEvent::ActionRemoved },
    { "ActivationChange",                 Member::INTEGER,              (void*) QMouseEvent::ActivationChange },
    { "ApplicationActivate",              Member::INTEGER,              (void*) QMouseEvent::ApplicationActivate },
    { "ApplicationActivated",             Member::INTEGER,              (void*) QMouseEvent::ApplicationActivated },
    { "ApplicationDeactivate",            Member::INTEGER,              (void*) QMouseEvent::ApplicationDeactivate },
    { "ApplicationFontChange",            Member::INTEGER,              (void*) QMouseEvent::ApplicationFontChange },
    { "ApplicationLayoutDirectionChange", Member::INTEGER,              (void*) QMouseEvent::ApplicationLayoutDirectionChange },
    { "ApplicationPaletteChange",         Member::INTEGER,              (void*) QMouseEvent::ApplicationPaletteChange },
    { "ApplicationStateChange",           Member::INTEGER,              (void*) QMouseEvent::ApplicationStateChange },
    { "ApplicationWindowIconChange",      Member::INTEGER,              (void*) QMouseEvent::ApplicationWindowIconChange },
    { "ChildAdded",                       Member::INTEGER,              (void*) QMouseEvent::ChildAdded },
    { "ChildPolished",                    Member::INTEGER,              (void*) QMouseEvent::ChildPolished },
    { "ChildRemoved",                     Member::INTEGER,              (void*) QMouseEvent::ChildRemoved },
    { "ChildWindowAdded",                 Member::INTEGER,              (void*) QMouseEvent::ChildWindowAdded },
    { "ChildWindowRemoved",               Member::INTEGER,              (void*) QMouseEvent::ChildWindowRemoved },
    { "Clipboard",                        Member::INTEGER,              (void*) QMouseEvent::Clipboard },
    { "Close",                            Member::INTEGER,              (void*) QMouseEvent::Close },
    { "CloseSoftwareInputPanel",          Member::INTEGER,              (void*) QMouseEvent::CloseSoftwareInputPanel },
    { "ContentsRectChange",               Member::INTEGER,              (void*) QMouseEvent::ContentsRectChange },
    { "ContextMenu",                      Member::INTEGER,              (void*) QMouseEvent::ContextMenu },
    { "CursorChange",                     Member::INTEGER,              (void*) QMouseEvent::CursorChange },
    { "DeferredDelete",                   Member::INTEGER,              (void*) QMouseEvent::DeferredDelete },
    { "DevicePixelRatioChange",           Member::INTEGER,              (void*) QMouseEvent::DevicePixelRatioChange },
    { "DragEnter",                        Member::INTEGER,              (void*) QMouseEvent::DragEnter },
    { "DragLeave",                        Member::INTEGER,              (void*) QMouseEvent::DragLeave },
    { "DragMove",                         Member::INTEGER,              (void*) QMouseEvent::DragMove },
    { "Drop",                             Member::INTEGER,              (void*) QMouseEvent::Drop },
    { "DynamicPropertyChange",            Member::INTEGER,              (void*) QMouseEvent::DynamicPropertyChange },
    { "EnabledChange",                    Member::INTEGER,              (void*) QMouseEvent::EnabledChange },
    { "Enter",                            Member::INTEGER,              (void*) QMouseEvent::Enter },
    { "EnterWhatsThisMode",               Member::INTEGER,              (void*) QMouseEvent::EnterWhatsThisMode },
    { "Expose",                           Member::INTEGER,              (void*) QMouseEvent::Expose },
    { "FileOpen",                         Member::INTEGER,              (void*) QMouseEvent::FileOpen },
    { "FocusAboutToChange",               Member::INTEGER,              (void*) QMouseEvent::FocusAboutToChange },
    { "FocusIn",                          Member::INTEGER,              (void*) QMouseEvent::FocusIn },
    { "FocusOut",                         Member::INTEGER,              (void*) QMouseEvent::FocusOut },
    { "FontChange",                       Member::INTEGER,              (void*) QMouseEvent::FontChange },
    { "Gesture",                          Member::INTEGER,              (void*) QMouseEvent::Gesture },
    { "GestureOverride",                  Member::INTEGER,              (void*) QMouseEvent::GestureOverride },
    { "GrabKeyboard",                     Member::INTEGER,              (void*) QMouseEvent::GrabKeyboard },
    { "GrabMouse",                        Member::INTEGER,              (void*) QMouseEvent::GrabMouse },
    { "GraphicsSceneContextMenu",         Member::INTEGER,              (void*) QMouseEvent::GraphicsSceneContextMenu },
    { "GraphicsSceneDragEnter",           Member::INTEGER,              (void*) QMouseEvent::GraphicsSceneDragEnter },
    { "GraphicsSceneDragLeave",           Member::INTEGER,              (void*) QMouseEvent::GraphicsSceneDragLeave },
    { "GraphicsSceneDragMove",            Member::INTEGER,              (void*) QMouseEvent::GraphicsSceneDragMove },
    { "GraphicsSceneDrop",                Member::INTEGER,              (void*) QMouseEvent::GraphicsSceneDrop },
    { "GraphicsSceneHelp",                Member::INTEGER,              (void*) QMouseEvent::GraphicsSceneHelp },
    { "GraphicsSceneHoverEnter",          Member::INTEGER,              (void*) QMouseEvent::GraphicsSceneHoverEnter },
    { "GraphicsSceneHoverLeave",          Member::INTEGER,              (void*) QMouseEvent::GraphicsSceneHoverLeave },
    { "GraphicsSceneHoverMove",           Member::INTEGER,              (void*) QMouseEvent::GraphicsSceneHoverMove },
    { "GraphicsSceneLeave",               Member::INTEGER,              (void*) QMouseEvent::GraphicsSceneLeave },
    { "GraphicsSceneMouseDoubleClick",    Member::INTEGER,              (void*) QMouseEvent::GraphicsSceneMouseDoubleClick },
    { "GraphicsSceneMouseMove",           Member::INTEGER,              (void*) QMouseEvent::GraphicsSceneMouseMove },
    { "GraphicsSceneMousePress",          Member::INTEGER,              (void*) QMouseEvent::GraphicsSceneMousePress },
    { "GraphicsSceneMouseRelease",        Member::INTEGER,              (void*) QMouseEvent::GraphicsSceneMouseRelease },
    { "GraphicsSceneMove",                Member::INTEGER,              (void*) QMouseEvent::GraphicsSceneMove },
    { "GraphicsSceneResize",              Member::INTEGER,              (void*) QMouseEvent::GraphicsSceneResize },
    { "GraphicsSceneWheel",               Member::INTEGER,              (void*) QMouseEvent::GraphicsSceneWheel },
    { "Hide",                             Member::INTEGER,              (void*) QMouseEvent::Hide },
    { "HideToParent",                     Member::INTEGER,              (void*) QMouseEvent::HideToParent },
    { "HoverEnter",                       Member::INTEGER,              (void*) QMouseEvent::HoverEnter },
    { "HoverLeave",                       Member::INTEGER,              (void*) QMouseEvent::HoverLeave },
    { "HoverMove",                        Member::INTEGER,              (void*) QMouseEvent::HoverMove },
    { "IconDrag",                         Member::INTEGER,              (void*) QMouseEvent::IconDrag },
    { "IconTextChange",                   Member::INTEGER,              (void*) QMouseEvent::IconTextChange },
    { "InputMethod",                      Member::INTEGER,              (void*) QMouseEvent::InputMethod },
    { "InputMethodQuery",                 Member::INTEGER,              (void*) QMouseEvent::InputMethodQuery },
    { "KeyPress",                         Member::INTEGER,              (void*) QMouseEvent::KeyPress },
    { "KeyRelease",                       Member::INTEGER,              (void*) QMouseEvent::KeyRelease },
    { "KeyboardLayoutChange",             Member::INTEGER,              (void*) QMouseEvent::KeyboardLayoutChange },
    { "LanguageChange",                   Member::INTEGER,              (void*) QMouseEvent::LanguageChange },
    { "LayoutDirectionChange",            Member::INTEGER,              (void*) QMouseEvent::LayoutDirectionChange },
    { "LayoutRequest",                    Member::INTEGER,              (void*) QMouseEvent::LayoutRequest },
    { "Leave",                            Member::INTEGER,              (void*) QMouseEvent::Leave },
    { "LeaveWhatsThisMode",               Member::INTEGER,              (void*) QMouseEvent::LeaveWhatsThisMode },
    { "LocaleChange",                     Member::INTEGER,              (void*) QMouseEvent::LocaleChange },
    { "MacSizeChange",                    Member::INTEGER,              (void*) QMouseEvent::MacSizeChange },
    { "MetaCall",                         Member::INTEGER,              (void*) QMouseEvent::MetaCall },
    { "ModifiedChange",                   Member::INTEGER,              (void*) QMouseEvent::ModifiedChange },
    { "MouseButtonDblClick",              Member::INTEGER,              (void*) QMouseEvent::MouseButtonDblClick },
    { "MouseButtonPress",                 Member::INTEGER,              (void*) QMouseEvent::MouseButtonPress },
    { "MouseButtonRelease",               Member::INTEGER,              (void*) QMouseEvent::MouseButtonRelease },
    { "MouseMove",                        Member::INTEGER,              (void*) QMouseEvent::MouseMove },
    { "MouseTrackingChange",              Member::INTEGER,              (void*) QMouseEvent::MouseTrackingChange },
    { "Move",                             Member::INTEGER,              (void*) QMouseEvent::Move },
    { "NativeGesture",                    Member::INTEGER,              (void*) QMouseEvent::NativeGesture },
    { "NonClientAreaMouseButtonDblClick", Member::INTEGER,              (void*) QMouseEvent::NonClientAreaMouseButtonDblClick },
    { "NonClientAreaMouseButtonPress",    Member::INTEGER,              (void*) QMouseEvent::NonClientAreaMouseButtonPress },
    { "NonClientAreaMouseButtonRelease",  Member::INTEGER,              (void*) QMouseEvent::NonClientAreaMouseButtonRelease },
    { "NonClientAreaMouseMove",           Member::INTEGER,              (void*) QMouseEvent::NonClientAreaMouseMove },
    { "None",                             Member::INTEGER,              (void*) QMouseEvent::None },
    { "OrientationChange",                Member::INTEGER,              (void*) QMouseEvent::OrientationChange },
    { "Paint",                            Member::INTEGER,              (void*) QMouseEvent::Paint },
    { "PaletteChange",                    Member::INTEGER,              (void*) QMouseEvent::PaletteChange },
    { "ParentAboutToChange",              Member::INTEGER,              (void*) QMouseEvent::ParentAboutToChange },
    { "ParentChange",                     Member::INTEGER,              (void*) QMouseEvent::ParentChange },
    { "ParentWindowAboutToChange",        Member::INTEGER,              (void*) QMouseEvent::ParentWindowAboutToChange },
    { "ParentWindowChange",               Member::INTEGER,              (void*) QMouseEvent::ParentWindowChange },
    { "PlatformPanel",                    Member::INTEGER,              (void*) QMouseEvent::PlatformPanel },
    { "PlatformSurface",                  Member::INTEGER,              (void*) QMouseEvent::PlatformSurface },
    { "Polish",                           Member::INTEGER,              (void*) QMouseEvent::Polish },
    { "PolishRequest",                    Member::INTEGER,              (void*) QMouseEvent::PolishRequest },
    { "QueryWhatsThis",                   Member::INTEGER,              (void*) QMouseEvent::QueryWhatsThis },
    { "Quit",                             Member::INTEGER,              (void*) QMouseEvent::Quit },
    { "ReadOnlyChange",                   Member::INTEGER,              (void*) QMouseEvent::ReadOnlyChange },
    { "RequestSoftwareInputPanel",        Member::INTEGER,              (void*) QMouseEvent::RequestSoftwareInputPanel },
    { "Resize",                           Member::INTEGER,              (void*) QMouseEvent::Resize },
    { "SafeAreaMarginsChange",            Member::INTEGER,              (void*) QMouseEvent::SafeAreaMarginsChange },
    { "Scroll",                           Member::INTEGER,              (void*) QMouseEvent::Scroll },
    { "ScrollPrepare",                    Member::INTEGER,              (void*) QMouseEvent::ScrollPrepare },
    { "Shortcut",                         Member::INTEGER,              (void*) QMouseEvent::Shortcut },
    { "ShortcutOverride",                 Member::INTEGER,              (void*) QMouseEvent::ShortcutOverride },
    { "Show",                             Member::INTEGER,              (void*) QMouseEvent::Show },
    { "ShowToParent",                     Member::INTEGER,              (void*) QMouseEvent::ShowToParent },
    { "SockAct",                          Member::INTEGER,              (void*) QMouseEvent::SockAct },
    { "StateMachineSignal",               Member::INTEGER,              (void*) QMouseEvent::StateMachineSignal },
    { "StateMachineWrapped",              Member::INTEGER,              (void*) QMouseEvent::StateMachineWrapped },
    { "StatusTip",                        Member::INTEGER,              (void*) QMouseEvent::StatusTip },
    { "StyleChange",                      Member::INTEGER,              (void*) QMouseEvent::StyleChange },
    { "TabletEnterProximity",             Member::INTEGER,              (void*) QMouseEvent::TabletEnterProximity },
    { "TabletLeaveProximity",             Member::INTEGER,              (void*) QMouseEvent::TabletLeaveProximity },
    { "TabletMove",                       Member::INTEGER,              (void*) QMouseEvent::TabletMove },
    { "TabletPress",                      Member::INTEGER,              (void*) QMouseEvent::TabletPress },
    { "TabletRelease",                    Member::INTEGER,              (void*) QMouseEvent::TabletRelease },
    { "TabletTrackingChange",             Member::INTEGER,              (void*) QMouseEvent::TabletTrackingChange },
    { "ThreadChange",                     Member::INTEGER,              (void*) QMouseEvent::ThreadChange },
    { "Timer",                            Member::INTEGER,              (void*) QMouseEvent::Timer },
    { "ToolBarChange",                    Member::INTEGER,              (void*) QMouseEvent::ToolBarChange },
    { "ToolTip",                          Member::INTEGER,              (void*) QMouseEvent::ToolTip },
    { "ToolTipChange",                    Member::INTEGER,              (void*) QMouseEvent::ToolTipChange },
    { "TouchBegin",                       Member::INTEGER,              (void*) QMouseEvent::TouchBegin },
    { "TouchCancel",                      Member::INTEGER,              (void*) QMouseEvent::TouchCancel },
    { "TouchEnd",                         Member::INTEGER,              (void*) QMouseEvent::TouchEnd },
    { "TouchUpdate",                      Member::INTEGER,              (void*) QMouseEvent::TouchUpdate },
    { "UngrabKeyboard",                   Member::INTEGER,              (void*) QMouseEvent::UngrabKeyboard },
    { "UngrabMouse",                      Member::INTEGER,              (void*) QMouseEvent::UngrabMouse },
    { "UpdateLater",                      Member::INTEGER,              (void*) QMouseEvent::UpdateLater },
    { "UpdateRequest",                    Member::INTEGER,              (void*) QMouseEvent::UpdateRequest },
    { "WhatsThis",                        Member::INTEGER,              (void*) QMouseEvent::WhatsThis },
    { "WhatsThisClicked",                 Member::INTEGER,              (void*) QMouseEvent::WhatsThisClicked },
    { "Wheel",                            Member::INTEGER,              (void*) QMouseEvent::Wheel },
    { "WinEventAct",                      Member::INTEGER,              (void*) QMouseEvent::WinEventAct },
    { "WinIdChange",                      Member::INTEGER,              (void*) QMouseEvent::WinIdChange },
    { "WindowActivate",                   Member::INTEGER,              (void*) QMouseEvent::WindowActivate },
    { "WindowBlocked",                    Member::INTEGER,              (void*) QMouseEvent::WindowBlocked },
    { "WindowDeactivate",                 Member::INTEGER,              (void*) QMouseEvent::WindowDeactivate },
    { "WindowIconChange",                 Member::INTEGER,              (void*) QMouseEvent::WindowIconChange },
    { "WindowStateChange",                Member::INTEGER,              (void*) QMouseEvent::WindowStateChange },
    { "WindowTitleChange",                Member::INTEGER,              (void*) QMouseEvent::WindowTitleChange },
    { "WindowUnblocked",                  Member::INTEGER,              (void*) QMouseEvent::WindowUnblocked },
    { "ZOrderChange",                     Member::INTEGER,              (void*) QMouseEvent::ZOrderChange },
    { "accept",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_accept },
    { "button",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QSinglePointEvent_button },
    { "buttons",                          Member::NORMAL_FUNCTION,      (void*) lqtk_QSinglePointEvent_buttons },
    { "exclusivePointGrabber",            Member::NORMAL_FUNCTION,      (void*) lqtk_QSinglePointEvent_exclusivePointGrabber },
    { "flags",                            Member::NORMAL_FUNCTION,      (void*) lqtk_QMouseEvent_flags },
    { "globalPosition",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QSinglePointEvent_globalPosition },
    { "ignore",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_ignore },
    { "isAccepted",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_isAccepted },
    { "isBeginEvent",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QSinglePointEvent_isBeginEvent },
    { "isEndEvent",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QSinglePointEvent_isEndEvent },
    { "isUpdateEvent",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QSinglePointEvent_isUpdateEvent },
    { "position",                         Member::NORMAL_FUNCTION,      (void*) lqtk_QSinglePointEvent_position },
    { "scenePosition",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QSinglePointEvent_scenePosition },
    { "setAccepted",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_setAccepted },
    { "setExclusivePointGrabber",         Member::NORMAL_FUNCTION,      (void*) lqtk_QSinglePointEvent_setExclusivePointGrabber },
    { "type",                             Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_type },
    { NULL,                               Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QMouseEventBinding::classInfo = 
{
    "QMouseEvent",

    &QSinglePointEventBinding::classInfo,

    false, // isQObject
    false, // needsGuard
    lqtk_QMouseEvent_constructor,
    lqtk_QMouseEvent_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    169,
    members
};

/* ============================================================================================ */

int QMouseEventBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
