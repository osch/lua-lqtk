// Type: QLineF
// Base: nil

/* ============================================================================================ */

#include <QLineF>
#include <QObject>
#include <QPointF>

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
#include "QLineFBinding.hpp"
#include "QObjectBinding.hpp"
#include "QPointFBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QLineF_fromPolar_Args
{
    FromLua<double> arg_1_1;
    FromLua<double> arg_1_2;
    ToLua<QLineF*> rslt_1;
};

extern "C" int lqtk_QLineF_fromPolar(lua_State* L)
{
    lqtk_QLineF_fromPolar_Args  argValues;
    lqtk_QLineF_fromPolar_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QLineF::fromPolar(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "fromPolar", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_angle_Args
{
    FromLua<QLineF*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QLineF_angle(lua_State* L)
{
    lqtk_QLineF_angle_Args  argValues;
    lqtk_QLineF_angle_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QLineF::angle();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "angle", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_angleTo_Args
{
    FromLua<QLineF*> arg_1_1;
    FromLua<QLineF*> arg_2_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QLineF_angleTo(lua_State* L)
{
    lqtk_QLineF_angleTo_Args  argValues;
    lqtk_QLineF_angleTo_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QLineF::angleTo(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "angleTo", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_center_Args
{
    FromLua<QLineF*> arg_1_1;
    ToLua<QPointF*> rslt_1;
};

extern "C" int lqtk_QLineF_center(lua_State* L)
{
    lqtk_QLineF_center_Args  argValues;
    lqtk_QLineF_center_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QLineF::center();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "center", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_dx_Args
{
    FromLua<QLineF*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QLineF_dx(lua_State* L)
{
    lqtk_QLineF_dx_Args  argValues;
    lqtk_QLineF_dx_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QLineF::dx();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "dx", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_dy_Args
{
    FromLua<QLineF*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QLineF_dy(lua_State* L)
{
    lqtk_QLineF_dy_Args  argValues;
    lqtk_QLineF_dy_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QLineF::dy();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "dy", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_intersects_Args
{
    FromLua<QLineF*> arg_1_1;
    FromLua<QLineF*> arg_2_1;
    FromLua<QPointF*> arg_3_1;
    ToLua<QLineF::IntersectionType> rslt_1;
};

extern "C" int lqtk_QLineF_intersects(lua_State* L)
{
    lqtk_QLineF_intersects_Args  argValues;
    lqtk_QLineF_intersects_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QLineF::intersects(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QLineF::intersects(*args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "intersects", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_isNull_Args
{
    FromLua<QLineF*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QLineF_isNull(lua_State* L)
{
    lqtk_QLineF_isNull_Args  argValues;
    lqtk_QLineF_isNull_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QLineF::isNull();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "isNull", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_length_Args
{
    FromLua<QLineF*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QLineF_length(lua_State* L)
{
    lqtk_QLineF_length_Args  argValues;
    lqtk_QLineF_length_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QLineF::length();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "length", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_normalVector_Args
{
    FromLua<QLineF*> arg_1_1;
    ToLua<QLineF*> rslt_1;
};

extern "C" int lqtk_QLineF_normalVector(lua_State* L)
{
    lqtk_QLineF_normalVector_Args  argValues;
    lqtk_QLineF_normalVector_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QLineF::normalVector();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "normalVector", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_p1_Args
{
    FromLua<QLineF*> arg_1_1;
    ToLua<QPointF*> rslt_1;
};

extern "C" int lqtk_QLineF_p1(lua_State* L)
{
    lqtk_QLineF_p1_Args  argValues;
    lqtk_QLineF_p1_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QLineF::p1();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "p1", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_p2_Args
{
    FromLua<QLineF*> arg_1_1;
    ToLua<QPointF*> rslt_1;
};

extern "C" int lqtk_QLineF_p2(lua_State* L)
{
    lqtk_QLineF_p2_Args  argValues;
    lqtk_QLineF_p2_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QLineF::p2();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "p2", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_pointAt_Args
{
    FromLua<QLineF*> arg_1_1;
    FromLua<double> arg_2_1;
    ToLua<QPointF*> rslt_1;
};

extern "C" int lqtk_QLineF_pointAt(lua_State* L)
{
    lqtk_QLineF_pointAt_Args  argValues;
    lqtk_QLineF_pointAt_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QLineF::pointAt(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "pointAt", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_setAngle_Args
{
    FromLua<QLineF*> arg_1_1;
    FromLua<double> arg_2_1;
};

extern "C" int lqtk_QLineF_setAngle(lua_State* L)
{
    lqtk_QLineF_setAngle_Args  argValues;
    lqtk_QLineF_setAngle_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QLineF::setAngle(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "setAngle", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_setLength_Args
{
    FromLua<QLineF*> arg_1_1;
    FromLua<double> arg_2_1;
};

extern "C" int lqtk_QLineF_setLength(lua_State* L)
{
    lqtk_QLineF_setLength_Args  argValues;
    lqtk_QLineF_setLength_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QLineF::setLength(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "setLength", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_setLine_Args
{
    FromLua<QLineF*> arg_1_1;
    FromLua<double> arg_2_1;
    FromLua<double> arg_2_2;
    FromLua<double> arg_2_3;
    FromLua<double> arg_2_4;
};

extern "C" int lqtk_QLineF_setLine(lua_State* L)
{
    lqtk_QLineF_setLine_Args  argValues;
    lqtk_QLineF_setLine_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 5) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            args->arg_2_3.check(L, argOffs+4);
            args->arg_2_4.check(L, argOffs+5);
            {
                    args->arg_1_1.getValue()->QLineF::setLine(args->arg_2_1.getValue(), args->arg_2_2.getValue(), args->arg_2_3.getValue(), args->arg_2_4.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "setLine", nargs, "5");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_setP1_Args
{
    FromLua<QLineF*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
};

extern "C" int lqtk_QLineF_setP1(lua_State* L)
{
    lqtk_QLineF_setP1_Args  argValues;
    lqtk_QLineF_setP1_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QLineF::setP1(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "setP1", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_setP2_Args
{
    FromLua<QLineF*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
};

extern "C" int lqtk_QLineF_setP2(lua_State* L)
{
    lqtk_QLineF_setP2_Args  argValues;
    lqtk_QLineF_setP2_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QLineF::setP2(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "setP2", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_setPoints_Args
{
    FromLua<QLineF*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
    FromLua<QPointF*> arg_2_2;
};

extern "C" int lqtk_QLineF_setPoints(lua_State* L)
{
    lqtk_QLineF_setPoints_Args  argValues;
    lqtk_QLineF_setPoints_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QLineF::setPoints(*args->arg_2_1.getValue(), *args->arg_2_2.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "setPoints", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_translate_Args
{
    FromLua<QLineF*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
    FromLua<double> arg_3_1;
    FromLua<double> arg_3_2;
};

extern "C" int lqtk_QLineF_translate(lua_State* L)
{
    lqtk_QLineF_translate_Args  argValues;
    lqtk_QLineF_translate_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QLineF::translate(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            args->arg_3_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QLineF::translate(args->arg_3_1.getValue(), args->arg_3_2.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "translate", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_translated_Args
{
    FromLua<QLineF*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
    FromLua<double> arg_3_1;
    FromLua<double> arg_3_2;
    ToLua<QLineF*> rslt_1;
};

extern "C" int lqtk_QLineF_translated(lua_State* L)
{
    lqtk_QLineF_translated_Args  argValues;
    lqtk_QLineF_translated_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QLineF::translated(*args->arg_2_1.getValue());
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
                    args->arg_1_1.getValue()->QLineF::translated(args->arg_3_1.getValue(), args->arg_3_2.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "translated", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_unitVector_Args
{
    FromLua<QLineF*> arg_1_1;
    ToLua<QLineF*> rslt_1;
};

extern "C" int lqtk_QLineF_unitVector(lua_State* L)
{
    lqtk_QLineF_unitVector_Args  argValues;
    lqtk_QLineF_unitVector_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QLineF::unitVector();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "unitVector", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_x1_Args
{
    FromLua<QLineF*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QLineF_x1(lua_State* L)
{
    lqtk_QLineF_x1_Args  argValues;
    lqtk_QLineF_x1_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QLineF::x1();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "x1", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_x2_Args
{
    FromLua<QLineF*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QLineF_x2(lua_State* L)
{
    lqtk_QLineF_x2_Args  argValues;
    lqtk_QLineF_x2_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QLineF::x2();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "x2", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_y1_Args
{
    FromLua<QLineF*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QLineF_y1(lua_State* L)
{
    lqtk_QLineF_y1_Args  argValues;
    lqtk_QLineF_y1_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QLineF::y1();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "y1", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_y2_Args
{
    FromLua<QLineF*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QLineF_y2(lua_State* L)
{
    lqtk_QLineF_y2_Args  argValues;
    lqtk_QLineF_y2_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QLineF::y2();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QLineF", "y2", nargs, "1");
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
        QLineFBinding::QType* ptr = static_cast<QLineFBinding::QType*>(objectPtr);
        if (targetClassInfo == &QLineFBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QLineF* ptr = (QLineF*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QLineF_new_Args
{
    FromLua<QPointF*> arg_1_1;
    FromLua<QPointF*> arg_1_2;
    FromLua<double> arg_2_1;
    FromLua<double> arg_2_2;
    FromLua<double> arg_2_3;
    FromLua<double> arg_2_4;
    ToLua<QLineF*> rslt_1;
};

extern "C" int lqtk_QLineF_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QLineF_new_Args  argValues;
    lqtk_QLineF_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QLineFBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QLineF> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QLineF* rslt = 
                    new QLineF();
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
                QLineF* rslt = 
                    new QLineF(*args->arg_1_1.getValue(), *args->arg_1_2.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 4) { do {
            args->arg_2_1.check(L, argOffs+1);
            args->arg_2_2.check(L, argOffs+2);
            args->arg_2_3.check(L, argOffs+3);
            args->arg_2_4.check(L, argOffs+4);
            {
                QLineF* rslt = 
                    new QLineF(args->arg_2_1.getValue(), args->arg_2_2.getValue(), args->arg_2_3.getValue(), args->arg_2_4.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QLineF", "new", nargs, "1,3,5");
        } else {
            return util::argCountError(L, "QLineF", nullptr, nargs, "0,2,4");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QLineF_new(lua_State* L)
{
    return lqtk_QLineF_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QLineFBinding::pushObject(lua_State* L, QLineF* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QLineF>(L, hasUserValue);     // -> uval?, udata
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
    { "BoundedIntersection",   Member::INTEGER,              (void*) QLineF::BoundedIntersection },
    { "NoIntersection",        Member::INTEGER,              (void*) QLineF::NoIntersection },
    { "UnboundedIntersection", Member::INTEGER,              (void*) QLineF::UnboundedIntersection },
    { "angle",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_angle },
    { "angleTo",               Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_angleTo },
    { "center",                Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_center },
    { "dx",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_dx },
    { "dy",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_dy },
    { "fromPolar",             Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_fromPolar },
    { "intersects",            Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_intersects },
    { "isNull",                Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_isNull },
    { "length",                Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_length },
    { "normalVector",          Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_normalVector },
    { "p1",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_p1 },
    { "p2",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_p2 },
    { "pointAt",               Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_pointAt },
    { "setAngle",              Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_setAngle },
    { "setLength",             Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_setLength },
    { "setLine",               Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_setLine },
    { "setP1",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_setP1 },
    { "setP2",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_setP2 },
    { "setPoints",             Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_setPoints },
    { "translate",             Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_translate },
    { "translated",            Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_translated },
    { "unitVector",            Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_unitVector },
    { "x1",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_x1 },
    { "x2",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_x2 },
    { "y1",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_y1 },
    { "y2",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QLineF_y2 },
    { NULL,                    Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QLineFBinding::classInfo = 
{
    "QLineF",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QLineF_constructor,
    lqtk_QLineF_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    29,
    members
};

/* ============================================================================================ */

int QLineFBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
