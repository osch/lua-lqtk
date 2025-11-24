// Type: QModelIndex
// Base: nil

/* ============================================================================================ */

#include <QModelIndex>
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
#include "QModelIndexBinding.hpp"
#include "QObjectBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QModelIndex_column_Args
{
    FromLua<QModelIndex*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QModelIndex_column(lua_State* L)
{
    lqtk_QModelIndex_column_Args  argValues;
    lqtk_QModelIndex_column_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QModelIndex::column();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QModelIndex", "column", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QModelIndex_row_Args
{
    FromLua<QModelIndex*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QModelIndex_row(lua_State* L)
{
    lqtk_QModelIndex_row_Args  argValues;
    lqtk_QModelIndex_row_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QModelIndex::row();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QModelIndex", "row", nargs, "1");
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
        QModelIndexBinding::QType* ptr = static_cast<QModelIndexBinding::QType*>(objectPtr);
        if (targetClassInfo == &QModelIndexBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QModelIndex* ptr = (QModelIndex*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QModelIndex_new_Args
{
    ToLua<QModelIndex*> rslt_1;
};

extern "C" int lqtk_QModelIndex_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QModelIndex_new_Args  argValues;
    lqtk_QModelIndex_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QModelIndexBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QModelIndex> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QModelIndex* rslt = 
                    new QModelIndex();
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QModelIndex", "new", nargs, "1");
        } else {
            return util::argCountError(L, "QModelIndex", nullptr, nargs, "0");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QModelIndex_new(lua_State* L)
{
    return lqtk_QModelIndex_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QModelIndexBinding::pushObject(lua_State* L, QModelIndex* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QModelIndex>(L, hasUserValue);     // -> uval?, udata
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
    { "column", Member::NORMAL_FUNCTION,      (void*) lqtk_QModelIndex_column },
    { "row",    Member::NORMAL_FUNCTION,      (void*) lqtk_QModelIndex_row },
    { NULL,     Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QModelIndexBinding::classInfo = 
{
    "QModelIndex",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QModelIndex_constructor,
    lqtk_QModelIndex_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    2,
    members
};

/* ============================================================================================ */

int QModelIndexBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
