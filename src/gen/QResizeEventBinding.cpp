// Type: QResizeEvent
// Base: QEvent

/* ============================================================================================ */

#include <QEvent>
#include <QObject>
#include <QResizeEvent>
#include <QSize>

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
#include "QResizeEventBinding.hpp"
#include "QSizeBinding.hpp"

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


struct lqtk_QResizeEvent_oldSize_Args
{
    FromLua<QResizeEvent*> arg_1_1;
    ToLua<QSize*> rslt_1;
};

extern "C" int lqtk_QResizeEvent_oldSize(lua_State* L)
{
    lqtk_QResizeEvent_oldSize_Args  argValues;
    lqtk_QResizeEvent_oldSize_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QResizeEvent::oldSize();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QResizeEvent", "oldSize", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QResizeEvent_size_Args
{
    FromLua<QResizeEvent*> arg_1_1;
    ToLua<QSize*> rslt_1;
};

extern "C" int lqtk_QResizeEvent_size(lua_State* L)
{
    lqtk_QResizeEvent_size_Args  argValues;
    lqtk_QResizeEvent_size_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QResizeEvent::size();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QResizeEvent", "size", nargs, "1");
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
        QResizeEventBinding::QType* ptr = static_cast<QResizeEventBinding::QType*>(objectPtr);
        if (targetClassInfo == &QResizeEventBinding::classInfo) {
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
        QResizeEvent* ptr = (QResizeEvent*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QResizeEvent_new_Args
{
    FromLua<QSize*> arg_1_1;
    FromLua<QSize*> arg_1_2;
    ToLua<QResizeEvent*> rslt_1;
};

extern "C" int lqtk_QResizeEvent_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QResizeEvent_new_Args  argValues;
    lqtk_QResizeEvent_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QResizeEventBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QResizeEvent> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                QResizeEvent* rslt = 
                    new QResizeEvent(*args->arg_1_1.getValue(), *args->arg_1_2.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QResizeEvent", "new", nargs, "3");
        } else {
            return util::argCountError(L, "QResizeEvent", nullptr, nargs, "2");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QResizeEvent_new(lua_State* L)
{
    return lqtk_QResizeEvent_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QResizeEventBinding::pushObject(lua_State* L, QResizeEvent* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QResizeEvent>(L, hasUserValue);     // -> uval?, udata
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
    { "ActionAdded",                      Member::INTEGER,              (void*) QResizeEvent::ActionAdded },
    { "ActionChanged",                    Member::INTEGER,              (void*) QResizeEvent::ActionChanged },
    { "ActionRemoved",                    Member::INTEGER,              (void*) QResizeEvent::ActionRemoved },
    { "ActivationChange",                 Member::INTEGER,              (void*) QResizeEvent::ActivationChange },
    { "ApplicationActivate",              Member::INTEGER,              (void*) QResizeEvent::ApplicationActivate },
    { "ApplicationActivated",             Member::INTEGER,              (void*) QResizeEvent::ApplicationActivated },
    { "ApplicationDeactivate",            Member::INTEGER,              (void*) QResizeEvent::ApplicationDeactivate },
    { "ApplicationFontChange",            Member::INTEGER,              (void*) QResizeEvent::ApplicationFontChange },
    { "ApplicationLayoutDirectionChange", Member::INTEGER,              (void*) QResizeEvent::ApplicationLayoutDirectionChange },
    { "ApplicationPaletteChange",         Member::INTEGER,              (void*) QResizeEvent::ApplicationPaletteChange },
    { "ApplicationStateChange",           Member::INTEGER,              (void*) QResizeEvent::ApplicationStateChange },
    { "ApplicationWindowIconChange",      Member::INTEGER,              (void*) QResizeEvent::ApplicationWindowIconChange },
    { "ChildAdded",                       Member::INTEGER,              (void*) QResizeEvent::ChildAdded },
    { "ChildPolished",                    Member::INTEGER,              (void*) QResizeEvent::ChildPolished },
    { "ChildRemoved",                     Member::INTEGER,              (void*) QResizeEvent::ChildRemoved },
    { "ChildWindowAdded",                 Member::INTEGER,              (void*) QResizeEvent::ChildWindowAdded },
    { "ChildWindowRemoved",               Member::INTEGER,              (void*) QResizeEvent::ChildWindowRemoved },
    { "Clipboard",                        Member::INTEGER,              (void*) QResizeEvent::Clipboard },
    { "Close",                            Member::INTEGER,              (void*) QResizeEvent::Close },
    { "CloseSoftwareInputPanel",          Member::INTEGER,              (void*) QResizeEvent::CloseSoftwareInputPanel },
    { "ContentsRectChange",               Member::INTEGER,              (void*) QResizeEvent::ContentsRectChange },
    { "ContextMenu",                      Member::INTEGER,              (void*) QResizeEvent::ContextMenu },
    { "CursorChange",                     Member::INTEGER,              (void*) QResizeEvent::CursorChange },
    { "DeferredDelete",                   Member::INTEGER,              (void*) QResizeEvent::DeferredDelete },
    { "DevicePixelRatioChange",           Member::INTEGER,              (void*) QResizeEvent::DevicePixelRatioChange },
    { "DragEnter",                        Member::INTEGER,              (void*) QResizeEvent::DragEnter },
    { "DragLeave",                        Member::INTEGER,              (void*) QResizeEvent::DragLeave },
    { "DragMove",                         Member::INTEGER,              (void*) QResizeEvent::DragMove },
    { "Drop",                             Member::INTEGER,              (void*) QResizeEvent::Drop },
    { "DynamicPropertyChange",            Member::INTEGER,              (void*) QResizeEvent::DynamicPropertyChange },
    { "EnabledChange",                    Member::INTEGER,              (void*) QResizeEvent::EnabledChange },
    { "Enter",                            Member::INTEGER,              (void*) QResizeEvent::Enter },
    { "EnterWhatsThisMode",               Member::INTEGER,              (void*) QResizeEvent::EnterWhatsThisMode },
    { "Expose",                           Member::INTEGER,              (void*) QResizeEvent::Expose },
    { "FileOpen",                         Member::INTEGER,              (void*) QResizeEvent::FileOpen },
    { "FocusAboutToChange",               Member::INTEGER,              (void*) QResizeEvent::FocusAboutToChange },
    { "FocusIn",                          Member::INTEGER,              (void*) QResizeEvent::FocusIn },
    { "FocusOut",                         Member::INTEGER,              (void*) QResizeEvent::FocusOut },
    { "FontChange",                       Member::INTEGER,              (void*) QResizeEvent::FontChange },
    { "Gesture",                          Member::INTEGER,              (void*) QResizeEvent::Gesture },
    { "GestureOverride",                  Member::INTEGER,              (void*) QResizeEvent::GestureOverride },
    { "GrabKeyboard",                     Member::INTEGER,              (void*) QResizeEvent::GrabKeyboard },
    { "GrabMouse",                        Member::INTEGER,              (void*) QResizeEvent::GrabMouse },
    { "GraphicsSceneContextMenu",         Member::INTEGER,              (void*) QResizeEvent::GraphicsSceneContextMenu },
    { "GraphicsSceneDragEnter",           Member::INTEGER,              (void*) QResizeEvent::GraphicsSceneDragEnter },
    { "GraphicsSceneDragLeave",           Member::INTEGER,              (void*) QResizeEvent::GraphicsSceneDragLeave },
    { "GraphicsSceneDragMove",            Member::INTEGER,              (void*) QResizeEvent::GraphicsSceneDragMove },
    { "GraphicsSceneDrop",                Member::INTEGER,              (void*) QResizeEvent::GraphicsSceneDrop },
    { "GraphicsSceneHelp",                Member::INTEGER,              (void*) QResizeEvent::GraphicsSceneHelp },
    { "GraphicsSceneHoverEnter",          Member::INTEGER,              (void*) QResizeEvent::GraphicsSceneHoverEnter },
    { "GraphicsSceneHoverLeave",          Member::INTEGER,              (void*) QResizeEvent::GraphicsSceneHoverLeave },
    { "GraphicsSceneHoverMove",           Member::INTEGER,              (void*) QResizeEvent::GraphicsSceneHoverMove },
    { "GraphicsSceneLeave",               Member::INTEGER,              (void*) QResizeEvent::GraphicsSceneLeave },
    { "GraphicsSceneMouseDoubleClick",    Member::INTEGER,              (void*) QResizeEvent::GraphicsSceneMouseDoubleClick },
    { "GraphicsSceneMouseMove",           Member::INTEGER,              (void*) QResizeEvent::GraphicsSceneMouseMove },
    { "GraphicsSceneMousePress",          Member::INTEGER,              (void*) QResizeEvent::GraphicsSceneMousePress },
    { "GraphicsSceneMouseRelease",        Member::INTEGER,              (void*) QResizeEvent::GraphicsSceneMouseRelease },
    { "GraphicsSceneMove",                Member::INTEGER,              (void*) QResizeEvent::GraphicsSceneMove },
    { "GraphicsSceneResize",              Member::INTEGER,              (void*) QResizeEvent::GraphicsSceneResize },
    { "GraphicsSceneWheel",               Member::INTEGER,              (void*) QResizeEvent::GraphicsSceneWheel },
    { "Hide",                             Member::INTEGER,              (void*) QResizeEvent::Hide },
    { "HideToParent",                     Member::INTEGER,              (void*) QResizeEvent::HideToParent },
    { "HoverEnter",                       Member::INTEGER,              (void*) QResizeEvent::HoverEnter },
    { "HoverLeave",                       Member::INTEGER,              (void*) QResizeEvent::HoverLeave },
    { "HoverMove",                        Member::INTEGER,              (void*) QResizeEvent::HoverMove },
    { "IconDrag",                         Member::INTEGER,              (void*) QResizeEvent::IconDrag },
    { "IconTextChange",                   Member::INTEGER,              (void*) QResizeEvent::IconTextChange },
    { "InputMethod",                      Member::INTEGER,              (void*) QResizeEvent::InputMethod },
    { "InputMethodQuery",                 Member::INTEGER,              (void*) QResizeEvent::InputMethodQuery },
    { "KeyPress",                         Member::INTEGER,              (void*) QResizeEvent::KeyPress },
    { "KeyRelease",                       Member::INTEGER,              (void*) QResizeEvent::KeyRelease },
    { "KeyboardLayoutChange",             Member::INTEGER,              (void*) QResizeEvent::KeyboardLayoutChange },
    { "LanguageChange",                   Member::INTEGER,              (void*) QResizeEvent::LanguageChange },
    { "LayoutDirectionChange",            Member::INTEGER,              (void*) QResizeEvent::LayoutDirectionChange },
    { "LayoutRequest",                    Member::INTEGER,              (void*) QResizeEvent::LayoutRequest },
    { "Leave",                            Member::INTEGER,              (void*) QResizeEvent::Leave },
    { "LeaveWhatsThisMode",               Member::INTEGER,              (void*) QResizeEvent::LeaveWhatsThisMode },
    { "LocaleChange",                     Member::INTEGER,              (void*) QResizeEvent::LocaleChange },
    { "MacSizeChange",                    Member::INTEGER,              (void*) QResizeEvent::MacSizeChange },
    { "MetaCall",                         Member::INTEGER,              (void*) QResizeEvent::MetaCall },
    { "ModifiedChange",                   Member::INTEGER,              (void*) QResizeEvent::ModifiedChange },
    { "MouseButtonDblClick",              Member::INTEGER,              (void*) QResizeEvent::MouseButtonDblClick },
    { "MouseButtonPress",                 Member::INTEGER,              (void*) QResizeEvent::MouseButtonPress },
    { "MouseButtonRelease",               Member::INTEGER,              (void*) QResizeEvent::MouseButtonRelease },
    { "MouseMove",                        Member::INTEGER,              (void*) QResizeEvent::MouseMove },
    { "MouseTrackingChange",              Member::INTEGER,              (void*) QResizeEvent::MouseTrackingChange },
    { "Move",                             Member::INTEGER,              (void*) QResizeEvent::Move },
    { "NativeGesture",                    Member::INTEGER,              (void*) QResizeEvent::NativeGesture },
    { "NonClientAreaMouseButtonDblClick", Member::INTEGER,              (void*) QResizeEvent::NonClientAreaMouseButtonDblClick },
    { "NonClientAreaMouseButtonPress",    Member::INTEGER,              (void*) QResizeEvent::NonClientAreaMouseButtonPress },
    { "NonClientAreaMouseButtonRelease",  Member::INTEGER,              (void*) QResizeEvent::NonClientAreaMouseButtonRelease },
    { "NonClientAreaMouseMove",           Member::INTEGER,              (void*) QResizeEvent::NonClientAreaMouseMove },
    { "None",                             Member::INTEGER,              (void*) QResizeEvent::None },
    { "OrientationChange",                Member::INTEGER,              (void*) QResizeEvent::OrientationChange },
    { "Paint",                            Member::INTEGER,              (void*) QResizeEvent::Paint },
    { "PaletteChange",                    Member::INTEGER,              (void*) QResizeEvent::PaletteChange },
    { "ParentAboutToChange",              Member::INTEGER,              (void*) QResizeEvent::ParentAboutToChange },
    { "ParentChange",                     Member::INTEGER,              (void*) QResizeEvent::ParentChange },
    { "ParentWindowAboutToChange",        Member::INTEGER,              (void*) QResizeEvent::ParentWindowAboutToChange },
    { "ParentWindowChange",               Member::INTEGER,              (void*) QResizeEvent::ParentWindowChange },
    { "PlatformPanel",                    Member::INTEGER,              (void*) QResizeEvent::PlatformPanel },
    { "PlatformSurface",                  Member::INTEGER,              (void*) QResizeEvent::PlatformSurface },
    { "Polish",                           Member::INTEGER,              (void*) QResizeEvent::Polish },
    { "PolishRequest",                    Member::INTEGER,              (void*) QResizeEvent::PolishRequest },
    { "QueryWhatsThis",                   Member::INTEGER,              (void*) QResizeEvent::QueryWhatsThis },
    { "Quit",                             Member::INTEGER,              (void*) QResizeEvent::Quit },
    { "ReadOnlyChange",                   Member::INTEGER,              (void*) QResizeEvent::ReadOnlyChange },
    { "RequestSoftwareInputPanel",        Member::INTEGER,              (void*) QResizeEvent::RequestSoftwareInputPanel },
    { "Resize",                           Member::INTEGER,              (void*) QResizeEvent::Resize },
    { "SafeAreaMarginsChange",            Member::INTEGER,              (void*) QResizeEvent::SafeAreaMarginsChange },
    { "Scroll",                           Member::INTEGER,              (void*) QResizeEvent::Scroll },
    { "ScrollPrepare",                    Member::INTEGER,              (void*) QResizeEvent::ScrollPrepare },
    { "Shortcut",                         Member::INTEGER,              (void*) QResizeEvent::Shortcut },
    { "ShortcutOverride",                 Member::INTEGER,              (void*) QResizeEvent::ShortcutOverride },
    { "Show",                             Member::INTEGER,              (void*) QResizeEvent::Show },
    { "ShowToParent",                     Member::INTEGER,              (void*) QResizeEvent::ShowToParent },
    { "SockAct",                          Member::INTEGER,              (void*) QResizeEvent::SockAct },
    { "StateMachineSignal",               Member::INTEGER,              (void*) QResizeEvent::StateMachineSignal },
    { "StateMachineWrapped",              Member::INTEGER,              (void*) QResizeEvent::StateMachineWrapped },
    { "StatusTip",                        Member::INTEGER,              (void*) QResizeEvent::StatusTip },
    { "StyleChange",                      Member::INTEGER,              (void*) QResizeEvent::StyleChange },
    { "TabletEnterProximity",             Member::INTEGER,              (void*) QResizeEvent::TabletEnterProximity },
    { "TabletLeaveProximity",             Member::INTEGER,              (void*) QResizeEvent::TabletLeaveProximity },
    { "TabletMove",                       Member::INTEGER,              (void*) QResizeEvent::TabletMove },
    { "TabletPress",                      Member::INTEGER,              (void*) QResizeEvent::TabletPress },
    { "TabletRelease",                    Member::INTEGER,              (void*) QResizeEvent::TabletRelease },
    { "TabletTrackingChange",             Member::INTEGER,              (void*) QResizeEvent::TabletTrackingChange },
    { "ThreadChange",                     Member::INTEGER,              (void*) QResizeEvent::ThreadChange },
    { "Timer",                            Member::INTEGER,              (void*) QResizeEvent::Timer },
    { "ToolBarChange",                    Member::INTEGER,              (void*) QResizeEvent::ToolBarChange },
    { "ToolTip",                          Member::INTEGER,              (void*) QResizeEvent::ToolTip },
    { "ToolTipChange",                    Member::INTEGER,              (void*) QResizeEvent::ToolTipChange },
    { "TouchBegin",                       Member::INTEGER,              (void*) QResizeEvent::TouchBegin },
    { "TouchCancel",                      Member::INTEGER,              (void*) QResizeEvent::TouchCancel },
    { "TouchEnd",                         Member::INTEGER,              (void*) QResizeEvent::TouchEnd },
    { "TouchUpdate",                      Member::INTEGER,              (void*) QResizeEvent::TouchUpdate },
    { "UngrabKeyboard",                   Member::INTEGER,              (void*) QResizeEvent::UngrabKeyboard },
    { "UngrabMouse",                      Member::INTEGER,              (void*) QResizeEvent::UngrabMouse },
    { "UpdateLater",                      Member::INTEGER,              (void*) QResizeEvent::UpdateLater },
    { "UpdateRequest",                    Member::INTEGER,              (void*) QResizeEvent::UpdateRequest },
    { "WhatsThis",                        Member::INTEGER,              (void*) QResizeEvent::WhatsThis },
    { "WhatsThisClicked",                 Member::INTEGER,              (void*) QResizeEvent::WhatsThisClicked },
    { "Wheel",                            Member::INTEGER,              (void*) QResizeEvent::Wheel },
    { "WinEventAct",                      Member::INTEGER,              (void*) QResizeEvent::WinEventAct },
    { "WinIdChange",                      Member::INTEGER,              (void*) QResizeEvent::WinIdChange },
    { "WindowActivate",                   Member::INTEGER,              (void*) QResizeEvent::WindowActivate },
    { "WindowBlocked",                    Member::INTEGER,              (void*) QResizeEvent::WindowBlocked },
    { "WindowDeactivate",                 Member::INTEGER,              (void*) QResizeEvent::WindowDeactivate },
    { "WindowIconChange",                 Member::INTEGER,              (void*) QResizeEvent::WindowIconChange },
    { "WindowStateChange",                Member::INTEGER,              (void*) QResizeEvent::WindowStateChange },
    { "WindowTitleChange",                Member::INTEGER,              (void*) QResizeEvent::WindowTitleChange },
    { "WindowUnblocked",                  Member::INTEGER,              (void*) QResizeEvent::WindowUnblocked },
    { "ZOrderChange",                     Member::INTEGER,              (void*) QResizeEvent::ZOrderChange },
    { "accept",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_accept },
    { "ignore",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_ignore },
    { "isAccepted",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_isAccepted },
    { "oldSize",                          Member::NORMAL_FUNCTION,      (void*) lqtk_QResizeEvent_oldSize },
    { "setAccepted",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_setAccepted },
    { "size",                             Member::NORMAL_FUNCTION,      (void*) lqtk_QResizeEvent_size },
    { "type",                             Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_type },
    { NULL,                               Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QResizeEventBinding::classInfo = 
{
    "QResizeEvent",

    &QEventBinding::classInfo,

    false, // isQObject
    false, // needsGuard
    lqtk_QResizeEvent_constructor,
    lqtk_QResizeEvent_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    160,
    members
};

/* ============================================================================================ */

int QResizeEventBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
