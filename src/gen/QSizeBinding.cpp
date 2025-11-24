// Type: QSize
// Base: nil

/* ============================================================================================ */

#include <QObject>
#include <QSize>
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
#include "QSizeBinding.hpp"
#include "QStringBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QSize_equals_Args
{
    FromLua<QSize*> arg_1_1;
    FromLua<QSize*> arg_1_2;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QSize_equals(lua_State* L)
{
    lqtk_QSize_equals_Args  argValues;
    lqtk_QSize_equals_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QSizeBinding::delegate_equals(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QSize", "equals", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSize_height_Args
{
    FromLua<QSize*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QSize_height(lua_State* L)
{
    lqtk_QSize_height_Args  argValues;
    lqtk_QSize_height_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QSize::height();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QSize", "height", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSize_setHeight_Args
{
    FromLua<QSize*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QSize_setHeight(lua_State* L)
{
    lqtk_QSize_setHeight_Args  argValues;
    lqtk_QSize_setHeight_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QSize::setHeight(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QSize", "setHeight", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSize_setWidth_Args
{
    FromLua<QSize*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QSize_setWidth(lua_State* L)
{
    lqtk_QSize_setWidth_Args  argValues;
    lqtk_QSize_setWidth_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QSize::setWidth(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QSize", "setWidth", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSize_toString_Args
{
    FromLua<QSize*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QSize_toString_doLua(lua_State* L)
{
    lqtk_QSize_toString_Args* args = (lqtk_QSize_toString_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QSizeBinding::delegate_toString(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QSize", "toString", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QSize_toString(lua_State* L)
{
    try {
        lqtk_QSize_toString_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QSize_toString_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSize_width_Args
{
    FromLua<QSize*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QSize_width(lua_State* L)
{
    lqtk_QSize_width_Args  argValues;
    lqtk_QSize_width_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QSize::width();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QSize", "width", nargs, "1");
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
        QSizeBinding::QType* ptr = static_cast<QSizeBinding::QType*>(objectPtr);
        if (targetClassInfo == &QSizeBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QSize* ptr = (QSize*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QSize_new_Args
{
    FromLua<int> arg_1_1;
    FromLua<int> arg_1_2;
    FromLua<QSize*> arg_2_1;
    ToLua<QSize*> rslt_1;
};

extern "C" int lqtk_QSize_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QSize_new_Args  argValues;
    lqtk_QSize_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QSizeBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QSize> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                QSize* rslt = 
                    new QSize(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            args->arg_2_1.check(L, argOffs+1);
            {
                QSize* rslt = 
                    new QSize(*args->arg_2_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QSize", "new", nargs, "2,3");
        } else {
            return util::argCountError(L, "QSize", nullptr, nargs, "1,2");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QSize_new(lua_State* L)
{
    return lqtk_QSize_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QSizeBinding::pushObject(lua_State* L, QSize* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QSize>(L, hasUserValue);     // -> uval?, udata
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
    { "equals",    Member::NORMAL_FUNCTION,      (void*) lqtk_QSize_equals },
    { "height",    Member::NORMAL_FUNCTION,      (void*) lqtk_QSize_height },
    { "setHeight", Member::NORMAL_FUNCTION,      (void*) lqtk_QSize_setHeight },
    { "setWidth",  Member::NORMAL_FUNCTION,      (void*) lqtk_QSize_setWidth },
    { "toString",  Member::NORMAL_FUNCTION,      (void*) lqtk_QSize_toString },
    { "width",     Member::NORMAL_FUNCTION,      (void*) lqtk_QSize_width },
    { NULL,        Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QSizeBinding::classInfo = 
{
    "QSize",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QSize_constructor,
    lqtk_QSize_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    6,
    members
};

/* ============================================================================================ */

int QSizeBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
