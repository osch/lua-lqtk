// Type: QWheelEvent
// Base: QSinglePointEvent

/* ============================================================================================ */

#include <QEvent>
#include <QInputEvent>
#include <QObject>
#include <QPoint>
#include <QPointF>
#include <QPointerEvent>
#include <QSinglePointEvent>
#include <QWheelEvent>
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
#include "QObjectBinding.hpp"
#include "QPointBinding.hpp"
#include "QPointFBinding.hpp"
#include "QPointerEventBinding.hpp"
#include "QSinglePointEventBinding.hpp"
#include "QWheelEventBinding.hpp"
#include "QtBinding.hpp"
#include "QWheelEventWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QWheelEventWrapper::QWheelEventWrapper(
                   QPointF arg1, 
                   QPointF arg2, 
                   QPoint arg3, 
                   QPoint arg4, 
                   Qt::MouseButtons arg5, 
                   Qt::KeyboardModifiers arg6, 
                   Qt::ScrollPhase arg7, 
                   bool arg8) 
        : QWheelEvent(
                   arg1,
                   arg2,
                   arg3,
                   arg4,
                   arg5,
                   arg6,
                   arg7,
                   arg8),
          lqtk_stateGuard(nullptr)
    {}
    QWheelEventWrapper::QWheelEventWrapper(
                   QPointF arg1, 
                   QPointF arg2, 
                   QPoint arg3, 
                   QPoint arg4, 
                   Qt::MouseButtons arg5, 
                   Qt::KeyboardModifiers arg6, 
                   Qt::ScrollPhase arg7, 
                   bool arg8, 
                   Qt::MouseEventSource arg9) 
        : QWheelEvent(
                   arg1,
                   arg2,
                   arg3,
                   arg4,
                   arg5,
                   arg6,
                   arg7,
                   arg8,
                   arg9),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QWheelEventWrapper::lqtk_destruct(lua_State* L) {
        QWheelEvent* objPtr = (QWheelEvent*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QWheelEventWrapper::~QWheelEventWrapper() {
        trace::printf("Deleting lqtk::QWheelEventWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->getL();
            if (L) {
                QWheelEvent* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QWheelEvent");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QWheelEventWrapper::isBeginEvent1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        isBeginEvent1CallArgs* args = (isBeginEvent1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "isBeginEvent") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 1, 1, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
                args->hasValidResult = args->rslt.test(L, -1);
            }
        }
        return 0;
    }

    bool QWheelEventWrapper::isBeginEvent() const
    {
        lua_State* L = getL();
        if (L) {
            isBeginEvent1CallArgs args(
                    const_cast<QWheelEventWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, isBeginEvent1_doLua, &args, "QWheelEvent", "isBeginEvent");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QWheelEvent", "isBeginEvent", msg);
                }
            }
        }
        return QWheelEvent::isBeginEvent();
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QWheelEventWrapper::isEndEvent1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        isEndEvent1CallArgs* args = (isEndEvent1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "isEndEvent") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 1, 1, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
                args->hasValidResult = args->rslt.test(L, -1);
            }
        }
        return 0;
    }

    bool QWheelEventWrapper::isEndEvent() const
    {
        lua_State* L = getL();
        if (L) {
            isEndEvent1CallArgs args(
                    const_cast<QWheelEventWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, isEndEvent1_doLua, &args, "QWheelEvent", "isEndEvent");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QWheelEvent", "isEndEvent", msg);
                }
            }
        }
        return QWheelEvent::isEndEvent();
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QWheelEventWrapper::isUpdateEvent1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        isUpdateEvent1CallArgs* args = (isUpdateEvent1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "isUpdateEvent") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 1, 1, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
                args->hasValidResult = args->rslt.test(L, -1);
            }
        }
        return 0;
    }

    bool QWheelEventWrapper::isUpdateEvent() const
    {
        lua_State* L = getL();
        if (L) {
            isUpdateEvent1CallArgs args(
                    const_cast<QWheelEventWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, isUpdateEvent1_doLua, &args, "QWheelEvent", "isUpdateEvent");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QWheelEvent", "isUpdateEvent", msg);
                }
            }
        }
        return QWheelEvent::isUpdateEvent();
    }

} // namespace lqtk

/* ============================================================================================ */

