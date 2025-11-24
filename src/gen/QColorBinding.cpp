// Type: QColor
// Base: nil

/* ============================================================================================ */

#include <QColor>
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
#include "QColorBinding.hpp"
#include "QObjectBinding.hpp"
#include "QStringBinding.hpp"
#include "QtBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

static void* castFunction(const ClassInfo* targetClassInfo, void* objectPtr)
{
    if (objectPtr)
    {
        QColorBinding::QType* ptr = static_cast<QColorBinding::QType*>(objectPtr);
        if (targetClassInfo == &QColorBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QColor* ptr = (QColor*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QColor_new_Args
{
    explicit lqtk_QColor_new_Args(bool explicitNew)
        : explicitNew(explicitNew)
    {}
    bool explicitNew;
    FromLua<int> arg_1_1;
    FromLua<int> arg_1_2;
    FromLua<int> arg_1_3;
    FromLua<int> arg_1_4;
    FromLua<QColor*> arg_2_1;
    FromLua<QString> arg_3_1;
    FromLua<Qt::GlobalColor> arg_4_1;
    ToLua<QColor*> rslt_1;
};

static int lqtk_QColor_new_doLua(lua_State* L)
{
    lqtk_QColor_new_Args* args = (lqtk_QColor_new_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    bool explicitNew = args->explicitNew;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QColorBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QColor> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QColor* rslt = 
                    new QColor();
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            args->arg_1_3.check(L, argOffs+3);
            {
                QColor* rslt = 
                    new QColor(args->arg_1_1.getValue(), args->arg_1_2.getValue(), args->arg_1_3.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            args->arg_1_3.check(L, argOffs+3);
            args->arg_1_4.check(L, argOffs+4);
            {
                QColor* rslt = 
                    new QColor(args->arg_1_1.getValue(), args->arg_1_2.getValue(), args->arg_1_3.getValue(), args->arg_1_4.getValue());
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
                QColor* rslt = 
                    new QColor(*args->arg_2_1.getValue());
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
                QColor* rslt = 
                    new QColor(args->arg_3_1.getValue());
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
                QColor* rslt = 
                    new QColor(args->arg_4_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_2_1.check(L, argOffs+1);
            assert(false);
        }
        if (explicitNew) {
            return util::argCountError(L, "QColor", "new", nargs, "1,2,4,5");
        } else {
            return util::argCountError(L, "QColor", nullptr, nargs, "0,1,3,4");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QColor_constructor(lua_State* L, bool explicitNew)
{
    try {
        lqtk_QColor_new_Args args(explicitNew);
        return BindingUtil::callMethodFromLua(L, lqtk_QColor_new_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QColor_new(lua_State* L)
{
    return lqtk_QColor_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QColorBinding::pushObject(lua_State* L, QColor* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QColor>(L, hasUserValue);     // -> uval?, udata
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
    { NULL,  Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QColorBinding::classInfo = 
{
    "QColor",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QColor_constructor,
    lqtk_QColor_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    0,
    members
};

/* ============================================================================================ */

int QColorBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
