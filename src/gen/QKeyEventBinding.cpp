// Type: QKeyEvent
// Base: QInputEvent

/* ============================================================================================ */

#include <QEvent>
#include <QInputEvent>
#include <QKeyCombination>
#include <QKeyEvent>
#include <QKeySequence>
#include <QObject>
#include <QString>
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
#include "QKeyCombinationBinding.hpp"
#include "QKeyEventBinding.hpp"
#include "QKeySequenceBinding.hpp"
#include "QObjectBinding.hpp"
#include "QStringBinding.hpp"
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


struct lqtk_QKeyEvent_count_Args
{
    FromLua<QKeyEvent*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QKeyEvent_count(lua_State* L)
{
    lqtk_QKeyEvent_count_Args  argValues;
    lqtk_QKeyEvent_count_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QKeyEvent::count();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QKeyEvent", "count", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QKeyEvent_isAutoRepeat_Args
{
    FromLua<QKeyEvent*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QKeyEvent_isAutoRepeat(lua_State* L)
{
    lqtk_QKeyEvent_isAutoRepeat_Args  argValues;
    lqtk_QKeyEvent_isAutoRepeat_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QKeyEvent::isAutoRepeat();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QKeyEvent", "isAutoRepeat", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QKeyEvent_key_Args
{
    FromLua<QKeyEvent*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QKeyEvent_key(lua_State* L)
{
    lqtk_QKeyEvent_key_Args  argValues;
    lqtk_QKeyEvent_key_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QKeyEvent::key();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QKeyEvent", "key", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QKeyEvent_keyCombination_Args
{
    FromLua<QKeyEvent*> arg_1_1;
    ToLua<QKeyCombination*> rslt_1;
};

extern "C" int lqtk_QKeyEvent_keyCombination(lua_State* L)
{
    lqtk_QKeyEvent_keyCombination_Args  argValues;
    lqtk_QKeyEvent_keyCombination_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QKeyEvent::keyCombination();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QKeyEvent", "keyCombination", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QKeyEvent_matches_Args
{
    FromLua<QKeyEvent*> arg_1_1;
    FromLua<QKeySequence::StandardKey> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QKeyEvent_matches(lua_State* L)
{
    lqtk_QKeyEvent_matches_Args  argValues;
    lqtk_QKeyEvent_matches_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QKeyEvent::matches(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QKeyEvent", "matches", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QKeyEvent_modifiers_Args
{
    FromLua<QKeyEvent*> arg_1_1;
    ToLua<Qt::KeyboardModifiers> rslt_1;
};

extern "C" int lqtk_QKeyEvent_modifiers(lua_State* L)
{
    lqtk_QKeyEvent_modifiers_Args  argValues;
    lqtk_QKeyEvent_modifiers_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QKeyEvent::modifiers();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QKeyEvent", "modifiers", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QKeyEvent_nativeModifiers_Args
{
    FromLua<QKeyEvent*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QKeyEvent_nativeModifiers(lua_State* L)
{
    lqtk_QKeyEvent_nativeModifiers_Args  argValues;
    lqtk_QKeyEvent_nativeModifiers_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QKeyEvent::nativeModifiers();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QKeyEvent", "nativeModifiers", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QKeyEvent_nativeScanCode_Args
{
    FromLua<QKeyEvent*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QKeyEvent_nativeScanCode(lua_State* L)
{
    lqtk_QKeyEvent_nativeScanCode_Args  argValues;
    lqtk_QKeyEvent_nativeScanCode_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QKeyEvent::nativeScanCode();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QKeyEvent", "nativeScanCode", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QKeyEvent_nativeVirtualKey_Args
{
    FromLua<QKeyEvent*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QKeyEvent_nativeVirtualKey(lua_State* L)
{
    lqtk_QKeyEvent_nativeVirtualKey_Args  argValues;
    lqtk_QKeyEvent_nativeVirtualKey_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QKeyEvent::nativeVirtualKey();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QKeyEvent", "nativeVirtualKey", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QKeyEvent_text_Args
{
    FromLua<QKeyEvent*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QKeyEvent_text_doLua(lua_State* L)
{
    lqtk_QKeyEvent_text_Args* args = (lqtk_QKeyEvent_text_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QKeyEvent::text();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QKeyEvent", "text", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QKeyEvent_text(lua_State* L)
{
    try {
        lqtk_QKeyEvent_text_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QKeyEvent_text_doLua, &args);
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
        QKeyEventBinding::QType* ptr = static_cast<QKeyEventBinding::QType*>(objectPtr);
        if (targetClassInfo == &QKeyEventBinding::classInfo) {
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
        QKeyEvent* ptr = (QKeyEvent*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QKeyEvent_new_Args
{
    explicit lqtk_QKeyEvent_new_Args(bool explicitNew)
        : explicitNew(explicitNew)
    {}
    bool explicitNew;
    FromLua<QEvent::Type> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
    FromLua<int> arg_2_3;
    FromLua<int> arg_2_4;
    FromLua<int> arg_2_5;
    FromLua<Qt::KeyboardModifiers> arg_3_1;
    FromLua<QString> arg_4_1;
    FromLua<bool> arg_5_1;
    ToLua<QKeyEvent*> rslt_1;
};

static int lqtk_QKeyEvent_new_doLua(lua_State* L)
{
    lqtk_QKeyEvent_new_Args* args = (lqtk_QKeyEvent_new_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    bool explicitNew = args->explicitNew;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QKeyEventBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QKeyEvent> expected");
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
            args->arg_3_1.check(L, argOffs+3);
            {
                QKeyEvent* rslt = 
                    new QKeyEvent(args->arg_1_1.getValue(), args->arg_2_1.getValue(), args->arg_3_1.getValue());
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
            args->arg_3_1.check(L, argOffs+3);
            args->arg_4_1.check(L, argOffs+4);
            {
                QKeyEvent* rslt = 
                    new QKeyEvent(args->arg_1_1.getValue(), args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_4_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 5) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_4_1.check(L, argOffs+4);
            args->arg_5_1.check(L, argOffs+5);
            {
                QKeyEvent* rslt = 
                    new QKeyEvent(args->arg_1_1.getValue(), args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_4_1.getValue(), args->arg_5_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 6) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            if (!args->arg_4_1.test(L, argOffs+4)) break;
            if (!args->arg_5_1.test(L, argOffs+5)) break;
            if (!args->arg_2_2.test(L, argOffs+6)) break;
            {
                QKeyEvent* rslt = 
                    new QKeyEvent(args->arg_1_1.getValue(), args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_4_1.getValue(), args->arg_5_1.getValue(), args->arg_2_2.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 6) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            if (!args->arg_2_2.test(L, argOffs+4)) break;
            if (!args->arg_2_3.test(L, argOffs+5)) break;
            if (!args->arg_2_4.test(L, argOffs+6)) break;
            {
                QKeyEvent* rslt = 
                    new QKeyEvent(args->arg_1_1.getValue(), args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_2_2.getValue(), args->arg_2_3.getValue(), args->arg_2_4.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 6) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_4_1.check(L, argOffs+4);
            args->arg_5_1.check(L, argOffs+5);
            args->arg_2_2.check(L, argOffs+6);
            assert(false);
        }
        if (nargs == 7) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_2_2.check(L, argOffs+4);
            args->arg_2_3.check(L, argOffs+5);
            args->arg_2_4.check(L, argOffs+6);
            args->arg_4_1.check(L, argOffs+7);
            {
                QKeyEvent* rslt = 
                    new QKeyEvent(args->arg_1_1.getValue(), args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_2_2.getValue(), args->arg_2_3.getValue(), args->arg_2_4.getValue(), args->arg_4_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 8) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_2_2.check(L, argOffs+4);
            args->arg_2_3.check(L, argOffs+5);
            args->arg_2_4.check(L, argOffs+6);
            args->arg_4_1.check(L, argOffs+7);
            args->arg_5_1.check(L, argOffs+8);
            {
                QKeyEvent* rslt = 
                    new QKeyEvent(args->arg_1_1.getValue(), args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_2_2.getValue(), args->arg_2_3.getValue(), args->arg_2_4.getValue(), args->arg_4_1.getValue(), args->arg_5_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 9) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_2_2.check(L, argOffs+4);
            args->arg_2_3.check(L, argOffs+5);
            args->arg_2_4.check(L, argOffs+6);
            args->arg_4_1.check(L, argOffs+7);
            args->arg_5_1.check(L, argOffs+8);
            args->arg_2_5.check(L, argOffs+9);
            {
                QKeyEvent* rslt = 
                    new QKeyEvent(args->arg_1_1.getValue(), args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_2_2.getValue(), args->arg_2_3.getValue(), args->arg_2_4.getValue(), args->arg_4_1.getValue(), args->arg_5_1.getValue(), args->arg_2_5.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QKeyEvent", "new", nargs, "4,5,6,7,8,9,10");
        } else {
            return util::argCountError(L, "QKeyEvent", nullptr, nargs, "3,4,5,6,7,8,9");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QKeyEvent_constructor(lua_State* L, bool explicitNew)
{
    try {
        lqtk_QKeyEvent_new_Args args(explicitNew);
        return BindingUtil::callMethodFromLua(L, lqtk_QKeyEvent_new_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QKeyEvent_new(lua_State* L)
{
    return lqtk_QKeyEvent_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QKeyEventBinding::pushObject(lua_State* L, QKeyEvent* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QKeyEvent>(L, hasUserValue);     // -> uval?, udata
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
    { "ActionAdded",                      Member::INTEGER,              (void*) QKeyEvent::ActionAdded },
    { "ActionChanged",                    Member::INTEGER,              (void*) QKeyEvent::ActionChanged },
    { "ActionRemoved",                    Member::INTEGER,              (void*) QKeyEvent::ActionRemoved },
    { "ActivationChange",                 Member::INTEGER,              (void*) QKeyEvent::ActivationChange },
    { "ApplicationActivate",              Member::INTEGER,              (void*) QKeyEvent::ApplicationActivate },
    { "ApplicationActivated",             Member::INTEGER,              (void*) QKeyEvent::ApplicationActivated },
    { "ApplicationDeactivate",            Member::INTEGER,              (void*) QKeyEvent::ApplicationDeactivate },
    { "ApplicationFontChange",            Member::INTEGER,              (void*) QKeyEvent::ApplicationFontChange },
    { "ApplicationLayoutDirectionChange", Member::INTEGER,              (void*) QKeyEvent::ApplicationLayoutDirectionChange },
    { "ApplicationPaletteChange",         Member::INTEGER,              (void*) QKeyEvent::ApplicationPaletteChange },
    { "ApplicationStateChange",           Member::INTEGER,              (void*) QKeyEvent::ApplicationStateChange },
    { "ApplicationWindowIconChange",      Member::INTEGER,              (void*) QKeyEvent::ApplicationWindowIconChange },
    { "ChildAdded",                       Member::INTEGER,              (void*) QKeyEvent::ChildAdded },
    { "ChildPolished",                    Member::INTEGER,              (void*) QKeyEvent::ChildPolished },
    { "ChildRemoved",                     Member::INTEGER,              (void*) QKeyEvent::ChildRemoved },
    { "ChildWindowAdded",                 Member::INTEGER,              (void*) QKeyEvent::ChildWindowAdded },
    { "ChildWindowRemoved",               Member::INTEGER,              (void*) QKeyEvent::ChildWindowRemoved },
    { "Clipboard",                        Member::INTEGER,              (void*) QKeyEvent::Clipboard },
    { "Close",                            Member::INTEGER,              (void*) QKeyEvent::Close },
    { "CloseSoftwareInputPanel",          Member::INTEGER,              (void*) QKeyEvent::CloseSoftwareInputPanel },
    { "ContentsRectChange",               Member::INTEGER,              (void*) QKeyEvent::ContentsRectChange },
    { "ContextMenu",                      Member::INTEGER,              (void*) QKeyEvent::ContextMenu },
    { "CursorChange",                     Member::INTEGER,              (void*) QKeyEvent::CursorChange },
    { "DeferredDelete",                   Member::INTEGER,              (void*) QKeyEvent::DeferredDelete },
    { "DevicePixelRatioChange",           Member::INTEGER,              (void*) QKeyEvent::DevicePixelRatioChange },
    { "DragEnter",                        Member::INTEGER,              (void*) QKeyEvent::DragEnter },
    { "DragLeave",                        Member::INTEGER,              (void*) QKeyEvent::DragLeave },
    { "DragMove",                         Member::INTEGER,              (void*) QKeyEvent::DragMove },
    { "Drop",                             Member::INTEGER,              (void*) QKeyEvent::Drop },
    { "DynamicPropertyChange",            Member::INTEGER,              (void*) QKeyEvent::DynamicPropertyChange },
    { "EnabledChange",                    Member::INTEGER,              (void*) QKeyEvent::EnabledChange },
    { "Enter",                            Member::INTEGER,              (void*) QKeyEvent::Enter },
    { "EnterWhatsThisMode",               Member::INTEGER,              (void*) QKeyEvent::EnterWhatsThisMode },
    { "Expose",                           Member::INTEGER,              (void*) QKeyEvent::Expose },
    { "FileOpen",                         Member::INTEGER,              (void*) QKeyEvent::FileOpen },
    { "FocusAboutToChange",               Member::INTEGER,              (void*) QKeyEvent::FocusAboutToChange },
    { "FocusIn",                          Member::INTEGER,              (void*) QKeyEvent::FocusIn },
    { "FocusOut",                         Member::INTEGER,              (void*) QKeyEvent::FocusOut },
    { "FontChange",                       Member::INTEGER,              (void*) QKeyEvent::FontChange },
    { "Gesture",                          Member::INTEGER,              (void*) QKeyEvent::Gesture },
    { "GestureOverride",                  Member::INTEGER,              (void*) QKeyEvent::GestureOverride },
    { "GrabKeyboard",                     Member::INTEGER,              (void*) QKeyEvent::GrabKeyboard },
    { "GrabMouse",                        Member::INTEGER,              (void*) QKeyEvent::GrabMouse },
    { "GraphicsSceneContextMenu",         Member::INTEGER,              (void*) QKeyEvent::GraphicsSceneContextMenu },
    { "GraphicsSceneDragEnter",           Member::INTEGER,              (void*) QKeyEvent::GraphicsSceneDragEnter },
    { "GraphicsSceneDragLeave",           Member::INTEGER,              (void*) QKeyEvent::GraphicsSceneDragLeave },
    { "GraphicsSceneDragMove",            Member::INTEGER,              (void*) QKeyEvent::GraphicsSceneDragMove },
    { "GraphicsSceneDrop",                Member::INTEGER,              (void*) QKeyEvent::GraphicsSceneDrop },
    { "GraphicsSceneHelp",                Member::INTEGER,              (void*) QKeyEvent::GraphicsSceneHelp },
    { "GraphicsSceneHoverEnter",          Member::INTEGER,              (void*) QKeyEvent::GraphicsSceneHoverEnter },
    { "GraphicsSceneHoverLeave",          Member::INTEGER,              (void*) QKeyEvent::GraphicsSceneHoverLeave },
    { "GraphicsSceneHoverMove",           Member::INTEGER,              (void*) QKeyEvent::GraphicsSceneHoverMove },
    { "GraphicsSceneLeave",               Member::INTEGER,              (void*) QKeyEvent::GraphicsSceneLeave },
    { "GraphicsSceneMouseDoubleClick",    Member::INTEGER,              (void*) QKeyEvent::GraphicsSceneMouseDoubleClick },
    { "GraphicsSceneMouseMove",           Member::INTEGER,              (void*) QKeyEvent::GraphicsSceneMouseMove },
    { "GraphicsSceneMousePress",          Member::INTEGER,              (void*) QKeyEvent::GraphicsSceneMousePress },
    { "GraphicsSceneMouseRelease",        Member::INTEGER,              (void*) QKeyEvent::GraphicsSceneMouseRelease },
    { "GraphicsSceneMove",                Member::INTEGER,              (void*) QKeyEvent::GraphicsSceneMove },
    { "GraphicsSceneResize",              Member::INTEGER,              (void*) QKeyEvent::GraphicsSceneResize },
    { "GraphicsSceneWheel",               Member::INTEGER,              (void*) QKeyEvent::GraphicsSceneWheel },
    { "Hide",                             Member::INTEGER,              (void*) QKeyEvent::Hide },
    { "HideToParent",                     Member::INTEGER,              (void*) QKeyEvent::HideToParent },
    { "HoverEnter",                       Member::INTEGER,              (void*) QKeyEvent::HoverEnter },
    { "HoverLeave",                       Member::INTEGER,              (void*) QKeyEvent::HoverLeave },
    { "HoverMove",                        Member::INTEGER,              (void*) QKeyEvent::HoverMove },
    { "IconDrag",                         Member::INTEGER,              (void*) QKeyEvent::IconDrag },
    { "IconTextChange",                   Member::INTEGER,              (void*) QKeyEvent::IconTextChange },
    { "InputMethod",                      Member::INTEGER,              (void*) QKeyEvent::InputMethod },
    { "InputMethodQuery",                 Member::INTEGER,              (void*) QKeyEvent::InputMethodQuery },
    { "KeyPress",                         Member::INTEGER,              (void*) QKeyEvent::KeyPress },
    { "KeyRelease",                       Member::INTEGER,              (void*) QKeyEvent::KeyRelease },
    { "KeyboardLayoutChange",             Member::INTEGER,              (void*) QKeyEvent::KeyboardLayoutChange },
    { "LanguageChange",                   Member::INTEGER,              (void*) QKeyEvent::LanguageChange },
    { "LayoutDirectionChange",            Member::INTEGER,              (void*) QKeyEvent::LayoutDirectionChange },
    { "LayoutRequest",                    Member::INTEGER,              (void*) QKeyEvent::LayoutRequest },
    { "Leave",                            Member::INTEGER,              (void*) QKeyEvent::Leave },
    { "LeaveWhatsThisMode",               Member::INTEGER,              (void*) QKeyEvent::LeaveWhatsThisMode },
    { "LocaleChange",                     Member::INTEGER,              (void*) QKeyEvent::LocaleChange },
    { "MacSizeChange",                    Member::INTEGER,              (void*) QKeyEvent::MacSizeChange },
    { "MetaCall",                         Member::INTEGER,              (void*) QKeyEvent::MetaCall },
    { "ModifiedChange",                   Member::INTEGER,              (void*) QKeyEvent::ModifiedChange },
    { "MouseButtonDblClick",              Member::INTEGER,              (void*) QKeyEvent::MouseButtonDblClick },
    { "MouseButtonPress",                 Member::INTEGER,              (void*) QKeyEvent::MouseButtonPress },
    { "MouseButtonRelease",               Member::INTEGER,              (void*) QKeyEvent::MouseButtonRelease },
    { "MouseMove",                        Member::INTEGER,              (void*) QKeyEvent::MouseMove },
    { "MouseTrackingChange",              Member::INTEGER,              (void*) QKeyEvent::MouseTrackingChange },
    { "Move",                             Member::INTEGER,              (void*) QKeyEvent::Move },
    { "NativeGesture",                    Member::INTEGER,              (void*) QKeyEvent::NativeGesture },
    { "NonClientAreaMouseButtonDblClick", Member::INTEGER,              (void*) QKeyEvent::NonClientAreaMouseButtonDblClick },
    { "NonClientAreaMouseButtonPress",    Member::INTEGER,              (void*) QKeyEvent::NonClientAreaMouseButtonPress },
    { "NonClientAreaMouseButtonRelease",  Member::INTEGER,              (void*) QKeyEvent::NonClientAreaMouseButtonRelease },
    { "NonClientAreaMouseMove",           Member::INTEGER,              (void*) QKeyEvent::NonClientAreaMouseMove },
    { "None",                             Member::INTEGER,              (void*) QKeyEvent::None },
    { "OrientationChange",                Member::INTEGER,              (void*) QKeyEvent::OrientationChange },
    { "Paint",                            Member::INTEGER,              (void*) QKeyEvent::Paint },
    { "PaletteChange",                    Member::INTEGER,              (void*) QKeyEvent::PaletteChange },
    { "ParentAboutToChange",              Member::INTEGER,              (void*) QKeyEvent::ParentAboutToChange },
    { "ParentChange",                     Member::INTEGER,              (void*) QKeyEvent::ParentChange },
    { "ParentWindowAboutToChange",        Member::INTEGER,              (void*) QKeyEvent::ParentWindowAboutToChange },
    { "ParentWindowChange",               Member::INTEGER,              (void*) QKeyEvent::ParentWindowChange },
    { "PlatformPanel",                    Member::INTEGER,              (void*) QKeyEvent::PlatformPanel },
    { "PlatformSurface",                  Member::INTEGER,              (void*) QKeyEvent::PlatformSurface },
    { "Polish",                           Member::INTEGER,              (void*) QKeyEvent::Polish },
    { "PolishRequest",                    Member::INTEGER,              (void*) QKeyEvent::PolishRequest },
    { "QueryWhatsThis",                   Member::INTEGER,              (void*) QKeyEvent::QueryWhatsThis },
    { "Quit",                             Member::INTEGER,              (void*) QKeyEvent::Quit },
    { "ReadOnlyChange",                   Member::INTEGER,              (void*) QKeyEvent::ReadOnlyChange },
    { "RequestSoftwareInputPanel",        Member::INTEGER,              (void*) QKeyEvent::RequestSoftwareInputPanel },
    { "Resize",                           Member::INTEGER,              (void*) QKeyEvent::Resize },
    { "SafeAreaMarginsChange",            Member::INTEGER,              (void*) QKeyEvent::SafeAreaMarginsChange },
    { "Scroll",                           Member::INTEGER,              (void*) QKeyEvent::Scroll },
    { "ScrollPrepare",                    Member::INTEGER,              (void*) QKeyEvent::ScrollPrepare },
    { "Shortcut",                         Member::INTEGER,              (void*) QKeyEvent::Shortcut },
    { "ShortcutOverride",                 Member::INTEGER,              (void*) QKeyEvent::ShortcutOverride },
    { "Show",                             Member::INTEGER,              (void*) QKeyEvent::Show },
    { "ShowToParent",                     Member::INTEGER,              (void*) QKeyEvent::ShowToParent },
    { "SockAct",                          Member::INTEGER,              (void*) QKeyEvent::SockAct },
    { "StateMachineSignal",               Member::INTEGER,              (void*) QKeyEvent::StateMachineSignal },
    { "StateMachineWrapped",              Member::INTEGER,              (void*) QKeyEvent::StateMachineWrapped },
    { "StatusTip",                        Member::INTEGER,              (void*) QKeyEvent::StatusTip },
    { "StyleChange",                      Member::INTEGER,              (void*) QKeyEvent::StyleChange },
    { "TabletEnterProximity",             Member::INTEGER,              (void*) QKeyEvent::TabletEnterProximity },
    { "TabletLeaveProximity",             Member::INTEGER,              (void*) QKeyEvent::TabletLeaveProximity },
    { "TabletMove",                       Member::INTEGER,              (void*) QKeyEvent::TabletMove },
    { "TabletPress",                      Member::INTEGER,              (void*) QKeyEvent::TabletPress },
    { "TabletRelease",                    Member::INTEGER,              (void*) QKeyEvent::TabletRelease },
    { "TabletTrackingChange",             Member::INTEGER,              (void*) QKeyEvent::TabletTrackingChange },
    { "ThreadChange",                     Member::INTEGER,              (void*) QKeyEvent::ThreadChange },
    { "Timer",                            Member::INTEGER,              (void*) QKeyEvent::Timer },
    { "ToolBarChange",                    Member::INTEGER,              (void*) QKeyEvent::ToolBarChange },
    { "ToolTip",                          Member::INTEGER,              (void*) QKeyEvent::ToolTip },
    { "ToolTipChange",                    Member::INTEGER,              (void*) QKeyEvent::ToolTipChange },
    { "TouchBegin",                       Member::INTEGER,              (void*) QKeyEvent::TouchBegin },
    { "TouchCancel",                      Member::INTEGER,              (void*) QKeyEvent::TouchCancel },
    { "TouchEnd",                         Member::INTEGER,              (void*) QKeyEvent::TouchEnd },
    { "TouchUpdate",                      Member::INTEGER,              (void*) QKeyEvent::TouchUpdate },
    { "UngrabKeyboard",                   Member::INTEGER,              (void*) QKeyEvent::UngrabKeyboard },
    { "UngrabMouse",                      Member::INTEGER,              (void*) QKeyEvent::UngrabMouse },
    { "UpdateLater",                      Member::INTEGER,              (void*) QKeyEvent::UpdateLater },
    { "UpdateRequest",                    Member::INTEGER,              (void*) QKeyEvent::UpdateRequest },
    { "WhatsThis",                        Member::INTEGER,              (void*) QKeyEvent::WhatsThis },
    { "WhatsThisClicked",                 Member::INTEGER,              (void*) QKeyEvent::WhatsThisClicked },
    { "Wheel",                            Member::INTEGER,              (void*) QKeyEvent::Wheel },
    { "WinEventAct",                      Member::INTEGER,              (void*) QKeyEvent::WinEventAct },
    { "WinIdChange",                      Member::INTEGER,              (void*) QKeyEvent::WinIdChange },
    { "WindowActivate",                   Member::INTEGER,              (void*) QKeyEvent::WindowActivate },
    { "WindowBlocked",                    Member::INTEGER,              (void*) QKeyEvent::WindowBlocked },
    { "WindowDeactivate",                 Member::INTEGER,              (void*) QKeyEvent::WindowDeactivate },
    { "WindowIconChange",                 Member::INTEGER,              (void*) QKeyEvent::WindowIconChange },
    { "WindowStateChange",                Member::INTEGER,              (void*) QKeyEvent::WindowStateChange },
    { "WindowTitleChange",                Member::INTEGER,              (void*) QKeyEvent::WindowTitleChange },
    { "WindowUnblocked",                  Member::INTEGER,              (void*) QKeyEvent::WindowUnblocked },
    { "ZOrderChange",                     Member::INTEGER,              (void*) QKeyEvent::ZOrderChange },
    { "accept",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_accept },
    { "count",                            Member::NORMAL_FUNCTION,      (void*) lqtk_QKeyEvent_count },
    { "ignore",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_ignore },
    { "isAccepted",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_isAccepted },
    { "isAutoRepeat",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QKeyEvent_isAutoRepeat },
    { "key",                              Member::NORMAL_FUNCTION,      (void*) lqtk_QKeyEvent_key },
    { "keyCombination",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QKeyEvent_keyCombination },
    { "matches",                          Member::NORMAL_FUNCTION,      (void*) lqtk_QKeyEvent_matches },
    { "modifiers",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QKeyEvent_modifiers },
    { "nativeModifiers",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QKeyEvent_nativeModifiers },
    { "nativeScanCode",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QKeyEvent_nativeScanCode },
    { "nativeVirtualKey",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QKeyEvent_nativeVirtualKey },
    { "setAccepted",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_setAccepted },
    { "text",                             Member::NORMAL_FUNCTION,      (void*) lqtk_QKeyEvent_text },
    { "type",                             Member::NORMAL_FUNCTION,      (void*) lqtk_QEvent_type },
    { NULL,                               Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QKeyEventBinding::classInfo = 
{
    "QKeyEvent",

    &QInputEventBinding::classInfo,

    false, // isQObject
    false, // needsGuard
    lqtk_QKeyEvent_constructor,
    lqtk_QKeyEvent_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    168,
    members
};

/* ============================================================================================ */

int QKeyEventBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
