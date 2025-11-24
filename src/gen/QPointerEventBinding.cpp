// Type: QPointerEvent
// Base: QInputEvent

/* ============================================================================================ */

#include <QEvent>
#include <QInputEvent>
#include <QObject>
#include <QPointerEvent>
#include <QSinglePointEvent>

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
#include "QObjectBinding.hpp"
#include "QPointerEventBinding.hpp"
#include "QSinglePointEventBinding.hpp"

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
        QPointerEventBinding::QType* ptr = static_cast<QPointerEventBinding::QType*>(objectPtr);
        if (targetClassInfo == &QPointerEventBinding::classInfo) {
            return ptr;
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
        QPointerEvent* ptr = (QPointerEvent*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

ObjectUdata* QPointerEventBinding::pushObject(lua_State* L, QPointerEvent* objPtr, OwnerType ownerType)
{
        QSinglePointEvent* ptr1 = dynamic_cast<QSinglePointEvent*>(objPtr);
        if (ptr1) {
            return QSinglePointEventBinding::pushObject(L, ptr1, ownerType);
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
        udata = ObjectUdata::pushNew<QPointerEvent>(L, hasUserValue);     // -> uval?, udata
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
    { "ActionAdded",                      Member::INTEGER,              (void*) QPointerEvent::ActionAdded },
    { "ActionChanged",                    Member::INTEGER,              (void*) QPointerEvent::ActionChanged },
    { "ActionRemoved",                    Member::INTEGER,              (void*) QPointerEvent::ActionRemoved },
    { "ActivationChange",                 Member::INTEGER,              (void*) QPointerEvent::ActivationChange },
    { "ApplicationActivate",              Member::INTEGER,              (void*) QPointerEvent::ApplicationActivate },
    { "ApplicationActivated",             Member::INTEGER,              (void*) QPointerEvent::ApplicationActivated },
    { "ApplicationDeactivate",            Member::INTEGER,              (void*) QPointerEvent::ApplicationDeactivate },
    { "ApplicationFontChange",            Member::INTEGER,              (void*) QPointerEvent::ApplicationFontChange },
    { "ApplicationLayoutDirectionChange", Member::INTEGER,              (void*) QPointerEvent::ApplicationLayoutDirectionChange },
    { "ApplicationPaletteChange",         Member::INTEGER,              (void*) QPointerEvent::ApplicationPaletteChange },
    { "ApplicationStateChange",           Member::INTEGER,              (void*) QPointerEvent::ApplicationStateChange },
    { "ApplicationWindowIconChange",      Member::INTEGER,              (void*) QPointerEvent::ApplicationWindowIconChange },
    { "ChildAdded",                       Member::INTEGER,              (void*) QPointerEvent::ChildAdded },
    { "ChildPolished",                    Member::INTEGER,              (void*) QPointerEvent::ChildPolished },
    { "ChildRemoved",                     Member::INTEGER,              (void*) QPointerEvent::ChildRemoved },
    { "ChildWindowAdded",                 Member::INTEGER,              (void*) QPointerEvent::ChildWindowAdded },
    { "ChildWindowRemoved",               Member::INTEGER,              (void*) QPointerEvent::ChildWindowRemoved },
    { "Clipboard",                        Member::INTEGER,              (void*) QPointerEvent::Clipboard },
    { "Close",                            Member::INTEGER,              (void*) QPointerEvent::Close },
    { "CloseSoftwareInputPanel",          Member::INTEGER,              (void*) QPointerEvent::CloseSoftwareInputPanel },
    { "ContentsRectChange",               Member::INTEGER,              (void*) QPointerEvent::ContentsRectChange },
    { "ContextMenu",                      Member::INTEGER,              (void*) QPointerEvent::ContextMenu },
    { "CursorChange",                     Member::INTEGER,              (void*) QPointerEvent::CursorChange },
    { "DeferredDelete",                   Member::INTEGER,              (void*) QPointerEvent::DeferredDelete },
    { "DevicePixelRatioChange",           Member::INTEGER,              (void*) QPointerEvent::DevicePixelRatioChange },
    { "DragEnter",                        Member::INTEGER,              (void*) QPointerEvent::DragEnter },
    { "DragLeave",                        Member::INTEGER,              (void*) QPointerEvent::DragLeave },
    { "DragMove",                         Member::INTEGER,              (void*) QPointerEvent::DragMove },
    { "Drop",                             Member::INTEGER,              (void*) QPointerEvent::Drop },
    { "DynamicPropertyChange",            Member::INTEGER,              (void*) QPointerEvent::DynamicPropertyChange },
    { "EnabledChange",                    Member::INTEGER,              (void*) QPointerEvent::EnabledChange },
    { "Enter",                            Member::INTEGER,              (void*) QPointerEvent::Enter },
    { "EnterWhatsThisMode",               Member::INTEGER,              (void*) QPointerEvent::EnterWhatsThisMode },
    { "Expose",                           Member::INTEGER,              (void*) QPointerEvent::Expose },
    { "FileOpen",                         Member::INTEGER,              (void*) QPointerEvent::FileOpen },
    { "FocusAboutToChange",               Member::INTEGER,              (void*) QPointerEvent::FocusAboutToChange },
    { "FocusIn",                          Member::INTEGER,              (void*) QPointerEvent::FocusIn },
    { "FocusOut",                         Member::INTEGER,              (void*) QPointerEvent::FocusOut },
    { "FontChange",                       Member::INTEGER,              (void*) QPointerEvent::FontChange },
    { "Gesture",                          Member::INTEGER,              (void*) QPointerEvent::Gesture },
    { "GestureOverride",                  Member::INTEGER,              (void*) QPointerEvent::GestureOverride },
    { "GrabKeyboard",                     Member::INTEGER,              (void*) QPointerEvent::GrabKeyboard },
    { "GrabMouse",                        Member::INTEGER,              (void*) QPointerEvent::GrabMouse },
    { "GraphicsSceneContextMenu",         Member::INTEGER,              (void*) QPointerEvent::GraphicsSceneContextMenu },
    { "GraphicsSceneDragEnter",           Member::INTEGER,              (void*) QPointerEvent::GraphicsSceneDragEnter },
    { "GraphicsSceneDragLeave",           Member::INTEGER,              (void*) QPointerEvent::GraphicsSceneDragLeave },
    { "GraphicsSceneDragMove",            Member::INTEGER,              (void*) QPointerEvent::GraphicsSceneDragMove },
    { "GraphicsSceneDrop",                Member::INTEGER,              (void*) QPointerEvent::GraphicsSceneDrop },
    { "GraphicsSceneHelp",                Member::INTEGER,              (void*) QPointerEvent::GraphicsSceneHelp },
    { "GraphicsSceneHoverEnter",          Member::INTEGER,              (void*) QPointerEvent::GraphicsSceneHoverEnter },
    { "GraphicsSceneHoverLeave",          Member::INTEGER,              (void*) QPointerEvent::GraphicsSceneHoverLeave },
    { "GraphicsSceneHoverMove",           Member::INTEGER,              (void*) QPointerEvent::GraphicsSceneHoverMove },
    { "GraphicsSceneLeave",               Member::INTEGER,              (void*) QPointerEvent::GraphicsSceneLeave },
    { "GraphicsSceneMouseDoubleClick",    Member::INTEGER,              (void*) QPointerEvent::GraphicsSceneMouseDoubleClick },
    { "GraphicsSceneMouseMove",           Member::INTEGER,              (void*) QPointerEvent::GraphicsSceneMouseMove },
    { "GraphicsSceneMousePress",          Member::INTEGER,              (void*) QPointerEvent::GraphicsSceneMousePress },
    { "GraphicsSceneMouseRelease",        Member::INTEGER,              (void*) QPointerEvent::GraphicsSceneMouseRelease },
    { "GraphicsSceneMove",                Member::INTEGER,              (void*) QPointerEvent::GraphicsSceneMove },
    { "GraphicsSceneResize",              Member::INTEGER,              (void*) QPointerEvent::GraphicsSceneResize },
    { "GraphicsSceneWheel",               Member::INTEGER,              (void*) QPointerEvent::GraphicsSceneWheel },
    { "Hide",                             Member::INTEGER,              (void*) QPointerEvent::Hide },
    { "HideToParent",                     Member::INTEGER,              (void*) QPointerEvent::HideToParent },
    { "HoverEnter",                       Member::INTEGER,              (void*) QPointerEvent::HoverEnter },
    { "HoverLeave",                       Member::INTEGER,              (void*) QPointerEvent::HoverLeave },
    { "HoverMove",                        Member::INTEGER,              (void*) QPointerEvent::HoverMove },
    { "IconDrag",                         Member::INTEGER,              (void*) QPointerEvent::IconDrag },
    { "IconTextChange",                   Member::INTEGER,              (void*) QPointerEvent::IconTextChange },
    { "InputMethod",                      Member::INTEGER,              (void*) QPointerEvent::InputMethod },
    { "InputMethodQuery",                 Member::INTEGER,              (void*) QPointerEvent::InputMethodQuery },
    { "KeyPress",                         Member::INTEGER,              (void*) QPointerEvent::KeyPress },
    { "KeyRelease",                       Member::INTEGER,              (void*) QPointerEvent::KeyRelease },
    { "KeyboardLayoutChange",             Member::INTEGER,              (void*) QPointerEvent::KeyboardLayoutChange },
    { "LanguageChange",                   Member::INTEGER,              (void*) QPointerEvent::LanguageChange },
    { "LayoutDirectionChange",            Member::INTEGER,              (void*) QPointerEvent::LayoutDirectionChange },
    { "LayoutRequest",                    Member::INTEGER,              (void*) QPointerEvent::LayoutRequest },
    { "Leave",                            Member::INTEGER,              (void*) QPointerEvent::Leave },
    { "LeaveWhatsThisMode",               Member::INTEGER,              (void*) QPointerEvent::LeaveWhatsThisMode },
    { "LocaleChange",                     Member::INTEGER,              (void*) QPointerEvent::LocaleChange },
    { "MacSizeChange",                    Member::INTEGER,              (void*) QPointerEvent::MacSizeChange },
    { "MetaCall",                         Member::INTEGER,              (void*) QPointerEvent::MetaCall },
    { "ModifiedChange",                   Member::INTEGER,              (void*) QPointerEvent::ModifiedChange },
    { "MouseButtonDblClick",              Member::INTEGER,              (void*) QPointerEvent::MouseButtonDblClick },
    { "MouseButtonPress",                 Member::INTEGER,              (void*) QPointerEvent::MouseButtonPress },
    { "MouseButtonRelease",               Member::INTEGER,              (void*) QPointerEvent::MouseButtonRelease },
    { "MouseMove",                        Member::INTEGER,              (void*) QPointerEvent::MouseMove },
    { "MouseTrackingChange",              Member::INTEGER,              (void*) QPointerEvent::MouseTrackingChange },
    { "Move",                             Member::INTEGER,              (void*) QPointerEvent::Move },
    { "NativeGesture",                    Member::INTEGER,              (void*) QPointerEvent::NativeGesture },
    { "NonClientAreaMouseButtonDblClick", Member::INTEGER,              (void*) QPointerEvent::NonClientAreaMouseButtonDblClick },
    { "NonClientAreaMouseButtonPress",    Member::INTEGER,              (void*) QPointerEvent::NonClientAreaMouseButtonPress },
    { "NonClientAreaMouseButtonRelease",  Member::INTEGER,              (void*) QPointerEvent::NonClientAreaMouseButtonRelease },
    { "NonClientAreaMouseMove",           Member::INTEGER,              (void*) QPointerEvent::NonClientAreaMouseMove },
    { "None",                             Member::INTEGER,              (void*) QPointerEvent::None },
    { "OrientationChange",                Member::INTEGER,              (void*) QPointerEvent::OrientationChange },
    { "Paint",                            Member::INTEGER,              (void*) QPointerEvent::Paint },
    { "PaletteChange",                    Member::INTEGER,              (void*) QPointerEvent::PaletteChange },
    { "ParentAboutToChange",              Member::INTEGER,              (void*) QPointerEvent::ParentAboutToChange },
    { "ParentChange",                     Member::INTEGER,              (void*) QPointerEvent::ParentChange },
    { "ParentWindowAboutToChange",        Member::INTEGER,              (void*) QPointerEvent::ParentWindowAboutToChange },
    { "ParentWindowChange",               Member::INTEGER,              (void*) QPointerEvent::ParentWindowChange },
    { "PlatformPanel",                    Member::INTEGER,              (void*) QPointerEvent::PlatformPanel },
    { "PlatformSurface",                  Member::INTEGER,              (void*) QPointerEvent::PlatformSurface },
    { "Polish",                           Member::INTEGER,              (void*) QPointerEvent::Polish },
    { "PolishRequest",                    Member::INTEGER,              (void*) QPointerEvent::PolishRequest },
    { "QueryWhatsThis",                   Member::INTEGER,              (void*) QPointerEvent::QueryWhatsThis },
    { "Quit",                             Member::INTEGER,              (void*) QPointerEvent::Quit },
    { "ReadOnlyChange",                   Member::INTEGER,              (void*) QPointerEvent::ReadOnlyChange },
    { "RequestSoftwareInputPanel",        Member::INTEGER,              (void*) QPointerEvent::RequestSoftwareInputPanel },
    { "Resize",                           Member::INTEGER,              (void*) QPointerEvent::Resize },
    { "SafeAreaMarginsChange",            Member::INTEGER,              (void*) QPointerEvent::SafeAreaMarginsChange },
    { "Scroll",                           Member::INTEGER,              (void*) QPointerEvent::Scroll },
    { "ScrollPrepare",                    Member::INTEGER,              (void*) QPointerEvent::ScrollPrepare },
    { "Shortcut",                         Member::INTEGER,              (void*) QPointerEvent::Shortcut },
    { "ShortcutOverride",                 Member::INTEGER,              (void*) QPointerEvent::ShortcutOverride },
    { "Show",                             Member::INTEGER,              (void*) QPointerEvent::Show },
    { "ShowToParent",                     Member::INTEGER,              (void*) QPointerEvent::ShowToParent },
    { "SockAct",                          Member::INTEGER,              (void*) QPointerEvent::SockAct },
    { "StateMachineSignal",               Member::INTEGER,              (void*) QPointerEvent::StateMachineSignal },
    { "StateMachineWrapped",              Member::INTEGER,              (void*) QPointerEvent::StateMachineWrapped },
    { "StatusTip",                        Member::INTEGER,              (void*) QPointerEvent::StatusTip },
    { "StyleChange",                      Member::INTEGER,              (void*) QPointerEvent::StyleChange },
    { "TabletEnterProximity",             Member::INTEGER,              (void*) QPointerEvent::TabletEnterProximity },
    { "TabletLeaveProximity",             Member::INTEGER,              (void*) QPointerEvent::TabletLeaveProximity },
    { "TabletMove",                       Member::INTEGER,              (void*) QPointerEvent::TabletMove },
    { "TabletPress",                      Member::INTEGER,              (void*) QPointerEvent::TabletPress },
    { "TabletRelease",                    Member::INTEGER,              (void*) QPointerEvent::TabletRelease },
    { "TabletTrackingChange",             Member::INTEGER,              (void*) QPointerEvent::TabletTrackingChange },
    { "ThreadChange",                     Member::INTEGER,              (void*) QPointerEvent::ThreadChange },
    { "Timer",                            Member::INTEGER,              (void*) QPointerEvent::Timer },
    { "ToolBarChange",                    Member::INTEGER,              (void*) QPointerEvent::ToolBarChange },
    { "ToolTip",                          Member::INTEGER,              (void*) QPointerEvent::ToolTip },
    { "ToolTipChange",                    Member::INTEGER,              (void*) QPointerEvent::ToolTipChange },
    { "TouchBegin",                       Member::INTEGER,              (void*) QPointerEvent::TouchBegin },
    { "TouchCancel",                      Member::INTEGER,              (void*) QPointerEvent::TouchCancel },
    { "TouchEnd",                         Member::INTEGER,              (void*) QPointerEvent::TouchEnd },
    { "TouchUpdate",                      Member::INTEGER,              (void*) QPointerEvent::TouchUpdate },
    { "UngrabKeyboard",                   Member::INTEGER,              (void*) QPointerEvent::UngrabKeyboard },
    { "UngrabMouse",                      Member::INTEGER,              (void*) QPointerEvent::UngrabMouse },
    { "UpdateLater",                      Member::INTEGER,              (void*) QPointerEvent::UpdateLater },
    { "UpdateRequest",                    Member::INTEGER,              (void*) QPointerEvent::UpdateRequest },
    { "WhatsThis",                        Member::INTEGER,              (void*) QPointerEvent::WhatsThis },
    { "WhatsThisClicked",                 Member::INTEGER,              (void*) QPointerEvent::WhatsThisClicked },
    { "Wheel",                            Member::INTEGER,              (void*) QPointerEvent::Wheel },
    { "WinEventAct",                      Member::INTEGER,              (void*) QPointerEvent::WinEventAct },
    { "WinIdChange",                      Member::INTEGER,              (void*) QPointerEvent::WinIdChange },
    { "WindowActivate",                   Member::INTEGER,              (void*) QPointerEvent::WindowActivate },
    { "WindowBlocked",                    Member::INTEGER,              (void*) QPointerEvent::WindowBlocked },
    { "WindowDeactivate",                 Member::INTEGER,              (void*) QPointerEvent::WindowDeactivate },
    { "WindowIconChange",                 Member::INTEGER,              (void*) QPointerEvent::WindowIconChange },
    { "WindowStateChange",                Member::INTEGER,              (void*) QPointerEvent::WindowStateChange },
    { "WindowTitleChange",                Member::INTEGER,              (void*) QPointerEvent::WindowTitleChange },
    { "WindowUnblocked",                  Member::INTEGER,              (void*) QPointerEvent::WindowUnblocked },
    { "ZOrderChange",                     Member::INTEGER,              (void*) QPointerEvent::ZOrderChange },
    { "accept",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_accept },
    { "ignore",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_ignore },
    { "isAccepted",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_isAccepted },
    { "setAccepted",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_setAccepted },
    { "type",                             Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_type },
    { NULL,                               Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QPointerEventBinding::classInfo = 
{
    "QPointerEvent",

    &QInputEventBinding::classInfo,

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

int QPointerEventBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
