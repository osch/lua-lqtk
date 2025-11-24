// Type: QPoint
// Base: nil

/* ============================================================================================ */

#include <QObject>
#include <QPoint>
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
#include "QObjectBinding.hpp"
#include "QPointBinding.hpp"
#include "QStringBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QPoint_equals_Args
{
    FromLua<QPoint*> arg_1_1;
    FromLua<QPoint*> arg_1_2;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QPoint_equals(lua_State* L)
{
    lqtk_QPoint_equals_Args  argValues;
    lqtk_QPoint_equals_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QPointBinding::delegate_equals(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPoint", "equals", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPoint_toString_Args
{
    FromLua<QPoint*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QPoint_toString_doLua(lua_State* L)
{
    lqtk_QPoint_toString_Args* args = (lqtk_QPoint_toString_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QPointBinding::delegate_toString(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPoint", "toString", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QPoint_toString(lua_State* L)
{
    try {
        lqtk_QPoint_toString_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QPoint_toString_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPoint_x_Args
{
    FromLua<QPoint*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QPoint_x(lua_State* L)
{
    lqtk_QPoint_x_Args  argValues;
    lqtk_QPoint_x_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPoint::x();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPoint", "x", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPoint_y_Args
{
    FromLua<QPoint*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QPoint_y(lua_State* L)
{
    lqtk_QPoint_y_Args  argValues;
    lqtk_QPoint_y_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPoint::y();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPoint", "y", nargs, "1");
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
        QPointBinding::QType* ptr = static_cast<QPointBinding::QType*>(objectPtr);
        if (targetClassInfo == &QPointBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QPoint* ptr = (QPoint*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QPoint_new_Args
{
    FromLua<int> arg_1_1;
    FromLua<int> arg_1_2;
    ToLua<QPoint*> rslt_1;
};

extern "C" int lqtk_QPoint_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QPoint_new_Args  argValues;
    lqtk_QPoint_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QPointBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QPoint> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QPoint* rslt = 
                    new QPoint();
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                QPoint* rslt = 
                    new QPoint(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QPoint", "new", nargs, "1,3");
        } else {
            return util::argCountError(L, "QPoint", nullptr, nargs, "0,2");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QPoint_new(lua_State* L)
{
    return lqtk_QPoint_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QPointBinding::pushObject(lua_State* L, QPoint* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QPoint>(L, hasUserValue);     // -> uval?, udata
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
    { "equals",   Member::NORMAL_FUNCTION,      (void*) lqtk_QPoint_equals },
    { "toString", Member::NORMAL_FUNCTION,      (void*) lqtk_QPoint_toString },
    { "x",        Member::NORMAL_FUNCTION,      (void*) lqtk_QPoint_x },
    { "y",        Member::NORMAL_FUNCTION,      (void*) lqtk_QPoint_y },
    { NULL,       Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QPointBinding::classInfo = 
{
    "QPoint",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QPoint_constructor,
    lqtk_QPoint_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    4,
    members
};

/* ============================================================================================ */

int QPointBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
