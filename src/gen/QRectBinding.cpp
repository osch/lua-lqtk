// Type: QRect
// Base: nil

/* ============================================================================================ */

#include <QObject>
#include <QRect>
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
#include "QRectBinding.hpp"
#include "QStringBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QRect_equals_Args
{
    FromLua<QRect*> arg_1_1;
    FromLua<QRect*> arg_1_2;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QRect_equals(lua_State* L)
{
    lqtk_QRect_equals_Args  argValues;
    lqtk_QRect_equals_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QRectBinding::delegate_equals(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRect", "equals", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRect_height_Args
{
    FromLua<QRect*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QRect_height(lua_State* L)
{
    lqtk_QRect_height_Args  argValues;
    lqtk_QRect_height_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRect::height();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRect", "height", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRect_setHeight_Args
{
    FromLua<QRect*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QRect_setHeight(lua_State* L)
{
    lqtk_QRect_setHeight_Args  argValues;
    lqtk_QRect_setHeight_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRect::setHeight(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRect", "setHeight", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRect_setWidth_Args
{
    FromLua<QRect*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QRect_setWidth(lua_State* L)
{
    lqtk_QRect_setWidth_Args  argValues;
    lqtk_QRect_setWidth_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRect::setWidth(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRect", "setWidth", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRect_setX_Args
{
    FromLua<QRect*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QRect_setX(lua_State* L)
{
    lqtk_QRect_setX_Args  argValues;
    lqtk_QRect_setX_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRect::setX(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRect", "setX", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRect_setY_Args
{
    FromLua<QRect*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QRect_setY(lua_State* L)
{
    lqtk_QRect_setY_Args  argValues;
    lqtk_QRect_setY_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRect::setY(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRect", "setY", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRect_toString_Args
{
    FromLua<QRect*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QRect_toString_doLua(lua_State* L)
{
    lqtk_QRect_toString_Args* args = (lqtk_QRect_toString_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QRectBinding::delegate_toString(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRect", "toString", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QRect_toString(lua_State* L)
{
    try {
        lqtk_QRect_toString_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QRect_toString_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRect_width_Args
{
    FromLua<QRect*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QRect_width(lua_State* L)
{
    lqtk_QRect_width_Args  argValues;
    lqtk_QRect_width_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRect::width();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRect", "width", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRect_x_Args
{
    FromLua<QRect*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QRect_x(lua_State* L)
{
    lqtk_QRect_x_Args  argValues;
    lqtk_QRect_x_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRect::x();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRect", "x", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRect_y_Args
{
    FromLua<QRect*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QRect_y(lua_State* L)
{
    lqtk_QRect_y_Args  argValues;
    lqtk_QRect_y_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRect::y();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRect", "y", nargs, "1");
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
        QRectBinding::QType* ptr = static_cast<QRectBinding::QType*>(objectPtr);
        if (targetClassInfo == &QRectBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QRect* ptr = (QRect*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QRect_new_Args
{
    FromLua<int> arg_1_1;
    FromLua<int> arg_1_2;
    FromLua<int> arg_1_3;
    FromLua<int> arg_1_4;
    FromLua<QRect*> arg_2_1;
    ToLua<QRect*> rslt_1;
};

extern "C" int lqtk_QRect_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QRect_new_Args  argValues;
    lqtk_QRect_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QRectBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QRect> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            args->arg_1_3.check(L, argOffs+3);
            args->arg_1_4.check(L, argOffs+4);
            {
                QRect* rslt = 
                    new QRect(args->arg_1_1.getValue(), args->arg_1_2.getValue(), args->arg_1_3.getValue(), args->arg_1_4.getValue());
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
                QRect* rslt = 
                    new QRect(*args->arg_2_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QRect", "new", nargs, "2,5");
        } else {
            return util::argCountError(L, "QRect", nullptr, nargs, "1,4");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QRect_new(lua_State* L)
{
    return lqtk_QRect_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QRectBinding::pushObject(lua_State* L, QRect* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QRect>(L, hasUserValue);     // -> uval?, udata
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
    { "equals",    Member::NORMAL_FUNCTION,      (void*) lqtk_QRect_equals },
    { "height",    Member::NORMAL_FUNCTION,      (void*) lqtk_QRect_height },
    { "setHeight", Member::NORMAL_FUNCTION,      (void*) lqtk_QRect_setHeight },
    { "setWidth",  Member::NORMAL_FUNCTION,      (void*) lqtk_QRect_setWidth },
    { "setX",      Member::NORMAL_FUNCTION,      (void*) lqtk_QRect_setX },
    { "setY",      Member::NORMAL_FUNCTION,      (void*) lqtk_QRect_setY },
    { "toString",  Member::NORMAL_FUNCTION,      (void*) lqtk_QRect_toString },
    { "width",     Member::NORMAL_FUNCTION,      (void*) lqtk_QRect_width },
    { "x",         Member::NORMAL_FUNCTION,      (void*) lqtk_QRect_x },
    { "y",         Member::NORMAL_FUNCTION,      (void*) lqtk_QRect_y },
    { NULL,        Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QRectBinding::classInfo = 
{
    "QRect",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QRect_constructor,
    lqtk_QRect_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    10,
    members
};

/* ============================================================================================ */

int QRectBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
