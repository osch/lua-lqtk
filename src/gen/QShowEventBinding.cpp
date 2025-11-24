// Type: QShowEvent
// Base: QEvent

/* ============================================================================================ */

#include <QEvent>
#include <QObject>
#include <QShowEvent>

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
#include "QShowEventBinding.hpp"

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

static void* castFunction(const ClassInfo* targetClassInfo, void* objectPtr)
{
    if (objectPtr)
    {
        QShowEventBinding::QType* ptr = static_cast<QShowEventBinding::QType*>(objectPtr);
        if (targetClassInfo == &QShowEventBinding::classInfo) {
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
        QShowEvent* ptr = (QShowEvent*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QShowEvent_new_Args
{
    ToLua<QShowEvent*> rslt_1;
};

extern "C" int lqtk_QShowEvent_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QShowEvent_new_Args  argValues;
    lqtk_QShowEvent_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QShowEventBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QShowEvent> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QShowEvent* rslt = 
                    new QShowEvent();
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QShowEvent", "new", nargs, "1");
        } else {
            return util::argCountError(L, "QShowEvent", nullptr, nargs, "0");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QShowEvent_new(lua_State* L)
{
    return lqtk_QShowEvent_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QShowEventBinding::pushObject(lua_State* L, QShowEvent* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QShowEvent>(L, hasUserValue);     // -> uval?, udata
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
    { "ActionAdded",                      Member::INTEGER,              (void*) QShowEvent::ActionAdded },
    { "ActionChanged",                    Member::INTEGER,              (void*) QShowEvent::ActionChanged },
    { "ActionRemoved",                    Member::INTEGER,              (void*) QShowEvent::ActionRemoved },
    { "ActivationChange",                 Member::INTEGER,              (void*) QShowEvent::ActivationChange },
    { "ApplicationActivate",              Member::INTEGER,              (void*) QShowEvent::ApplicationActivate },
    { "ApplicationActivated",             Member::INTEGER,              (void*) QShowEvent::ApplicationActivated },
    { "ApplicationDeactivate",            Member::INTEGER,              (void*) QShowEvent::ApplicationDeactivate },
    { "ApplicationFontChange",            Member::INTEGER,              (void*) QShowEvent::ApplicationFontChange },
    { "ApplicationLayoutDirectionChange", Member::INTEGER,              (void*) QShowEvent::ApplicationLayoutDirectionChange },
    { "ApplicationPaletteChange",         Member::INTEGER,              (void*) QShowEvent::ApplicationPaletteChange },
    { "ApplicationStateChange",           Member::INTEGER,              (void*) QShowEvent::ApplicationStateChange },
    { "ApplicationWindowIconChange",      Member::INTEGER,              (void*) QShowEvent::ApplicationWindowIconChange },
    { "ChildAdded",                       Member::INTEGER,              (void*) QShowEvent::ChildAdded },
    { "ChildPolished",                    Member::INTEGER,              (void*) QShowEvent::ChildPolished },
    { "ChildRemoved",                     Member::INTEGER,              (void*) QShowEvent::ChildRemoved },
    { "ChildWindowAdded",                 Member::INTEGER,              (void*) QShowEvent::ChildWindowAdded },
    { "ChildWindowRemoved",               Member::INTEGER,              (void*) QShowEvent::ChildWindowRemoved },
    { "Clipboard",                        Member::INTEGER,              (void*) QShowEvent::Clipboard },
    { "Close",                            Member::INTEGER,              (void*) QShowEvent::Close },
    { "CloseSoftwareInputPanel",          Member::INTEGER,              (void*) QShowEvent::CloseSoftwareInputPanel },
    { "ContentsRectChange",               Member::INTEGER,              (void*) QShowEvent::ContentsRectChange },
    { "ContextMenu",                      Member::INTEGER,              (void*) QShowEvent::ContextMenu },
    { "CursorChange",                     Member::INTEGER,              (void*) QShowEvent::CursorChange },
    { "DeferredDelete",                   Member::INTEGER,              (void*) QShowEvent::DeferredDelete },
    { "DevicePixelRatioChange",           Member::INTEGER,              (void*) QShowEvent::DevicePixelRatioChange },
    { "DragEnter",                        Member::INTEGER,              (void*) QShowEvent::DragEnter },
    { "DragLeave",                        Member::INTEGER,              (void*) QShowEvent::DragLeave },
    { "DragMove",                         Member::INTEGER,              (void*) QShowEvent::DragMove },
    { "Drop",                             Member::INTEGER,              (void*) QShowEvent::Drop },
    { "DynamicPropertyChange",            Member::INTEGER,              (void*) QShowEvent::DynamicPropertyChange },
    { "EnabledChange",                    Member::INTEGER,              (void*) QShowEvent::EnabledChange },
    { "Enter",                            Member::INTEGER,              (void*) QShowEvent::Enter },
    { "EnterWhatsThisMode",               Member::INTEGER,              (void*) QShowEvent::EnterWhatsThisMode },
    { "Expose",                           Member::INTEGER,              (void*) QShowEvent::Expose },
    { "FileOpen",                         Member::INTEGER,              (void*) QShowEvent::FileOpen },
    { "FocusAboutToChange",               Member::INTEGER,              (void*) QShowEvent::FocusAboutToChange },
    { "FocusIn",                          Member::INTEGER,              (void*) QShowEvent::FocusIn },
    { "FocusOut",                         Member::INTEGER,              (void*) QShowEvent::FocusOut },
    { "FontChange",                       Member::INTEGER,              (void*) QShowEvent::FontChange },
    { "Gesture",                          Member::INTEGER,              (void*) QShowEvent::Gesture },
    { "GestureOverride",                  Member::INTEGER,              (void*) QShowEvent::GestureOverride },
    { "GrabKeyboard",                     Member::INTEGER,              (void*) QShowEvent::GrabKeyboard },
    { "GrabMouse",                        Member::INTEGER,              (void*) QShowEvent::GrabMouse },
    { "GraphicsSceneContextMenu",         Member::INTEGER,              (void*) QShowEvent::GraphicsSceneContextMenu },
    { "GraphicsSceneDragEnter",           Member::INTEGER,              (void*) QShowEvent::GraphicsSceneDragEnter },
    { "GraphicsSceneDragLeave",           Member::INTEGER,              (void*) QShowEvent::GraphicsSceneDragLeave },
    { "GraphicsSceneDragMove",            Member::INTEGER,              (void*) QShowEvent::GraphicsSceneDragMove },
    { "GraphicsSceneDrop",                Member::INTEGER,              (void*) QShowEvent::GraphicsSceneDrop },
    { "GraphicsSceneHelp",                Member::INTEGER,              (void*) QShowEvent::GraphicsSceneHelp },
    { "GraphicsSceneHoverEnter",          Member::INTEGER,              (void*) QShowEvent::GraphicsSceneHoverEnter },
    { "GraphicsSceneHoverLeave",          Member::INTEGER,              (void*) QShowEvent::GraphicsSceneHoverLeave },
    { "GraphicsSceneHoverMove",           Member::INTEGER,              (void*) QShowEvent::GraphicsSceneHoverMove },
    { "GraphicsSceneLeave",               Member::INTEGER,              (void*) QShowEvent::GraphicsSceneLeave },
    { "GraphicsSceneMouseDoubleClick",    Member::INTEGER,              (void*) QShowEvent::GraphicsSceneMouseDoubleClick },
    { "GraphicsSceneMouseMove",           Member::INTEGER,              (void*) QShowEvent::GraphicsSceneMouseMove },
    { "GraphicsSceneMousePress",          Member::INTEGER,              (void*) QShowEvent::GraphicsSceneMousePress },
    { "GraphicsSceneMouseRelease",        Member::INTEGER,              (void*) QShowEvent::GraphicsSceneMouseRelease },
    { "GraphicsSceneMove",                Member::INTEGER,              (void*) QShowEvent::GraphicsSceneMove },
    { "GraphicsSceneResize",              Member::INTEGER,              (void*) QShowEvent::GraphicsSceneResize },
    { "GraphicsSceneWheel",               Member::INTEGER,              (void*) QShowEvent::GraphicsSceneWheel },
    { "Hide",                             Member::INTEGER,              (void*) QShowEvent::Hide },
    { "HideToParent",                     Member::INTEGER,              (void*) QShowEvent::HideToParent },
    { "HoverEnter",                       Member::INTEGER,              (void*) QShowEvent::HoverEnter },
    { "HoverLeave",                       Member::INTEGER,              (void*) QShowEvent::HoverLeave },
    { "HoverMove",                        Member::INTEGER,              (void*) QShowEvent::HoverMove },
    { "IconDrag",                         Member::INTEGER,              (void*) QShowEvent::IconDrag },
    { "IconTextChange",                   Member::INTEGER,              (void*) QShowEvent::IconTextChange },
    { "InputMethod",                      Member::INTEGER,              (void*) QShowEvent::InputMethod },
    { "InputMethodQuery",                 Member::INTEGER,              (void*) QShowEvent::InputMethodQuery },
    { "KeyPress",                         Member::INTEGER,              (void*) QShowEvent::KeyPress },
    { "KeyRelease",                       Member::INTEGER,              (void*) QShowEvent::KeyRelease },
    { "KeyboardLayoutChange",             Member::INTEGER,              (void*) QShowEvent::KeyboardLayoutChange },
    { "LanguageChange",                   Member::INTEGER,              (void*) QShowEvent::LanguageChange },
    { "LayoutDirectionChange",            Member::INTEGER,              (void*) QShowEvent::LayoutDirectionChange },
    { "LayoutRequest",                    Member::INTEGER,              (void*) QShowEvent::LayoutRequest },
    { "Leave",                            Member::INTEGER,              (void*) QShowEvent::Leave },
    { "LeaveWhatsThisMode",               Member::INTEGER,              (void*) QShowEvent::LeaveWhatsThisMode },
    { "LocaleChange",                     Member::INTEGER,              (void*) QShowEvent::LocaleChange },
    { "MacSizeChange",                    Member::INTEGER,              (void*) QShowEvent::MacSizeChange },
    { "MetaCall",                         Member::INTEGER,              (void*) QShowEvent::MetaCall },
    { "ModifiedChange",                   Member::INTEGER,              (void*) QShowEvent::ModifiedChange },
    { "MouseButtonDblClick",              Member::INTEGER,              (void*) QShowEvent::MouseButtonDblClick },
    { "MouseButtonPress",                 Member::INTEGER,              (void*) QShowEvent::MouseButtonPress },
    { "MouseButtonRelease",               Member::INTEGER,              (void*) QShowEvent::MouseButtonRelease },
    { "MouseMove",                        Member::INTEGER,              (void*) QShowEvent::MouseMove },
    { "MouseTrackingChange",              Member::INTEGER,              (void*) QShowEvent::MouseTrackingChange },
    { "Move",                             Member::INTEGER,              (void*) QShowEvent::Move },
    { "NativeGesture",                    Member::INTEGER,              (void*) QShowEvent::NativeGesture },
    { "NonClientAreaMouseButtonDblClick", Member::INTEGER,              (void*) QShowEvent::NonClientAreaMouseButtonDblClick },
    { "NonClientAreaMouseButtonPress",    Member::INTEGER,              (void*) QShowEvent::NonClientAreaMouseButtonPress },
    { "NonClientAreaMouseButtonRelease",  Member::INTEGER,              (void*) QShowEvent::NonClientAreaMouseButtonRelease },
    { "NonClientAreaMouseMove",           Member::INTEGER,              (void*) QShowEvent::NonClientAreaMouseMove },
    { "None",                             Member::INTEGER,              (void*) QShowEvent::None },
    { "OrientationChange",                Member::INTEGER,              (void*) QShowEvent::OrientationChange },
    { "Paint",                            Member::INTEGER,              (void*) QShowEvent::Paint },
    { "PaletteChange",                    Member::INTEGER,              (void*) QShowEvent::PaletteChange },
    { "ParentAboutToChange",              Member::INTEGER,              (void*) QShowEvent::ParentAboutToChange },
    { "ParentChange",                     Member::INTEGER,              (void*) QShowEvent::ParentChange },
    { "ParentWindowAboutToChange",        Member::INTEGER,              (void*) QShowEvent::ParentWindowAboutToChange },
    { "ParentWindowChange",               Member::INTEGER,              (void*) QShowEvent::ParentWindowChange },
    { "PlatformPanel",                    Member::INTEGER,              (void*) QShowEvent::PlatformPanel },
    { "PlatformSurface",                  Member::INTEGER,              (void*) QShowEvent::PlatformSurface },
    { "Polish",                           Member::INTEGER,              (void*) QShowEvent::Polish },
    { "PolishRequest",                    Member::INTEGER,              (void*) QShowEvent::PolishRequest },
    { "QueryWhatsThis",                   Member::INTEGER,              (void*) QShowEvent::QueryWhatsThis },
    { "Quit",                             Member::INTEGER,              (void*) QShowEvent::Quit },
    { "ReadOnlyChange",                   Member::INTEGER,              (void*) QShowEvent::ReadOnlyChange },
    { "RequestSoftwareInputPanel",        Member::INTEGER,              (void*) QShowEvent::RequestSoftwareInputPanel },
    { "Resize",                           Member::INTEGER,              (void*) QShowEvent::Resize },
    { "SafeAreaMarginsChange",            Member::INTEGER,              (void*) QShowEvent::SafeAreaMarginsChange },
    { "Scroll",                           Member::INTEGER,              (void*) QShowEvent::Scroll },
    { "ScrollPrepare",                    Member::INTEGER,              (void*) QShowEvent::ScrollPrepare },
    { "Shortcut",                         Member::INTEGER,              (void*) QShowEvent::Shortcut },
    { "ShortcutOverride",                 Member::INTEGER,              (void*) QShowEvent::ShortcutOverride },
    { "Show",                             Member::INTEGER,              (void*) QShowEvent::Show },
    { "ShowToParent",                     Member::INTEGER,              (void*) QShowEvent::ShowToParent },
    { "SockAct",                          Member::INTEGER,              (void*) QShowEvent::SockAct },
    { "StateMachineSignal",               Member::INTEGER,              (void*) QShowEvent::StateMachineSignal },
    { "StateMachineWrapped",              Member::INTEGER,              (void*) QShowEvent::StateMachineWrapped },
    { "StatusTip",                        Member::INTEGER,              (void*) QShowEvent::StatusTip },
    { "StyleChange",                      Member::INTEGER,              (void*) QShowEvent::StyleChange },
    { "TabletEnterProximity",             Member::INTEGER,              (void*) QShowEvent::TabletEnterProximity },
    { "TabletLeaveProximity",             Member::INTEGER,              (void*) QShowEvent::TabletLeaveProximity },
    { "TabletMove",                       Member::INTEGER,              (void*) QShowEvent::TabletMove },
    { "TabletPress",                      Member::INTEGER,              (void*) QShowEvent::TabletPress },
    { "TabletRelease",                    Member::INTEGER,              (void*) QShowEvent::TabletRelease },
    { "TabletTrackingChange",             Member::INTEGER,              (void*) QShowEvent::TabletTrackingChange },
    { "ThreadChange",                     Member::INTEGER,              (void*) QShowEvent::ThreadChange },
    { "Timer",                            Member::INTEGER,              (void*) QShowEvent::Timer },
    { "ToolBarChange",                    Member::INTEGER,              (void*) QShowEvent::ToolBarChange },
    { "ToolTip",                          Member::INTEGER,              (void*) QShowEvent::ToolTip },
    { "ToolTipChange",                    Member::INTEGER,              (void*) QShowEvent::ToolTipChange },
    { "TouchBegin",                       Member::INTEGER,              (void*) QShowEvent::TouchBegin },
    { "TouchCancel",                      Member::INTEGER,              (void*) QShowEvent::TouchCancel },
    { "TouchEnd",                         Member::INTEGER,              (void*) QShowEvent::TouchEnd },
    { "TouchUpdate",                      Member::INTEGER,              (void*) QShowEvent::TouchUpdate },
    { "UngrabKeyboard",                   Member::INTEGER,              (void*) QShowEvent::UngrabKeyboard },
    { "UngrabMouse",                      Member::INTEGER,              (void*) QShowEvent::UngrabMouse },
    { "UpdateLater",                      Member::INTEGER,              (void*) QShowEvent::UpdateLater },
    { "UpdateRequest",                    Member::INTEGER,              (void*) QShowEvent::UpdateRequest },
    { "WhatsThis",                        Member::INTEGER,              (void*) QShowEvent::WhatsThis },
    { "WhatsThisClicked",                 Member::INTEGER,              (void*) QShowEvent::WhatsThisClicked },
    { "Wheel",                            Member::INTEGER,              (void*) QShowEvent::Wheel },
    { "WinEventAct",                      Member::INTEGER,              (void*) QShowEvent::WinEventAct },
    { "WinIdChange",                      Member::INTEGER,              (void*) QShowEvent::WinIdChange },
    { "WindowActivate",                   Member::INTEGER,              (void*) QShowEvent::WindowActivate },
    { "WindowBlocked",                    Member::INTEGER,              (void*) QShowEvent::WindowBlocked },
    { "WindowDeactivate",                 Member::INTEGER,              (void*) QShowEvent::WindowDeactivate },
    { "WindowIconChange",                 Member::INTEGER,              (void*) QShowEvent::WindowIconChange },
    { "WindowStateChange",                Member::INTEGER,              (void*) QShowEvent::WindowStateChange },
    { "WindowTitleChange",                Member::INTEGER,              (void*) QShowEvent::WindowTitleChange },
    { "WindowUnblocked",                  Member::INTEGER,              (void*) QShowEvent::WindowUnblocked },
    { "ZOrderChange",                     Member::INTEGER,              (void*) QShowEvent::ZOrderChange },
    { "accept",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_accept },
    { "ignore",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_ignore },
    { "isAccepted",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_isAccepted },
    { "setAccepted",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_setAccepted },
    { "type",                             Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_type },
    { NULL,                               Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QShowEventBinding::classInfo = 
{
    "QShowEvent",

    &QEventBinding::classInfo,

    false, // isQObject
    false, // needsGuard
    lqtk_QShowEvent_constructor,
    lqtk_QShowEvent_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    158,
    members
};

/* ============================================================================================ */

int QShowEventBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
