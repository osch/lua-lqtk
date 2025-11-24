// Type: QPointF
// Base: nil

/* ============================================================================================ */

#include <QObject>
#include <QPoint>
#include <QPointF>

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
#include "QPointFBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QPointF_dotProduct_Args
{
    FromLua<QPointF*> arg_1_1;
    FromLua<QPointF*> arg_1_2;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QPointF_dotProduct(lua_State* L)
{
    lqtk_QPointF_dotProduct_Args  argValues;
    lqtk_QPointF_dotProduct_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QPointF::dotProduct(*args->arg_1_1.getValue(), *args->arg_1_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPointF", "dotProduct", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPointF_isNull_Args
{
    FromLua<QPointF*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QPointF_isNull(lua_State* L)
{
    lqtk_QPointF_isNull_Args  argValues;
    lqtk_QPointF_isNull_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPointF::isNull();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPointF", "isNull", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPointF_manhattanLength_Args
{
    FromLua<QPointF*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QPointF_manhattanLength(lua_State* L)
{
    lqtk_QPointF_manhattanLength_Args  argValues;
    lqtk_QPointF_manhattanLength_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPointF::manhattanLength();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPointF", "manhattanLength", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPointF_setX_Args
{
    FromLua<QPointF*> arg_1_1;
    FromLua<double> arg_2_1;
};

extern "C" int lqtk_QPointF_setX(lua_State* L)
{
    lqtk_QPointF_setX_Args  argValues;
    lqtk_QPointF_setX_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QPointF::setX(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPointF", "setX", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPointF_setY_Args
{
    FromLua<QPointF*> arg_1_1;
    FromLua<double> arg_2_1;
};

extern "C" int lqtk_QPointF_setY(lua_State* L)
{
    lqtk_QPointF_setY_Args  argValues;
    lqtk_QPointF_setY_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QPointF::setY(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPointF", "setY", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPointF_toPoint_Args
{
    FromLua<QPointF*> arg_1_1;
    ToLua<QPoint*> rslt_1;
};

extern "C" int lqtk_QPointF_toPoint(lua_State* L)
{
    lqtk_QPointF_toPoint_Args  argValues;
    lqtk_QPointF_toPoint_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPointF::toPoint();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPointF", "toPoint", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPointF_transposed_Args
{
    FromLua<QPointF*> arg_1_1;
    ToLua<QPointF*> rslt_1;
};

extern "C" int lqtk_QPointF_transposed(lua_State* L)
{
    lqtk_QPointF_transposed_Args  argValues;
    lqtk_QPointF_transposed_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPointF::transposed();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPointF", "transposed", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPointF_x_Args
{
    FromLua<QPointF*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QPointF_x(lua_State* L)
{
    lqtk_QPointF_x_Args  argValues;
    lqtk_QPointF_x_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPointF::x();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPointF", "x", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPointF_y_Args
{
    FromLua<QPointF*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QPointF_y(lua_State* L)
{
    lqtk_QPointF_y_Args  argValues;
    lqtk_QPointF_y_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPointF::y();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPointF", "y", nargs, "1");
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
        QPointFBinding::QType* ptr = static_cast<QPointFBinding::QType*>(objectPtr);
        if (targetClassInfo == &QPointFBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QPointF* ptr = (QPointF*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QPointF_new_Args
{
    FromLua<QPoint*> arg_1_1;
    FromLua<double> arg_2_1;
    FromLua<double> arg_2_2;
    ToLua<QPointF*> rslt_1;
};

extern "C" int lqtk_QPointF_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QPointF_new_Args  argValues;
    lqtk_QPointF_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QPointFBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QPointF> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QPointF* rslt = 
                    new QPointF();
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
                QPointF* rslt = 
                    new QPointF(*args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_2_1.check(L, argOffs+1);
            args->arg_2_2.check(L, argOffs+2);
            {
                QPointF* rslt = 
                    new QPointF(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QPointF", "new", nargs, "1,2,3");
        } else {
            return util::argCountError(L, "QPointF", nullptr, nargs, "0,1,2");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QPointF_new(lua_State* L)
{
    return lqtk_QPointF_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QPointFBinding::pushObject(lua_State* L, QPointF* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QPointF>(L, hasUserValue);     // -> uval?, udata
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
    { "dotProduct",      Member::NORMAL_FUNCTION,      (void*) lqtk_QPointF_dotProduct },
    { "isNull",          Member::NORMAL_FUNCTION,      (void*) lqtk_QPointF_isNull },
    { "manhattanLength", Member::NORMAL_FUNCTION,      (void*) lqtk_QPointF_manhattanLength },
    { "setX",            Member::NORMAL_FUNCTION,      (void*) lqtk_QPointF_setX },
    { "setY",            Member::NORMAL_FUNCTION,      (void*) lqtk_QPointF_setY },
    { "toPoint",         Member::NORMAL_FUNCTION,      (void*) lqtk_QPointF_toPoint },
    { "transposed",      Member::NORMAL_FUNCTION,      (void*) lqtk_QPointF_transposed },
    { "x",               Member::NORMAL_FUNCTION,      (void*) lqtk_QPointF_x },
    { "y",               Member::NORMAL_FUNCTION,      (void*) lqtk_QPointF_y },
    { NULL,              Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QPointFBinding::classInfo = 
{
    "QPointF",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QPointF_constructor,
    lqtk_QPointF_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    9,
    members
};

/* ============================================================================================ */

int QPointFBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
