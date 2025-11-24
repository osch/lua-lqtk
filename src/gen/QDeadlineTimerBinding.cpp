// Type: QDeadlineTimer
// Base: nil

/* ============================================================================================ */

#include <QDeadlineTimer>
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
#include "QDeadlineTimerBinding.hpp"
#include "QObjectBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QDeadlineTimer_hasExpired_Args
{
    FromLua<QDeadlineTimer*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QDeadlineTimer_hasExpired(lua_State* L)
{
    lqtk_QDeadlineTimer_hasExpired_Args  argValues;
    lqtk_QDeadlineTimer_hasExpired_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDeadlineTimer::hasExpired();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDeadlineTimer", "hasExpired", nargs, "1");
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
        QDeadlineTimerBinding::QType* ptr = static_cast<QDeadlineTimerBinding::QType*>(objectPtr);
        if (targetClassInfo == &QDeadlineTimerBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QDeadlineTimer* ptr = (QDeadlineTimer*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QDeadlineTimer_new_Args
{
    FromLua<int> arg_1_1;
    ToLua<QDeadlineTimer*> rslt_1;
};

extern "C" int lqtk_QDeadlineTimer_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QDeadlineTimer_new_Args  argValues;
    lqtk_QDeadlineTimer_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QDeadlineTimerBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QDeadlineTimer> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QDeadlineTimer* rslt = 
                    new QDeadlineTimer();
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
                QDeadlineTimer* rslt = 
                    new QDeadlineTimer(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QDeadlineTimer", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QDeadlineTimer", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QDeadlineTimer_new(lua_State* L)
{
    return lqtk_QDeadlineTimer_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QDeadlineTimerBinding::pushObject(lua_State* L, QDeadlineTimer* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QDeadlineTimer>(L, hasUserValue);     // -> uval?, udata
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
    { "hasExpired", Member::NORMAL_FUNCTION,      (void*) lqtk_QDeadlineTimer_hasExpired },
    { NULL,         Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QDeadlineTimerBinding::classInfo = 
{
    "QDeadlineTimer",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QDeadlineTimer_constructor,
    lqtk_QDeadlineTimer_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    1,
    members
};

/* ============================================================================================ */

int QDeadlineTimerBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
