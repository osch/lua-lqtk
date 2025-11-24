// Type: QSizePolicy
// Base: nil

/* ============================================================================================ */

#include <QObject>
#include <QSizePolicy>

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
#include "QSizePolicyBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QSizePolicy_horizontalStretch_Args
{
    FromLua<QSizePolicy*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QSizePolicy_horizontalStretch(lua_State* L)
{
    lqtk_QSizePolicy_horizontalStretch_Args  argValues;
    lqtk_QSizePolicy_horizontalStretch_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QSizePolicy::horizontalStretch();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QSizePolicy", "horizontalStretch", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSizePolicy_setHorizontalStretch_Args
{
    FromLua<QSizePolicy*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QSizePolicy_setHorizontalStretch(lua_State* L)
{
    lqtk_QSizePolicy_setHorizontalStretch_Args  argValues;
    lqtk_QSizePolicy_setHorizontalStretch_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QSizePolicy::setHorizontalStretch(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QSizePolicy", "setHorizontalStretch", nargs, "2");
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
        QSizePolicyBinding::QType* ptr = static_cast<QSizePolicyBinding::QType*>(objectPtr);
        if (targetClassInfo == &QSizePolicyBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QSizePolicy* ptr = (QSizePolicy*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

ObjectUdata* QSizePolicyBinding::pushObject(lua_State* L, QSizePolicy* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QSizePolicy>(L, hasUserValue);     // -> uval?, udata
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
    { "horizontalStretch",    Member::NORMAL_FUNCTION,      (void*) lqtk_QSizePolicy_horizontalStretch },
    { "setHorizontalStretch", Member::NORMAL_FUNCTION,      (void*) lqtk_QSizePolicy_setHorizontalStretch },
    { NULL,                   Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QSizePolicyBinding::classInfo = 
{
    "QSizePolicy",

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

int QSizePolicyBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
