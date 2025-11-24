// Type: QTransform
// Base: nil

/* ============================================================================================ */

#include <QLineF>
#include <QObject>
#include <QPainterPath>
#include <QPoint>
#include <QPointF>
#include <QPolygonF>
#include <QRect>
#include <QRectF>
#include <QRegion>
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
#include "QLineFBinding.hpp"
#include "QObjectBinding.hpp"
#include "QPainterPathBinding.hpp"
#include "QPointBinding.hpp"
#include "QPointFBinding.hpp"
#include "QPolygonFBinding.hpp"
#include "QRectBinding.hpp"
#include "QRectFBinding.hpp"
#include "QRegionBinding.hpp"
#include "QTransformBinding.hpp"
#include "QtBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QTransform_fromScale_Args
{
    FromLua<double> arg_1_1;
    FromLua<double> arg_1_2;
    ToLua<QTransform*> rslt_1;
};

extern "C" int lqtk_QTransform_fromScale(lua_State* L)
{
    lqtk_QTransform_fromScale_Args  argValues;
    lqtk_QTransform_fromScale_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QTransform::fromScale(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "fromScale", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_fromTranslate_Args
{
    FromLua<double> arg_1_1;
    FromLua<double> arg_1_2;
    ToLua<QTransform*> rslt_1;
};

extern "C" int lqtk_QTransform_fromTranslate(lua_State* L)
{
    lqtk_QTransform_fromTranslate_Args  argValues;
    lqtk_QTransform_fromTranslate_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QTransform::fromTranslate(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "fromTranslate", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QTransform_quadToQuad(lua_State* L);

/* ============================================================================================ */

extern "C" int lqtk_QTransform_quadToSquare(lua_State* L);

/* ============================================================================================ */

extern "C" int lqtk_QTransform_squareToQuad(lua_State* L);

/* ============================================================================================ */


struct lqtk_QTransform_adjoint_Args
{
    FromLua<QTransform*> arg_1_1;
    ToLua<QTransform*> rslt_1;
};

extern "C" int lqtk_QTransform_adjoint(lua_State* L)
{
    lqtk_QTransform_adjoint_Args  argValues;
    lqtk_QTransform_adjoint_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTransform::adjoint();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "adjoint", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_determinant_Args
{
    FromLua<QTransform*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QTransform_determinant(lua_State* L)
{
    lqtk_QTransform_determinant_Args  argValues;
    lqtk_QTransform_determinant_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTransform::determinant();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "determinant", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_dx_Args
{
    FromLua<QTransform*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QTransform_dx(lua_State* L)
{
    lqtk_QTransform_dx_Args  argValues;
    lqtk_QTransform_dx_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTransform::dx();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "dx", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_dy_Args
{
    FromLua<QTransform*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QTransform_dy(lua_State* L)
{
    lqtk_QTransform_dy_Args  argValues;
    lqtk_QTransform_dy_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTransform::dy();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "dy", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QTransform_inverted(lua_State* L);

/* ============================================================================================ */


struct lqtk_QTransform_isAffine_Args
{
    FromLua<QTransform*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QTransform_isAffine(lua_State* L)
{
    lqtk_QTransform_isAffine_Args  argValues;
    lqtk_QTransform_isAffine_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTransform::isAffine();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "isAffine", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_isIdentity_Args
{
    FromLua<QTransform*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QTransform_isIdentity(lua_State* L)
{
    lqtk_QTransform_isIdentity_Args  argValues;
    lqtk_QTransform_isIdentity_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTransform::isIdentity();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "isIdentity", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_isInvertible_Args
{
    FromLua<QTransform*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QTransform_isInvertible(lua_State* L)
{
    lqtk_QTransform_isInvertible_Args  argValues;
    lqtk_QTransform_isInvertible_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTransform::isInvertible();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "isInvertible", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_isRotating_Args
{
    FromLua<QTransform*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QTransform_isRotating(lua_State* L)
{
    lqtk_QTransform_isRotating_Args  argValues;
    lqtk_QTransform_isRotating_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTransform::isRotating();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "isRotating", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_isScaling_Args
{
    FromLua<QTransform*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QTransform_isScaling(lua_State* L)
{
    lqtk_QTransform_isScaling_Args  argValues;
    lqtk_QTransform_isScaling_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTransform::isScaling();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "isScaling", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_isTranslating_Args
{
    FromLua<QTransform*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QTransform_isTranslating(lua_State* L)
{
    lqtk_QTransform_isTranslating_Args  argValues;
    lqtk_QTransform_isTranslating_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTransform::isTranslating();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "isTranslating", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_m11_Args
{
    FromLua<QTransform*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QTransform_m11(lua_State* L)
{
    lqtk_QTransform_m11_Args  argValues;
    lqtk_QTransform_m11_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTransform::m11();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "m11", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_m12_Args
{
    FromLua<QTransform*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QTransform_m12(lua_State* L)
{
    lqtk_QTransform_m12_Args  argValues;
    lqtk_QTransform_m12_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTransform::m12();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "m12", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_m13_Args
{
    FromLua<QTransform*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QTransform_m13(lua_State* L)
{
    lqtk_QTransform_m13_Args  argValues;
    lqtk_QTransform_m13_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTransform::m13();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "m13", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_m21_Args
{
    FromLua<QTransform*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QTransform_m21(lua_State* L)
{
    lqtk_QTransform_m21_Args  argValues;
    lqtk_QTransform_m21_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTransform::m21();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "m21", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_m22_Args
{
    FromLua<QTransform*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QTransform_m22(lua_State* L)
{
    lqtk_QTransform_m22_Args  argValues;
    lqtk_QTransform_m22_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTransform::m22();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "m22", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_m23_Args
{
    FromLua<QTransform*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QTransform_m23(lua_State* L)
{
    lqtk_QTransform_m23_Args  argValues;
    lqtk_QTransform_m23_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTransform::m23();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "m23", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_m31_Args
{
    FromLua<QTransform*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QTransform_m31(lua_State* L)
{
    lqtk_QTransform_m31_Args  argValues;
    lqtk_QTransform_m31_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTransform::m31();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "m31", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_m32_Args
{
    FromLua<QTransform*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QTransform_m32(lua_State* L)
{
    lqtk_QTransform_m32_Args  argValues;
    lqtk_QTransform_m32_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTransform::m32();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "m32", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_m33_Args
{
    FromLua<QTransform*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QTransform_m33(lua_State* L)
{
    lqtk_QTransform_m33_Args  argValues;
    lqtk_QTransform_m33_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTransform::m33();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "m33", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_map_Args
{
    FromLua<QTransform*> arg_1_1;
    FromLua<QLineF*> arg_2_1;
    FromLua<QPainterPath*> arg_3_1;
    FromLua<QPoint*> arg_4_1;
    FromLua<QPointF*> arg_5_1;
    FromLua<QPolygonF*> arg_6_1;
    FromLua<QRegion*> arg_7_1;
    ToLua<QLineF*> rslt_1;
    ToLua<QPainterPath*> rslt_2;
    ToLua<QPoint*> rslt_3;
    ToLua<QPointF*> rslt_4;
    ToLua<QPolygonF*> rslt_5;
    ToLua<QRegion*> rslt_6;
};

extern "C" int lqtk_QTransform_map(lua_State* L)
{
    lqtk_QTransform_map_Args  argValues;
    lqtk_QTransform_map_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTransform::map(*args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_2 = 
                    args->arg_1_1.getValue()->QTransform::map(*args->arg_3_1.getValue());
                args->rslt_2.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_4_1.test(L, argOffs+2)) break;
            {
                args->rslt_3 = 
                    args->arg_1_1.getValue()->QTransform::map(*args->arg_4_1.getValue());
                args->rslt_3.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_5_1.test(L, argOffs+2)) break;
            {
                args->rslt_4 = 
                    args->arg_1_1.getValue()->QTransform::map(*args->arg_5_1.getValue());
                args->rslt_4.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_6_1.test(L, argOffs+2)) break;
            {
                args->rslt_5 = 
                    args->arg_1_1.getValue()->QTransform::map(*args->arg_6_1.getValue());
                args->rslt_5.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_7_1.test(L, argOffs+2)) break;
            {
                args->rslt_6 = 
                    args->arg_1_1.getValue()->QTransform::map(*args->arg_7_1.getValue());
                args->rslt_6.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QTransform", "map", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_mapRect_Args
{
    FromLua<QTransform*> arg_1_1;
    FromLua<QRectF*> arg_2_1;
    FromLua<QRect*> arg_3_1;
    ToLua<QRectF*> rslt_1;
    ToLua<QRect*> rslt_2;
};

extern "C" int lqtk_QTransform_mapRect(lua_State* L)
{
    lqtk_QTransform_mapRect_Args  argValues;
    lqtk_QTransform_mapRect_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTransform::mapRect(*args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_2 = 
                    args->arg_1_1.getValue()->QTransform::mapRect(*args->arg_3_1.getValue());
                args->rslt_2.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QTransform", "mapRect", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QTransform_mapXY(lua_State* L);

/* ============================================================================================ */


struct lqtk_QTransform_reset_Args
{
    FromLua<QTransform*> arg_1_1;
};

extern "C" int lqtk_QTransform_reset(lua_State* L)
{
    lqtk_QTransform_reset_Args  argValues;
    lqtk_QTransform_reset_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QTransform::reset();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "reset", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_rotate_Args
{
    FromLua<QTransform*> arg_1_1;
    FromLua<double> arg_2_1;
    FromLua<double> arg_2_2;
    FromLua<Qt::Axis> arg_3_1;
};

extern "C" int lqtk_QTransform_rotate(lua_State* L)
{
    lqtk_QTransform_rotate_Args  argValues;
    lqtk_QTransform_rotate_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_2_2.check(L, argOffs+4);
            {
                    args->arg_1_1.getValue()->QTransform::rotate(args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_2_2.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QTransform::rotate(args->arg_2_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QTransform::rotate(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "rotate", nargs, "2,3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_rotateRadians_Args
{
    FromLua<QTransform*> arg_1_1;
    FromLua<double> arg_2_1;
    FromLua<double> arg_2_2;
    FromLua<Qt::Axis> arg_3_1;
};

extern "C" int lqtk_QTransform_rotateRadians(lua_State* L)
{
    lqtk_QTransform_rotateRadians_Args  argValues;
    lqtk_QTransform_rotateRadians_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_2_2.check(L, argOffs+4);
            {
                    args->arg_1_1.getValue()->QTransform::rotateRadians(args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_2_2.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QTransform::rotateRadians(args->arg_2_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QTransform::rotateRadians(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "rotateRadians", nargs, "2,3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_scale_Args
{
    FromLua<QTransform*> arg_1_1;
    FromLua<double> arg_2_1;
    FromLua<double> arg_2_2;
};

extern "C" int lqtk_QTransform_scale(lua_State* L)
{
    lqtk_QTransform_scale_Args  argValues;
    lqtk_QTransform_scale_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QTransform::scale(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "scale", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_setMatrix_Args
{
    FromLua<QTransform*> arg_1_1;
    FromLua<double> arg_2_1;
    FromLua<double> arg_2_2;
    FromLua<double> arg_2_3;
    FromLua<double> arg_2_4;
    FromLua<double> arg_2_5;
    FromLua<double> arg_2_6;
    FromLua<double> arg_2_7;
    FromLua<double> arg_2_8;
    FromLua<double> arg_2_9;
};

extern "C" int lqtk_QTransform_setMatrix(lua_State* L)
{
    lqtk_QTransform_setMatrix_Args  argValues;
    lqtk_QTransform_setMatrix_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 10) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            args->arg_2_3.check(L, argOffs+4);
            args->arg_2_4.check(L, argOffs+5);
            args->arg_2_5.check(L, argOffs+6);
            args->arg_2_6.check(L, argOffs+7);
            args->arg_2_7.check(L, argOffs+8);
            args->arg_2_8.check(L, argOffs+9);
            args->arg_2_9.check(L, argOffs+10);
            {
                    args->arg_1_1.getValue()->QTransform::setMatrix(args->arg_2_1.getValue(), args->arg_2_2.getValue(), args->arg_2_3.getValue(), args->arg_2_4.getValue(), args->arg_2_5.getValue(), args->arg_2_6.getValue(), args->arg_2_7.getValue(), args->arg_2_8.getValue(), args->arg_2_9.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "setMatrix", nargs, "10");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_shear_Args
{
    FromLua<QTransform*> arg_1_1;
    FromLua<double> arg_2_1;
    FromLua<double> arg_2_2;
};

extern "C" int lqtk_QTransform_shear(lua_State* L)
{
    lqtk_QTransform_shear_Args  argValues;
    lqtk_QTransform_shear_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QTransform::shear(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "shear", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_translate_Args
{
    FromLua<QTransform*> arg_1_1;
    FromLua<double> arg_2_1;
    FromLua<double> arg_2_2;
};

extern "C" int lqtk_QTransform_translate(lua_State* L)
{
    lqtk_QTransform_translate_Args  argValues;
    lqtk_QTransform_translate_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QTransform::translate(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "translate", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_transposed_Args
{
    FromLua<QTransform*> arg_1_1;
    ToLua<QTransform*> rslt_1;
};

extern "C" int lqtk_QTransform_transposed(lua_State* L)
{
    lqtk_QTransform_transposed_Args  argValues;
    lqtk_QTransform_transposed_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTransform::transposed();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "transposed", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_type_Args
{
    FromLua<QTransform*> arg_1_1;
    ToLua<QTransform::TransformationType> rslt_1;
};

extern "C" int lqtk_QTransform_type(lua_State* L)
{
    lqtk_QTransform_type_Args  argValues;
    lqtk_QTransform_type_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QTransform::type();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTransform", "type", nargs, "1");
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
        QTransformBinding::QType* ptr = static_cast<QTransformBinding::QType*>(objectPtr);
        if (targetClassInfo == &QTransformBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QTransform* ptr = (QTransform*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QTransform_new_Args
{
    FromLua<double> arg_1_1;
    FromLua<double> arg_1_2;
    FromLua<double> arg_1_3;
    FromLua<double> arg_1_4;
    FromLua<double> arg_1_5;
    FromLua<double> arg_1_6;
    FromLua<double> arg_1_7;
    FromLua<double> arg_1_8;
    FromLua<double> arg_1_9;
    ToLua<QTransform*> rslt_1;
};

extern "C" int lqtk_QTransform_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QTransform_new_Args  argValues;
    lqtk_QTransform_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QTransformBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QTransform> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QTransform* rslt = 
                    new QTransform();
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 6) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            args->arg_1_3.check(L, argOffs+3);
            args->arg_1_4.check(L, argOffs+4);
            args->arg_1_5.check(L, argOffs+5);
            args->arg_1_6.check(L, argOffs+6);
            {
                QTransform* rslt = 
                    new QTransform(args->arg_1_1.getValue(), args->arg_1_2.getValue(), args->arg_1_3.getValue(), args->arg_1_4.getValue(), args->arg_1_5.getValue(), args->arg_1_6.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 9) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            args->arg_1_3.check(L, argOffs+3);
            args->arg_1_4.check(L, argOffs+4);
            args->arg_1_5.check(L, argOffs+5);
            args->arg_1_6.check(L, argOffs+6);
            args->arg_1_7.check(L, argOffs+7);
            args->arg_1_8.check(L, argOffs+8);
            args->arg_1_9.check(L, argOffs+9);
            {
                QTransform* rslt = 
                    new QTransform(args->arg_1_1.getValue(), args->arg_1_2.getValue(), args->arg_1_3.getValue(), args->arg_1_4.getValue(), args->arg_1_5.getValue(), args->arg_1_6.getValue(), args->arg_1_7.getValue(), args->arg_1_8.getValue(), args->arg_1_9.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QTransform", "new", nargs, "1,7,10");
        } else {
            return util::argCountError(L, "QTransform", nullptr, nargs, "0,6,9");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QTransform_new(lua_State* L)
{
    return lqtk_QTransform_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QTransformBinding::pushObject(lua_State* L, QTransform* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QTransform>(L, hasUserValue);     // -> uval?, udata
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
    { "TxNone",        Member::INTEGER,              (void*) QTransform::TxNone },
    { "TxProject",     Member::INTEGER,              (void*) QTransform::TxProject },
    { "TxRotate",      Member::INTEGER,              (void*) QTransform::TxRotate },
    { "TxScale",       Member::INTEGER,              (void*) QTransform::TxScale },
    { "TxShear",       Member::INTEGER,              (void*) QTransform::TxShear },
    { "TxTranslate",   Member::INTEGER,              (void*) QTransform::TxTranslate },
    { "adjoint",       Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_adjoint },
    { "determinant",   Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_determinant },
    { "dx",            Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_dx },
    { "dy",            Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_dy },
    { "fromScale",     Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_fromScale },
    { "fromTranslate", Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_fromTranslate },
    { "inverted",      Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_inverted },
    { "isAffine",      Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_isAffine },
    { "isIdentity",    Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_isIdentity },
    { "isInvertible",  Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_isInvertible },
    { "isRotating",    Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_isRotating },
    { "isScaling",     Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_isScaling },
    { "isTranslating", Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_isTranslating },
    { "m11",           Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_m11 },
    { "m12",           Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_m12 },
    { "m13",           Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_m13 },
    { "m21",           Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_m21 },
    { "m22",           Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_m22 },
    { "m23",           Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_m23 },
    { "m31",           Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_m31 },
    { "m32",           Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_m32 },
    { "m33",           Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_m33 },
    { "map",           Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_map },
    { "mapRect",       Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_mapRect },
    { "mapXY",         Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_mapXY },
    { "quadToQuad",    Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_quadToQuad },
    { "quadToSquare",  Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_quadToSquare },
    { "reset",         Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_reset },
    { "rotate",        Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_rotate },
    { "rotateRadians", Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_rotateRadians },
    { "scale",         Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_scale },
    { "setMatrix",     Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_setMatrix },
    { "shear",         Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_shear },
    { "squareToQuad",  Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_squareToQuad },
    { "translate",     Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_translate },
    { "transposed",    Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_transposed },
    { "type",          Member::NORMAL_FUNCTION,      (void*) lqtk_QTransform_type },
    { NULL,            Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QTransformBinding::classInfo = 
{
    "QTransform",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QTransform_constructor,
    lqtk_QTransform_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    43,
    members
};

/* ============================================================================================ */

int QTransformBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
