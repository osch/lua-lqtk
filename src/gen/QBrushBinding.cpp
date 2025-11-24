// Type: QBrush
// Base: nil

/* ============================================================================================ */

#include <QBrush>
#include <QColor>
#include <QGradient>
#include <QObject>
#include <QTransform>
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
#include "QBrushBinding.hpp"
#include "QColorBinding.hpp"
#include "QGradientBinding.hpp"
#include "QObjectBinding.hpp"
#include "QTransformBinding.hpp"
#include "QtBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QBrush_color_Args
{
    FromLua<QBrush*> arg_1_1;
    ToLua<QColor*> rslt_1;
};

extern "C" int lqtk_QBrush_color(lua_State* L)
{
    lqtk_QBrush_color_Args  argValues;
    lqtk_QBrush_color_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QBrush::color();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QBrush", "color", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QBrush_isOpaque_Args
{
    FromLua<QBrush*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QBrush_isOpaque(lua_State* L)
{
    lqtk_QBrush_isOpaque_Args  argValues;
    lqtk_QBrush_isOpaque_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QBrush::isOpaque();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QBrush", "isOpaque", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QBrush_setColor_Args
{
    FromLua<QBrush*> arg_1_1;
    FromLua<QColor*> arg_2_1;
    FromLua<Qt::GlobalColor> arg_3_1;
};

extern "C" int lqtk_QBrush_setColor(lua_State* L)
{
    lqtk_QBrush_setColor_Args  argValues;
    lqtk_QBrush_setColor_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                    args->arg_1_1.getValue()->QBrush::setColor(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                    args->arg_1_1.getValue()->QBrush::setColor(args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QBrush", "setColor", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QBrush_setStyle_Args
{
    FromLua<QBrush*> arg_1_1;
    FromLua<Qt::BrushStyle> arg_2_1;
};

extern "C" int lqtk_QBrush_setStyle(lua_State* L)
{
    lqtk_QBrush_setStyle_Args  argValues;
    lqtk_QBrush_setStyle_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QBrush::setStyle(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QBrush", "setStyle", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QBrush_setTransform_Args
{
    FromLua<QBrush*> arg_1_1;
    FromLua<QTransform*> arg_2_1;
};

extern "C" int lqtk_QBrush_setTransform(lua_State* L)
{
    lqtk_QBrush_setTransform_Args  argValues;
    lqtk_QBrush_setTransform_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QBrush::setTransform(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QBrush", "setTransform", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QBrush_style_Args
{
    FromLua<QBrush*> arg_1_1;
    ToLua<Qt::BrushStyle> rslt_1;
};

extern "C" int lqtk_QBrush_style(lua_State* L)
{
    lqtk_QBrush_style_Args  argValues;
    lqtk_QBrush_style_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QBrush::style();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QBrush", "style", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QBrush_transform_Args
{
    FromLua<QBrush*> arg_1_1;
    ToLua<QTransform*> rslt_1;
};

extern "C" int lqtk_QBrush_transform(lua_State* L)
{
    lqtk_QBrush_transform_Args  argValues;
    lqtk_QBrush_transform_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QBrush::transform();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QBrush", "transform", nargs, "1");
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
        QBrushBinding::QType* ptr = static_cast<QBrushBinding::QType*>(objectPtr);
        if (targetClassInfo == &QBrushBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QBrush* ptr = (QBrush*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QBrush_new_Args
{
    FromLua<Qt::BrushStyle> arg_1_1;
    FromLua<QGradient*> arg_2_1;
    FromLua<QColor*> arg_3_1;
    FromLua<QBrush*> arg_4_1;
    ToLua<QBrush*> rslt_1;
};

extern "C" int lqtk_QBrush_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QBrush_new_Args  argValues;
    lqtk_QBrush_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QBrushBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QBrush> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QBrush* rslt = 
                    new QBrush();
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
                QBrush* rslt = 
                    new QBrush(args->arg_1_1.getValue());
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
                QBrush* rslt = 
                    new QBrush(*args->arg_2_1.getValue());
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
                QBrush* rslt = 
                    new QBrush(*args->arg_3_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_3_1.check(L, argOffs+1);
            args->arg_1_1.check(L, argOffs+2);
            {
                QBrush* rslt = 
                    new QBrush(*args->arg_3_1.getValue(), args->arg_1_1.getValue());
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
                QBrush* rslt = 
                    new QBrush(*args->arg_4_1.getValue());
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
            return util::argCountError(L, "QBrush", "new", nargs, "1,2,3");
        } else {
            return util::argCountError(L, "QBrush", nullptr, nargs, "0,1,2");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QBrush_new(lua_State* L)
{
    return lqtk_QBrush_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QBrushBinding::pushObject(lua_State* L, QBrush* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QBrush>(L, hasUserValue);     // -> uval?, udata
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
    { "color",        Member::NORMAL_FUNCTION,      (void*) lqtk_QBrush_color },
    { "isOpaque",     Member::NORMAL_FUNCTION,      (void*) lqtk_QBrush_isOpaque },
    { "setColor",     Member::NORMAL_FUNCTION,      (void*) lqtk_QBrush_setColor },
    { "setStyle",     Member::NORMAL_FUNCTION,      (void*) lqtk_QBrush_setStyle },
    { "setTransform", Member::NORMAL_FUNCTION,      (void*) lqtk_QBrush_setTransform },
    { "style",        Member::NORMAL_FUNCTION,      (void*) lqtk_QBrush_style },
    { "transform",    Member::NORMAL_FUNCTION,      (void*) lqtk_QBrush_transform },
    { NULL,           Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QBrushBinding::classInfo = 
{
    "QBrush",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QBrush_constructor,
    lqtk_QBrush_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    7,
    members
};

/* ============================================================================================ */

int QBrushBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
