// Type: QItemSelection
// Base: nil

/* ============================================================================================ */

#include <QItemSelection>
#include <QItemSelectionModel>
#include <QItemSelectionRange>
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
#include "QItemSelectionBinding.hpp"
#include "QItemSelectionModelBinding.hpp"
#include "QItemSelectionRangeBinding.hpp"
#include "QModelIndexBinding.hpp"
#include "QObjectBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QItemSelection_split_Args
{
    FromLua<QItemSelectionRange*> arg_1_1;
    FromLua<QItemSelectionRange*> arg_1_2;
    FromLua<QItemSelection*> arg_2_1;
};

extern "C" int lqtk_QItemSelection_split(lua_State* L)
{
    lqtk_QItemSelection_split_Args  argValues;
    lqtk_QItemSelection_split_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            args->arg_2_1.check(L, argOffs+3);
            {
                    QItemSelection::split(*args->arg_1_1.getValue(), *args->arg_1_2.getValue(), args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelection", "split", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelection_contains_Args
{
    FromLua<QItemSelection*> arg_1_1;
    FromLua<QModelIndex*> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QItemSelection_contains(lua_State* L)
{
    lqtk_QItemSelection_contains_Args  argValues;
    lqtk_QItemSelection_contains_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelection::contains(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelection", "contains", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelection_indexes_Args
{
    FromLua<QItemSelection*> arg_1_1;
    ToLua<QList<QModelIndex>> rslt_1;
};

static int lqtk_QItemSelection_indexes_doLua(lua_State* L)
{
    lqtk_QItemSelection_indexes_Args* args = (lqtk_QItemSelection_indexes_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelection::indexes();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelection", "indexes", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QItemSelection_indexes(lua_State* L)
{
    try {
        lqtk_QItemSelection_indexes_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QItemSelection_indexes_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelection_merge_Args
{
    FromLua<QItemSelection*> arg_1_1;
    FromLua<QItemSelection*> arg_2_1;
    FromLua<QItemSelectionModel::SelectionFlags> arg_3_1;
};

extern "C" int lqtk_QItemSelection_merge(lua_State* L)
{
    lqtk_QItemSelection_merge_Args  argValues;
    lqtk_QItemSelection_merge_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QItemSelection::merge(*args->arg_2_1.getValue(), args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelection", "merge", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelection_select_Args
{
    FromLua<QItemSelection*> arg_1_1;
    FromLua<QModelIndex*> arg_2_1;
    FromLua<QModelIndex*> arg_2_2;
};

extern "C" int lqtk_QItemSelection_select(lua_State* L)
{
    lqtk_QItemSelection_select_Args  argValues;
    lqtk_QItemSelection_select_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QItemSelection::select(*args->arg_2_1.getValue(), *args->arg_2_2.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelection", "select", nargs, "3");
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
        QItemSelectionBinding::QType* ptr = static_cast<QItemSelectionBinding::QType*>(objectPtr);
        if (targetClassInfo == &QItemSelectionBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QItemSelection* ptr = (QItemSelection*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

struct lqtk_QItemSelection_new_Args
{
    FromLua<QModelIndex*> arg_1_1;
    FromLua<QModelIndex*> arg_1_2;
    ToLua<QItemSelection*> rslt_1;
};

extern "C" int lqtk_QItemSelection_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QItemSelection_new_Args  argValues;
    lqtk_QItemSelection_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QItemSelectionBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QItemSelection> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QItemSelection* rslt = 
                    new QItemSelection();
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
                QItemSelection* rslt = 
                    new QItemSelection(*args->arg_1_1.getValue(), *args->arg_1_2.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QItemSelection", "new", nargs, "1,3");
        } else {
            return util::argCountError(L, "QItemSelection", nullptr, nargs, "0,2");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QItemSelection_new(lua_State* L)
{
    return lqtk_QItemSelection_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QItemSelectionBinding::pushObject(lua_State* L, QItemSelection* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QItemSelection>(L, hasUserValue);     // -> uval?, udata
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
    { "contains", Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelection_contains },
    { "indexes",  Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelection_indexes },
    { "merge",    Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelection_merge },
    { "select",   Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelection_select },
    { "split",    Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelection_split },
    { NULL,       Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QItemSelectionBinding::classInfo = 
{
    "QItemSelection",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QItemSelection_constructor,
    lqtk_QItemSelection_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    5,
    members
};

/* ============================================================================================ */

int QItemSelectionBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
