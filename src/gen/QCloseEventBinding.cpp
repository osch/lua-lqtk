// Type: QCloseEvent
// Base: QEvent

/* ============================================================================================ */

#include <QCloseEvent>
#include <QEvent>
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
#include "QCloseEventBinding.hpp"
#include "QEventBinding.hpp"
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
        QCloseEventBinding::QType* ptr = static_cast<QCloseEventBinding::QType*>(objectPtr);
        if (targetClassInfo == &QCloseEventBinding::classInfo) {
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
        QCloseEvent* ptr = (QCloseEvent*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QCloseEvent_new_Args
{
    ToLua<QCloseEvent*> rslt_1;
};

extern "C" int lqtk_QCloseEvent_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QCloseEvent_new_Args  argValues;
    lqtk_QCloseEvent_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QCloseEventBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QCloseEvent> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QCloseEvent* rslt = 
                    new QCloseEvent();
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QCloseEvent", "new", nargs, "1");
        } else {
            return util::argCountError(L, "QCloseEvent", nullptr, nargs, "0");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QCloseEvent_new(lua_State* L)
{
    return lqtk_QCloseEvent_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QCloseEventBinding::pushObject(lua_State* L, QCloseEvent* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QCloseEvent>(L, hasUserValue);     // -> uval?, udata
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
    { "ActionAdded",                      Member::INTEGER,              (void*) QCloseEvent::ActionAdded },
    { "ActionChanged",                    Member::INTEGER,              (void*) QCloseEvent::ActionChanged },
    { "ActionRemoved",                    Member::INTEGER,              (void*) QCloseEvent::ActionRemoved },
    { "ActivationChange",                 Member::INTEGER,              (void*) QCloseEvent::ActivationChange },
    { "ApplicationActivate",              Member::INTEGER,              (void*) QCloseEvent::ApplicationActivate },
    { "ApplicationActivated",             Member::INTEGER,              (void*) QCloseEvent::ApplicationActivated },
    { "ApplicationDeactivate",            Member::INTEGER,              (void*) QCloseEvent::ApplicationDeactivate },
    { "ApplicationFontChange",            Member::INTEGER,              (void*) QCloseEvent::ApplicationFontChange },
    { "ApplicationLayoutDirectionChange", Member::INTEGER,              (void*) QCloseEvent::ApplicationLayoutDirectionChange },
    { "ApplicationPaletteChange",         Member::INTEGER,              (void*) QCloseEvent::ApplicationPaletteChange },
    { "ApplicationStateChange",           Member::INTEGER,              (void*) QCloseEvent::ApplicationStateChange },
    { "ApplicationWindowIconChange",      Member::INTEGER,              (void*) QCloseEvent::ApplicationWindowIconChange },
    { "ChildAdded",                       Member::INTEGER,              (void*) QCloseEvent::ChildAdded },
    { "ChildPolished",                    Member::INTEGER,              (void*) QCloseEvent::ChildPolished },
    { "ChildRemoved",                     Member::INTEGER,              (void*) QCloseEvent::ChildRemoved },
    { "ChildWindowAdded",                 Member::INTEGER,              (void*) QCloseEvent::ChildWindowAdded },
    { "ChildWindowRemoved",               Member::INTEGER,              (void*) QCloseEvent::ChildWindowRemoved },
    { "Clipboard",                        Member::INTEGER,              (void*) QCloseEvent::Clipboard },
    { "Close",                            Member::INTEGER,              (void*) QCloseEvent::Close },
    { "CloseSoftwareInputPanel",          Member::INTEGER,              (void*) QCloseEvent::CloseSoftwareInputPanel },
    { "ContentsRectChange",               Member::INTEGER,              (void*) QCloseEvent::ContentsRectChange },
    { "ContextMenu",                      Member::INTEGER,              (void*) QCloseEvent::ContextMenu },
    { "CursorChange",                     Member::INTEGER,              (void*) QCloseEvent::CursorChange },
    { "DeferredDelete",                   Member::INTEGER,              (void*) QCloseEvent::DeferredDelete },
    { "DevicePixelRatioChange",           Member::INTEGER,              (void*) QCloseEvent::DevicePixelRatioChange },
    { "DragEnter",                        Member::INTEGER,              (void*) QCloseEvent::DragEnter },
    { "DragLeave",                        Member::INTEGER,              (void*) QCloseEvent::DragLeave },
    { "DragMove",                         Member::INTEGER,              (void*) QCloseEvent::DragMove },
    { "Drop",                             Member::INTEGER,              (void*) QCloseEvent::Drop },
    { "DynamicPropertyChange",            Member::INTEGER,              (void*) QCloseEvent::DynamicPropertyChange },
    { "EnabledChange",                    Member::INTEGER,              (void*) QCloseEvent::EnabledChange },
    { "Enter",                            Member::INTEGER,              (void*) QCloseEvent::Enter },
    { "EnterWhatsThisMode",               Member::INTEGER,              (void*) QCloseEvent::EnterWhatsThisMode },
    { "Expose",                           Member::INTEGER,              (void*) QCloseEvent::Expose },
    { "FileOpen",                         Member::INTEGER,              (void*) QCloseEvent::FileOpen },
    { "FocusAboutToChange",               Member::INTEGER,              (void*) QCloseEvent::FocusAboutToChange },
    { "FocusIn",                          Member::INTEGER,              (void*) QCloseEvent::FocusIn },
    { "FocusOut",                         Member::INTEGER,              (void*) QCloseEvent::FocusOut },
    { "FontChange",                       Member::INTEGER,              (void*) QCloseEvent::FontChange },
    { "Gesture",                          Member::INTEGER,              (void*) QCloseEvent::Gesture },
    { "GestureOverride",                  Member::INTEGER,              (void*) QCloseEvent::GestureOverride },
    { "GrabKeyboard",                     Member::INTEGER,              (void*) QCloseEvent::GrabKeyboard },
    { "GrabMouse",                        Member::INTEGER,              (void*) QCloseEvent::GrabMouse },
    { "GraphicsSceneContextMenu",         Member::INTEGER,              (void*) QCloseEvent::GraphicsSceneContextMenu },
    { "GraphicsSceneDragEnter",           Member::INTEGER,              (void*) QCloseEvent::GraphicsSceneDragEnter },
    { "GraphicsSceneDragLeave",           Member::INTEGER,              (void*) QCloseEvent::GraphicsSceneDragLeave },
    { "GraphicsSceneDragMove",            Member::INTEGER,              (void*) QCloseEvent::GraphicsSceneDragMove },
    { "GraphicsSceneDrop",                Member::INTEGER,              (void*) QCloseEvent::GraphicsSceneDrop },
    { "GraphicsSceneHelp",                Member::INTEGER,              (void*) QCloseEvent::GraphicsSceneHelp },
    { "GraphicsSceneHoverEnter",          Member::INTEGER,              (void*) QCloseEvent::GraphicsSceneHoverEnter },
    { "GraphicsSceneHoverLeave",          Member::INTEGER,              (void*) QCloseEvent::GraphicsSceneHoverLeave },
    { "GraphicsSceneHoverMove",           Member::INTEGER,              (void*) QCloseEvent::GraphicsSceneHoverMove },
    { "GraphicsSceneLeave",               Member::INTEGER,              (void*) QCloseEvent::GraphicsSceneLeave },
    { "GraphicsSceneMouseDoubleClick",    Member::INTEGER,              (void*) QCloseEvent::GraphicsSceneMouseDoubleClick },
    { "GraphicsSceneMouseMove",           Member::INTEGER,              (void*) QCloseEvent::GraphicsSceneMouseMove },
    { "GraphicsSceneMousePress",          Member::INTEGER,              (void*) QCloseEvent::GraphicsSceneMousePress },
    { "GraphicsSceneMouseRelease",        Member::INTEGER,              (void*) QCloseEvent::GraphicsSceneMouseRelease },
    { "GraphicsSceneMove",                Member::INTEGER,              (void*) QCloseEvent::GraphicsSceneMove },
    { "GraphicsSceneResize",              Member::INTEGER,              (void*) QCloseEvent::GraphicsSceneResize },
    { "GraphicsSceneWheel",               Member::INTEGER,              (void*) QCloseEvent::GraphicsSceneWheel },
    { "Hide",                             Member::INTEGER,              (void*) QCloseEvent::Hide },
    { "HideToParent",                     Member::INTEGER,              (void*) QCloseEvent::HideToParent },
    { "HoverEnter",                       Member::INTEGER,              (void*) QCloseEvent::HoverEnter },
    { "HoverLeave",                       Member::INTEGER,              (void*) QCloseEvent::HoverLeave },
    { "HoverMove",                        Member::INTEGER,              (void*) QCloseEvent::HoverMove },
    { "IconDrag",                         Member::INTEGER,              (void*) QCloseEvent::IconDrag },
    { "IconTextChange",                   Member::INTEGER,              (void*) QCloseEvent::IconTextChange },
    { "InputMethod",                      Member::INTEGER,              (void*) QCloseEvent::InputMethod },
    { "InputMethodQuery",                 Member::INTEGER,              (void*) QCloseEvent::InputMethodQuery },
    { "KeyPress",                         Member::INTEGER,              (void*) QCloseEvent::KeyPress },
    { "KeyRelease",                       Member::INTEGER,              (void*) QCloseEvent::KeyRelease },
    { "KeyboardLayoutChange",             Member::INTEGER,              (void*) QCloseEvent::KeyboardLayoutChange },
    { "LanguageChange",                   Member::INTEGER,              (void*) QCloseEvent::LanguageChange },
    { "LayoutDirectionChange",            Member::INTEGER,              (void*) QCloseEvent::LayoutDirectionChange },
    { "LayoutRequest",                    Member::INTEGER,              (void*) QCloseEvent::LayoutRequest },
    { "Leave",                            Member::INTEGER,              (void*) QCloseEvent::Leave },
    { "LeaveWhatsThisMode",               Member::INTEGER,              (void*) QCloseEvent::LeaveWhatsThisMode },
    { "LocaleChange",                     Member::INTEGER,              (void*) QCloseEvent::LocaleChange },
    { "MacSizeChange",                    Member::INTEGER,              (void*) QCloseEvent::MacSizeChange },
    { "MetaCall",                         Member::INTEGER,              (void*) QCloseEvent::MetaCall },
    { "ModifiedChange",                   Member::INTEGER,              (void*) QCloseEvent::ModifiedChange },
    { "MouseButtonDblClick",              Member::INTEGER,              (void*) QCloseEvent::MouseButtonDblClick },
    { "MouseButtonPress",                 Member::INTEGER,              (void*) QCloseEvent::MouseButtonPress },
    { "MouseButtonRelease",               Member::INTEGER,              (void*) QCloseEvent::MouseButtonRelease },
    { "MouseMove",                        Member::INTEGER,              (void*) QCloseEvent::MouseMove },
    { "MouseTrackingChange",              Member::INTEGER,              (void*) QCloseEvent::MouseTrackingChange },
    { "Move",                             Member::INTEGER,              (void*) QCloseEvent::Move },
    { "NativeGesture",                    Member::INTEGER,              (void*) QCloseEvent::NativeGesture },
    { "NonClientAreaMouseButtonDblClick", Member::INTEGER,              (void*) QCloseEvent::NonClientAreaMouseButtonDblClick },
    { "NonClientAreaMouseButtonPress",    Member::INTEGER,              (void*) QCloseEvent::NonClientAreaMouseButtonPress },
    { "NonClientAreaMouseButtonRelease",  Member::INTEGER,              (void*) QCloseEvent::NonClientAreaMouseButtonRelease },
    { "NonClientAreaMouseMove",           Member::INTEGER,              (void*) QCloseEvent::NonClientAreaMouseMove },
    { "None",                             Member::INTEGER,              (void*) QCloseEvent::None },
    { "OrientationChange",                Member::INTEGER,              (void*) QCloseEvent::OrientationChange },
    { "Paint",                            Member::INTEGER,              (void*) QCloseEvent::Paint },
    { "PaletteChange",                    Member::INTEGER,              (void*) QCloseEvent::PaletteChange },
    { "ParentAboutToChange",              Member::INTEGER,              (void*) QCloseEvent::ParentAboutToChange },
    { "ParentChange",                     Member::INTEGER,              (void*) QCloseEvent::ParentChange },
    { "ParentWindowAboutToChange",        Member::INTEGER,              (void*) QCloseEvent::ParentWindowAboutToChange },
    { "ParentWindowChange",               Member::INTEGER,              (void*) QCloseEvent::ParentWindowChange },
    { "PlatformPanel",                    Member::INTEGER,              (void*) QCloseEvent::PlatformPanel },
    { "PlatformSurface",                  Member::INTEGER,              (void*) QCloseEvent::PlatformSurface },
    { "Polish",                           Member::INTEGER,              (void*) QCloseEvent::Polish },
    { "PolishRequest",                    Member::INTEGER,              (void*) QCloseEvent::PolishRequest },
    { "QueryWhatsThis",                   Member::INTEGER,              (void*) QCloseEvent::QueryWhatsThis },
    { "Quit",                             Member::INTEGER,              (void*) QCloseEvent::Quit },
    { "ReadOnlyChange",                   Member::INTEGER,              (void*) QCloseEvent::ReadOnlyChange },
    { "RequestSoftwareInputPanel",        Member::INTEGER,              (void*) QCloseEvent::RequestSoftwareInputPanel },
    { "Resize",                           Member::INTEGER,              (void*) QCloseEvent::Resize },
    { "SafeAreaMarginsChange",            Member::INTEGER,              (void*) QCloseEvent::SafeAreaMarginsChange },
    { "Scroll",                           Member::INTEGER,              (void*) QCloseEvent::Scroll },
    { "ScrollPrepare",                    Member::INTEGER,              (void*) QCloseEvent::ScrollPrepare },
    { "Shortcut",                         Member::INTEGER,              (void*) QCloseEvent::Shortcut },
    { "ShortcutOverride",                 Member::INTEGER,              (void*) QCloseEvent::ShortcutOverride },
    { "Show",                             Member::INTEGER,              (void*) QCloseEvent::Show },
    { "ShowToParent",                     Member::INTEGER,              (void*) QCloseEvent::ShowToParent },
    { "SockAct",                          Member::INTEGER,              (void*) QCloseEvent::SockAct },
    { "StateMachineSignal",               Member::INTEGER,              (void*) QCloseEvent::StateMachineSignal },
    { "StateMachineWrapped",              Member::INTEGER,              (void*) QCloseEvent::StateMachineWrapped },
    { "StatusTip",                        Member::INTEGER,              (void*) QCloseEvent::StatusTip },
    { "StyleChange",                      Member::INTEGER,              (void*) QCloseEvent::StyleChange },
    { "TabletEnterProximity",             Member::INTEGER,              (void*) QCloseEvent::TabletEnterProximity },
    { "TabletLeaveProximity",             Member::INTEGER,              (void*) QCloseEvent::TabletLeaveProximity },
    { "TabletMove",                       Member::INTEGER,              (void*) QCloseEvent::TabletMove },
    { "TabletPress",                      Member::INTEGER,              (void*) QCloseEvent::TabletPress },
    { "TabletRelease",                    Member::INTEGER,              (void*) QCloseEvent::TabletRelease },
    { "TabletTrackingChange",             Member::INTEGER,              (void*) QCloseEvent::TabletTrackingChange },
    { "ThreadChange",                     Member::INTEGER,              (void*) QCloseEvent::ThreadChange },
    { "Timer",                            Member::INTEGER,              (void*) QCloseEvent::Timer },
    { "ToolBarChange",                    Member::INTEGER,              (void*) QCloseEvent::ToolBarChange },
    { "ToolTip",                          Member::INTEGER,              (void*) QCloseEvent::ToolTip },
    { "ToolTipChange",                    Member::INTEGER,              (void*) QCloseEvent::ToolTipChange },
    { "TouchBegin",                       Member::INTEGER,              (void*) QCloseEvent::TouchBegin },
    { "TouchCancel",                      Member::INTEGER,              (void*) QCloseEvent::TouchCancel },
    { "TouchEnd",                         Member::INTEGER,              (void*) QCloseEvent::TouchEnd },
    { "TouchUpdate",                      Member::INTEGER,              (void*) QCloseEvent::TouchUpdate },
    { "UngrabKeyboard",                   Member::INTEGER,              (void*) QCloseEvent::UngrabKeyboard },
    { "UngrabMouse",                      Member::INTEGER,              (void*) QCloseEvent::UngrabMouse },
    { "UpdateLater",                      Member::INTEGER,              (void*) QCloseEvent::UpdateLater },
    { "UpdateRequest",                    Member::INTEGER,              (void*) QCloseEvent::UpdateRequest },
    { "WhatsThis",                        Member::INTEGER,              (void*) QCloseEvent::WhatsThis },
    { "WhatsThisClicked",                 Member::INTEGER,              (void*) QCloseEvent::WhatsThisClicked },
    { "Wheel",                            Member::INTEGER,              (void*) QCloseEvent::Wheel },
    { "WinEventAct",                      Member::INTEGER,              (void*) QCloseEvent::WinEventAct },
    { "WinIdChange",                      Member::INTEGER,              (void*) QCloseEvent::WinIdChange },
    { "WindowActivate",                   Member::INTEGER,              (void*) QCloseEvent::WindowActivate },
    { "WindowBlocked",                    Member::INTEGER,              (void*) QCloseEvent::WindowBlocked },
    { "WindowDeactivate",                 Member::INTEGER,              (void*) QCloseEvent::WindowDeactivate },
    { "WindowIconChange",                 Member::INTEGER,              (void*) QCloseEvent::WindowIconChange },
    { "WindowStateChange",                Member::INTEGER,              (void*) QCloseEvent::WindowStateChange },
    { "WindowTitleChange",                Member::INTEGER,              (void*) QCloseEvent::WindowTitleChange },
    { "WindowUnblocked",                  Member::INTEGER,              (void*) QCloseEvent::WindowUnblocked },
    { "ZOrderChange",                     Member::INTEGER,              (void*) QCloseEvent::ZOrderChange },
    { "accept",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_accept },
    { "ignore",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_ignore },
    { "isAccepted",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_isAccepted },
    { "setAccepted",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_setAccepted },
    { "type",                             Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_type },
    { NULL,                               Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QCloseEventBinding::classInfo = 
{
    "QCloseEvent",

    &QEventBinding::classInfo,

    false, // isQObject
    false, // needsGuard
    lqtk_QCloseEvent_constructor,
    lqtk_QCloseEvent_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    158,
    members
};

/* ============================================================================================ */

int QCloseEventBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