extern "C" {
    int lqtk_QSinglePointEvent_button(lua_State* L);
    int lqtk_QSinglePointEvent_buttons(lua_State* L);
    int lqtk_QSinglePointEvent_exclusivePointGrabber(lua_State* L);
    int lqtk_QSinglePointEvent_globalPosition(lua_State* L);
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


struct lqtk_QWheelEvent_angleDelta_Args
{
    FromLua<QWheelEvent*> arg_1_1;
    ToLua<QPoint*> rslt_1;
};

extern "C" int lqtk_QWheelEvent_angleDelta(lua_State* L)
{
    lqtk_QWheelEvent_angleDelta_Args  argValues;
    lqtk_QWheelEvent_angleDelta_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QWheelEvent::angleDelta();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWheelEvent", "angleDelta", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWheelEvent_inverted_Args
{
    FromLua<QWheelEvent*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QWheelEvent_inverted(lua_State* L)
{
    lqtk_QWheelEvent_inverted_Args  argValues;
    lqtk_QWheelEvent_inverted_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QWheelEvent::inverted();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWheelEvent", "inverted", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWheelEvent_isBeginEvent_Args
{
    FromLua<QWheelEvent*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QWheelEvent_isBeginEvent(lua_State* L)
{
    lqtk_QWheelEvent_isBeginEvent_Args  argValues;
    lqtk_QWheelEvent_isBeginEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QWheelEvent::isBeginEvent();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWheelEvent", "isBeginEvent", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWheelEvent_isEndEvent_Args
{
    FromLua<QWheelEvent*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QWheelEvent_isEndEvent(lua_State* L)
{
    lqtk_QWheelEvent_isEndEvent_Args  argValues;
    lqtk_QWheelEvent_isEndEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QWheelEvent::isEndEvent();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWheelEvent", "isEndEvent", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWheelEvent_isUpdateEvent_Args
{
    FromLua<QWheelEvent*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QWheelEvent_isUpdateEvent(lua_State* L)
{
    lqtk_QWheelEvent_isUpdateEvent_Args  argValues;
    lqtk_QWheelEvent_isUpdateEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QWheelEvent::isUpdateEvent();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWheelEvent", "isUpdateEvent", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWheelEvent_phase_Args
{
    FromLua<QWheelEvent*> arg_1_1;
    ToLua<Qt::ScrollPhase> rslt_1;
};

extern "C" int lqtk_QWheelEvent_phase(lua_State* L)
{
    lqtk_QWheelEvent_phase_Args  argValues;
    lqtk_QWheelEvent_phase_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QWheelEvent::phase();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWheelEvent", "phase", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWheelEvent_pixelDelta_Args
{
    FromLua<QWheelEvent*> arg_1_1;
    ToLua<QPoint*> rslt_1;
};

extern "C" int lqtk_QWheelEvent_pixelDelta(lua_State* L)
{
    lqtk_QWheelEvent_pixelDelta_Args  argValues;
    lqtk_QWheelEvent_pixelDelta_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QWheelEvent::pixelDelta();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWheelEvent", "pixelDelta", nargs, "1");
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
        QWheelEventBinding::QType* ptr = static_cast<QWheelEventBinding::QType*>(objectPtr);
        if (targetClassInfo == &QWheelEventBinding::classInfo) {
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
        QWheelEvent* ptr = (QWheelEvent*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QWheelEvent* obj = (QWheelEvent*) objectPtr;
        
        QWheelEventWrapper* wrapper = dynamic_cast<QWheelEventWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */

struct lqtk_QWheelEvent_new_Args
{
    FromLua<QPointF*> arg_1_1;
    FromLua<QPointF*> arg_1_2;
    FromLua<QPoint*> arg_2_1;
    FromLua<QPoint*> arg_2_2;
    FromLua<Qt::MouseButtons> arg_3_1;
    FromLua<Qt::KeyboardModifiers> arg_4_1;
    FromLua<Qt::ScrollPhase> arg_5_1;
    FromLua<bool> arg_6_1;
    FromLua<Qt::MouseEventSource> arg_7_1;
    ToLua<QWheelEvent*> rslt_1;
};

extern "C" int lqtk_QWheelEvent_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QWheelEvent_new_Args  argValues;
    lqtk_QWheelEvent_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QWheelEventBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QWheelEvent> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 8) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            args->arg_2_1.check(L, argOffs+3);
            args->arg_2_2.check(L, argOffs+4);
            args->arg_3_1.check(L, argOffs+5);
            args->arg_4_1.check(L, argOffs+6);
            args->arg_5_1.check(L, argOffs+7);
            args->arg_6_1.check(L, argOffs+8);
            {
                QWheelEventWrapper* rslt = 
                    new QWheelEventWrapper(*args->arg_1_1.getValue(), *args->arg_1_2.getValue(), *args->arg_2_1.getValue(), *args->arg_2_2.getValue(), args->arg_3_1.getValue(), args->arg_4_1.getValue(), args->arg_5_1.getValue(), args->arg_6_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, (QWheelEvent*)rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 9) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            args->arg_2_1.check(L, argOffs+3);
            args->arg_2_2.check(L, argOffs+4);
            args->arg_3_1.check(L, argOffs+5);
            args->arg_4_1.check(L, argOffs+6);
            args->arg_5_1.check(L, argOffs+7);
            args->arg_6_1.check(L, argOffs+8);
            args->arg_7_1.check(L, argOffs+9);
            {
                QWheelEventWrapper* rslt = 
                    new QWheelEventWrapper(*args->arg_1_1.getValue(), *args->arg_1_2.getValue(), *args->arg_2_1.getValue(), *args->arg_2_2.getValue(), args->arg_3_1.getValue(), args->arg_4_1.getValue(), args->arg_5_1.getValue(), args->arg_6_1.getValue(), args->arg_7_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, (QWheelEvent*)rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QWheelEvent", "new", nargs, "9,10");
        } else {
            return util::argCountError(L, "QWheelEvent", nullptr, nargs, "8,9");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QWheelEvent_new(lua_State* L)
{
    return lqtk_QWheelEvent_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QWheelEventBinding::pushObject(lua_State* L, QWheelEvent* objPtr, OwnerType ownerType)
{
    QWheelEventWrapper* wrapper = dynamic_cast<QWheelEventWrapper*>(objPtr);
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
        udata = ObjectUdata::pushNew<QWheelEvent>(L, hasUserValue);     // -> uval?, udata
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
    { "ActionAdded",                      Member::INTEGER,              (void*) QWheelEvent::ActionAdded },
    { "ActionChanged",                    Member::INTEGER,              (void*) QWheelEvent::ActionChanged },
    { "ActionRemoved",                    Member::INTEGER,              (void*) QWheelEvent::ActionRemoved },
    { "ActivationChange",                 Member::INTEGER,              (void*) QWheelEvent::ActivationChange },
    { "ApplicationActivate",              Member::INTEGER,              (void*) QWheelEvent::ApplicationActivate },
    { "ApplicationActivated",             Member::INTEGER,              (void*) QWheelEvent::ApplicationActivated },
    { "ApplicationDeactivate",            Member::INTEGER,              (void*) QWheelEvent::ApplicationDeactivate },
    { "ApplicationFontChange",            Member::INTEGER,              (void*) QWheelEvent::ApplicationFontChange },
    { "ApplicationLayoutDirectionChange", Member::INTEGER,              (void*) QWheelEvent::ApplicationLayoutDirectionChange },
    { "ApplicationPaletteChange",         Member::INTEGER,              (void*) QWheelEvent::ApplicationPaletteChange },
    { "ApplicationStateChange",           Member::INTEGER,              (void*) QWheelEvent::ApplicationStateChange },
    { "ApplicationWindowIconChange",      Member::INTEGER,              (void*) QWheelEvent::ApplicationWindowIconChange },
    { "ChildAdded",                       Member::INTEGER,              (void*) QWheelEvent::ChildAdded },
    { "ChildPolished",                    Member::INTEGER,              (void*) QWheelEvent::ChildPolished },
    { "ChildRemoved",                     Member::INTEGER,              (void*) QWheelEvent::ChildRemoved },
    { "ChildWindowAdded",                 Member::INTEGER,              (void*) QWheelEvent::ChildWindowAdded },
    { "ChildWindowRemoved",               Member::INTEGER,              (void*) QWheelEvent::ChildWindowRemoved },
    { "Clipboard",                        Member::INTEGER,              (void*) QWheelEvent::Clipboard },
    { "Close",                            Member::INTEGER,              (void*) QWheelEvent::Close },
    { "CloseSoftwareInputPanel",          Member::INTEGER,              (void*) QWheelEvent::CloseSoftwareInputPanel },
    { "ContentsRectChange",               Member::INTEGER,              (void*) QWheelEvent::ContentsRectChange },
    { "ContextMenu",                      Member::INTEGER,              (void*) QWheelEvent::ContextMenu },
    { "CursorChange",                     Member::INTEGER,              (void*) QWheelEvent::CursorChange },
    { "DeferredDelete",                   Member::INTEGER,              (void*) QWheelEvent::DeferredDelete },
    { "DevicePixelRatioChange",           Member::INTEGER,              (void*) QWheelEvent::DevicePixelRatioChange },
    { "DragEnter",                        Member::INTEGER,              (void*) QWheelEvent::DragEnter },
    { "DragLeave",                        Member::INTEGER,              (void*) QWheelEvent::DragLeave },
    { "DragMove",                         Member::INTEGER,              (void*) QWheelEvent::DragMove },
    { "Drop",                             Member::INTEGER,              (void*) QWheelEvent::Drop },
    { "DynamicPropertyChange",            Member::INTEGER,              (void*) QWheelEvent::DynamicPropertyChange },
    { "EnabledChange",                    Member::INTEGER,              (void*) QWheelEvent::EnabledChange },
    { "Enter",                            Member::INTEGER,              (void*) QWheelEvent::Enter },
    { "EnterWhatsThisMode",               Member::INTEGER,              (void*) QWheelEvent::EnterWhatsThisMode },
    { "Expose",                           Member::INTEGER,              (void*) QWheelEvent::Expose },
    { "FileOpen",                         Member::INTEGER,              (void*) QWheelEvent::FileOpen },
    { "FocusAboutToChange",               Member::INTEGER,              (void*) QWheelEvent::FocusAboutToChange },
    { "FocusIn",                          Member::INTEGER,              (void*) QWheelEvent::FocusIn },
    { "FocusOut",                         Member::INTEGER,              (void*) QWheelEvent::FocusOut },
    { "FontChange",                       Member::INTEGER,              (void*) QWheelEvent::FontChange },
    { "Gesture",                          Member::INTEGER,              (void*) QWheelEvent::Gesture },
    { "GestureOverride",                  Member::INTEGER,              (void*) QWheelEvent::GestureOverride },
    { "GrabKeyboard",                     Member::INTEGER,              (void*) QWheelEvent::GrabKeyboard },
    { "GrabMouse",                        Member::INTEGER,              (void*) QWheelEvent::GrabMouse },
    { "GraphicsSceneContextMenu",         Member::INTEGER,              (void*) QWheelEvent::GraphicsSceneContextMenu },
    { "GraphicsSceneDragEnter",           Member::INTEGER,              (void*) QWheelEvent::GraphicsSceneDragEnter },
    { "GraphicsSceneDragLeave",           Member::INTEGER,              (void*) QWheelEvent::GraphicsSceneDragLeave },
    { "GraphicsSceneDragMove",            Member::INTEGER,              (void*) QWheelEvent::GraphicsSceneDragMove },
    { "GraphicsSceneDrop",                Member::INTEGER,              (void*) QWheelEvent::GraphicsSceneDrop },
    { "GraphicsSceneHelp",                Member::INTEGER,              (void*) QWheelEvent::GraphicsSceneHelp },
    { "GraphicsSceneHoverEnter",          Member::INTEGER,              (void*) QWheelEvent::GraphicsSceneHoverEnter },
    { "GraphicsSceneHoverLeave",          Member::INTEGER,              (void*) QWheelEvent::GraphicsSceneHoverLeave },
    { "GraphicsSceneHoverMove",           Member::INTEGER,              (void*) QWheelEvent::GraphicsSceneHoverMove },
    { "GraphicsSceneLeave",               Member::INTEGER,              (void*) QWheelEvent::GraphicsSceneLeave },
    { "GraphicsSceneMouseDoubleClick",    Member::INTEGER,              (void*) QWheelEvent::GraphicsSceneMouseDoubleClick },
    { "GraphicsSceneMouseMove",           Member::INTEGER,              (void*) QWheelEvent::GraphicsSceneMouseMove },
    { "GraphicsSceneMousePress",          Member::INTEGER,              (void*) QWheelEvent::GraphicsSceneMousePress },
    { "GraphicsSceneMouseRelease",        Member::INTEGER,              (void*) QWheelEvent::GraphicsSceneMouseRelease },
    { "GraphicsSceneMove",                Member::INTEGER,              (void*) QWheelEvent::GraphicsSceneMove },
    { "GraphicsSceneResize",              Member::INTEGER,              (void*) QWheelEvent::GraphicsSceneResize },
    { "GraphicsSceneWheel",               Member::INTEGER,              (void*) QWheelEvent::GraphicsSceneWheel },
    { "Hide",                             Member::INTEGER,              (void*) QWheelEvent::Hide },
    { "HideToParent",                     Member::INTEGER,              (void*) QWheelEvent::HideToParent },
    { "HoverEnter",                       Member::INTEGER,              (void*) QWheelEvent::HoverEnter },
    { "HoverLeave",                       Member::INTEGER,              (void*) QWheelEvent::HoverLeave },
    { "HoverMove",                        Member::INTEGER,              (void*) QWheelEvent::HoverMove },
    { "IconDrag",                         Member::INTEGER,              (void*) QWheelEvent::IconDrag },
    { "IconTextChange",                   Member::INTEGER,              (void*) QWheelEvent::IconTextChange },
    { "InputMethod",                      Member::INTEGER,              (void*) QWheelEvent::InputMethod },
    { "InputMethodQuery",                 Member::INTEGER,              (void*) QWheelEvent::InputMethodQuery },
    { "KeyPress",                         Member::INTEGER,              (void*) QWheelEvent::KeyPress },
    { "KeyRelease",                       Member::INTEGER,              (void*) QWheelEvent::KeyRelease },
    { "KeyboardLayoutChange",             Member::INTEGER,              (void*) QWheelEvent::KeyboardLayoutChange },
    { "LanguageChange",                   Member::INTEGER,              (void*) QWheelEvent::LanguageChange },
    { "LayoutDirectionChange",            Member::INTEGER,              (void*) QWheelEvent::LayoutDirectionChange },
    { "LayoutRequest",                    Member::INTEGER,              (void*) QWheelEvent::LayoutRequest },
    { "Leave",                            Member::INTEGER,              (void*) QWheelEvent::Leave },
    { "LeaveWhatsThisMode",               Member::INTEGER,              (void*) QWheelEvent::LeaveWhatsThisMode },
    { "LocaleChange",                     Member::INTEGER,              (void*) QWheelEvent::LocaleChange },
    { "MacSizeChange",                    Member::INTEGER,              (void*) QWheelEvent::MacSizeChange },
    { "MetaCall",                         Member::INTEGER,              (void*) QWheelEvent::MetaCall },
    { "ModifiedChange",                   Member::INTEGER,              (void*) QWheelEvent::ModifiedChange },
    { "MouseButtonDblClick",              Member::INTEGER,              (void*) QWheelEvent::MouseButtonDblClick },
    { "MouseButtonPress",                 Member::INTEGER,              (void*) QWheelEvent::MouseButtonPress },
    { "MouseButtonRelease",               Member::INTEGER,              (void*) QWheelEvent::MouseButtonRelease },
    { "MouseMove",                        Member::INTEGER,              (void*) QWheelEvent::MouseMove },
    { "MouseTrackingChange",              Member::INTEGER,              (void*) QWheelEvent::MouseTrackingChange },
    { "Move",                             Member::INTEGER,              (void*) QWheelEvent::Move },
    { "NativeGesture",                    Member::INTEGER,              (void*) QWheelEvent::NativeGesture },
    { "NonClientAreaMouseButtonDblClick", Member::INTEGER,              (void*) QWheelEvent::NonClientAreaMouseButtonDblClick },
    { "NonClientAreaMouseButtonPress",    Member::INTEGER,              (void*) QWheelEvent::NonClientAreaMouseButtonPress },
    { "NonClientAreaMouseButtonRelease",  Member::INTEGER,              (void*) QWheelEvent::NonClientAreaMouseButtonRelease },
    { "NonClientAreaMouseMove",           Member::INTEGER,              (void*) QWheelEvent::NonClientAreaMouseMove },
    { "None",                             Member::INTEGER,              (void*) QWheelEvent::None },
    { "OrientationChange",                Member::INTEGER,              (void*) QWheelEvent::OrientationChange },
    { "Paint",                            Member::INTEGER,              (void*) QWheelEvent::Paint },
    { "PaletteChange",                    Member::INTEGER,              (void*) QWheelEvent::PaletteChange },
    { "ParentAboutToChange",              Member::INTEGER,              (void*) QWheelEvent::ParentAboutToChange },
    { "ParentChange",                     Member::INTEGER,              (void*) QWheelEvent::ParentChange },
    { "ParentWindowAboutToChange",        Member::INTEGER,              (void*) QWheelEvent::ParentWindowAboutToChange },
    { "ParentWindowChange",               Member::INTEGER,              (void*) QWheelEvent::ParentWindowChange },
    { "PlatformPanel",                    Member::INTEGER,              (void*) QWheelEvent::PlatformPanel },
    { "PlatformSurface",                  Member::INTEGER,              (void*) QWheelEvent::PlatformSurface },
    { "Polish",                           Member::INTEGER,              (void*) QWheelEvent::Polish },
    { "PolishRequest",                    Member::INTEGER,              (void*) QWheelEvent::PolishRequest },
    { "QueryWhatsThis",                   Member::INTEGER,              (void*) QWheelEvent::QueryWhatsThis },
    { "Quit",                             Member::INTEGER,              (void*) QWheelEvent::Quit },
    { "ReadOnlyChange",                   Member::INTEGER,              (void*) QWheelEvent::ReadOnlyChange },
    { "RequestSoftwareInputPanel",        Member::INTEGER,              (void*) QWheelEvent::RequestSoftwareInputPanel },
    { "Resize",                           Member::INTEGER,              (void*) QWheelEvent::Resize },
    { "SafeAreaMarginsChange",            Member::INTEGER,              (void*) QWheelEvent::SafeAreaMarginsChange },
    { "Scroll",                           Member::INTEGER,              (void*) QWheelEvent::Scroll },
    { "ScrollPrepare",                    Member::INTEGER,              (void*) QWheelEvent::ScrollPrepare },
    { "Shortcut",                         Member::INTEGER,              (void*) QWheelEvent::Shortcut },
    { "ShortcutOverride",                 Member::INTEGER,              (void*) QWheelEvent::ShortcutOverride },
    { "Show",                             Member::INTEGER,              (void*) QWheelEvent::Show },
    { "ShowToParent",                     Member::INTEGER,              (void*) QWheelEvent::ShowToParent },
    { "SockAct",                          Member::INTEGER,              (void*) QWheelEvent::SockAct },
    { "StateMachineSignal",               Member::INTEGER,              (void*) QWheelEvent::StateMachineSignal },
    { "StateMachineWrapped",              Member::INTEGER,              (void*) QWheelEvent::StateMachineWrapped },
    { "StatusTip",                        Member::INTEGER,              (void*) QWheelEvent::StatusTip },
    { "StyleChange",                      Member::INTEGER,              (void*) QWheelEvent::StyleChange },
    { "TabletEnterProximity",             Member::INTEGER,              (void*) QWheelEvent::TabletEnterProximity },
    { "TabletLeaveProximity",             Member::INTEGER,              (void*) QWheelEvent::TabletLeaveProximity },
    { "TabletMove",                       Member::INTEGER,              (void*) QWheelEvent::TabletMove },
    { "TabletPress",                      Member::INTEGER,              (void*) QWheelEvent::TabletPress },
    { "TabletRelease",                    Member::INTEGER,              (void*) QWheelEvent::TabletRelease },
    { "TabletTrackingChange",             Member::INTEGER,              (void*) QWheelEvent::TabletTrackingChange },
    { "ThreadChange",                     Member::INTEGER,              (void*) QWheelEvent::ThreadChange },
    { "Timer",                            Member::INTEGER,              (void*) QWheelEvent::Timer },
    { "ToolBarChange",                    Member::INTEGER,              (void*) QWheelEvent::ToolBarChange },
    { "ToolTip",                          Member::INTEGER,              (void*) QWheelEvent::ToolTip },
    { "ToolTipChange",                    Member::INTEGER,              (void*) QWheelEvent::ToolTipChange },
    { "TouchBegin",                       Member::INTEGER,              (void*) QWheelEvent::TouchBegin },
    { "TouchCancel",                      Member::INTEGER,              (void*) QWheelEvent::TouchCancel },
    { "TouchEnd",                         Member::INTEGER,              (void*) QWheelEvent::TouchEnd },
    { "TouchUpdate",                      Member::INTEGER,              (void*) QWheelEvent::TouchUpdate },
    { "UngrabKeyboard",                   Member::INTEGER,              (void*) QWheelEvent::UngrabKeyboard },
    { "UngrabMouse",                      Member::INTEGER,              (void*) QWheelEvent::UngrabMouse },
    { "UpdateLater",                      Member::INTEGER,              (void*) QWheelEvent::UpdateLater },
    { "UpdateRequest",                    Member::INTEGER,              (void*) QWheelEvent::UpdateRequest },
    { "WhatsThis",                        Member::INTEGER,              (void*) QWheelEvent::WhatsThis },
    { "WhatsThisClicked",                 Member::INTEGER,              (void*) QWheelEvent::WhatsThisClicked },
    { "Wheel",                            Member::INTEGER,              (void*) QWheelEvent::Wheel },
    { "WinEventAct",                      Member::INTEGER,              (void*) QWheelEvent::WinEventAct },
    { "WinIdChange",                      Member::INTEGER,              (void*) QWheelEvent::WinIdChange },
    { "WindowActivate",                   Member::INTEGER,              (void*) QWheelEvent::WindowActivate },
    { "WindowBlocked",                    Member::INTEGER,              (void*) QWheelEvent::WindowBlocked },
    { "WindowDeactivate",                 Member::INTEGER,              (void*) QWheelEvent::WindowDeactivate },
    { "WindowIconChange",                 Member::INTEGER,              (void*) QWheelEvent::WindowIconChange },
    { "WindowStateChange",                Member::INTEGER,              (void*) QWheelEvent::WindowStateChange },
    { "WindowTitleChange",                Member::INTEGER,              (void*) QWheelEvent::WindowTitleChange },
    { "WindowUnblocked",                  Member::INTEGER,              (void*) QWheelEvent::WindowUnblocked },
    { "ZOrderChange",                     Member::INTEGER,              (void*) QWheelEvent::ZOrderChange },
    { "accept",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_accept },
    { "angleDelta",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QWheelEvent_angleDelta },
    { "button",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QSinglePointEvent_button },
    { "buttons",                          Member::NORMAL_FUNCTION,      (void*) lqtk_QSinglePointEvent_buttons },
    { "exclusivePointGrabber",            Member::NORMAL_FUNCTION,      (void*) lqtk_QSinglePointEvent_exclusivePointGrabber },
    { "globalPosition",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QSinglePointEvent_globalPosition },
    { "ignore",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_ignore },
    { "inverted",                         Member::NORMAL_FUNCTION,      (void*) lqtk_QWheelEvent_inverted },
    { "isAccepted",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_isAccepted },
    { "isBeginEvent",                     Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWheelEvent_isBeginEvent },
    { "isEndEvent",                       Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWheelEvent_isEndEvent },
    { "isUpdateEvent",                    Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWheelEvent_isUpdateEvent },
    { "phase",                            Member::NORMAL_FUNCTION,      (void*) lqtk_QWheelEvent_phase },
    { "pixelDelta",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QWheelEvent_pixelDelta },
    { "position",                         Member::NORMAL_FUNCTION,      (void*) lqtk_QSinglePointEvent_position },
    { "scenePosition",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QSinglePointEvent_scenePosition },
    { "setAccepted",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_setAccepted },
    { "setExclusivePointGrabber",         Member::NORMAL_FUNCTION,      (void*) lqtk_QSinglePointEvent_setExclusivePointGrabber },
    { "type",                             Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_type },
    { NULL,                               Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QWheelEventBinding::classInfo = 
{
    "QWheelEvent",

    &QSinglePointEventBinding::classInfo,

    false, // isQObject
    false, // needsGuard
    lqtk_QWheelEvent_constructor,
    lqtk_QWheelEvent_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    172,
    members
};

/* ============================================================================================ */

int QWheelEventBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
