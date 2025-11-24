// Type: QContextMenuEvent
// Base: QInputEvent

/* ============================================================================================ */

#include <QContextMenuEvent>
#include <QEvent>
#include <QInputEvent>
#include <QObject>
#include <QPoint>
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
#include "QContextMenuEventBinding.hpp"
#include "QEventBinding.hpp"
#include "QInputEventBinding.hpp"
#include "QObjectBinding.hpp"
#include "QPointBinding.hpp"
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


struct lqtk_QContextMenuEvent_globalPos_Args
{
    FromLua<QContextMenuEvent*> arg_1_1;
    ToLua<QPoint*> rslt_1;
};

extern "C" int lqtk_QContextMenuEvent_globalPos(lua_State* L)
{
    lqtk_QContextMenuEvent_globalPos_Args  argValues;
    lqtk_QContextMenuEvent_globalPos_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QContextMenuEvent::globalPos();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QContextMenuEvent", "globalPos", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QContextMenuEvent_globalX_Args
{
    FromLua<QContextMenuEvent*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QContextMenuEvent_globalX(lua_State* L)
{
    lqtk_QContextMenuEvent_globalX_Args  argValues;
    lqtk_QContextMenuEvent_globalX_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QContextMenuEvent::globalX();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QContextMenuEvent", "globalX", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QContextMenuEvent_globalY_Args
{
    FromLua<QContextMenuEvent*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QContextMenuEvent_globalY(lua_State* L)
{
    lqtk_QContextMenuEvent_globalY_Args  argValues;
    lqtk_QContextMenuEvent_globalY_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QContextMenuEvent::globalY();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QContextMenuEvent", "globalY", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QContextMenuEvent_pos_Args
{
    FromLua<QContextMenuEvent*> arg_1_1;
    ToLua<QPoint*> rslt_1;
};

extern "C" int lqtk_QContextMenuEvent_pos(lua_State* L)
{
    lqtk_QContextMenuEvent_pos_Args  argValues;
    lqtk_QContextMenuEvent_pos_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QContextMenuEvent::pos();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QContextMenuEvent", "pos", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QContextMenuEvent_reason_Args
{
    FromLua<QContextMenuEvent*> arg_1_1;
    ToLua<QContextMenuEvent::Reason> rslt_1;
};

extern "C" int lqtk_QContextMenuEvent_reason(lua_State* L)
{
    lqtk_QContextMenuEvent_reason_Args  argValues;
    lqtk_QContextMenuEvent_reason_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QContextMenuEvent::reason();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QContextMenuEvent", "reason", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QContextMenuEvent_x_Args
{
    FromLua<QContextMenuEvent*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QContextMenuEvent_x(lua_State* L)
{
    lqtk_QContextMenuEvent_x_Args  argValues;
    lqtk_QContextMenuEvent_x_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QContextMenuEvent::x();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QContextMenuEvent", "x", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QContextMenuEvent_y_Args
{
    FromLua<QContextMenuEvent*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QContextMenuEvent_y(lua_State* L)
{
    lqtk_QContextMenuEvent_y_Args  argValues;
    lqtk_QContextMenuEvent_y_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QContextMenuEvent::y();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QContextMenuEvent", "y", nargs, "1");
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
        QContextMenuEventBinding::QType* ptr = static_cast<QContextMenuEventBinding::QType*>(objectPtr);
        if (targetClassInfo == &QContextMenuEventBinding::classInfo) {
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
        QContextMenuEvent* ptr = (QContextMenuEvent*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QContextMenuEvent_new_Args
{
    FromLua<QContextMenuEvent::Reason> arg_1_1;
    FromLua<QPoint*> arg_2_1;
    FromLua<QPoint*> arg_2_2;
    FromLua<Qt::KeyboardModifiers> arg_3_1;
    ToLua<QContextMenuEvent*> rslt_1;
};

extern "C" int lqtk_QContextMenuEvent_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QContextMenuEvent_new_Args  argValues;
    lqtk_QContextMenuEvent_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QContextMenuEventBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QContextMenuEvent> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                QContextMenuEvent* rslt = 
                    new QContextMenuEvent(args->arg_1_1.getValue(), *args->arg_2_1.getValue(), *args->arg_2_2.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            args->arg_3_1.check(L, argOffs+4);
            {
                QContextMenuEvent* rslt = 
                    new QContextMenuEvent(args->arg_1_1.getValue(), *args->arg_2_1.getValue(), *args->arg_2_2.getValue(), args->arg_3_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QContextMenuEvent", "new", nargs, "4,5");
        } else {
            return util::argCountError(L, "QContextMenuEvent", nullptr, nargs, "3,4");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QContextMenuEvent_new(lua_State* L)
{
    return lqtk_QContextMenuEvent_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QContextMenuEventBinding::pushObject(lua_State* L, QContextMenuEvent* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QContextMenuEvent>(L, hasUserValue);     // -> uval?, udata
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
    { "ActionAdded",                      Member::INTEGER,              (void*) QContextMenuEvent::ActionAdded },
    { "ActionChanged",                    Member::INTEGER,              (void*) QContextMenuEvent::ActionChanged },
    { "ActionRemoved",                    Member::INTEGER,              (void*) QContextMenuEvent::ActionRemoved },
    { "ActivationChange",                 Member::INTEGER,              (void*) QContextMenuEvent::ActivationChange },
    { "ApplicationActivate",              Member::INTEGER,              (void*) QContextMenuEvent::ApplicationActivate },
    { "ApplicationActivated",             Member::INTEGER,              (void*) QContextMenuEvent::ApplicationActivated },
    { "ApplicationDeactivate",            Member::INTEGER,              (void*) QContextMenuEvent::ApplicationDeactivate },
    { "ApplicationFontChange",            Member::INTEGER,              (void*) QContextMenuEvent::ApplicationFontChange },
    { "ApplicationLayoutDirectionChange", Member::INTEGER,              (void*) QContextMenuEvent::ApplicationLayoutDirectionChange },
    { "ApplicationPaletteChange",         Member::INTEGER,              (void*) QContextMenuEvent::ApplicationPaletteChange },
    { "ApplicationStateChange",           Member::INTEGER,              (void*) QContextMenuEvent::ApplicationStateChange },
    { "ApplicationWindowIconChange",      Member::INTEGER,              (void*) QContextMenuEvent::ApplicationWindowIconChange },
    { "ChildAdded",                       Member::INTEGER,              (void*) QContextMenuEvent::ChildAdded },
    { "ChildPolished",                    Member::INTEGER,              (void*) QContextMenuEvent::ChildPolished },
    { "ChildRemoved",                     Member::INTEGER,              (void*) QContextMenuEvent::ChildRemoved },
    { "ChildWindowAdded",                 Member::INTEGER,              (void*) QContextMenuEvent::ChildWindowAdded },
    { "ChildWindowRemoved",               Member::INTEGER,              (void*) QContextMenuEvent::ChildWindowRemoved },
    { "Clipboard",                        Member::INTEGER,              (void*) QContextMenuEvent::Clipboard },
    { "Close",                            Member::INTEGER,              (void*) QContextMenuEvent::Close },
    { "CloseSoftwareInputPanel",          Member::INTEGER,              (void*) QContextMenuEvent::CloseSoftwareInputPanel },
    { "ContentsRectChange",               Member::INTEGER,              (void*) QContextMenuEvent::ContentsRectChange },
    { "ContextMenu",                      Member::INTEGER,              (void*) QContextMenuEvent::ContextMenu },
    { "CursorChange",                     Member::INTEGER,              (void*) QContextMenuEvent::CursorChange },
    { "DeferredDelete",                   Member::INTEGER,              (void*) QContextMenuEvent::DeferredDelete },
    { "DevicePixelRatioChange",           Member::INTEGER,              (void*) QContextMenuEvent::DevicePixelRatioChange },
    { "DragEnter",                        Member::INTEGER,              (void*) QContextMenuEvent::DragEnter },
    { "DragLeave",                        Member::INTEGER,              (void*) QContextMenuEvent::DragLeave },
    { "DragMove",                         Member::INTEGER,              (void*) QContextMenuEvent::DragMove },
    { "Drop",                             Member::INTEGER,              (void*) QContextMenuEvent::Drop },
    { "DynamicPropertyChange",            Member::INTEGER,              (void*) QContextMenuEvent::DynamicPropertyChange },
    { "EnabledChange",                    Member::INTEGER,              (void*) QContextMenuEvent::EnabledChange },
    { "Enter",                            Member::INTEGER,              (void*) QContextMenuEvent::Enter },
    { "EnterWhatsThisMode",               Member::INTEGER,              (void*) QContextMenuEvent::EnterWhatsThisMode },
    { "Expose",                           Member::INTEGER,              (void*) QContextMenuEvent::Expose },
    { "FileOpen",                         Member::INTEGER,              (void*) QContextMenuEvent::FileOpen },
    { "FocusAboutToChange",               Member::INTEGER,              (void*) QContextMenuEvent::FocusAboutToChange },
    { "FocusIn",                          Member::INTEGER,              (void*) QContextMenuEvent::FocusIn },
    { "FocusOut",                         Member::INTEGER,              (void*) QContextMenuEvent::FocusOut },
    { "FontChange",                       Member::INTEGER,              (void*) QContextMenuEvent::FontChange },
    { "Gesture",                          Member::INTEGER,              (void*) QContextMenuEvent::Gesture },
    { "GestureOverride",                  Member::INTEGER,              (void*) QContextMenuEvent::GestureOverride },
    { "GrabKeyboard",                     Member::INTEGER,              (void*) QContextMenuEvent::GrabKeyboard },
    { "GrabMouse",                        Member::INTEGER,              (void*) QContextMenuEvent::GrabMouse },
    { "GraphicsSceneContextMenu",         Member::INTEGER,              (void*) QContextMenuEvent::GraphicsSceneContextMenu },
    { "GraphicsSceneDragEnter",           Member::INTEGER,              (void*) QContextMenuEvent::GraphicsSceneDragEnter },
    { "GraphicsSceneDragLeave",           Member::INTEGER,              (void*) QContextMenuEvent::GraphicsSceneDragLeave },
    { "GraphicsSceneDragMove",            Member::INTEGER,              (void*) QContextMenuEvent::GraphicsSceneDragMove },
    { "GraphicsSceneDrop",                Member::INTEGER,              (void*) QContextMenuEvent::GraphicsSceneDrop },
    { "GraphicsSceneHelp",                Member::INTEGER,              (void*) QContextMenuEvent::GraphicsSceneHelp },
    { "GraphicsSceneHoverEnter",          Member::INTEGER,              (void*) QContextMenuEvent::GraphicsSceneHoverEnter },
    { "GraphicsSceneHoverLeave",          Member::INTEGER,              (void*) QContextMenuEvent::GraphicsSceneHoverLeave },
    { "GraphicsSceneHoverMove",           Member::INTEGER,              (void*) QContextMenuEvent::GraphicsSceneHoverMove },
    { "GraphicsSceneLeave",               Member::INTEGER,              (void*) QContextMenuEvent::GraphicsSceneLeave },
    { "GraphicsSceneMouseDoubleClick",    Member::INTEGER,              (void*) QContextMenuEvent::GraphicsSceneMouseDoubleClick },
    { "GraphicsSceneMouseMove",           Member::INTEGER,              (void*) QContextMenuEvent::GraphicsSceneMouseMove },
    { "GraphicsSceneMousePress",          Member::INTEGER,              (void*) QContextMenuEvent::GraphicsSceneMousePress },
    { "GraphicsSceneMouseRelease",        Member::INTEGER,              (void*) QContextMenuEvent::GraphicsSceneMouseRelease },
    { "GraphicsSceneMove",                Member::INTEGER,              (void*) QContextMenuEvent::GraphicsSceneMove },
    { "GraphicsSceneResize",              Member::INTEGER,              (void*) QContextMenuEvent::GraphicsSceneResize },
    { "GraphicsSceneWheel",               Member::INTEGER,              (void*) QContextMenuEvent::GraphicsSceneWheel },
    { "Hide",                             Member::INTEGER,              (void*) QContextMenuEvent::Hide },
    { "HideToParent",                     Member::INTEGER,              (void*) QContextMenuEvent::HideToParent },
    { "HoverEnter",                       Member::INTEGER,              (void*) QContextMenuEvent::HoverEnter },
    { "HoverLeave",                       Member::INTEGER,              (void*) QContextMenuEvent::HoverLeave },
    { "HoverMove",                        Member::INTEGER,              (void*) QContextMenuEvent::HoverMove },
    { "IconDrag",                         Member::INTEGER,              (void*) QContextMenuEvent::IconDrag },
    { "IconTextChange",                   Member::INTEGER,              (void*) QContextMenuEvent::IconTextChange },
    { "InputMethod",                      Member::INTEGER,              (void*) QContextMenuEvent::InputMethod },
    { "InputMethodQuery",                 Member::INTEGER,              (void*) QContextMenuEvent::InputMethodQuery },
    { "KeyPress",                         Member::INTEGER,              (void*) QContextMenuEvent::KeyPress },
    { "KeyRelease",                       Member::INTEGER,              (void*) QContextMenuEvent::KeyRelease },
    { "Keyboard",                         Member::INTEGER,              (void*) QContextMenuEvent::Keyboard },
    { "KeyboardLayoutChange",             Member::INTEGER,              (void*) QContextMenuEvent::KeyboardLayoutChange },
    { "LanguageChange",                   Member::INTEGER,              (void*) QContextMenuEvent::LanguageChange },
    { "LayoutDirectionChange",            Member::INTEGER,              (void*) QContextMenuEvent::LayoutDirectionChange },
    { "LayoutRequest",                    Member::INTEGER,              (void*) QContextMenuEvent::LayoutRequest },
    { "Leave",                            Member::INTEGER,              (void*) QContextMenuEvent::Leave },
    { "LeaveWhatsThisMode",               Member::INTEGER,              (void*) QContextMenuEvent::LeaveWhatsThisMode },
    { "LocaleChange",                     Member::INTEGER,              (void*) QContextMenuEvent::LocaleChange },
    { "MacSizeChange",                    Member::INTEGER,              (void*) QContextMenuEvent::MacSizeChange },
    { "MetaCall",                         Member::INTEGER,              (void*) QContextMenuEvent::MetaCall },
    { "ModifiedChange",                   Member::INTEGER,              (void*) QContextMenuEvent::ModifiedChange },
    { "Mouse",                            Member::INTEGER,              (void*) QContextMenuEvent::Mouse },
    { "MouseButtonDblClick",              Member::INTEGER,              (void*) QContextMenuEvent::MouseButtonDblClick },
    { "MouseButtonPress",                 Member::INTEGER,              (void*) QContextMenuEvent::MouseButtonPress },
    { "MouseButtonRelease",               Member::INTEGER,              (void*) QContextMenuEvent::MouseButtonRelease },
    { "MouseMove",                        Member::INTEGER,              (void*) QContextMenuEvent::MouseMove },
    { "MouseTrackingChange",              Member::INTEGER,              (void*) QContextMenuEvent::MouseTrackingChange },
    { "Move",                             Member::INTEGER,              (void*) QContextMenuEvent::Move },
    { "NativeGesture",                    Member::INTEGER,              (void*) QContextMenuEvent::NativeGesture },
    { "NonClientAreaMouseButtonDblClick", Member::INTEGER,              (void*) QContextMenuEvent::NonClientAreaMouseButtonDblClick },
    { "NonClientAreaMouseButtonPress",    Member::INTEGER,              (void*) QContextMenuEvent::NonClientAreaMouseButtonPress },
    { "NonClientAreaMouseButtonRelease",  Member::INTEGER,              (void*) QContextMenuEvent::NonClientAreaMouseButtonRelease },
    { "NonClientAreaMouseMove",           Member::INTEGER,              (void*) QContextMenuEvent::NonClientAreaMouseMove },
    { "None",                             Member::INTEGER,              (void*) QContextMenuEvent::None },
    { "OrientationChange",                Member::INTEGER,              (void*) QContextMenuEvent::OrientationChange },
    { "Other",                            Member::INTEGER,              (void*) QContextMenuEvent::Other },
    { "Paint",                            Member::INTEGER,              (void*) QContextMenuEvent::Paint },
    { "PaletteChange",                    Member::INTEGER,              (void*) QContextMenuEvent::PaletteChange },
    { "ParentAboutToChange",              Member::INTEGER,              (void*) QContextMenuEvent::ParentAboutToChange },
    { "ParentChange",                     Member::INTEGER,              (void*) QContextMenuEvent::ParentChange },
    { "ParentWindowAboutToChange",        Member::INTEGER,              (void*) QContextMenuEvent::ParentWindowAboutToChange },
    { "ParentWindowChange",               Member::INTEGER,              (void*) QContextMenuEvent::ParentWindowChange },
    { "PlatformPanel",                    Member::INTEGER,              (void*) QContextMenuEvent::PlatformPanel },
    { "PlatformSurface",                  Member::INTEGER,              (void*) QContextMenuEvent::PlatformSurface },
    { "Polish",                           Member::INTEGER,              (void*) QContextMenuEvent::Polish },
    { "PolishRequest",                    Member::INTEGER,              (void*) QContextMenuEvent::PolishRequest },
    { "QueryWhatsThis",                   Member::INTEGER,              (void*) QContextMenuEvent::QueryWhatsThis },
    { "Quit",                             Member::INTEGER,              (void*) QContextMenuEvent::Quit },
    { "ReadOnlyChange",                   Member::INTEGER,              (void*) QContextMenuEvent::ReadOnlyChange },
    { "RequestSoftwareInputPanel",        Member::INTEGER,              (void*) QContextMenuEvent::RequestSoftwareInputPanel },
    { "Resize",                           Member::INTEGER,              (void*) QContextMenuEvent::Resize },
    { "SafeAreaMarginsChange",            Member::INTEGER,              (void*) QContextMenuEvent::SafeAreaMarginsChange },
    { "Scroll",                           Member::INTEGER,              (void*) QContextMenuEvent::Scroll },
    { "ScrollPrepare",                    Member::INTEGER,              (void*) QContextMenuEvent::ScrollPrepare },
    { "Shortcut",                         Member::INTEGER,              (void*) QContextMenuEvent::Shortcut },
    { "ShortcutOverride",                 Member::INTEGER,              (void*) QContextMenuEvent::ShortcutOverride },
    { "Show",                             Member::INTEGER,              (void*) QContextMenuEvent::Show },
    { "ShowToParent",                     Member::INTEGER,              (void*) QContextMenuEvent::ShowToParent },
    { "SockAct",                          Member::INTEGER,              (void*) QContextMenuEvent::SockAct },
    { "StateMachineSignal",               Member::INTEGER,              (void*) QContextMenuEvent::StateMachineSignal },
    { "StateMachineWrapped",              Member::INTEGER,              (void*) QContextMenuEvent::StateMachineWrapped },
    { "StatusTip",                        Member::INTEGER,              (void*) QContextMenuEvent::StatusTip },
    { "StyleChange",                      Member::INTEGER,              (void*) QContextMenuEvent::StyleChange },
    { "TabletEnterProximity",             Member::INTEGER,              (void*) QContextMenuEvent::TabletEnterProximity },
    { "TabletLeaveProximity",             Member::INTEGER,              (void*) QContextMenuEvent::TabletLeaveProximity },
    { "TabletMove",                       Member::INTEGER,              (void*) QContextMenuEvent::TabletMove },
    { "TabletPress",                      Member::INTEGER,              (void*) QContextMenuEvent::TabletPress },
    { "TabletRelease",                    Member::INTEGER,              (void*) QContextMenuEvent::TabletRelease },
    { "TabletTrackingChange",             Member::INTEGER,              (void*) QContextMenuEvent::TabletTrackingChange },
    { "ThreadChange",                     Member::INTEGER,              (void*) QContextMenuEvent::ThreadChange },
    { "Timer",                            Member::INTEGER,              (void*) QContextMenuEvent::Timer },
    { "ToolBarChange",                    Member::INTEGER,              (void*) QContextMenuEvent::ToolBarChange },
    { "ToolTip",                          Member::INTEGER,              (void*) QContextMenuEvent::ToolTip },
    { "ToolTipChange",                    Member::INTEGER,              (void*) QContextMenuEvent::ToolTipChange },
    { "TouchBegin",                       Member::INTEGER,              (void*) QContextMenuEvent::TouchBegin },
    { "TouchCancel",                      Member::INTEGER,              (void*) QContextMenuEvent::TouchCancel },
    { "TouchEnd",                         Member::INTEGER,              (void*) QContextMenuEvent::TouchEnd },
    { "TouchUpdate",                      Member::INTEGER,              (void*) QContextMenuEvent::TouchUpdate },
    { "UngrabKeyboard",                   Member::INTEGER,              (void*) QContextMenuEvent::UngrabKeyboard },
    { "UngrabMouse",                      Member::INTEGER,              (void*) QContextMenuEvent::UngrabMouse },
    { "UpdateLater",                      Member::INTEGER,              (void*) QContextMenuEvent::UpdateLater },
    { "UpdateRequest",                    Member::INTEGER,              (void*) QContextMenuEvent::UpdateRequest },
    { "WhatsThis",                        Member::INTEGER,              (void*) QContextMenuEvent::WhatsThis },
    { "WhatsThisClicked",                 Member::INTEGER,              (void*) QContextMenuEvent::WhatsThisClicked },
    { "Wheel",                            Member::INTEGER,              (void*) QContextMenuEvent::Wheel },
    { "WinEventAct",                      Member::INTEGER,              (void*) QContextMenuEvent::WinEventAct },
    { "WinIdChange",                      Member::INTEGER,              (void*) QContextMenuEvent::WinIdChange },
    { "WindowActivate",                   Member::INTEGER,              (void*) QContextMenuEvent::WindowActivate },
    { "WindowBlocked",                    Member::INTEGER,              (void*) QContextMenuEvent::WindowBlocked },
    { "WindowDeactivate",                 Member::INTEGER,              (void*) QContextMenuEvent::WindowDeactivate },
    { "WindowIconChange",                 Member::INTEGER,              (void*) QContextMenuEvent::WindowIconChange },
    { "WindowStateChange",                Member::INTEGER,              (void*) QContextMenuEvent::WindowStateChange },
    { "WindowTitleChange",                Member::INTEGER,              (void*) QContextMenuEvent::WindowTitleChange },
    { "WindowUnblocked",                  Member::INTEGER,              (void*) QContextMenuEvent::WindowUnblocked },
    { "ZOrderChange",                     Member::INTEGER,              (void*) QContextMenuEvent::ZOrderChange },
    { "accept",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_accept },
    { "globalPos",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QContextMenuEvent_globalPos },
    { "globalX",                          Member::NORMAL_FUNCTION,      (void*) lqtk_QContextMenuEvent_globalX },
    { "globalY",                          Member::NORMAL_FUNCTION,      (void*) lqtk_QContextMenuEvent_globalY },
    { "ignore",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_ignore },
    { "isAccepted",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_isAccepted },
    { "pos",                              Member::NORMAL_FUNCTION,      (void*) lqtk_QContextMenuEvent_pos },
    { "reason",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QContextMenuEvent_reason },
    { "setAccepted",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_setAccepted },
    { "type",                             Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_type },
    { "x",                                Member::NORMAL_FUNCTION,      (void*) lqtk_QContextMenuEvent_x },
    { "y",                                Member::NORMAL_FUNCTION,      (void*) lqtk_QContextMenuEvent_y },
    { NULL,                               Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QContextMenuEventBinding::classInfo = 
{
    "QContextMenuEvent",

    &QInputEventBinding::classInfo,

    false, // isQObject
    false, // needsGuard
    lqtk_QContextMenuEvent_constructor,
    lqtk_QContextMenuEvent_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    168,
    members
};

/* ============================================================================================ */

int QContextMenuEventBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
