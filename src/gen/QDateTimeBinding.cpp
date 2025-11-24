// Type: QDateTime
// Base: nil

/* ============================================================================================ */

#include <QDateTime>
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
#include "QDateTimeBinding.hpp"
#include "QObjectBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QDateTime_currentMSecsSinceEpoch_Args
{
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QDateTime_currentMSecsSinceEpoch(lua_State* L)
{
    lqtk_QDateTime_currentMSecsSinceEpoch_Args  argValues;
    lqtk_QDateTime_currentMSecsSinceEpoch_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QDateTime::currentMSecsSinceEpoch();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "currentMSecsSinceEpoch", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_currentSecsSinceEpoch_Args
{
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QDateTime_currentSecsSinceEpoch(lua_State* L)
{
    lqtk_QDateTime_currentSecsSinceEpoch_Args  argValues;
    lqtk_QDateTime_currentSecsSinceEpoch_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QDateTime::currentSecsSinceEpoch();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "currentSecsSinceEpoch", nargs, "0");
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
        QDateTimeBinding::QType* ptr = static_cast<QDateTimeBinding::QType*>(objectPtr);
        if (targetClassInfo == &QDateTimeBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QDateTime* ptr = (QDateTime*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

ObjectUdata* QDateTimeBinding::pushObject(lua_State* L, QDateTime* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QDateTime>(L, hasUserValue);     // -> uval?, udata
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
    { "currentMSecsSinceEpoch", Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_currentMSecsSinceEpoch },
    { "currentSecsSinceEpoch",  Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_currentSecsSinceEpoch },
    { NULL,                     Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QDateTimeBinding::classInfo = 
{
    "QDateTime",

    NULL,

    false, // isQObject
    false, // needsGuard
    NULL, // constructFunc
    NULL, // newFunc
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    2,
    members
};

/* ============================================================================================ */

int QDateTimeBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
