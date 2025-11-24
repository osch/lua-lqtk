// Type: QSinglePointEvent
// Base: QPointerEvent

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
    int lqtk_QEvent_accept(lua_State* L);
    int lqtk_QEvent_ignore(lua_State* L);
    int lqtk_QEvent_isAccepted(lua_State* L);
    int lqtk_QEvent_setAccepted(lua_State* L);
    int lqtk_QEvent_type(lua_State* L);
}

/* ============================================================================================ */


struct lqtk_QSinglePointEvent_button_Args
{
    FromLua<QSinglePointEvent*> arg_1_1;
    ToLua<Qt::MouseButton> rslt_1;
};

extern "C" int lqtk_QSinglePointEvent_button(lua_State* L)
{
    lqtk_QSinglePointEvent_button_Args  argValues;
    lqtk_QSinglePointEvent_button_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QSinglePointEvent::button();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QSinglePointEvent", "button", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSinglePointEvent_buttons_Args
{
    FromLua<QSinglePointEvent*> arg_1_1;
    ToLua<Qt::MouseButtons> rslt_1;
};

extern "C" int lqtk_QSinglePointEvent_buttons(lua_State* L)
{
    lqtk_QSinglePointEvent_buttons_Args  argValues;
    lqtk_QSinglePointEvent_buttons_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QSinglePointEvent::buttons();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QSinglePointEvent", "buttons", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSinglePointEvent_exclusivePointGrabber_Args
{
    FromLua<QSinglePointEvent*> arg_1_1;
    ToLua<QObject*> rslt_1;
};

extern "C" int lqtk_QSinglePointEvent_exclusivePointGrabber(lua_State* L)
{
    lqtk_QSinglePointEvent_exclusivePointGrabber_Args  argValues;
    lqtk_QSinglePointEvent_exclusivePointGrabber_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QSinglePointEvent::exclusivePointGrabber();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QSinglePointEvent", "exclusivePointGrabber", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSinglePointEvent_globalPosition_Args
{
    FromLua<QSinglePointEvent*> arg_1_1;
    ToLua<QPointF*> rslt_1;
};

extern "C" int lqtk_QSinglePointEvent_globalPosition(lua_State* L)
{
    lqtk_QSinglePointEvent_globalPosition_Args  argValues;
    lqtk_QSinglePointEvent_globalPosition_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QSinglePointEvent::globalPosition();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QSinglePointEvent", "globalPosition", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSinglePointEvent_isBeginEvent_Args
{
    FromLua<QSinglePointEvent*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QSinglePointEvent_isBeginEvent(lua_State* L)
{
    lqtk_QSinglePointEvent_isBeginEvent_Args  argValues;
    lqtk_QSinglePointEvent_isBeginEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QSinglePointEvent::isBeginEvent();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QSinglePointEvent", "isBeginEvent", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSinglePointEvent_isEndEvent_Args
{
    FromLua<QSinglePointEvent*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QSinglePointEvent_isEndEvent(lua_State* L)
{
    lqtk_QSinglePointEvent_isEndEvent_Args  argValues;
    lqtk_QSinglePointEvent_isEndEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QSinglePointEvent::isEndEvent();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QSinglePointEvent", "isEndEvent", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSinglePointEvent_isUpdateEvent_Args
{
    FromLua<QSinglePointEvent*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QSinglePointEvent_isUpdateEvent(lua_State* L)
{
    lqtk_QSinglePointEvent_isUpdateEvent_Args  argValues;
    lqtk_QSinglePointEvent_isUpdateEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QSinglePointEvent::isUpdateEvent();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QSinglePointEvent", "isUpdateEvent", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSinglePointEvent_position_Args
{
    FromLua<QSinglePointEvent*> arg_1_1;
    ToLua<QPointF*> rslt_1;
};

extern "C" int lqtk_QSinglePointEvent_position(lua_State* L)
{
    lqtk_QSinglePointEvent_position_Args  argValues;
    lqtk_QSinglePointEvent_position_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QSinglePointEvent::position();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QSinglePointEvent", "position", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSinglePointEvent_scenePosition_Args
{
    FromLua<QSinglePointEvent*> arg_1_1;
    ToLua<QPointF*> rslt_1;
};

extern "C" int lqtk_QSinglePointEvent_scenePosition(lua_State* L)
{
    lqtk_QSinglePointEvent_scenePosition_Args  argValues;
    lqtk_QSinglePointEvent_scenePosition_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QSinglePointEvent::scenePosition();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QSinglePointEvent", "scenePosition", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSinglePointEvent_setExclusivePointGrabber_Args
{
    FromLua<QSinglePointEvent*> arg_1_1;
    FromLua<QObject*> arg_2_1;
};

extern "C" int lqtk_QSinglePointEvent_setExclusivePointGrabber(lua_State* L)
{
    lqtk_QSinglePointEvent_setExclusivePointGrabber_Args  argValues;
    lqtk_QSinglePointEvent_setExclusivePointGrabber_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QSinglePointEvent::setExclusivePointGrabber(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QSinglePointEvent", "setExclusivePointGrabber", nargs, "2");
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
        QSinglePointEventBinding::QType* ptr = static_cast<QSinglePointEventBinding::QType*>(objectPtr);
        if (targetClassInfo == &QSinglePointEventBinding::classInfo) {
            return ptr;
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
        QSinglePointEvent* ptr = (QSinglePointEvent*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

ObjectUdata* QSinglePointEventBinding::pushObject(lua_State* L, QSinglePointEvent* objPtr, OwnerType ownerType)
{
        QMouseEvent* ptr1 = dynamic_cast<QMouseEvent*>(objPtr);
        if (ptr1) {
            return QMouseEventBinding::pushObject(L, ptr1, ownerType);
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
        udata = ObjectUdata::pushNew<QSinglePointEvent>(L, hasUserValue);     // -> uval?, udata
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
    { "ActionAdded",                      Member::INTEGER,              (void*) QSinglePointEvent::ActionAdded },
    { "ActionChanged",                    Member::INTEGER,              (void*) QSinglePointEvent::ActionChanged },
    { "ActionRemoved",                    Member::INTEGER,              (void*) QSinglePointEvent::ActionRemoved },
    { "ActivationChange",                 Member::INTEGER,              (void*) QSinglePointEvent::ActivationChange },
    { "ApplicationActivate",              Member::INTEGER,              (void*) QSinglePointEvent::ApplicationActivate },
    { "ApplicationActivated",             Member::INTEGER,              (void*) QSinglePointEvent::ApplicationActivated },
    { "ApplicationDeactivate",            Member::INTEGER,              (void*) QSinglePointEvent::ApplicationDeactivate },
    { "ApplicationFontChange",            Member::INTEGER,              (void*) QSinglePointEvent::ApplicationFontChange },
    { "ApplicationLayoutDirectionChange", Member::INTEGER,              (void*) QSinglePointEvent::ApplicationLayoutDirectionChange },
    { "ApplicationPaletteChange",         Member::INTEGER,              (void*) QSinglePointEvent::ApplicationPaletteChange },
    { "ApplicationStateChange",           Member::INTEGER,              (void*) QSinglePointEvent::ApplicationStateChange },
    { "ApplicationWindowIconChange",      Member::INTEGER,              (void*) QSinglePointEvent::ApplicationWindowIconChange },
    { "ChildAdded",                       Member::INTEGER,              (void*) QSinglePointEvent::ChildAdded },
    { "ChildPolished",                    Member::INTEGER,              (void*) QSinglePointEvent::ChildPolished },
    { "ChildRemoved",                     Member::INTEGER,              (void*) QSinglePointEvent::ChildRemoved },
    { "ChildWindowAdded",                 Member::INTEGER,              (void*) QSinglePointEvent::ChildWindowAdded },
    { "ChildWindowRemoved",               Member::INTEGER,              (void*) QSinglePointEvent::ChildWindowRemoved },
    { "Clipboard",                        Member::INTEGER,              (void*) QSinglePointEvent::Clipboard },
    { "Close",                            Member::INTEGER,              (void*) QSinglePointEvent::Close },
    { "CloseSoftwareInputPanel",          Member::INTEGER,              (void*) QSinglePointEvent::CloseSoftwareInputPanel },
    { "ContentsRectChange",               Member::INTEGER,              (void*) QSinglePointEvent::ContentsRectChange },
    { "ContextMenu",                      Member::INTEGER,              (void*) QSinglePointEvent::ContextMenu },
    { "CursorChange",                     Member::INTEGER,              (void*) QSinglePointEvent::CursorChange },
    { "DeferredDelete",                   Member::INTEGER,              (void*) QSinglePointEvent::DeferredDelete },
    { "DevicePixelRatioChange",           Member::INTEGER,              (void*) QSinglePointEvent::DevicePixelRatioChange },
    { "DragEnter",                        Member::INTEGER,              (void*) QSinglePointEvent::DragEnter },
    { "DragLeave",                        Member::INTEGER,              (void*) QSinglePointEvent::DragLeave },
    { "DragMove",                         Member::INTEGER,              (void*) QSinglePointEvent::DragMove },
    { "Drop",                             Member::INTEGER,              (void*) QSinglePointEvent::Drop },
    { "DynamicPropertyChange",            Member::INTEGER,              (void*) QSinglePointEvent::DynamicPropertyChange },
    { "EnabledChange",                    Member::INTEGER,              (void*) QSinglePointEvent::EnabledChange },
    { "Enter",                            Member::INTEGER,              (void*) QSinglePointEvent::Enter },
    { "EnterWhatsThisMode",               Member::INTEGER,              (void*) QSinglePointEvent::EnterWhatsThisMode },
    { "Expose",                           Member::INTEGER,              (void*) QSinglePointEvent::Expose },
    { "FileOpen",                         Member::INTEGER,              (void*) QSinglePointEvent::FileOpen },
    { "FocusAboutToChange",               Member::INTEGER,              (void*) QSinglePointEvent::FocusAboutToChange },
    { "FocusIn",                          Member::INTEGER,              (void*) QSinglePointEvent::FocusIn },
    { "FocusOut",                         Member::INTEGER,              (void*) QSinglePointEvent::FocusOut },
    { "FontChange",                       Member::INTEGER,              (void*) QSinglePointEvent::FontChange },
    { "Gesture",                          Member::INTEGER,              (void*) QSinglePointEvent::Gesture },
    { "GestureOverride",                  Member::INTEGER,              (void*) QSinglePointEvent::GestureOverride },
    { "GrabKeyboard",                     Member::INTEGER,              (void*) QSinglePointEvent::GrabKeyboard },
    { "GrabMouse",                        Member::INTEGER,              (void*) QSinglePointEvent::GrabMouse },
    { "GraphicsSceneContextMenu",         Member::INTEGER,              (void*) QSinglePointEvent::GraphicsSceneContextMenu },
    { "GraphicsSceneDragEnter",           Member::INTEGER,              (void*) QSinglePointEvent::GraphicsSceneDragEnter },
    { "GraphicsSceneDragLeave",           Member::INTEGER,              (void*) QSinglePointEvent::GraphicsSceneDragLeave },
    { "GraphicsSceneDragMove",            Member::INTEGER,              (void*) QSinglePointEvent::GraphicsSceneDragMove },
    { "GraphicsSceneDrop",                Member::INTEGER,              (void*) QSinglePointEvent::GraphicsSceneDrop },
    { "GraphicsSceneHelp",                Member::INTEGER,              (void*) QSinglePointEvent::GraphicsSceneHelp },
    { "GraphicsSceneHoverEnter",          Member::INTEGER,              (void*) QSinglePointEvent::GraphicsSceneHoverEnter },
    { "GraphicsSceneHoverLeave",          Member::INTEGER,              (void*) QSinglePointEvent::GraphicsSceneHoverLeave },
    { "GraphicsSceneHoverMove",           Member::INTEGER,              (void*) QSinglePointEvent::GraphicsSceneHoverMove },
    { "GraphicsSceneLeave",               Member::INTEGER,              (void*) QSinglePointEvent::GraphicsSceneLeave },
    { "GraphicsSceneMouseDoubleClick",    Member::INTEGER,              (void*) QSinglePointEvent::GraphicsSceneMouseDoubleClick },
    { "GraphicsSceneMouseMove",           Member::INTEGER,              (void*) QSinglePointEvent::GraphicsSceneMouseMove },
    { "GraphicsSceneMousePress",          Member::INTEGER,              (void*) QSinglePointEvent::GraphicsSceneMousePress },
    { "GraphicsSceneMouseRelease",        Member::INTEGER,              (void*) QSinglePointEvent::GraphicsSceneMouseRelease },
    { "GraphicsSceneMove",                Member::INTEGER,              (void*) QSinglePointEvent::GraphicsSceneMove },
    { "GraphicsSceneResize",              Member::INTEGER,              (void*) QSinglePointEvent::GraphicsSceneResize },
    { "GraphicsSceneWheel",               Member::INTEGER,              (void*) QSinglePointEvent::GraphicsSceneWheel },
    { "Hide",                             Member::INTEGER,              (void*) QSinglePointEvent::Hide },
    { "HideToParent",                     Member::INTEGER,              (void*) QSinglePointEvent::HideToParent },
    { "HoverEnter",                       Member::INTEGER,              (void*) QSinglePointEvent::HoverEnter },
    { "HoverLeave",                       Member::INTEGER,              (void*) QSinglePointEvent::HoverLeave },
    { "HoverMove",                        Member::INTEGER,              (void*) QSinglePointEvent::HoverMove },
    { "IconDrag",                         Member::INTEGER,              (void*) QSinglePointEvent::IconDrag },
    { "IconTextChange",                   Member::INTEGER,              (void*) QSinglePointEvent::IconTextChange },
    { "InputMethod",                      Member::INTEGER,              (void*) QSinglePointEvent::InputMethod },
    { "InputMethodQuery",                 Member::INTEGER,              (void*) QSinglePointEvent::InputMethodQuery },
    { "KeyPress",                         Member::INTEGER,              (void*) QSinglePointEvent::KeyPress },
    { "KeyRelease",                       Member::INTEGER,              (void*) QSinglePointEvent::KeyRelease },
    { "KeyboardLayoutChange",             Member::INTEGER,              (void*) QSinglePointEvent::KeyboardLayoutChange },
    { "LanguageChange",                   Member::INTEGER,              (void*) QSinglePointEvent::LanguageChange },
    { "LayoutDirectionChange",            Member::INTEGER,              (void*) QSinglePointEvent::LayoutDirectionChange },
    { "LayoutRequest",                    Member::INTEGER,              (void*) QSinglePointEvent::LayoutRequest },
    { "Leave",                            Member::INTEGER,              (void*) QSinglePointEvent::Leave },
    { "LeaveWhatsThisMode",               Member::INTEGER,              (void*) QSinglePointEvent::LeaveWhatsThisMode },
    { "LocaleChange",                     Member::INTEGER,              (void*) QSinglePointEvent::LocaleChange },
    { "MacSizeChange",                    Member::INTEGER,              (void*) QSinglePointEvent::MacSizeChange },
    { "MetaCall",                         Member::INTEGER,              (void*) QSinglePointEvent::MetaCall },
    { "ModifiedChange",                   Member::INTEGER,              (void*) QSinglePointEvent::ModifiedChange },
    { "MouseButtonDblClick",              Member::INTEGER,              (void*) QSinglePointEvent::MouseButtonDblClick },
    { "MouseButtonPress",                 Member::INTEGER,              (void*) QSinglePointEvent::MouseButtonPress },
    { "MouseButtonRelease",               Member::INTEGER,              (void*) QSinglePointEvent::MouseButtonRelease },
    { "MouseMove",                        Member::INTEGER,              (void*) QSinglePointEvent::MouseMove },
    { "MouseTrackingChange",              Member::INTEGER,              (void*) QSinglePointEvent::MouseTrackingChange },
    { "Move",                             Member::INTEGER,              (void*) QSinglePointEvent::Move },
    { "NativeGesture",                    Member::INTEGER,              (void*) QSinglePointEvent::NativeGesture },
    { "NonClientAreaMouseButtonDblClick", Member::INTEGER,              (void*) QSinglePointEvent::NonClientAreaMouseButtonDblClick },
    { "NonClientAreaMouseButtonPress",    Member::INTEGER,              (void*) QSinglePointEvent::NonClientAreaMouseButtonPress },
    { "NonClientAreaMouseButtonRelease",  Member::INTEGER,              (void*) QSinglePointEvent::NonClientAreaMouseButtonRelease },
    { "NonClientAreaMouseMove",           Member::INTEGER,              (void*) QSinglePointEvent::NonClientAreaMouseMove },
    { "None",                             Member::INTEGER,              (void*) QSinglePointEvent::None },
    { "OrientationChange",                Member::INTEGER,              (void*) QSinglePointEvent::OrientationChange },
    { "Paint",                            Member::INTEGER,              (void*) QSinglePointEvent::Paint },
    { "PaletteChange",                    Member::INTEGER,              (void*) QSinglePointEvent::PaletteChange },
    { "ParentAboutToChange",              Member::INTEGER,              (void*) QSinglePointEvent::ParentAboutToChange },
    { "ParentChange",                     Member::INTEGER,              (void*) QSinglePointEvent::ParentChange },
    { "ParentWindowAboutToChange",        Member::INTEGER,              (void*) QSinglePointEvent::ParentWindowAboutToChange },
    { "ParentWindowChange",               Member::INTEGER,              (void*) QSinglePointEvent::ParentWindowChange },
    { "PlatformPanel",                    Member::INTEGER,              (void*) QSinglePointEvent::PlatformPanel },
    { "PlatformSurface",                  Member::INTEGER,              (void*) QSinglePointEvent::PlatformSurface },
    { "Polish",                           Member::INTEGER,              (void*) QSinglePointEvent::Polish },
    { "PolishRequest",                    Member::INTEGER,              (void*) QSinglePointEvent::PolishRequest },
    { "QueryWhatsThis",                   Member::INTEGER,              (void*) QSinglePointEvent::QueryWhatsThis },
    { "Quit",                             Member::INTEGER,              (void*) QSinglePointEvent::Quit },
    { "ReadOnlyChange",                   Member::INTEGER,              (void*) QSinglePointEvent::ReadOnlyChange },
    { "RequestSoftwareInputPanel",        Member::INTEGER,              (void*) QSinglePointEvent::RequestSoftwareInputPanel },
    { "Resize",                           Member::INTEGER,              (void*) QSinglePointEvent::Resize },
    { "SafeAreaMarginsChange",            Member::INTEGER,              (void*) QSinglePointEvent::SafeAreaMarginsChange },
    { "Scroll",                           Member::INTEGER,              (void*) QSinglePointEvent::Scroll },
    { "ScrollPrepare",                    Member::INTEGER,              (void*) QSinglePointEvent::ScrollPrepare },
    { "Shortcut",                         Member::INTEGER,              (void*) QSinglePointEvent::Shortcut },
    { "ShortcutOverride",                 Member::INTEGER,              (void*) QSinglePointEvent::ShortcutOverride },
    { "Show",                             Member::INTEGER,              (void*) QSinglePointEvent::Show },
    { "ShowToParent",                     Member::INTEGER,              (void*) QSinglePointEvent::ShowToParent },
    { "SockAct",                          Member::INTEGER,              (void*) QSinglePointEvent::SockAct },
    { "StateMachineSignal",               Member::INTEGER,              (void*) QSinglePointEvent::StateMachineSignal },
    { "StateMachineWrapped",              Member::INTEGER,              (void*) QSinglePointEvent::StateMachineWrapped },
    { "StatusTip",                        Member::INTEGER,              (void*) QSinglePointEvent::StatusTip },
    { "StyleChange",                      Member::INTEGER,              (void*) QSinglePointEvent::StyleChange },
    { "TabletEnterProximity",             Member::INTEGER,              (void*) QSinglePointEvent::TabletEnterProximity },
    { "TabletLeaveProximity",             Member::INTEGER,              (void*) QSinglePointEvent::TabletLeaveProximity },
    { "TabletMove",                       Member::INTEGER,              (void*) QSinglePointEvent::TabletMove },
    { "TabletPress",                      Member::INTEGER,              (void*) QSinglePointEvent::TabletPress },
    { "TabletRelease",                    Member::INTEGER,              (void*) QSinglePointEvent::TabletRelease },
    { "TabletTrackingChange",             Member::INTEGER,              (void*) QSinglePointEvent::TabletTrackingChange },
    { "ThreadChange",                     Member::INTEGER,              (void*) QSinglePointEvent::ThreadChange },
    { "Timer",                            Member::INTEGER,              (void*) QSinglePointEvent::Timer },
    { "ToolBarChange",                    Member::INTEGER,              (void*) QSinglePointEvent::ToolBarChange },
    { "ToolTip",                          Member::INTEGER,              (void*) QSinglePointEvent::ToolTip },
    { "ToolTipChange",                    Member::INTEGER,              (void*) QSinglePointEvent::ToolTipChange },
    { "TouchBegin",                       Member::INTEGER,              (void*) QSinglePointEvent::TouchBegin },
    { "TouchCancel",                      Member::INTEGER,              (void*) QSinglePointEvent::TouchCancel },
    { "TouchEnd",                         Member::INTEGER,              (void*) QSinglePointEvent::TouchEnd },
    { "TouchUpdate",                      Member::INTEGER,              (void*) QSinglePointEvent::TouchUpdate },
    { "UngrabKeyboard",                   Member::INTEGER,              (void*) QSinglePointEvent::UngrabKeyboard },
    { "UngrabMouse",                      Member::INTEGER,              (void*) QSinglePointEvent::UngrabMouse },
    { "UpdateLater",                      Member::INTEGER,              (void*) QSinglePointEvent::UpdateLater },
    { "UpdateRequest",                    Member::INTEGER,              (void*) QSinglePointEvent::UpdateRequest },
    { "WhatsThis",                        Member::INTEGER,              (void*) QSinglePointEvent::WhatsThis },
    { "WhatsThisClicked",                 Member::INTEGER,              (void*) QSinglePointEvent::WhatsThisClicked },
    { "Wheel",                            Member::INTEGER,              (void*) QSinglePointEvent::Wheel },
    { "WinEventAct",                      Member::INTEGER,              (void*) QSinglePointEvent::WinEventAct },
    { "WinIdChange",                      Member::INTEGER,              (void*) QSinglePointEvent::WinIdChange },
    { "WindowActivate",                   Member::INTEGER,              (void*) QSinglePointEvent::WindowActivate },
    { "WindowBlocked",                    Member::INTEGER,              (void*) QSinglePointEvent::WindowBlocked },
    { "WindowDeactivate",                 Member::INTEGER,              (void*) QSinglePointEvent::WindowDeactivate },
    { "WindowIconChange",                 Member::INTEGER,              (void*) QSinglePointEvent::WindowIconChange },
    { "WindowStateChange",                Member::INTEGER,              (void*) QSinglePointEvent::WindowStateChange },
    { "WindowTitleChange",                Member::INTEGER,              (void*) QSinglePointEvent::WindowTitleChange },
    { "WindowUnblocked",                  Member::INTEGER,              (void*) QSinglePointEvent::WindowUnblocked },
    { "ZOrderChange",                     Member::INTEGER,              (void*) QSinglePointEvent::ZOrderChange },
    { "accept",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_accept },
    { "button",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QSinglePointEvent_button },
    { "buttons",                          Member::NORMAL_FUNCTION,      (void*) lqtk_QSinglePointEvent_buttons },
    { "exclusivePointGrabber",            Member::NORMAL_FUNCTION,      (void*) lqtk_QSinglePointEvent_exclusivePointGrabber },
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

const ClassInfo QSinglePointEventBinding::classInfo = 
{
    "QSinglePointEvent",

    &QPointerEventBinding::classInfo,

    false, // isQObject
    false, // needsGuard
    NULL, // constructFunc
    NULL, // newFunc
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    168,
    members
};

/* ============================================================================================ */

int QSinglePointEventBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
