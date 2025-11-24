// Type: QFont
// Base: nil

/* ============================================================================================ */

#include <QFont>
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
#include "QFontBinding.hpp"
#include "QObjectBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QFont_bold_Args
{
    FromLua<QFont*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFont_bold(lua_State* L)
{
    lqtk_QFont_bold_Args  argValues;
    lqtk_QFont_bold_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFont::bold();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFont", "bold", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFont_pointSize_Args
{
    FromLua<QFont*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QFont_pointSize(lua_State* L)
{
    lqtk_QFont_pointSize_Args  argValues;
    lqtk_QFont_pointSize_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFont::pointSize();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFont", "pointSize", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFont_setBold_Args
{
    FromLua<QFont*> arg_1_1;
    FromLua<bool> arg_2_1;
};

extern "C" int lqtk_QFont_setBold(lua_State* L)
{
    lqtk_QFont_setBold_Args  argValues;
    lqtk_QFont_setBold_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QFont::setBold(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QFont", "setBold", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFont_setPointSize_Args
{
    FromLua<QFont*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QFont_setPointSize(lua_State* L)
{
    lqtk_QFont_setPointSize_Args  argValues;
    lqtk_QFont_setPointSize_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QFont::setPointSize(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QFont", "setPointSize", nargs, "2");
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
        QFontBinding::QType* ptr = static_cast<QFontBinding::QType*>(objectPtr);
        if (targetClassInfo == &QFontBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QFont* ptr = (QFont*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QFont_new_Args
{
    FromLua<QFont*> arg_1_1;
    ToLua<QFont*> rslt_1;
};

extern "C" int lqtk_QFont_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QFont_new_Args  argValues;
    lqtk_QFont_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QFontBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QFont> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QFont* rslt = 
                    new QFont();
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
                QFont* rslt = 
                    new QFont(*args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QFont", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QFont", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QFont_new(lua_State* L)
{
    return lqtk_QFont_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QFontBinding::pushObject(lua_State* L, QFont* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QFont>(L, hasUserValue);     // -> uval?, udata
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
    { "bold",         Member::NORMAL_FUNCTION,      (void*) lqtk_QFont_bold },
    { "pointSize",    Member::NORMAL_FUNCTION,      (void*) lqtk_QFont_pointSize },
    { "setBold",      Member::NORMAL_FUNCTION,      (void*) lqtk_QFont_setBold },
    { "setPointSize", Member::NORMAL_FUNCTION,      (void*) lqtk_QFont_setPointSize },
    { NULL,           Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QFontBinding::classInfo = 
{
    "QFont",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QFont_constructor,
    lqtk_QFont_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    4,
    members
};

/* ============================================================================================ */

int QFontBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
