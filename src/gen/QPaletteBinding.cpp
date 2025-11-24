// Type: QPalette
// Base: nil

/* ============================================================================================ */

#include <QColor>
#include <QObject>
#include <QPalette>
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
#include "QPaletteBinding.hpp"
#include "QtBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QPalette_color_Args
{
    FromLua<QPalette*> arg_1_1;
    FromLua<QPalette::ColorRole> arg_2_1;
    ToLua<QColor*> rslt_1;
};

extern "C" int lqtk_QPalette_color(lua_State* L)
{
    lqtk_QPalette_color_Args  argValues;
    lqtk_QPalette_color_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPalette::color(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPalette", "color", nargs, "2");
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
        QPaletteBinding::QType* ptr = static_cast<QPaletteBinding::QType*>(objectPtr);
        if (targetClassInfo == &QPaletteBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QPalette* ptr = (QPalette*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QPalette_new_Args
{
    FromLua<Qt::GlobalColor> arg_1_1;
    ToLua<QPalette*> rslt_1;
};

extern "C" int lqtk_QPalette_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QPalette_new_Args  argValues;
    lqtk_QPalette_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QPaletteBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QPalette> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QPalette* rslt = 
                    new QPalette();
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
                QPalette* rslt = 
                    new QPalette(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QPalette", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QPalette", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QPalette_new(lua_State* L)
{
    return lqtk_QPalette_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QPaletteBinding::pushObject(lua_State* L, QPalette* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QPalette>(L, hasUserValue);     // -> uval?, udata
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
    { "Accent",          Member::INTEGER,              (void*) QPalette::Accent },
    { "AlternateBase",   Member::INTEGER,              (void*) QPalette::AlternateBase },
    { "Base",            Member::INTEGER,              (void*) QPalette::Base },
    { "BrightText",      Member::INTEGER,              (void*) QPalette::BrightText },
    { "Button",          Member::INTEGER,              (void*) QPalette::Button },
    { "ButtonText",      Member::INTEGER,              (void*) QPalette::ButtonText },
    { "Dark",            Member::INTEGER,              (void*) QPalette::Dark },
    { "Highlight",       Member::INTEGER,              (void*) QPalette::Highlight },
    { "HighlightedText", Member::INTEGER,              (void*) QPalette::HighlightedText },
    { "Light",           Member::INTEGER,              (void*) QPalette::Light },
    { "Link",            Member::INTEGER,              (void*) QPalette::Link },
    { "LinkVisited",     Member::INTEGER,              (void*) QPalette::LinkVisited },
    { "Mid",             Member::INTEGER,              (void*) QPalette::Mid },
    { "Midlight",        Member::INTEGER,              (void*) QPalette::Midlight },
    { "PlaceholderText", Member::INTEGER,              (void*) QPalette::PlaceholderText },
    { "Shadow",          Member::INTEGER,              (void*) QPalette::Shadow },
    { "Text",            Member::INTEGER,              (void*) QPalette::Text },
    { "ToolTipBase",     Member::INTEGER,              (void*) QPalette::ToolTipBase },
    { "ToolTipText",     Member::INTEGER,              (void*) QPalette::ToolTipText },
    { "Window",          Member::INTEGER,              (void*) QPalette::Window },
    { "WindowText",      Member::INTEGER,              (void*) QPalette::WindowText },
    { "color",           Member::NORMAL_FUNCTION,      (void*) lqtk_QPalette_color },
    { NULL,              Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QPaletteBinding::classInfo = 
{
    "QPalette",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QPalette_constructor,
    lqtk_QPalette_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    22,
    members
};

/* ============================================================================================ */

int QPaletteBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
