// Type: QInputMethodEvent
// Base: QEvent

/* ============================================================================================ */

#include <QEvent>
#include <QInputMethodEvent>
#include <QObject>
#include <QString>

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
#include "QInputMethodEventBinding.hpp"
#include "QObjectBinding.hpp"
#include "QStringBinding.hpp"

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


struct lqtk_QInputMethodEvent_commitString_Args
{
    FromLua<QInputMethodEvent*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QInputMethodEvent_commitString_doLua(lua_State* L)
{
    lqtk_QInputMethodEvent_commitString_Args* args = (lqtk_QInputMethodEvent_commitString_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QInputMethodEvent::commitString();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QInputMethodEvent", "commitString", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QInputMethodEvent_commitString(lua_State* L)
{
    try {
        lqtk_QInputMethodEvent_commitString_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QInputMethodEvent_commitString_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QInputMethodEvent_preeditString_Args
{
    FromLua<QInputMethodEvent*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QInputMethodEvent_preeditString_doLua(lua_State* L)
{
    lqtk_QInputMethodEvent_preeditString_Args* args = (lqtk_QInputMethodEvent_preeditString_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QInputMethodEvent::preeditString();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QInputMethodEvent", "preeditString", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QInputMethodEvent_preeditString(lua_State* L)
{
    try {
        lqtk_QInputMethodEvent_preeditString_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QInputMethodEvent_preeditString_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QInputMethodEvent_replacementLength_Args
{
    FromLua<QInputMethodEvent*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QInputMethodEvent_replacementLength(lua_State* L)
{
    lqtk_QInputMethodEvent_replacementLength_Args  argValues;
    lqtk_QInputMethodEvent_replacementLength_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QInputMethodEvent::replacementLength();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QInputMethodEvent", "replacementLength", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QInputMethodEvent_replacementStart_Args
{
    FromLua<QInputMethodEvent*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QInputMethodEvent_replacementStart(lua_State* L)
{
    lqtk_QInputMethodEvent_replacementStart_Args  argValues;
    lqtk_QInputMethodEvent_replacementStart_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QInputMethodEvent::replacementStart();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QInputMethodEvent", "replacementStart", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QInputMethodEvent_setCommitString_Args
{
    FromLua<QInputMethodEvent*> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<int> arg_3_1;
    FromLua<int> arg_3_2;
};

static int lqtk_QInputMethodEvent_setCommitString_doLua(lua_State* L)
{
    lqtk_QInputMethodEvent_setCommitString_Args* args = (lqtk_QInputMethodEvent_setCommitString_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QInputMethodEvent::setCommitString(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QInputMethodEvent::setCommitString(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_3_2.check(L, argOffs+4);
            {
                    args->arg_1_1.getValue()->QInputMethodEvent::setCommitString(args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_3_2.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QInputMethodEvent", "setCommitString", nargs, "2,3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QInputMethodEvent_setCommitString(lua_State* L)
{
    try {
        lqtk_QInputMethodEvent_setCommitString_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QInputMethodEvent_setCommitString_doLua, &args);
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
        QInputMethodEventBinding::QType* ptr = static_cast<QInputMethodEventBinding::QType*>(objectPtr);
        if (targetClassInfo == &QInputMethodEventBinding::classInfo) {
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
        QInputMethodEvent* ptr = (QInputMethodEvent*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

struct lqtk_QInputMethodEvent_new_Args
{
    ToLua<QInputMethodEvent*> rslt_1;
};

extern "C" int lqtk_QInputMethodEvent_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QInputMethodEvent_new_Args  argValues;
    lqtk_QInputMethodEvent_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QInputMethodEventBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QInputMethodEvent> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QInputMethodEvent* rslt = 
                    new QInputMethodEvent();
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QInputMethodEvent", "new", nargs, "1");
        } else {
            return util::argCountError(L, "QInputMethodEvent", nullptr, nargs, "0");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QInputMethodEvent_new(lua_State* L)
{
    return lqtk_QInputMethodEvent_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QInputMethodEventBinding::pushObject(lua_State* L, QInputMethodEvent* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QInputMethodEvent>(L, hasUserValue);     // -> uval?, udata
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
    { "ActionAdded",                      Member::INTEGER,              (void*) QInputMethodEvent::ActionAdded },
    { "ActionChanged",                    Member::INTEGER,              (void*) QInputMethodEvent::ActionChanged },
    { "ActionRemoved",                    Member::INTEGER,              (void*) QInputMethodEvent::ActionRemoved },
    { "ActivationChange",                 Member::INTEGER,              (void*) QInputMethodEvent::ActivationChange },
    { "ApplicationActivate",              Member::INTEGER,              (void*) QInputMethodEvent::ApplicationActivate },
    { "ApplicationActivated",             Member::INTEGER,              (void*) QInputMethodEvent::ApplicationActivated },
    { "ApplicationDeactivate",            Member::INTEGER,              (void*) QInputMethodEvent::ApplicationDeactivate },
    { "ApplicationFontChange",            Member::INTEGER,              (void*) QInputMethodEvent::ApplicationFontChange },
    { "ApplicationLayoutDirectionChange", Member::INTEGER,              (void*) QInputMethodEvent::ApplicationLayoutDirectionChange },
    { "ApplicationPaletteChange",         Member::INTEGER,              (void*) QInputMethodEvent::ApplicationPaletteChange },
    { "ApplicationStateChange",           Member::INTEGER,              (void*) QInputMethodEvent::ApplicationStateChange },
    { "ApplicationWindowIconChange",      Member::INTEGER,              (void*) QInputMethodEvent::ApplicationWindowIconChange },
    { "ChildAdded",                       Member::INTEGER,              (void*) QInputMethodEvent::ChildAdded },
    { "ChildPolished",                    Member::INTEGER,              (void*) QInputMethodEvent::ChildPolished },
    { "ChildRemoved",                     Member::INTEGER,              (void*) QInputMethodEvent::ChildRemoved },
    { "ChildWindowAdded",                 Member::INTEGER,              (void*) QInputMethodEvent::ChildWindowAdded },
    { "ChildWindowRemoved",               Member::INTEGER,              (void*) QInputMethodEvent::ChildWindowRemoved },
    { "Clipboard",                        Member::INTEGER,              (void*) QInputMethodEvent::Clipboard },
    { "Close",                            Member::INTEGER,              (void*) QInputMethodEvent::Close },
    { "CloseSoftwareInputPanel",          Member::INTEGER,              (void*) QInputMethodEvent::CloseSoftwareInputPanel },
    { "ContentsRectChange",               Member::INTEGER,              (void*) QInputMethodEvent::ContentsRectChange },
    { "ContextMenu",                      Member::INTEGER,              (void*) QInputMethodEvent::ContextMenu },
    { "Cursor",                           Member::INTEGER,              (void*) QInputMethodEvent::Cursor },
    { "CursorChange",                     Member::INTEGER,              (void*) QInputMethodEvent::CursorChange },
    { "DeferredDelete",                   Member::INTEGER,              (void*) QInputMethodEvent::DeferredDelete },
    { "DevicePixelRatioChange",           Member::INTEGER,              (void*) QInputMethodEvent::DevicePixelRatioChange },
    { "DragEnter",                        Member::INTEGER,              (void*) QInputMethodEvent::DragEnter },
    { "DragLeave",                        Member::INTEGER,              (void*) QInputMethodEvent::DragLeave },
    { "DragMove",                         Member::INTEGER,              (void*) QInputMethodEvent::DragMove },
    { "Drop",                             Member::INTEGER,              (void*) QInputMethodEvent::Drop },
    { "DynamicPropertyChange",            Member::INTEGER,              (void*) QInputMethodEvent::DynamicPropertyChange },
    { "EnabledChange",                    Member::INTEGER,              (void*) QInputMethodEvent::EnabledChange },
    { "Enter",                            Member::INTEGER,              (void*) QInputMethodEvent::Enter },
    { "EnterWhatsThisMode",               Member::INTEGER,              (void*) QInputMethodEvent::EnterWhatsThisMode },
    { "Expose",                           Member::INTEGER,              (void*) QInputMethodEvent::Expose },
    { "FileOpen",                         Member::INTEGER,              (void*) QInputMethodEvent::FileOpen },
    { "FocusAboutToChange",               Member::INTEGER,              (void*) QInputMethodEvent::FocusAboutToChange },
    { "FocusIn",                          Member::INTEGER,              (void*) QInputMethodEvent::FocusIn },
    { "FocusOut",                         Member::INTEGER,              (void*) QInputMethodEvent::FocusOut },
    { "FontChange",                       Member::INTEGER,              (void*) QInputMethodEvent::FontChange },
    { "Gesture",                          Member::INTEGER,              (void*) QInputMethodEvent::Gesture },
    { "GestureOverride",                  Member::INTEGER,              (void*) QInputMethodEvent::GestureOverride },
    { "GrabKeyboard",                     Member::INTEGER,              (void*) QInputMethodEvent::GrabKeyboard },
    { "GrabMouse",                        Member::INTEGER,              (void*) QInputMethodEvent::GrabMouse },
    { "GraphicsSceneContextMenu",         Member::INTEGER,              (void*) QInputMethodEvent::GraphicsSceneContextMenu },
    { "GraphicsSceneDragEnter",           Member::INTEGER,              (void*) QInputMethodEvent::GraphicsSceneDragEnter },
    { "GraphicsSceneDragLeave",           Member::INTEGER,              (void*) QInputMethodEvent::GraphicsSceneDragLeave },
    { "GraphicsSceneDragMove",            Member::INTEGER,              (void*) QInputMethodEvent::GraphicsSceneDragMove },
    { "GraphicsSceneDrop",                Member::INTEGER,              (void*) QInputMethodEvent::GraphicsSceneDrop },
    { "GraphicsSceneHelp",                Member::INTEGER,              (void*) QInputMethodEvent::GraphicsSceneHelp },
    { "GraphicsSceneHoverEnter",          Member::INTEGER,              (void*) QInputMethodEvent::GraphicsSceneHoverEnter },
    { "GraphicsSceneHoverLeave",          Member::INTEGER,              (void*) QInputMethodEvent::GraphicsSceneHoverLeave },
    { "GraphicsSceneHoverMove",           Member::INTEGER,              (void*) QInputMethodEvent::GraphicsSceneHoverMove },
    { "GraphicsSceneLeave",               Member::INTEGER,              (void*) QInputMethodEvent::GraphicsSceneLeave },
    { "GraphicsSceneMouseDoubleClick",    Member::INTEGER,              (void*) QInputMethodEvent::GraphicsSceneMouseDoubleClick },
    { "GraphicsSceneMouseMove",           Member::INTEGER,              (void*) QInputMethodEvent::GraphicsSceneMouseMove },
    { "GraphicsSceneMousePress",          Member::INTEGER,              (void*) QInputMethodEvent::GraphicsSceneMousePress },
    { "GraphicsSceneMouseRelease",        Member::INTEGER,              (void*) QInputMethodEvent::GraphicsSceneMouseRelease },
    { "GraphicsSceneMove",                Member::INTEGER,              (void*) QInputMethodEvent::GraphicsSceneMove },
    { "GraphicsSceneResize",              Member::INTEGER,              (void*) QInputMethodEvent::GraphicsSceneResize },
    { "GraphicsSceneWheel",               Member::INTEGER,              (void*) QInputMethodEvent::GraphicsSceneWheel },
    { "Hide",                             Member::INTEGER,              (void*) QInputMethodEvent::Hide },
    { "HideToParent",                     Member::INTEGER,              (void*) QInputMethodEvent::HideToParent },
    { "HoverEnter",                       Member::INTEGER,              (void*) QInputMethodEvent::HoverEnter },
    { "HoverLeave",                       Member::INTEGER,              (void*) QInputMethodEvent::HoverLeave },
    { "HoverMove",                        Member::INTEGER,              (void*) QInputMethodEvent::HoverMove },
    { "IconDrag",                         Member::INTEGER,              (void*) QInputMethodEvent::IconDrag },
    { "IconTextChange",                   Member::INTEGER,              (void*) QInputMethodEvent::IconTextChange },
    { "InputMethod",                      Member::INTEGER,              (void*) QInputMethodEvent::InputMethod },
    { "InputMethodQuery",                 Member::INTEGER,              (void*) QInputMethodEvent::InputMethodQuery },
    { "KeyPress",                         Member::INTEGER,              (void*) QInputMethodEvent::KeyPress },
    { "KeyRelease",                       Member::INTEGER,              (void*) QInputMethodEvent::KeyRelease },
    { "KeyboardLayoutChange",             Member::INTEGER,              (void*) QInputMethodEvent::KeyboardLayoutChange },
    { "Language",                         Member::INTEGER,              (void*) QInputMethodEvent::Language },
    { "LanguageChange",                   Member::INTEGER,              (void*) QInputMethodEvent::LanguageChange },
    { "LayoutDirectionChange",            Member::INTEGER,              (void*) QInputMethodEvent::LayoutDirectionChange },
    { "LayoutRequest",                    Member::INTEGER,              (void*) QInputMethodEvent::LayoutRequest },
    { "Leave",                            Member::INTEGER,              (void*) QInputMethodEvent::Leave },
    { "LeaveWhatsThisMode",               Member::INTEGER,              (void*) QInputMethodEvent::LeaveWhatsThisMode },
    { "LocaleChange",                     Member::INTEGER,              (void*) QInputMethodEvent::LocaleChange },
    { "MacSizeChange",                    Member::INTEGER,              (void*) QInputMethodEvent::MacSizeChange },
    { "MetaCall",                         Member::INTEGER,              (void*) QInputMethodEvent::MetaCall },
    { "ModifiedChange",                   Member::INTEGER,              (void*) QInputMethodEvent::ModifiedChange },
    { "MouseButtonDblClick",              Member::INTEGER,              (void*) QInputMethodEvent::MouseButtonDblClick },
    { "MouseButtonPress",                 Member::INTEGER,              (void*) QInputMethodEvent::MouseButtonPress },
    { "MouseButtonRelease",               Member::INTEGER,              (void*) QInputMethodEvent::MouseButtonRelease },
    { "MouseMove",                        Member::INTEGER,              (void*) QInputMethodEvent::MouseMove },
    { "MouseTrackingChange",              Member::INTEGER,              (void*) QInputMethodEvent::MouseTrackingChange },
    { "Move",                             Member::INTEGER,              (void*) QInputMethodEvent::Move },
    { "NativeGesture",                    Member::INTEGER,              (void*) QInputMethodEvent::NativeGesture },
    { "NonClientAreaMouseButtonDblClick", Member::INTEGER,              (void*) QInputMethodEvent::NonClientAreaMouseButtonDblClick },
    { "NonClientAreaMouseButtonPress",    Member::INTEGER,              (void*) QInputMethodEvent::NonClientAreaMouseButtonPress },
    { "NonClientAreaMouseButtonRelease",  Member::INTEGER,              (void*) QInputMethodEvent::NonClientAreaMouseButtonRelease },
    { "NonClientAreaMouseMove",           Member::INTEGER,              (void*) QInputMethodEvent::NonClientAreaMouseMove },
    { "None",                             Member::INTEGER,              (void*) QInputMethodEvent::None },
    { "OrientationChange",                Member::INTEGER,              (void*) QInputMethodEvent::OrientationChange },
    { "Paint",                            Member::INTEGER,              (void*) QInputMethodEvent::Paint },
    { "PaletteChange",                    Member::INTEGER,              (void*) QInputMethodEvent::PaletteChange },
    { "ParentAboutToChange",              Member::INTEGER,              (void*) QInputMethodEvent::ParentAboutToChange },
    { "ParentChange",                     Member::INTEGER,              (void*) QInputMethodEvent::ParentChange },
    { "ParentWindowAboutToChange",        Member::INTEGER,              (void*) QInputMethodEvent::ParentWindowAboutToChange },
    { "ParentWindowChange",               Member::INTEGER,              (void*) QInputMethodEvent::ParentWindowChange },
    { "PlatformPanel",                    Member::INTEGER,              (void*) QInputMethodEvent::PlatformPanel },
    { "PlatformSurface",                  Member::INTEGER,              (void*) QInputMethodEvent::PlatformSurface },
    { "Polish",                           Member::INTEGER,              (void*) QInputMethodEvent::Polish },
    { "PolishRequest",                    Member::INTEGER,              (void*) QInputMethodEvent::PolishRequest },
    { "QueryWhatsThis",                   Member::INTEGER,              (void*) QInputMethodEvent::QueryWhatsThis },
    { "Quit",                             Member::INTEGER,              (void*) QInputMethodEvent::Quit },
    { "ReadOnlyChange",                   Member::INTEGER,              (void*) QInputMethodEvent::ReadOnlyChange },
    { "RequestSoftwareInputPanel",        Member::INTEGER,              (void*) QInputMethodEvent::RequestSoftwareInputPanel },
    { "Resize",                           Member::INTEGER,              (void*) QInputMethodEvent::Resize },
    { "Ruby",                             Member::INTEGER,              (void*) QInputMethodEvent::Ruby },
    { "SafeAreaMarginsChange",            Member::INTEGER,              (void*) QInputMethodEvent::SafeAreaMarginsChange },
    { "Scroll",                           Member::INTEGER,              (void*) QInputMethodEvent::Scroll },
    { "ScrollPrepare",                    Member::INTEGER,              (void*) QInputMethodEvent::ScrollPrepare },
    { "Selection",                        Member::INTEGER,              (void*) QInputMethodEvent::Selection },
    { "Shortcut",                         Member::INTEGER,              (void*) QInputMethodEvent::Shortcut },
    { "ShortcutOverride",                 Member::INTEGER,              (void*) QInputMethodEvent::ShortcutOverride },
    { "Show",                             Member::INTEGER,              (void*) QInputMethodEvent::Show },
    { "ShowToParent",                     Member::INTEGER,              (void*) QInputMethodEvent::ShowToParent },
    { "SockAct",                          Member::INTEGER,              (void*) QInputMethodEvent::SockAct },
    { "StateMachineSignal",               Member::INTEGER,              (void*) QInputMethodEvent::StateMachineSignal },
    { "StateMachineWrapped",              Member::INTEGER,              (void*) QInputMethodEvent::StateMachineWrapped },
    { "StatusTip",                        Member::INTEGER,              (void*) QInputMethodEvent::StatusTip },
    { "StyleChange",                      Member::INTEGER,              (void*) QInputMethodEvent::StyleChange },
    { "TabletEnterProximity",             Member::INTEGER,              (void*) QInputMethodEvent::TabletEnterProximity },
    { "TabletLeaveProximity",             Member::INTEGER,              (void*) QInputMethodEvent::TabletLeaveProximity },
    { "TabletMove",                       Member::INTEGER,              (void*) QInputMethodEvent::TabletMove },
    { "TabletPress",                      Member::INTEGER,              (void*) QInputMethodEvent::TabletPress },
    { "TabletRelease",                    Member::INTEGER,              (void*) QInputMethodEvent::TabletRelease },
    { "TabletTrackingChange",             Member::INTEGER,              (void*) QInputMethodEvent::TabletTrackingChange },
    { "TextFormat",                       Member::INTEGER,              (void*) QInputMethodEvent::TextFormat },
    { "ThreadChange",                     Member::INTEGER,              (void*) QInputMethodEvent::ThreadChange },
    { "Timer",                            Member::INTEGER,              (void*) QInputMethodEvent::Timer },
    { "ToolBarChange",                    Member::INTEGER,              (void*) QInputMethodEvent::ToolBarChange },
    { "ToolTip",                          Member::INTEGER,              (void*) QInputMethodEvent::ToolTip },
    { "ToolTipChange",                    Member::INTEGER,              (void*) QInputMethodEvent::ToolTipChange },
    { "TouchBegin",                       Member::INTEGER,              (void*) QInputMethodEvent::TouchBegin },
    { "TouchCancel",                      Member::INTEGER,              (void*) QInputMethodEvent::TouchCancel },
    { "TouchEnd",                         Member::INTEGER,              (void*) QInputMethodEvent::TouchEnd },
    { "TouchUpdate",                      Member::INTEGER,              (void*) QInputMethodEvent::TouchUpdate },
    { "UngrabKeyboard",                   Member::INTEGER,              (void*) QInputMethodEvent::UngrabKeyboard },
    { "UngrabMouse",                      Member::INTEGER,              (void*) QInputMethodEvent::UngrabMouse },
    { "UpdateLater",                      Member::INTEGER,              (void*) QInputMethodEvent::UpdateLater },
    { "UpdateRequest",                    Member::INTEGER,              (void*) QInputMethodEvent::UpdateRequest },
    { "WhatsThis",                        Member::INTEGER,              (void*) QInputMethodEvent::WhatsThis },
    { "WhatsThisClicked",                 Member::INTEGER,              (void*) QInputMethodEvent::WhatsThisClicked },
    { "Wheel",                            Member::INTEGER,              (void*) QInputMethodEvent::Wheel },
    { "WinEventAct",                      Member::INTEGER,              (void*) QInputMethodEvent::WinEventAct },
    { "WinIdChange",                      Member::INTEGER,              (void*) QInputMethodEvent::WinIdChange },
    { "WindowActivate",                   Member::INTEGER,              (void*) QInputMethodEvent::WindowActivate },
    { "WindowBlocked",                    Member::INTEGER,              (void*) QInputMethodEvent::WindowBlocked },
    { "WindowDeactivate",                 Member::INTEGER,              (void*) QInputMethodEvent::WindowDeactivate },
    { "WindowIconChange",                 Member::INTEGER,              (void*) QInputMethodEvent::WindowIconChange },
    { "WindowStateChange",                Member::INTEGER,              (void*) QInputMethodEvent::WindowStateChange },
    { "WindowTitleChange",                Member::INTEGER,              (void*) QInputMethodEvent::WindowTitleChange },
    { "WindowUnblocked",                  Member::INTEGER,              (void*) QInputMethodEvent::WindowUnblocked },
    { "ZOrderChange",                     Member::INTEGER,              (void*) QInputMethodEvent::ZOrderChange },
    { "accept",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_accept },
    { "commitString",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QInputMethodEvent_commitString },
    { "ignore",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_ignore },
    { "isAccepted",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_isAccepted },
    { "preeditString",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QInputMethodEvent_preeditString },
    { "replacementLength",                Member::NORMAL_FUNCTION,      (void*) lqtk_QInputMethodEvent_replacementLength },
    { "replacementStart",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QInputMethodEvent_replacementStart },
    { "setAccepted",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_setAccepted },
    { "setCommitString",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QInputMethodEvent_setCommitString },
    { "type",                             Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_type },
    { NULL,                               Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QInputMethodEventBinding::classInfo = 
{
    "QInputMethodEvent",

    &QEventBinding::classInfo,

    false, // isQObject
    false, // needsGuard
    lqtk_QInputMethodEvent_constructor,
    lqtk_QInputMethodEvent_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    168,
    members
};

/* ============================================================================================ */

int QInputMethodEventBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
