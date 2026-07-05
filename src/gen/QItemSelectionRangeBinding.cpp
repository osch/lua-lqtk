// Type: QItemSelectionRange
// Base: nil

/* ============================================================================================ */

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
#include "QItemSelectionRangeBinding.hpp"
#include "QModelIndexBinding.hpp"
#include "QObjectBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QItemSelectionRange_bottom_Args
{
    FromLua<QItemSelectionRange*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QItemSelectionRange_bottom(lua_State* L)
{
    lqtk_QItemSelectionRange_bottom_Args  argValues;
    lqtk_QItemSelectionRange_bottom_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionRange::bottom();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionRange", "bottom", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionRange_contains_Args
{
    FromLua<QItemSelectionRange*> arg_1_1;
    FromLua<QModelIndex*> arg_2_1;
    FromLua<int> arg_3_1;
    FromLua<int> arg_3_2;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QItemSelectionRange_contains(lua_State* L)
{
    lqtk_QItemSelectionRange_contains_Args  argValues;
    lqtk_QItemSelectionRange_contains_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionRange::contains(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            args->arg_3_2.check(L, argOffs+3);
            args->arg_2_1.check(L, argOffs+4);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionRange::contains(args->arg_3_1.getValue(), args->arg_3_2.getValue(), *args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionRange", "contains", nargs, "2,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionRange_height_Args
{
    FromLua<QItemSelectionRange*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QItemSelectionRange_height(lua_State* L)
{
    lqtk_QItemSelectionRange_height_Args  argValues;
    lqtk_QItemSelectionRange_height_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionRange::height();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionRange", "height", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionRange_indexes_Args
{
    FromLua<QItemSelectionRange*> arg_1_1;
    ToLua<QList<QModelIndex>> rslt_1;
};

static int lqtk_QItemSelectionRange_indexes_doLua(lua_State* L)
{
    lqtk_QItemSelectionRange_indexes_Args* args = (lqtk_QItemSelectionRange_indexes_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionRange::indexes();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionRange", "indexes", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QItemSelectionRange_indexes(lua_State* L)
{
    try {
        lqtk_QItemSelectionRange_indexes_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QItemSelectionRange_indexes_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionRange_intersected_Args
{
    FromLua<QItemSelectionRange*> arg_1_1;
    FromLua<QItemSelectionRange*> arg_2_1;
    ToLua<QItemSelectionRange*> rslt_1;
};

extern "C" int lqtk_QItemSelectionRange_intersected(lua_State* L)
{
    lqtk_QItemSelectionRange_intersected_Args  argValues;
    lqtk_QItemSelectionRange_intersected_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionRange::intersected(*args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionRange", "intersected", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionRange_intersects_Args
{
    FromLua<QItemSelectionRange*> arg_1_1;
    FromLua<QItemSelectionRange*> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QItemSelectionRange_intersects(lua_State* L)
{
    lqtk_QItemSelectionRange_intersects_Args  argValues;
    lqtk_QItemSelectionRange_intersects_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionRange::intersects(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionRange", "intersects", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionRange_isEmpty_Args
{
    FromLua<QItemSelectionRange*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QItemSelectionRange_isEmpty(lua_State* L)
{
    lqtk_QItemSelectionRange_isEmpty_Args  argValues;
    lqtk_QItemSelectionRange_isEmpty_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionRange::isEmpty();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionRange", "isEmpty", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionRange_isValid_Args
{
    FromLua<QItemSelectionRange*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QItemSelectionRange_isValid(lua_State* L)
{
    lqtk_QItemSelectionRange_isValid_Args  argValues;
    lqtk_QItemSelectionRange_isValid_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionRange::isValid();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionRange", "isValid", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionRange_left_Args
{
    FromLua<QItemSelectionRange*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QItemSelectionRange_left(lua_State* L)
{
    lqtk_QItemSelectionRange_left_Args  argValues;
    lqtk_QItemSelectionRange_left_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionRange::left();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionRange", "left", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionRange_parent_Args
{
    FromLua<QItemSelectionRange*> arg_1_1;
    ToLua<QModelIndex*> rslt_1;
};

extern "C" int lqtk_QItemSelectionRange_parent(lua_State* L)
{
    lqtk_QItemSelectionRange_parent_Args  argValues;
    lqtk_QItemSelectionRange_parent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionRange::parent();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionRange", "parent", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionRange_right_Args
{
    FromLua<QItemSelectionRange*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QItemSelectionRange_right(lua_State* L)
{
    lqtk_QItemSelectionRange_right_Args  argValues;
    lqtk_QItemSelectionRange_right_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionRange::right();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionRange", "right", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionRange_top_Args
{
    FromLua<QItemSelectionRange*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QItemSelectionRange_top(lua_State* L)
{
    lqtk_QItemSelectionRange_top_Args  argValues;
    lqtk_QItemSelectionRange_top_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionRange::top();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionRange", "top", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QItemSelectionRange_width_Args
{
    FromLua<QItemSelectionRange*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QItemSelectionRange_width(lua_State* L)
{
    lqtk_QItemSelectionRange_width_Args  argValues;
    lqtk_QItemSelectionRange_width_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QItemSelectionRange::width();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QItemSelectionRange", "width", nargs, "1");
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
        QItemSelectionRangeBinding::QType* ptr = static_cast<QItemSelectionRangeBinding::QType*>(objectPtr);
        if (targetClassInfo == &QItemSelectionRangeBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QItemSelectionRange* ptr = (QItemSelectionRange*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

struct lqtk_QItemSelectionRange_new_Args
{
    FromLua<QModelIndex*> arg_1_1;
    FromLua<QModelIndex*> arg_1_2;
    ToLua<QItemSelectionRange*> rslt_1;
};

extern "C" int lqtk_QItemSelectionRange_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QItemSelectionRange_new_Args  argValues;
    lqtk_QItemSelectionRange_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QItemSelectionRangeBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QItemSelectionRange> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QItemSelectionRange* rslt = 
                    new QItemSelectionRange();
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
                QItemSelectionRange* rslt = 
                    new QItemSelectionRange(*args->arg_1_1.getValue());
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
                QItemSelectionRange* rslt = 
                    new QItemSelectionRange(*args->arg_1_1.getValue(), *args->arg_1_2.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QItemSelectionRange", "new", nargs, "1,2,3");
        } else {
            return util::argCountError(L, "QItemSelectionRange", nullptr, nargs, "0,1,2");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QItemSelectionRange_new(lua_State* L)
{
    return lqtk_QItemSelectionRange_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QItemSelectionRangeBinding::pushObject(lua_State* L, QItemSelectionRange* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QItemSelectionRange>(L, hasUserValue);     // -> uval?, udata
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
    { "bottom",      Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionRange_bottom },
    { "contains",    Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionRange_contains },
    { "height",      Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionRange_height },
    { "indexes",     Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionRange_indexes },
    { "intersected", Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionRange_intersected },
    { "intersects",  Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionRange_intersects },
    { "isEmpty",     Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionRange_isEmpty },
    { "isValid",     Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionRange_isValid },
    { "left",        Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionRange_left },
    { "parent",      Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionRange_parent },
    { "right",       Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionRange_right },
    { "top",         Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionRange_top },
    { "width",       Member::NORMAL_FUNCTION,      (void*) lqtk_QItemSelectionRange_width },
    { NULL,          Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QItemSelectionRangeBinding::classInfo = 
{
    "QItemSelectionRange",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QItemSelectionRange_constructor,
    lqtk_QItemSelectionRange_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    13,
    members
};

/* ============================================================================================ */

int QItemSelectionRangeBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
