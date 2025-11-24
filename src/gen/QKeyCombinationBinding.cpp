// Type: QKeyCombination
// Base: nil

/* ============================================================================================ */

#include <QKeyCombination>
#include <QObject>
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
#include "QKeyCombinationBinding.hpp"
#include "QObjectBinding.hpp"
#include "QtBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QKeyCombination_fromCombined_Args
{
    FromLua<int> arg_1_1;
    ToLua<QKeyCombination*> rslt_1;
};

extern "C" int lqtk_QKeyCombination_fromCombined(lua_State* L)
{
    lqtk_QKeyCombination_fromCombined_Args  argValues;
    lqtk_QKeyCombination_fromCombined_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QKeyCombination::fromCombined(args->arg_1_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QKeyCombination", "fromCombined", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QKeyCombination_key_Args
{
    FromLua<QKeyCombination*> arg_1_1;
    ToLua<Qt::Key> rslt_1;
};

extern "C" int lqtk_QKeyCombination_key(lua_State* L)
{
    lqtk_QKeyCombination_key_Args  argValues;
    lqtk_QKeyCombination_key_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QKeyCombination::key();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QKeyCombination", "key", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QKeyCombination_keyboardModifiers_Args
{
    FromLua<QKeyCombination*> arg_1_1;
    ToLua<Qt::KeyboardModifiers> rslt_1;
};

extern "C" int lqtk_QKeyCombination_keyboardModifiers(lua_State* L)
{
    lqtk_QKeyCombination_keyboardModifiers_Args  argValues;
    lqtk_QKeyCombination_keyboardModifiers_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QKeyCombination::keyboardModifiers();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QKeyCombination", "keyboardModifiers", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QKeyCombination_toCombined_Args
{
    FromLua<QKeyCombination*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QKeyCombination_toCombined(lua_State* L)
{
    lqtk_QKeyCombination_toCombined_Args  argValues;
    lqtk_QKeyCombination_toCombined_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QKeyCombination::toCombined();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QKeyCombination", "toCombined", nargs, "1");
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
        QKeyCombinationBinding::QType* ptr = static_cast<QKeyCombinationBinding::QType*>(objectPtr);
        if (targetClassInfo == &QKeyCombinationBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QKeyCombination* ptr = (QKeyCombination*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QKeyCombination_new_Args
{
    FromLua<Qt::Key> arg_1_1;
    FromLua<Qt::KeyboardModifiers> arg_2_1;
    FromLua<Qt::Modifiers> arg_3_1;
    ToLua<QKeyCombination*> rslt_1;
};

extern "C" int lqtk_QKeyCombination_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QKeyCombination_new_Args  argValues;
    lqtk_QKeyCombination_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QKeyCombinationBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QKeyCombination> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QKeyCombination* rslt = 
                    new QKeyCombination();
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                QKeyCombination* rslt = 
                    new QKeyCombination(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                QKeyCombination* rslt = 
                    new QKeyCombination(args->arg_2_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            if (!args->arg_1_1.test(L, argOffs+2)) break;
            {
                QKeyCombination* rslt = 
                    new QKeyCombination(args->arg_2_1.getValue(), args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_3_1.test(L, argOffs+1)) break;
            {
                QKeyCombination* rslt = 
                    new QKeyCombination(args->arg_3_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        if (nargs == 2) { do {
            if (!args->arg_3_1.test(L, argOffs+1)) break;
            if (!args->arg_1_1.test(L, argOffs+2)) break;
            {
                QKeyCombination* rslt = 
                    new QKeyCombination(args->arg_3_1.getValue(), args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_2_1.check(L, argOffs+1);
            args->arg_1_1.check(L, argOffs+2);
            assert(false);
        }
        if (explicitNew) {
            return util::argCountError(L, "QKeyCombination", "new", nargs, "1,2,3");
        } else {
            return util::argCountError(L, "QKeyCombination", nullptr, nargs, "0,1,2");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QKeyCombination_new(lua_State* L)
{
    return lqtk_QKeyCombination_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QKeyCombinationBinding::pushObject(lua_State* L, QKeyCombination* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QKeyCombination>(L, hasUserValue);     // -> uval?, udata
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
    { "fromCombined",      Member::NORMAL_FUNCTION,      (void*) lqtk_QKeyCombination_fromCombined },
    { "key",               Member::NORMAL_FUNCTION,      (void*) lqtk_QKeyCombination_key },
    { "keyboardModifiers", Member::NORMAL_FUNCTION,      (void*) lqtk_QKeyCombination_keyboardModifiers },
    { "toCombined",        Member::NORMAL_FUNCTION,      (void*) lqtk_QKeyCombination_toCombined },
    { NULL,                Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QKeyCombinationBinding::classInfo = 
{
    "QKeyCombination",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QKeyCombination_constructor,
    lqtk_QKeyCombination_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    4,
    members
};

/* ============================================================================================ */

int QKeyCombinationBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
