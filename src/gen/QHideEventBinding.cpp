// Type: QHideEvent
// Base: QEvent

/* ============================================================================================ */

#include <QEvent>
#include <QHideEvent>
#include <QObject>

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
#include "QHideEventBinding.hpp"
#include "QObjectBinding.hpp"

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
        QHideEventBinding::QType* ptr = static_cast<QHideEventBinding::QType*>(objectPtr);
        if (targetClassInfo == &QHideEventBinding::classInfo) {
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
        QHideEvent* ptr = (QHideEvent*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

struct lqtk_QHideEvent_new_Args
{
    ToLua<QHideEvent*> rslt_1;
};

extern "C" int lqtk_QHideEvent_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QHideEvent_new_Args  argValues;
    lqtk_QHideEvent_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QHideEventBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QHideEvent> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QHideEvent* rslt = 
                    new QHideEvent();
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QHideEvent", "new", nargs, "1");
        } else {
            return util::argCountError(L, "QHideEvent", nullptr, nargs, "0");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QHideEvent_new(lua_State* L)
{
    return lqtk_QHideEvent_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QHideEventBinding::pushObject(lua_State* L, QHideEvent* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QHideEvent>(L, hasUserValue);     // -> uval?, udata
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
    { "ActionAdded",                      Member::INTEGER,              (void*) QHideEvent::ActionAdded },
    { "ActionChanged",                    Member::INTEGER,              (void*) QHideEvent::ActionChanged },
    { "ActionRemoved",                    Member::INTEGER,              (void*) QHideEvent::ActionRemoved },
    { "ActivationChange",                 Member::INTEGER,              (void*) QHideEvent::ActivationChange },
    { "ApplicationActivate",              Member::INTEGER,              (void*) QHideEvent::ApplicationActivate },
    { "ApplicationActivated",             Member::INTEGER,              (void*) QHideEvent::ApplicationActivated },
    { "ApplicationDeactivate",            Member::INTEGER,              (void*) QHideEvent::ApplicationDeactivate },
    { "ApplicationFontChange",            Member::INTEGER,              (void*) QHideEvent::ApplicationFontChange },
    { "ApplicationLayoutDirectionChange", Member::INTEGER,              (void*) QHideEvent::ApplicationLayoutDirectionChange },
    { "ApplicationPaletteChange",         Member::INTEGER,              (void*) QHideEvent::ApplicationPaletteChange },
    { "ApplicationStateChange",           Member::INTEGER,              (void*) QHideEvent::ApplicationStateChange },
    { "ApplicationWindowIconChange",      Member::INTEGER,              (void*) QHideEvent::ApplicationWindowIconChange },
    { "ChildAdded",                       Member::INTEGER,              (void*) QHideEvent::ChildAdded },
    { "ChildPolished",                    Member::INTEGER,              (void*) QHideEvent::ChildPolished },
    { "ChildRemoved",                     Member::INTEGER,              (void*) QHideEvent::ChildRemoved },
    { "ChildWindowAdded",                 Member::INTEGER,              (void*) QHideEvent::ChildWindowAdded },
    { "ChildWindowRemoved",               Member::INTEGER,              (void*) QHideEvent::ChildWindowRemoved },
    { "Clipboard",                        Member::INTEGER,              (void*) QHideEvent::Clipboard },
    { "Close",                            Member::INTEGER,              (void*) QHideEvent::Close },
    { "CloseSoftwareInputPanel",          Member::INTEGER,              (void*) QHideEvent::CloseSoftwareInputPanel },
    { "ContentsRectChange",               Member::INTEGER,              (void*) QHideEvent::ContentsRectChange },
    { "ContextMenu",                      Member::INTEGER,              (void*) QHideEvent::ContextMenu },
    { "CursorChange",                     Member::INTEGER,              (void*) QHideEvent::CursorChange },
    { "DeferredDelete",                   Member::INTEGER,              (void*) QHideEvent::DeferredDelete },
    { "DevicePixelRatioChange",           Member::INTEGER,              (void*) QHideEvent::DevicePixelRatioChange },
    { "DragEnter",                        Member::INTEGER,              (void*) QHideEvent::DragEnter },
    { "DragLeave",                        Member::INTEGER,              (void*) QHideEvent::DragLeave },
    { "DragMove",                         Member::INTEGER,              (void*) QHideEvent::DragMove },
    { "Drop",                             Member::INTEGER,              (void*) QHideEvent::Drop },
    { "DynamicPropertyChange",            Member::INTEGER,              (void*) QHideEvent::DynamicPropertyChange },
    { "EnabledChange",                    Member::INTEGER,              (void*) QHideEvent::EnabledChange },
    { "Enter",                            Member::INTEGER,              (void*) QHideEvent::Enter },
    { "EnterWhatsThisMode",               Member::INTEGER,              (void*) QHideEvent::EnterWhatsThisMode },
    { "Expose",                           Member::INTEGER,              (void*) QHideEvent::Expose },
    { "FileOpen",                         Member::INTEGER,              (void*) QHideEvent::FileOpen },
    { "FocusAboutToChange",               Member::INTEGER,              (void*) QHideEvent::FocusAboutToChange },
    { "FocusIn",                          Member::INTEGER,              (void*) QHideEvent::FocusIn },
    { "FocusOut",                         Member::INTEGER,              (void*) QHideEvent::FocusOut },
    { "FontChange",                       Member::INTEGER,              (void*) QHideEvent::FontChange },
    { "Gesture",                          Member::INTEGER,              (void*) QHideEvent::Gesture },
    { "GestureOverride",                  Member::INTEGER,              (void*) QHideEvent::GestureOverride },
    { "GrabKeyboard",                     Member::INTEGER,              (void*) QHideEvent::GrabKeyboard },
    { "GrabMouse",                        Member::INTEGER,              (void*) QHideEvent::GrabMouse },
    { "GraphicsSceneContextMenu",         Member::INTEGER,              (void*) QHideEvent::GraphicsSceneContextMenu },
    { "GraphicsSceneDragEnter",           Member::INTEGER,              (void*) QHideEvent::GraphicsSceneDragEnter },
    { "GraphicsSceneDragLeave",           Member::INTEGER,              (void*) QHideEvent::GraphicsSceneDragLeave },
    { "GraphicsSceneDragMove",            Member::INTEGER,              (void*) QHideEvent::GraphicsSceneDragMove },
    { "GraphicsSceneDrop",                Member::INTEGER,              (void*) QHideEvent::GraphicsSceneDrop },
    { "GraphicsSceneHelp",                Member::INTEGER,              (void*) QHideEvent::GraphicsSceneHelp },
    { "GraphicsSceneHoverEnter",          Member::INTEGER,              (void*) QHideEvent::GraphicsSceneHoverEnter },
    { "GraphicsSceneHoverLeave",          Member::INTEGER,              (void*) QHideEvent::GraphicsSceneHoverLeave },
    { "GraphicsSceneHoverMove",           Member::INTEGER,              (void*) QHideEvent::GraphicsSceneHoverMove },
    { "GraphicsSceneLeave",               Member::INTEGER,              (void*) QHideEvent::GraphicsSceneLeave },
    { "GraphicsSceneMouseDoubleClick",    Member::INTEGER,              (void*) QHideEvent::GraphicsSceneMouseDoubleClick },
    { "GraphicsSceneMouseMove",           Member::INTEGER,              (void*) QHideEvent::GraphicsSceneMouseMove },
    { "GraphicsSceneMousePress",          Member::INTEGER,              (void*) QHideEvent::GraphicsSceneMousePress },
    { "GraphicsSceneMouseRelease",        Member::INTEGER,              (void*) QHideEvent::GraphicsSceneMouseRelease },
    { "GraphicsSceneMove",                Member::INTEGER,              (void*) QHideEvent::GraphicsSceneMove },
    { "GraphicsSceneResize",              Member::INTEGER,              (void*) QHideEvent::GraphicsSceneResize },
    { "GraphicsSceneWheel",               Member::INTEGER,              (void*) QHideEvent::GraphicsSceneWheel },
    { "Hide",                             Member::INTEGER,              (void*) QHideEvent::Hide },
    { "HideToParent",                     Member::INTEGER,              (void*) QHideEvent::HideToParent },
    { "HoverEnter",                       Member::INTEGER,              (void*) QHideEvent::HoverEnter },
    { "HoverLeave",                       Member::INTEGER,              (void*) QHideEvent::HoverLeave },
    { "HoverMove",                        Member::INTEGER,              (void*) QHideEvent::HoverMove },
    { "IconDrag",                         Member::INTEGER,              (void*) QHideEvent::IconDrag },
    { "IconTextChange",                   Member::INTEGER,              (void*) QHideEvent::IconTextChange },
    { "InputMethod",                      Member::INTEGER,              (void*) QHideEvent::InputMethod },
    { "InputMethodQuery",                 Member::INTEGER,              (void*) QHideEvent::InputMethodQuery },
    { "KeyPress",                         Member::INTEGER,              (void*) QHideEvent::KeyPress },
    { "KeyRelease",                       Member::INTEGER,              (void*) QHideEvent::KeyRelease },
    { "KeyboardLayoutChange",             Member::INTEGER,              (void*) QHideEvent::KeyboardLayoutChange },
    { "LanguageChange",                   Member::INTEGER,              (void*) QHideEvent::LanguageChange },
    { "LayoutDirectionChange",            Member::INTEGER,              (void*) QHideEvent::LayoutDirectionChange },
    { "LayoutRequest",                    Member::INTEGER,              (void*) QHideEvent::LayoutRequest },
    { "Leave",                            Member::INTEGER,              (void*) QHideEvent::Leave },
    { "LeaveWhatsThisMode",               Member::INTEGER,              (void*) QHideEvent::LeaveWhatsThisMode },
    { "LocaleChange",                     Member::INTEGER,              (void*) QHideEvent::LocaleChange },
    { "MacSizeChange",                    Member::INTEGER,              (void*) QHideEvent::MacSizeChange },
    { "MetaCall",                         Member::INTEGER,              (void*) QHideEvent::MetaCall },
    { "ModifiedChange",                   Member::INTEGER,              (void*) QHideEvent::ModifiedChange },
    { "MouseButtonDblClick",              Member::INTEGER,              (void*) QHideEvent::MouseButtonDblClick },
    { "MouseButtonPress",                 Member::INTEGER,              (void*) QHideEvent::MouseButtonPress },
    { "MouseButtonRelease",               Member::INTEGER,              (void*) QHideEvent::MouseButtonRelease },
    { "MouseMove",                        Member::INTEGER,              (void*) QHideEvent::MouseMove },
    { "MouseTrackingChange",              Member::INTEGER,              (void*) QHideEvent::MouseTrackingChange },
    { "Move",                             Member::INTEGER,              (void*) QHideEvent::Move },
    { "NativeGesture",                    Member::INTEGER,              (void*) QHideEvent::NativeGesture },
    { "NonClientAreaMouseButtonDblClick", Member::INTEGER,              (void*) QHideEvent::NonClientAreaMouseButtonDblClick },
    { "NonClientAreaMouseButtonPress",    Member::INTEGER,              (void*) QHideEvent::NonClientAreaMouseButtonPress },
    { "NonClientAreaMouseButtonRelease",  Member::INTEGER,              (void*) QHideEvent::NonClientAreaMouseButtonRelease },
    { "NonClientAreaMouseMove",           Member::INTEGER,              (void*) QHideEvent::NonClientAreaMouseMove },
    { "None",                             Member::INTEGER,              (void*) QHideEvent::None },
    { "OrientationChange",                Member::INTEGER,              (void*) QHideEvent::OrientationChange },
    { "Paint",                            Member::INTEGER,              (void*) QHideEvent::Paint },
    { "PaletteChange",                    Member::INTEGER,              (void*) QHideEvent::PaletteChange },
    { "ParentAboutToChange",              Member::INTEGER,              (void*) QHideEvent::ParentAboutToChange },
    { "ParentChange",                     Member::INTEGER,              (void*) QHideEvent::ParentChange },
    { "ParentWindowAboutToChange",        Member::INTEGER,              (void*) QHideEvent::ParentWindowAboutToChange },
    { "ParentWindowChange",               Member::INTEGER,              (void*) QHideEvent::ParentWindowChange },
    { "PlatformPanel",                    Member::INTEGER,              (void*) QHideEvent::PlatformPanel },
    { "PlatformSurface",                  Member::INTEGER,              (void*) QHideEvent::PlatformSurface },
    { "Polish",                           Member::INTEGER,              (void*) QHideEvent::Polish },
    { "PolishRequest",                    Member::INTEGER,              (void*) QHideEvent::PolishRequest },
    { "QueryWhatsThis",                   Member::INTEGER,              (void*) QHideEvent::QueryWhatsThis },
    { "Quit",                             Member::INTEGER,              (void*) QHideEvent::Quit },
    { "ReadOnlyChange",                   Member::INTEGER,              (void*) QHideEvent::ReadOnlyChange },
    { "RequestSoftwareInputPanel",        Member::INTEGER,              (void*) QHideEvent::RequestSoftwareInputPanel },
    { "Resize",                           Member::INTEGER,              (void*) QHideEvent::Resize },
    { "SafeAreaMarginsChange",            Member::INTEGER,              (void*) QHideEvent::SafeAreaMarginsChange },
    { "Scroll",                           Member::INTEGER,              (void*) QHideEvent::Scroll },
    { "ScrollPrepare",                    Member::INTEGER,              (void*) QHideEvent::ScrollPrepare },
    { "Shortcut",                         Member::INTEGER,              (void*) QHideEvent::Shortcut },
    { "ShortcutOverride",                 Member::INTEGER,              (void*) QHideEvent::ShortcutOverride },
    { "Show",                             Member::INTEGER,              (void*) QHideEvent::Show },
    { "ShowToParent",                     Member::INTEGER,              (void*) QHideEvent::ShowToParent },
    { "SockAct",                          Member::INTEGER,              (void*) QHideEvent::SockAct },
    { "StateMachineSignal",               Member::INTEGER,              (void*) QHideEvent::StateMachineSignal },
    { "StateMachineWrapped",              Member::INTEGER,              (void*) QHideEvent::StateMachineWrapped },
    { "StatusTip",                        Member::INTEGER,              (void*) QHideEvent::StatusTip },
    { "StyleChange",                      Member::INTEGER,              (void*) QHideEvent::StyleChange },
    { "TabletEnterProximity",             Member::INTEGER,              (void*) QHideEvent::TabletEnterProximity },
    { "TabletLeaveProximity",             Member::INTEGER,              (void*) QHideEvent::TabletLeaveProximity },
    { "TabletMove",                       Member::INTEGER,              (void*) QHideEvent::TabletMove },
    { "TabletPress",                      Member::INTEGER,              (void*) QHideEvent::TabletPress },
    { "TabletRelease",                    Member::INTEGER,              (void*) QHideEvent::TabletRelease },
    { "TabletTrackingChange",             Member::INTEGER,              (void*) QHideEvent::TabletTrackingChange },
    { "ThreadChange",                     Member::INTEGER,              (void*) QHideEvent::ThreadChange },
    { "Timer",                            Member::INTEGER,              (void*) QHideEvent::Timer },
    { "ToolBarChange",                    Member::INTEGER,              (void*) QHideEvent::ToolBarChange },
    { "ToolTip",                          Member::INTEGER,              (void*) QHideEvent::ToolTip },
    { "ToolTipChange",                    Member::INTEGER,              (void*) QHideEvent::ToolTipChange },
    { "TouchBegin",                       Member::INTEGER,              (void*) QHideEvent::TouchBegin },
    { "TouchCancel",                      Member::INTEGER,              (void*) QHideEvent::TouchCancel },
    { "TouchEnd",                         Member::INTEGER,              (void*) QHideEvent::TouchEnd },
    { "TouchUpdate",                      Member::INTEGER,              (void*) QHideEvent::TouchUpdate },
    { "UngrabKeyboard",                   Member::INTEGER,              (void*) QHideEvent::UngrabKeyboard },
    { "UngrabMouse",                      Member::INTEGER,              (void*) QHideEvent::UngrabMouse },
    { "UpdateLater",                      Member::INTEGER,              (void*) QHideEvent::UpdateLater },
    { "UpdateRequest",                    Member::INTEGER,              (void*) QHideEvent::UpdateRequest },
    { "WhatsThis",                        Member::INTEGER,              (void*) QHideEvent::WhatsThis },
    { "WhatsThisClicked",                 Member::INTEGER,              (void*) QHideEvent::WhatsThisClicked },
    { "Wheel",                            Member::INTEGER,              (void*) QHideEvent::Wheel },
    { "WinEventAct",                      Member::INTEGER,              (void*) QHideEvent::WinEventAct },
    { "WinIdChange",                      Member::INTEGER,              (void*) QHideEvent::WinIdChange },
    { "WindowActivate",                   Member::INTEGER,              (void*) QHideEvent::WindowActivate },
    { "WindowBlocked",                    Member::INTEGER,              (void*) QHideEvent::WindowBlocked },
    { "WindowDeactivate",                 Member::INTEGER,              (void*) QHideEvent::WindowDeactivate },
    { "WindowIconChange",                 Member::INTEGER,              (void*) QHideEvent::WindowIconChange },
    { "WindowStateChange",                Member::INTEGER,              (void*) QHideEvent::WindowStateChange },
    { "WindowTitleChange",                Member::INTEGER,              (void*) QHideEvent::WindowTitleChange },
    { "WindowUnblocked",                  Member::INTEGER,              (void*) QHideEvent::WindowUnblocked },
    { "ZOrderChange",                     Member::INTEGER,              (void*) QHideEvent::ZOrderChange },
    { "accept",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_accept },
    { "ignore",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_ignore },
    { "isAccepted",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_isAccepted },
    { "setAccepted",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_setAccepted },
    { "type",                             Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_type },
    { NULL,                               Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QHideEventBinding::classInfo = 
{
    "QHideEvent",

    &QEventBinding::classInfo,

    false, // isQObject
    false, // needsGuard
    lqtk_QHideEvent_constructor,
    lqtk_QHideEvent_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    158,
    members
};

/* ============================================================================================ */

int QHideEventBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
