// Type: QInputEvent
// Base: QEvent

/* ============================================================================================ */

#include <QContextMenuEvent>
#include <QEvent>
#include <QInputEvent>
#include <QKeyEvent>
#include <QObject>
#include <QPointerEvent>

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
#include "QContextMenuEventBinding.hpp"
#include "QEventBinding.hpp"
#include "QInputEventBinding.hpp"
#include "QKeyEventBinding.hpp"
#include "QObjectBinding.hpp"
#include "QPointerEventBinding.hpp"

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
        QInputEventBinding::QType* ptr = static_cast<QInputEventBinding::QType*>(objectPtr);
        if (targetClassInfo == &QInputEventBinding::classInfo) {
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
        QInputEvent* ptr = (QInputEvent*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

ObjectUdata* QInputEventBinding::pushObject(lua_State* L, QInputEvent* objPtr, OwnerType ownerType)
{
        QContextMenuEvent* ptr1 = dynamic_cast<QContextMenuEvent*>(objPtr);
        if (ptr1) {
            return QContextMenuEventBinding::pushObject(L, ptr1, ownerType);
        }
        QKeyEvent* ptr2 = dynamic_cast<QKeyEvent*>(objPtr);
        if (ptr2) {
            return QKeyEventBinding::pushObject(L, ptr2, ownerType);
        }
        QPointerEvent* ptr3 = dynamic_cast<QPointerEvent*>(objPtr);
        if (ptr3) {
            return QPointerEventBinding::pushObject(L, ptr3, ownerType);
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
        udata = ObjectUdata::pushNew<QInputEvent>(L, hasUserValue);     // -> uval?, udata
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
    { "ActionAdded",                      Member::INTEGER,              (void*) QInputEvent::ActionAdded },
    { "ActionChanged",                    Member::INTEGER,              (void*) QInputEvent::ActionChanged },
    { "ActionRemoved",                    Member::INTEGER,              (void*) QInputEvent::ActionRemoved },
    { "ActivationChange",                 Member::INTEGER,              (void*) QInputEvent::ActivationChange },
    { "ApplicationActivate",              Member::INTEGER,              (void*) QInputEvent::ApplicationActivate },
    { "ApplicationActivated",             Member::INTEGER,              (void*) QInputEvent::ApplicationActivated },
    { "ApplicationDeactivate",            Member::INTEGER,              (void*) QInputEvent::ApplicationDeactivate },
    { "ApplicationFontChange",            Member::INTEGER,              (void*) QInputEvent::ApplicationFontChange },
    { "ApplicationLayoutDirectionChange", Member::INTEGER,              (void*) QInputEvent::ApplicationLayoutDirectionChange },
    { "ApplicationPaletteChange",         Member::INTEGER,              (void*) QInputEvent::ApplicationPaletteChange },
    { "ApplicationStateChange",           Member::INTEGER,              (void*) QInputEvent::ApplicationStateChange },
    { "ApplicationWindowIconChange",      Member::INTEGER,              (void*) QInputEvent::ApplicationWindowIconChange },
    { "ChildAdded",                       Member::INTEGER,              (void*) QInputEvent::ChildAdded },
    { "ChildPolished",                    Member::INTEGER,              (void*) QInputEvent::ChildPolished },
    { "ChildRemoved",                     Member::INTEGER,              (void*) QInputEvent::ChildRemoved },
    { "ChildWindowAdded",                 Member::INTEGER,              (void*) QInputEvent::ChildWindowAdded },
    { "ChildWindowRemoved",               Member::INTEGER,              (void*) QInputEvent::ChildWindowRemoved },
    { "Clipboard",                        Member::INTEGER,              (void*) QInputEvent::Clipboard },
    { "Close",                            Member::INTEGER,              (void*) QInputEvent::Close },
    { "CloseSoftwareInputPanel",          Member::INTEGER,              (void*) QInputEvent::CloseSoftwareInputPanel },
    { "ContentsRectChange",               Member::INTEGER,              (void*) QInputEvent::ContentsRectChange },
    { "ContextMenu",                      Member::INTEGER,              (void*) QInputEvent::ContextMenu },
    { "CursorChange",                     Member::INTEGER,              (void*) QInputEvent::CursorChange },
    { "DeferredDelete",                   Member::INTEGER,              (void*) QInputEvent::DeferredDelete },
    { "DevicePixelRatioChange",           Member::INTEGER,              (void*) QInputEvent::DevicePixelRatioChange },
    { "DragEnter",                        Member::INTEGER,              (void*) QInputEvent::DragEnter },
    { "DragLeave",                        Member::INTEGER,              (void*) QInputEvent::DragLeave },
    { "DragMove",                         Member::INTEGER,              (void*) QInputEvent::DragMove },
    { "Drop",                             Member::INTEGER,              (void*) QInputEvent::Drop },
    { "DynamicPropertyChange",            Member::INTEGER,              (void*) QInputEvent::DynamicPropertyChange },
    { "EnabledChange",                    Member::INTEGER,              (void*) QInputEvent::EnabledChange },
    { "Enter",                            Member::INTEGER,              (void*) QInputEvent::Enter },
    { "EnterWhatsThisMode",               Member::INTEGER,              (void*) QInputEvent::EnterWhatsThisMode },
    { "Expose",                           Member::INTEGER,              (void*) QInputEvent::Expose },
    { "FileOpen",                         Member::INTEGER,              (void*) QInputEvent::FileOpen },
    { "FocusAboutToChange",               Member::INTEGER,              (void*) QInputEvent::FocusAboutToChange },
    { "FocusIn",                          Member::INTEGER,              (void*) QInputEvent::FocusIn },
    { "FocusOut",                         Member::INTEGER,              (void*) QInputEvent::FocusOut },
    { "FontChange",                       Member::INTEGER,              (void*) QInputEvent::FontChange },
    { "Gesture",                          Member::INTEGER,              (void*) QInputEvent::Gesture },
    { "GestureOverride",                  Member::INTEGER,              (void*) QInputEvent::GestureOverride },
    { "GrabKeyboard",                     Member::INTEGER,              (void*) QInputEvent::GrabKeyboard },
    { "GrabMouse",                        Member::INTEGER,              (void*) QInputEvent::GrabMouse },
    { "GraphicsSceneContextMenu",         Member::INTEGER,              (void*) QInputEvent::GraphicsSceneContextMenu },
    { "GraphicsSceneDragEnter",           Member::INTEGER,              (void*) QInputEvent::GraphicsSceneDragEnter },
    { "GraphicsSceneDragLeave",           Member::INTEGER,              (void*) QInputEvent::GraphicsSceneDragLeave },
    { "GraphicsSceneDragMove",            Member::INTEGER,              (void*) QInputEvent::GraphicsSceneDragMove },
    { "GraphicsSceneDrop",                Member::INTEGER,              (void*) QInputEvent::GraphicsSceneDrop },
    { "GraphicsSceneHelp",                Member::INTEGER,              (void*) QInputEvent::GraphicsSceneHelp },
    { "GraphicsSceneHoverEnter",          Member::INTEGER,              (void*) QInputEvent::GraphicsSceneHoverEnter },
    { "GraphicsSceneHoverLeave",          Member::INTEGER,              (void*) QInputEvent::GraphicsSceneHoverLeave },
    { "GraphicsSceneHoverMove",           Member::INTEGER,              (void*) QInputEvent::GraphicsSceneHoverMove },
    { "GraphicsSceneLeave",               Member::INTEGER,              (void*) QInputEvent::GraphicsSceneLeave },
    { "GraphicsSceneMouseDoubleClick",    Member::INTEGER,              (void*) QInputEvent::GraphicsSceneMouseDoubleClick },
    { "GraphicsSceneMouseMove",           Member::INTEGER,              (void*) QInputEvent::GraphicsSceneMouseMove },
    { "GraphicsSceneMousePress",          Member::INTEGER,              (void*) QInputEvent::GraphicsSceneMousePress },
    { "GraphicsSceneMouseRelease",        Member::INTEGER,              (void*) QInputEvent::GraphicsSceneMouseRelease },
    { "GraphicsSceneMove",                Member::INTEGER,              (void*) QInputEvent::GraphicsSceneMove },
    { "GraphicsSceneResize",              Member::INTEGER,              (void*) QInputEvent::GraphicsSceneResize },
    { "GraphicsSceneWheel",               Member::INTEGER,              (void*) QInputEvent::GraphicsSceneWheel },
    { "Hide",                             Member::INTEGER,              (void*) QInputEvent::Hide },
    { "HideToParent",                     Member::INTEGER,              (void*) QInputEvent::HideToParent },
    { "HoverEnter",                       Member::INTEGER,              (void*) QInputEvent::HoverEnter },
    { "HoverLeave",                       Member::INTEGER,              (void*) QInputEvent::HoverLeave },
    { "HoverMove",                        Member::INTEGER,              (void*) QInputEvent::HoverMove },
    { "IconDrag",                         Member::INTEGER,              (void*) QInputEvent::IconDrag },
    { "IconTextChange",                   Member::INTEGER,              (void*) QInputEvent::IconTextChange },
    { "InputMethod",                      Member::INTEGER,              (void*) QInputEvent::InputMethod },
    { "InputMethodQuery",                 Member::INTEGER,              (void*) QInputEvent::InputMethodQuery },
    { "KeyPress",                         Member::INTEGER,              (void*) QInputEvent::KeyPress },
    { "KeyRelease",                       Member::INTEGER,              (void*) QInputEvent::KeyRelease },
    { "KeyboardLayoutChange",             Member::INTEGER,              (void*) QInputEvent::KeyboardLayoutChange },
    { "LanguageChange",                   Member::INTEGER,              (void*) QInputEvent::LanguageChange },
    { "LayoutDirectionChange",            Member::INTEGER,              (void*) QInputEvent::LayoutDirectionChange },
    { "LayoutRequest",                    Member::INTEGER,              (void*) QInputEvent::LayoutRequest },
    { "Leave",                            Member::INTEGER,              (void*) QInputEvent::Leave },
    { "LeaveWhatsThisMode",               Member::INTEGER,              (void*) QInputEvent::LeaveWhatsThisMode },
    { "LocaleChange",                     Member::INTEGER,              (void*) QInputEvent::LocaleChange },
    { "MacSizeChange",                    Member::INTEGER,              (void*) QInputEvent::MacSizeChange },
    { "MetaCall",                         Member::INTEGER,              (void*) QInputEvent::MetaCall },
    { "ModifiedChange",                   Member::INTEGER,              (void*) QInputEvent::ModifiedChange },
    { "MouseButtonDblClick",              Member::INTEGER,              (void*) QInputEvent::MouseButtonDblClick },
    { "MouseButtonPress",                 Member::INTEGER,              (void*) QInputEvent::MouseButtonPress },
    { "MouseButtonRelease",               Member::INTEGER,              (void*) QInputEvent::MouseButtonRelease },
    { "MouseMove",                        Member::INTEGER,              (void*) QInputEvent::MouseMove },
    { "MouseTrackingChange",              Member::INTEGER,              (void*) QInputEvent::MouseTrackingChange },
    { "Move",                             Member::INTEGER,              (void*) QInputEvent::Move },
    { "NativeGesture",                    Member::INTEGER,              (void*) QInputEvent::NativeGesture },
    { "NonClientAreaMouseButtonDblClick", Member::INTEGER,              (void*) QInputEvent::NonClientAreaMouseButtonDblClick },
    { "NonClientAreaMouseButtonPress",    Member::INTEGER,              (void*) QInputEvent::NonClientAreaMouseButtonPress },
    { "NonClientAreaMouseButtonRelease",  Member::INTEGER,              (void*) QInputEvent::NonClientAreaMouseButtonRelease },
    { "NonClientAreaMouseMove",           Member::INTEGER,              (void*) QInputEvent::NonClientAreaMouseMove },
    { "None",                             Member::INTEGER,              (void*) QInputEvent::None },
    { "OrientationChange",                Member::INTEGER,              (void*) QInputEvent::OrientationChange },
    { "Paint",                            Member::INTEGER,              (void*) QInputEvent::Paint },
    { "PaletteChange",                    Member::INTEGER,              (void*) QInputEvent::PaletteChange },
    { "ParentAboutToChange",              Member::INTEGER,              (void*) QInputEvent::ParentAboutToChange },
    { "ParentChange",                     Member::INTEGER,              (void*) QInputEvent::ParentChange },
    { "ParentWindowAboutToChange",        Member::INTEGER,              (void*) QInputEvent::ParentWindowAboutToChange },
    { "ParentWindowChange",               Member::INTEGER,              (void*) QInputEvent::ParentWindowChange },
    { "PlatformPanel",                    Member::INTEGER,              (void*) QInputEvent::PlatformPanel },
    { "PlatformSurface",                  Member::INTEGER,              (void*) QInputEvent::PlatformSurface },
    { "Polish",                           Member::INTEGER,              (void*) QInputEvent::Polish },
    { "PolishRequest",                    Member::INTEGER,              (void*) QInputEvent::PolishRequest },
    { "QueryWhatsThis",                   Member::INTEGER,              (void*) QInputEvent::QueryWhatsThis },
    { "Quit",                             Member::INTEGER,              (void*) QInputEvent::Quit },
    { "ReadOnlyChange",                   Member::INTEGER,              (void*) QInputEvent::ReadOnlyChange },
    { "RequestSoftwareInputPanel",        Member::INTEGER,              (void*) QInputEvent::RequestSoftwareInputPanel },
    { "Resize",                           Member::INTEGER,              (void*) QInputEvent::Resize },
    { "SafeAreaMarginsChange",            Member::INTEGER,              (void*) QInputEvent::SafeAreaMarginsChange },
    { "Scroll",                           Member::INTEGER,              (void*) QInputEvent::Scroll },
    { "ScrollPrepare",                    Member::INTEGER,              (void*) QInputEvent::ScrollPrepare },
    { "Shortcut",                         Member::INTEGER,              (void*) QInputEvent::Shortcut },
    { "ShortcutOverride",                 Member::INTEGER,              (void*) QInputEvent::ShortcutOverride },
    { "Show",                             Member::INTEGER,              (void*) QInputEvent::Show },
    { "ShowToParent",                     Member::INTEGER,              (void*) QInputEvent::ShowToParent },
    { "SockAct",                          Member::INTEGER,              (void*) QInputEvent::SockAct },
    { "StateMachineSignal",               Member::INTEGER,              (void*) QInputEvent::StateMachineSignal },
    { "StateMachineWrapped",              Member::INTEGER,              (void*) QInputEvent::StateMachineWrapped },
    { "StatusTip",                        Member::INTEGER,              (void*) QInputEvent::StatusTip },
    { "StyleChange",                      Member::INTEGER,              (void*) QInputEvent::StyleChange },
    { "TabletEnterProximity",             Member::INTEGER,              (void*) QInputEvent::TabletEnterProximity },
    { "TabletLeaveProximity",             Member::INTEGER,              (void*) QInputEvent::TabletLeaveProximity },
    { "TabletMove",                       Member::INTEGER,              (void*) QInputEvent::TabletMove },
    { "TabletPress",                      Member::INTEGER,              (void*) QInputEvent::TabletPress },
    { "TabletRelease",                    Member::INTEGER,              (void*) QInputEvent::TabletRelease },
    { "TabletTrackingChange",             Member::INTEGER,              (void*) QInputEvent::TabletTrackingChange },
    { "ThreadChange",                     Member::INTEGER,              (void*) QInputEvent::ThreadChange },
    { "Timer",                            Member::INTEGER,              (void*) QInputEvent::Timer },
    { "ToolBarChange",                    Member::INTEGER,              (void*) QInputEvent::ToolBarChange },
    { "ToolTip",                          Member::INTEGER,              (void*) QInputEvent::ToolTip },
    { "ToolTipChange",                    Member::INTEGER,              (void*) QInputEvent::ToolTipChange },
    { "TouchBegin",                       Member::INTEGER,              (void*) QInputEvent::TouchBegin },
    { "TouchCancel",                      Member::INTEGER,              (void*) QInputEvent::TouchCancel },
    { "TouchEnd",                         Member::INTEGER,              (void*) QInputEvent::TouchEnd },
    { "TouchUpdate",                      Member::INTEGER,              (void*) QInputEvent::TouchUpdate },
    { "UngrabKeyboard",                   Member::INTEGER,              (void*) QInputEvent::UngrabKeyboard },
    { "UngrabMouse",                      Member::INTEGER,              (void*) QInputEvent::UngrabMouse },
    { "UpdateLater",                      Member::INTEGER,              (void*) QInputEvent::UpdateLater },
    { "UpdateRequest",                    Member::INTEGER,              (void*) QInputEvent::UpdateRequest },
    { "WhatsThis",                        Member::INTEGER,              (void*) QInputEvent::WhatsThis },
    { "WhatsThisClicked",                 Member::INTEGER,              (void*) QInputEvent::WhatsThisClicked },
    { "Wheel",                            Member::INTEGER,              (void*) QInputEvent::Wheel },
    { "WinEventAct",                      Member::INTEGER,              (void*) QInputEvent::WinEventAct },
    { "WinIdChange",                      Member::INTEGER,              (void*) QInputEvent::WinIdChange },
    { "WindowActivate",                   Member::INTEGER,              (void*) QInputEvent::WindowActivate },
    { "WindowBlocked",                    Member::INTEGER,              (void*) QInputEvent::WindowBlocked },
    { "WindowDeactivate",                 Member::INTEGER,              (void*) QInputEvent::WindowDeactivate },
    { "WindowIconChange",                 Member::INTEGER,              (void*) QInputEvent::WindowIconChange },
    { "WindowStateChange",                Member::INTEGER,              (void*) QInputEvent::WindowStateChange },
    { "WindowTitleChange",                Member::INTEGER,              (void*) QInputEvent::WindowTitleChange },
    { "WindowUnblocked",                  Member::INTEGER,              (void*) QInputEvent::WindowUnblocked },
    { "ZOrderChange",                     Member::INTEGER,              (void*) QInputEvent::ZOrderChange },
    { "accept",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_accept },
    { "ignore",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_ignore },
    { "isAccepted",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_isAccepted },
    { "setAccepted",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_setAccepted },
    { "type",                             Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_type },
    { NULL,                               Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QInputEventBinding::classInfo = 
{
    "QInputEvent",

    &QEventBinding::classInfo,

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

int QInputEventBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
