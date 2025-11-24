// Type: QRegularExpressionMatchIterator
// Base: nil

/* ============================================================================================ */

#include <QObject>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QRegularExpressionMatchIterator>

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
#include "QObjectBinding.hpp"
#include "QRegularExpressionBinding.hpp"
#include "QRegularExpressionMatchBinding.hpp"
#include "QRegularExpressionMatchIteratorBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QRegularExpressionMatchIterator_hasNext_Args
{
    FromLua<QRegularExpressionMatchIterator*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QRegularExpressionMatchIterator_hasNext(lua_State* L)
{
    lqtk_QRegularExpressionMatchIterator_hasNext_Args  argValues;
    lqtk_QRegularExpressionMatchIterator_hasNext_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatchIterator::hasNext();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpressionMatchIterator", "hasNext", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpressionMatchIterator_isValid_Args
{
    FromLua<QRegularExpressionMatchIterator*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QRegularExpressionMatchIterator_isValid(lua_State* L)
{
    lqtk_QRegularExpressionMatchIterator_isValid_Args  argValues;
    lqtk_QRegularExpressionMatchIterator_isValid_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatchIterator::isValid();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpressionMatchIterator", "isValid", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpressionMatchIterator_matchOptions_Args
{
    FromLua<QRegularExpressionMatchIterator*> arg_1_1;
    ToLua<QRegularExpression::MatchOptions> rslt_1;
};

extern "C" int lqtk_QRegularExpressionMatchIterator_matchOptions(lua_State* L)
{
    lqtk_QRegularExpressionMatchIterator_matchOptions_Args  argValues;
    lqtk_QRegularExpressionMatchIterator_matchOptions_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatchIterator::matchOptions();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpressionMatchIterator", "matchOptions", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpressionMatchIterator_matchType_Args
{
    FromLua<QRegularExpressionMatchIterator*> arg_1_1;
    ToLua<QRegularExpression::MatchType> rslt_1;
};

extern "C" int lqtk_QRegularExpressionMatchIterator_matchType(lua_State* L)
{
    lqtk_QRegularExpressionMatchIterator_matchType_Args  argValues;
    lqtk_QRegularExpressionMatchIterator_matchType_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QRegularExpressionMatchIterator::matchType();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpressionMatchIterator", "matchType", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpressionMatchIterator_next_Args
{
    FromLua<QRegularExpressionMatchIterator*> arg_1_1;
    ToLua<QRegularExpressionMatch*> rslt_1;
};

extern "C" int lqtk_QRegularExpressionMatchIterator_next(lua_State* L)
{
    lqtk_QRegularExpressionMatchIterator_next_Args  argValues;
    lqtk_QRegularExpressionMatchIterator_next_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatchIterator::next();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpressionMatchIterator", "next", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpressionMatchIterator_peekNext_Args
{
    FromLua<QRegularExpressionMatchIterator*> arg_1_1;
    ToLua<QRegularExpressionMatch*> rslt_1;
};

extern "C" int lqtk_QRegularExpressionMatchIterator_peekNext(lua_State* L)
{
    lqtk_QRegularExpressionMatchIterator_peekNext_Args  argValues;
    lqtk_QRegularExpressionMatchIterator_peekNext_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatchIterator::peekNext();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpressionMatchIterator", "peekNext", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpressionMatchIterator_regularExpression_Args
{
    FromLua<QRegularExpressionMatchIterator*> arg_1_1;
    ToLua<QRegularExpression*> rslt_1;
};

extern "C" int lqtk_QRegularExpressionMatchIterator_regularExpression(lua_State* L)
{
    lqtk_QRegularExpressionMatchIterator_regularExpression_Args  argValues;
    lqtk_QRegularExpressionMatchIterator_regularExpression_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatchIterator::regularExpression();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpressionMatchIterator", "regularExpression", nargs, "1");
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
        QRegularExpressionMatchIteratorBinding::QType* ptr = static_cast<QRegularExpressionMatchIteratorBinding::QType*>(objectPtr);
        if (targetClassInfo == &QRegularExpressionMatchIteratorBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QRegularExpressionMatchIterator* ptr = (QRegularExpressionMatchIterator*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpressionMatchIterator_new_Args
{
    FromLua<QRegularExpressionMatchIterator*> arg_1_1;
    ToLua<QRegularExpressionMatchIterator*> rslt_1;
};

extern "C" int lqtk_QRegularExpressionMatchIterator_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QRegularExpressionMatchIterator_new_Args  argValues;
    lqtk_QRegularExpressionMatchIterator_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QRegularExpressionMatchIteratorBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QRegularExpressionMatchIterator> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QRegularExpressionMatchIterator* rslt = 
                    new QRegularExpressionMatchIterator();
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                QRegularExpressionMatchIterator* rslt = 
                    new QRegularExpressionMatchIterator(*args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QRegularExpressionMatchIterator", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QRegularExpressionMatchIterator", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QRegularExpressionMatchIterator_new(lua_State* L)
{
    return lqtk_QRegularExpressionMatchIterator_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QRegularExpressionMatchIteratorBinding::pushObject(lua_State* L, QRegularExpressionMatchIterator* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QRegularExpressionMatchIterator>(L, hasUserValue);     // -> uval?, udata
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
    { "hasNext",           Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpressionMatchIterator_hasNext },
    { "isValid",           Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpressionMatchIterator_isValid },
    { "matchOptions",      Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpressionMatchIterator_matchOptions },
    { "matchType",         Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpressionMatchIterator_matchType },
    { "next",              Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpressionMatchIterator_next },
    { "peekNext",          Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpressionMatchIterator_peekNext },
    { "regularExpression", Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpressionMatchIterator_regularExpression },
    { NULL,                Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QRegularExpressionMatchIteratorBinding::classInfo = 
{
    "QRegularExpressionMatchIterator",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QRegularExpressionMatchIterator_constructor,
    lqtk_QRegularExpressionMatchIterator_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    7,
    members
};

/* ============================================================================================ */

int QRegularExpressionMatchIteratorBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
