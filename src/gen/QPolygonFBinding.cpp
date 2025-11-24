// Type: QPolygonF
// Base: nil

/* ============================================================================================ */

#include <QObject>
#include <QPointF>
#include <QPolygonF>
#include <QRectF>
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
#include "QObjectBinding.hpp"
#include "QPointFBinding.hpp"
#include "QPolygonFBinding.hpp"
#include "QRectFBinding.hpp"
#include "QtBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QPolygonF_boundingRect_Args
{
    FromLua<QPolygonF*> arg_1_1;
    ToLua<QRectF*> rslt_1;
};

extern "C" int lqtk_QPolygonF_boundingRect(lua_State* L)
{
    lqtk_QPolygonF_boundingRect_Args  argValues;
    lqtk_QPolygonF_boundingRect_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPolygonF::boundingRect();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPolygonF", "boundingRect", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPolygonF_containsPoint_Args
{
    FromLua<QPolygonF*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
    FromLua<Qt::FillRule> arg_3_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QPolygonF_containsPoint(lua_State* L)
{
    lqtk_QPolygonF_containsPoint_Args  argValues;
    lqtk_QPolygonF_containsPoint_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPolygonF::containsPoint(*args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPolygonF", "containsPoint", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPolygonF_intersected_Args
{
    FromLua<QPolygonF*> arg_1_1;
    FromLua<QPolygonF*> arg_2_1;
    ToLua<QPolygonF*> rslt_1;
};

extern "C" int lqtk_QPolygonF_intersected(lua_State* L)
{
    lqtk_QPolygonF_intersected_Args  argValues;
    lqtk_QPolygonF_intersected_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPolygonF::intersected(*args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPolygonF", "intersected", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPolygonF_intersects_Args
{
    FromLua<QPolygonF*> arg_1_1;
    FromLua<QPolygonF*> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QPolygonF_intersects(lua_State* L)
{
    lqtk_QPolygonF_intersects_Args  argValues;
    lqtk_QPolygonF_intersects_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPolygonF::intersects(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPolygonF", "intersects", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPolygonF_isClosed_Args
{
    FromLua<QPolygonF*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QPolygonF_isClosed(lua_State* L)
{
    lqtk_QPolygonF_isClosed_Args  argValues;
    lqtk_QPolygonF_isClosed_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPolygonF::isClosed();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPolygonF", "isClosed", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPolygonF_subtracted_Args
{
    FromLua<QPolygonF*> arg_1_1;
    FromLua<QPolygonF*> arg_2_1;
    ToLua<QPolygonF*> rslt_1;
};

extern "C" int lqtk_QPolygonF_subtracted(lua_State* L)
{
    lqtk_QPolygonF_subtracted_Args  argValues;
    lqtk_QPolygonF_subtracted_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPolygonF::subtracted(*args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPolygonF", "subtracted", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPolygonF_translate_Args
{
    FromLua<QPolygonF*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
    FromLua<qreal> arg_3_1;
    FromLua<qreal> arg_3_2;
};

extern "C" int lqtk_QPolygonF_translate(lua_State* L)
{
    lqtk_QPolygonF_translate_Args  argValues;
    lqtk_QPolygonF_translate_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QPolygonF::translate(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            args->arg_3_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QPolygonF::translate(args->arg_3_1.getValue(), args->arg_3_2.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPolygonF", "translate", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPolygonF_translated_Args
{
    FromLua<QPolygonF*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
    FromLua<qreal> arg_3_1;
    FromLua<qreal> arg_3_2;
    ToLua<QPolygonF*> rslt_1;
};

extern "C" int lqtk_QPolygonF_translated(lua_State* L)
{
    lqtk_QPolygonF_translated_Args  argValues;
    lqtk_QPolygonF_translated_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPolygonF::translated(*args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            args->arg_3_2.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPolygonF::translated(args->arg_3_1.getValue(), args->arg_3_2.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPolygonF", "translated", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPolygonF_united_Args
{
    FromLua<QPolygonF*> arg_1_1;
    FromLua<QPolygonF*> arg_2_1;
    ToLua<QPolygonF*> rslt_1;
};

extern "C" int lqtk_QPolygonF_united(lua_State* L)
{
    lqtk_QPolygonF_united_Args  argValues;
    lqtk_QPolygonF_united_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPolygonF::united(*args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPolygonF", "united", nargs, "2");
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
        QPolygonFBinding::QType* ptr = static_cast<QPolygonFBinding::QType*>(objectPtr);
        if (targetClassInfo == &QPolygonFBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QPolygonF* ptr = (QPolygonF*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QPolygonF_new_Args
{
    explicit lqtk_QPolygonF_new_Args(bool explicitNew)
        : explicitNew(explicitNew)
    {}
    bool explicitNew;
    FromLua<QList<QPointF>> arg_1_1;
    FromLua<QRectF*> arg_2_1;
    ToLua<QPolygonF*> rslt_1;
};

static int lqtk_QPolygonF_new_doLua(lua_State* L)
{
    lqtk_QPolygonF_new_Args* args = (lqtk_QPolygonF_new_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    bool explicitNew = args->explicitNew;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QPolygonFBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QPolygonF> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QPolygonF* rslt = 
                    new QPolygonF();
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
                QPolygonF* rslt = 
                    new QPolygonF(args->arg_1_1.getValue());
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
                QPolygonF* rslt = 
                    new QPolygonF(*args->arg_2_1.getValue());
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
            return util::argCountError(L, "QPolygonF", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QPolygonF", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QPolygonF_constructor(lua_State* L, bool explicitNew)
{
    try {
        lqtk_QPolygonF_new_Args args(explicitNew);
        return BindingUtil::callMethodFromLua(L, lqtk_QPolygonF_new_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QPolygonF_new(lua_State* L)
{
    return lqtk_QPolygonF_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QPolygonFBinding::pushObject(lua_State* L, QPolygonF* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QPolygonF>(L, hasUserValue);     // -> uval?, udata
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
    { "boundingRect",  Member::NORMAL_FUNCTION,      (void*) lqtk_QPolygonF_boundingRect },
    { "containsPoint", Member::NORMAL_FUNCTION,      (void*) lqtk_QPolygonF_containsPoint },
    { "intersected",   Member::NORMAL_FUNCTION,      (void*) lqtk_QPolygonF_intersected },
    { "intersects",    Member::NORMAL_FUNCTION,      (void*) lqtk_QPolygonF_intersects },
    { "isClosed",      Member::NORMAL_FUNCTION,      (void*) lqtk_QPolygonF_isClosed },
    { "subtracted",    Member::NORMAL_FUNCTION,      (void*) lqtk_QPolygonF_subtracted },
    { "translate",     Member::NORMAL_FUNCTION,      (void*) lqtk_QPolygonF_translate },
    { "translated",    Member::NORMAL_FUNCTION,      (void*) lqtk_QPolygonF_translated },
    { "united",        Member::NORMAL_FUNCTION,      (void*) lqtk_QPolygonF_united },
    { NULL,            Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QPolygonFBinding::classInfo = 
{
    "QPolygonF",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QPolygonF_constructor,
    lqtk_QPolygonF_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    9,
    members
};

/* ============================================================================================ */

int QPolygonFBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
