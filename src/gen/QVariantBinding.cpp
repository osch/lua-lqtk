// Type: QVariant
// Base: nil

/* ============================================================================================ */

#include <QByteArray>
#include <QObject>
#include <QString>
#include <QVariant>

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
#include "QByteArrayBinding.hpp"
#include "QObjectBinding.hpp"
#include "QStringBinding.hpp"
#include "QVariantBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QVariant_toDouble_Args
{
    FromLua<QVariant*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QVariant_toDouble(lua_State* L)
{
    lqtk_QVariant_toDouble_Args  argValues;
    lqtk_QVariant_toDouble_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QVariant::toDouble();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QVariant", "toDouble", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QVariant_toInt_Args
{
    FromLua<QVariant*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QVariant_toInt(lua_State* L)
{
    lqtk_QVariant_toInt_Args  argValues;
    lqtk_QVariant_toInt_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QVariant::toInt();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QVariant", "toInt", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QVariant_toString_Args
{
    FromLua<QVariant*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QVariant_toString_doLua(lua_State* L)
{
    lqtk_QVariant_toString_Args* args = (lqtk_QVariant_toString_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QVariant::toString();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QVariant", "toString", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QVariant_toString(lua_State* L)
{
    try {
        lqtk_QVariant_toString_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QVariant_toString_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QVariant_typeName_Args
{
    FromLua<QVariant*> arg_1_1;
    ToLua<const char*> rslt_1;
};

extern "C" int lqtk_QVariant_typeName(lua_State* L)
{
    lqtk_QVariant_typeName_Args  argValues;
    lqtk_QVariant_typeName_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QVariant::typeName();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QVariant", "typeName", nargs, "1");
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
        QVariantBinding::QType* ptr = static_cast<QVariantBinding::QType*>(objectPtr);
        if (targetClassInfo == &QVariantBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QVariant* ptr = (QVariant*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QVariant_new_Args
{
    explicit lqtk_QVariant_new_Args(bool explicitNew)
        : explicitNew(explicitNew)
    {}
    bool explicitNew;
    FromLua<double> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<bool> arg_3_1;
    FromLua<QString> arg_4_1;
    FromLua<QStringList> arg_5_1;
    FromLua<QByteArray*> arg_6_1;
    ToLua<QVariant*> rslt_1;
};

static int lqtk_QVariant_new_doLua(lua_State* L)
{
    lqtk_QVariant_new_Args* args = (lqtk_QVariant_new_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    bool explicitNew = args->explicitNew;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QVariantBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QVariant> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QVariant* rslt = 
                    new QVariant();
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
                QVariant* rslt = 
                    new QVariant(args->arg_1_1.getValue());
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
                QVariant* rslt = 
                    new QVariant(args->arg_2_1.getValue());
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
                QVariant* rslt = 
                    new QVariant(args->arg_3_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_4_1.test(L, argOffs+1)) break;
            {
                QVariant* rslt = 
                    new QVariant(args->arg_4_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_5_1.test(L, argOffs+1)) break;
            {
                QVariant* rslt = 
                    new QVariant(args->arg_5_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_6_1.test(L, argOffs+1)) break;
            {
                QVariant* rslt = 
                    new QVariant(*args->arg_6_1.getValue());
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
        if (explicitNew) {
            return util::argCountError(L, "QVariant", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QVariant", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QVariant_constructor(lua_State* L, bool explicitNew)
{
    try {
        lqtk_QVariant_new_Args args(explicitNew);
        return BindingUtil::callMethodFromLua(L, lqtk_QVariant_new_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QVariant_new(lua_State* L)
{
    return lqtk_QVariant_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QVariantBinding::pushObject(lua_State* L, QVariant* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QVariant>(L, hasUserValue);     // -> uval?, udata
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
    { "toDouble", Member::NORMAL_FUNCTION,      (void*) lqtk_QVariant_toDouble },
    { "toInt",    Member::NORMAL_FUNCTION,      (void*) lqtk_QVariant_toInt },
    { "toString", Member::NORMAL_FUNCTION,      (void*) lqtk_QVariant_toString },
    { "typeName", Member::NORMAL_FUNCTION,      (void*) lqtk_QVariant_typeName },
    { NULL,       Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QVariantBinding::classInfo = 
{
    "QVariant",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QVariant_constructor,
    lqtk_QVariant_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    4,
    members
};

/* ============================================================================================ */

int QVariantBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
