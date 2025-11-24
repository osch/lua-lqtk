// Type: QRegion
// Base: nil

/* ============================================================================================ */

#include <QObject>
#include <QPoint>
#include <QRect>
#include <QRegion>

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
#include "QRectBinding.hpp"
#include "QRegionBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QRegion_boundingRect_Args
{
    FromLua<QRegion*> arg_1_1;
    ToLua<QRect*> rslt_1;
};

extern "C" int lqtk_QRegion_boundingRect(lua_State* L)
{
    lqtk_QRegion_boundingRect_Args  argValues;
    lqtk_QRegion_boundingRect_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegion::boundingRect();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegion", "boundingRect", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegion_contains_Args
{
    FromLua<QRegion*> arg_1_1;
    FromLua<QPoint*> arg_2_1;
    FromLua<QRect*> arg_3_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QRegion_contains(lua_State* L)
{
    lqtk_QRegion_contains_Args  argValues;
    lqtk_QRegion_contains_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegion::contains(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegion::contains(*args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QRegion", "contains", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegion_intersected_Args
{
    FromLua<QRegion*> arg_1_1;
    FromLua<QRect*> arg_2_1;
    FromLua<QRegion*> arg_3_1;
    ToLua<QRegion*> rslt_1;
};

extern "C" int lqtk_QRegion_intersected(lua_State* L)
{
    lqtk_QRegion_intersected_Args  argValues;
    lqtk_QRegion_intersected_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegion::intersected(*args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegion::intersected(*args->arg_3_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QRegion", "intersected", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegion_intersects_Args
{
    FromLua<QRegion*> arg_1_1;
    FromLua<QRect*> arg_2_1;
    FromLua<QRegion*> arg_3_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QRegion_intersects(lua_State* L)
{
    lqtk_QRegion_intersects_Args  argValues;
    lqtk_QRegion_intersects_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegion::intersects(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegion::intersects(*args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QRegion", "intersects", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegion_isEmpty_Args
{
    FromLua<QRegion*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QRegion_isEmpty(lua_State* L)
{
    lqtk_QRegion_isEmpty_Args  argValues;
    lqtk_QRegion_isEmpty_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegion::isEmpty();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegion", "isEmpty", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegion_isNull_Args
{
    FromLua<QRegion*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QRegion_isNull(lua_State* L)
{
    lqtk_QRegion_isNull_Args  argValues;
    lqtk_QRegion_isNull_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegion::isNull();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegion", "isNull", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegion_rectCount_Args
{
    FromLua<QRegion*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QRegion_rectCount(lua_State* L)
{
    lqtk_QRegion_rectCount_Args  argValues;
    lqtk_QRegion_rectCount_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegion::rectCount();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegion", "rectCount", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegion_subtracted_Args
{
    FromLua<QRegion*> arg_1_1;
    FromLua<QRegion*> arg_2_1;
    ToLua<QRegion*> rslt_1;
};

extern "C" int lqtk_QRegion_subtracted(lua_State* L)
{
    lqtk_QRegion_subtracted_Args  argValues;
    lqtk_QRegion_subtracted_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegion::subtracted(*args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegion", "subtracted", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegion_translate_Args
{
    FromLua<QRegion*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
    FromLua<QPoint*> arg_3_1;
};

extern "C" int lqtk_QRegion_translate(lua_State* L)
{
    lqtk_QRegion_translate_Args  argValues;
    lqtk_QRegion_translate_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QRegion::translate(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRegion::translate(*args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRegion", "translate", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegion_translated_Args
{
    FromLua<QRegion*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
    FromLua<QPoint*> arg_3_1;
    ToLua<QRegion*> rslt_1;
};

extern "C" int lqtk_QRegion_translated(lua_State* L)
{
    lqtk_QRegion_translated_Args  argValues;
    lqtk_QRegion_translated_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegion::translated(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegion::translated(*args->arg_3_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegion", "translated", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegion_united_Args
{
    FromLua<QRegion*> arg_1_1;
    FromLua<QRect*> arg_2_1;
    FromLua<QRegion*> arg_3_1;
    ToLua<QRegion*> rslt_1;
};

extern "C" int lqtk_QRegion_united(lua_State* L)
{
    lqtk_QRegion_united_Args  argValues;
    lqtk_QRegion_united_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegion::united(*args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegion::united(*args->arg_3_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QRegion", "united", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegion_xored_Args
{
    FromLua<QRegion*> arg_1_1;
    FromLua<QRegion*> arg_2_1;
    ToLua<QRegion*> rslt_1;
};

extern "C" int lqtk_QRegion_xored(lua_State* L)
{
    lqtk_QRegion_xored_Args  argValues;
    lqtk_QRegion_xored_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegion::xored(*args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegion", "xored", nargs, "2");
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
        QRegionBinding::QType* ptr = static_cast<QRegionBinding::QType*>(objectPtr);
        if (targetClassInfo == &QRegionBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QRegion* ptr = (QRegion*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QRegion_new_Args
{
    FromLua<int> arg_1_1;
    FromLua<int> arg_1_2;
    FromLua<int> arg_1_3;
    FromLua<int> arg_1_4;
    FromLua<QRegion::RegionType> arg_2_1;
    FromLua<QRect*> arg_3_1;
    FromLua<QRegion*> arg_4_1;
    ToLua<QRegion*> rslt_1;
};

extern "C" int lqtk_QRegion_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QRegion_new_Args  argValues;
    lqtk_QRegion_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QRegionBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QRegion> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QRegion* rslt = 
                    new QRegion();
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
                QRegion* rslt = 
                    new QRegion(args->arg_1_1.getValue(), args->arg_1_2.getValue(), args->arg_1_3.getValue(), args->arg_1_4.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 5) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            args->arg_1_3.check(L, argOffs+3);
            args->arg_1_4.check(L, argOffs+4);
            args->arg_2_1.check(L, argOffs+5);
            {
                QRegion* rslt = 
                    new QRegion(args->arg_1_1.getValue(), args->arg_1_2.getValue(), args->arg_1_3.getValue(), args->arg_1_4.getValue(), args->arg_2_1.getValue());
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
                QRegion* rslt = 
                    new QRegion(*args->arg_3_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_3_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QRegion* rslt = 
                    new QRegion(*args->arg_3_1.getValue(), args->arg_2_1.getValue());
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
                QRegion* rslt = 
                    new QRegion(*args->arg_4_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_3_1.check(L, argOffs+1);
            assert(false);
        }
        if (explicitNew) {
            return util::argCountError(L, "QRegion", "new", nargs, "1,2,3,5,6");
        } else {
            return util::argCountError(L, "QRegion", nullptr, nargs, "0,1,2,4,5");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QRegion_new(lua_State* L)
{
    return lqtk_QRegion_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QRegionBinding::pushObject(lua_State* L, QRegion* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QRegion>(L, hasUserValue);     // -> uval?, udata
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
    { "Ellipse",      Member::INTEGER,              (void*) QRegion::Ellipse },
    { "Rectangle",    Member::INTEGER,              (void*) QRegion::Rectangle },
    { "boundingRect", Member::NORMAL_FUNCTION,      (void*) lqtk_QRegion_boundingRect },
    { "contains",     Member::NORMAL_FUNCTION,      (void*) lqtk_QRegion_contains },
    { "intersected",  Member::NORMAL_FUNCTION,      (void*) lqtk_QRegion_intersected },
    { "intersects",   Member::NORMAL_FUNCTION,      (void*) lqtk_QRegion_intersects },
    { "isEmpty",      Member::NORMAL_FUNCTION,      (void*) lqtk_QRegion_isEmpty },
    { "isNull",       Member::NORMAL_FUNCTION,      (void*) lqtk_QRegion_isNull },
    { "rectCount",    Member::NORMAL_FUNCTION,      (void*) lqtk_QRegion_rectCount },
    { "subtracted",   Member::NORMAL_FUNCTION,      (void*) lqtk_QRegion_subtracted },
    { "translate",    Member::NORMAL_FUNCTION,      (void*) lqtk_QRegion_translate },
    { "translated",   Member::NORMAL_FUNCTION,      (void*) lqtk_QRegion_translated },
    { "united",       Member::NORMAL_FUNCTION,      (void*) lqtk_QRegion_united },
    { "xored",        Member::NORMAL_FUNCTION,      (void*) lqtk_QRegion_xored },
    { NULL,           Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QRegionBinding::classInfo = 
{
    "QRegion",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QRegion_constructor,
    lqtk_QRegion_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    14,
    members
};

/* ============================================================================================ */

int QRegionBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
