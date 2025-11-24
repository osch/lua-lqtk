// Type: QSizeF
// Base: nil

/* ============================================================================================ */

#include <QObject>
#include <QSize>
#include <QSizeF>
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
#include "QSizeBinding.hpp"
#include "QSizeFBinding.hpp"
#include "QtBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QSizeF_boundedTo_Args
{
    FromLua<QSizeF*> arg_1_1;
    FromLua<QSizeF*> arg_2_1;
    ToLua<QSizeF*> rslt_1;
};

extern "C" int lqtk_QSizeF_boundedTo(lua_State* L)
{
    lqtk_QSizeF_boundedTo_Args  argValues;
    lqtk_QSizeF_boundedTo_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QSizeF::boundedTo(*args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QSizeF", "boundedTo", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSizeF_expandedTo_Args
{
    FromLua<QSizeF*> arg_1_1;
    FromLua<QSizeF*> arg_2_1;
    ToLua<QSizeF*> rslt_1;
};

extern "C" int lqtk_QSizeF_expandedTo(lua_State* L)
{
    lqtk_QSizeF_expandedTo_Args  argValues;
    lqtk_QSizeF_expandedTo_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QSizeF::expandedTo(*args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QSizeF", "expandedTo", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSizeF_height_Args
{
    FromLua<QSizeF*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QSizeF_height(lua_State* L)
{
    lqtk_QSizeF_height_Args  argValues;
    lqtk_QSizeF_height_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QSizeF::height();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QSizeF", "height", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSizeF_isEmpty_Args
{
    FromLua<QSizeF*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QSizeF_isEmpty(lua_State* L)
{
    lqtk_QSizeF_isEmpty_Args  argValues;
    lqtk_QSizeF_isEmpty_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QSizeF::isEmpty();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QSizeF", "isEmpty", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSizeF_isNull_Args
{
    FromLua<QSizeF*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QSizeF_isNull(lua_State* L)
{
    lqtk_QSizeF_isNull_Args  argValues;
    lqtk_QSizeF_isNull_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QSizeF::isNull();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QSizeF", "isNull", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSizeF_isValid_Args
{
    FromLua<QSizeF*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QSizeF_isValid(lua_State* L)
{
    lqtk_QSizeF_isValid_Args  argValues;
    lqtk_QSizeF_isValid_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QSizeF::isValid();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QSizeF", "isValid", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSizeF_scale_Args
{
    FromLua<QSizeF*> arg_1_1;
    FromLua<double> arg_2_1;
    FromLua<double> arg_2_2;
    FromLua<Qt::AspectRatioMode> arg_3_1;
    FromLua<QSizeF*> arg_4_1;
};

extern "C" int lqtk_QSizeF_scale(lua_State* L)
{
    lqtk_QSizeF_scale_Args  argValues;
    lqtk_QSizeF_scale_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            args->arg_3_1.check(L, argOffs+4);
            {
                    args->arg_1_1.getValue()->QSizeF::scale(args->arg_2_1.getValue(), args->arg_2_2.getValue(), args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_4_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QSizeF::scale(*args->arg_4_1.getValue(), args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QSizeF", "scale", nargs, "3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSizeF_scaled_Args
{
    FromLua<QSizeF*> arg_1_1;
    FromLua<double> arg_2_1;
    FromLua<double> arg_2_2;
    FromLua<Qt::AspectRatioMode> arg_3_1;
    FromLua<QSizeF*> arg_4_1;
    ToLua<QSizeF*> rslt_1;
};

extern "C" int lqtk_QSizeF_scaled(lua_State* L)
{
    lqtk_QSizeF_scaled_Args  argValues;
    lqtk_QSizeF_scaled_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            args->arg_3_1.check(L, argOffs+4);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QSizeF::scaled(args->arg_2_1.getValue(), args->arg_2_2.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_4_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QSizeF::scaled(*args->arg_4_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QSizeF", "scaled", nargs, "3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSizeF_setHeight_Args
{
    FromLua<QSizeF*> arg_1_1;
    FromLua<double> arg_2_1;
};

extern "C" int lqtk_QSizeF_setHeight(lua_State* L)
{
    lqtk_QSizeF_setHeight_Args  argValues;
    lqtk_QSizeF_setHeight_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QSizeF::setHeight(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QSizeF", "setHeight", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSizeF_setWidth_Args
{
    FromLua<QSizeF*> arg_1_1;
    FromLua<double> arg_2_1;
};

extern "C" int lqtk_QSizeF_setWidth(lua_State* L)
{
    lqtk_QSizeF_setWidth_Args  argValues;
    lqtk_QSizeF_setWidth_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QSizeF::setWidth(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QSizeF", "setWidth", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSizeF_toSize_Args
{
    FromLua<QSizeF*> arg_1_1;
    ToLua<QSize*> rslt_1;
};

extern "C" int lqtk_QSizeF_toSize(lua_State* L)
{
    lqtk_QSizeF_toSize_Args  argValues;
    lqtk_QSizeF_toSize_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QSizeF::toSize();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QSizeF", "toSize", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSizeF_transpose_Args
{
    FromLua<QSizeF*> arg_1_1;
};

extern "C" int lqtk_QSizeF_transpose(lua_State* L)
{
    lqtk_QSizeF_transpose_Args  argValues;
    lqtk_QSizeF_transpose_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QSizeF::transpose();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QSizeF", "transpose", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSizeF_transposed_Args
{
    FromLua<QSizeF*> arg_1_1;
    ToLua<QSizeF*> rslt_1;
};

extern "C" int lqtk_QSizeF_transposed(lua_State* L)
{
    lqtk_QSizeF_transposed_Args  argValues;
    lqtk_QSizeF_transposed_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QSizeF::transposed();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QSizeF", "transposed", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QSizeF_width_Args
{
    FromLua<QSizeF*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QSizeF_width(lua_State* L)
{
    lqtk_QSizeF_width_Args  argValues;
    lqtk_QSizeF_width_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QSizeF::width();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QSizeF", "width", nargs, "1");
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
        QSizeFBinding::QType* ptr = static_cast<QSizeFBinding::QType*>(objectPtr);
        if (targetClassInfo == &QSizeFBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QSizeF* ptr = (QSizeF*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QSizeF_new_Args
{
    FromLua<QSize*> arg_1_1;
    FromLua<double> arg_2_1;
    FromLua<double> arg_2_2;
    ToLua<QSizeF*> rslt_1;
};

extern "C" int lqtk_QSizeF_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QSizeF_new_Args  argValues;
    lqtk_QSizeF_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QSizeFBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QSizeF> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QSizeF* rslt = 
                    new QSizeF();
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
                QSizeF* rslt = 
                    new QSizeF(*args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_2_1.check(L, argOffs+1);
            args->arg_2_2.check(L, argOffs+2);
            {
                QSizeF* rslt = 
                    new QSizeF(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QSizeF", "new", nargs, "1,2,3");
        } else {
            return util::argCountError(L, "QSizeF", nullptr, nargs, "0,1,2");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QSizeF_new(lua_State* L)
{
    return lqtk_QSizeF_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QSizeFBinding::pushObject(lua_State* L, QSizeF* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QSizeF>(L, hasUserValue);     // -> uval?, udata
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
    { "boundedTo",  Member::NORMAL_FUNCTION,      (void*) lqtk_QSizeF_boundedTo },
    { "expandedTo", Member::NORMAL_FUNCTION,      (void*) lqtk_QSizeF_expandedTo },
    { "height",     Member::NORMAL_FUNCTION,      (void*) lqtk_QSizeF_height },
    { "isEmpty",    Member::NORMAL_FUNCTION,      (void*) lqtk_QSizeF_isEmpty },
    { "isNull",     Member::NORMAL_FUNCTION,      (void*) lqtk_QSizeF_isNull },
    { "isValid",    Member::NORMAL_FUNCTION,      (void*) lqtk_QSizeF_isValid },
    { "scale",      Member::NORMAL_FUNCTION,      (void*) lqtk_QSizeF_scale },
    { "scaled",     Member::NORMAL_FUNCTION,      (void*) lqtk_QSizeF_scaled },
    { "setHeight",  Member::NORMAL_FUNCTION,      (void*) lqtk_QSizeF_setHeight },
    { "setWidth",   Member::NORMAL_FUNCTION,      (void*) lqtk_QSizeF_setWidth },
    { "toSize",     Member::NORMAL_FUNCTION,      (void*) lqtk_QSizeF_toSize },
    { "transpose",  Member::NORMAL_FUNCTION,      (void*) lqtk_QSizeF_transpose },
    { "transposed", Member::NORMAL_FUNCTION,      (void*) lqtk_QSizeF_transposed },
    { "width",      Member::NORMAL_FUNCTION,      (void*) lqtk_QSizeF_width },
    { NULL,         Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QSizeFBinding::classInfo = 
{
    "QSizeF",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QSizeF_constructor,
    lqtk_QSizeF_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    14,
    members
};

/* ============================================================================================ */

int QSizeFBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
