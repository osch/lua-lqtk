/* ============================================================================================ */

#include <QObject>
#include <QPointer>
#include <QMetaMethod>
#include <QTransform>

/* ============================================================================================ */

#include "init.h"
#include "util.hpp"

#include "ClassInfo.hpp"
#include "QTransformBinding.hpp"
#include "QPolygonFBinding.hpp"
#include "FromLua.hpp"
#include "ToLua.hpp"

/* ============================================================================================ */

using namespace lqtk;

/* ============================================================================================ */

extern "C" int lqtk_QTransform_quadToQuad(lua_State* L)
{
    FromLua<QTransform*> thiz;
    FromLua<QPolygonF*> arg1;
    FromLua<QPolygonF*> arg2;
    thiz.check(L, 1);
    arg1.check(L, 2);
    arg2.check(L, 3);
    {
        QTransform rslt;
        if (thiz.getValue()->quadToQuad(*arg1.getValue(),
                                        *arg2.getValue(),
                                        rslt))
        {
            ToLua<QTransform*> tolua = rslt;
            tolua.push(L, IS_OWNER);
            return 1;
        }
    }
    lua_pushnil(L);
    return 1;
}

/* ============================================================================================ */

extern "C" int lqtk_QTransform_quadToSquare(lua_State* L)
{
    FromLua<QTransform*> thiz;
    FromLua<QPolygonF*> arg1;
    thiz.check(L, 1);
    arg1.check(L, 2);
    {
        QTransform rslt;
        if (thiz.getValue()->quadToSquare(*arg1.getValue(),
                                          rslt))
        {
            ToLua<QTransform*> tolua = rslt;
            tolua.push(L, IS_OWNER);
            return 1;
        }
    }
    lua_pushnil(L);
    return 1;
}

/* ============================================================================================ */

extern "C" int lqtk_QTransform_squareToQuad(lua_State* L)
{
    FromLua<QTransform*> thiz;
    FromLua<QPolygonF*> arg1;
    thiz.check(L, 1);
    arg1.check(L, 2);
    {
        QTransform rslt;
        if (thiz.getValue()->squareToQuad(*arg1.getValue(),
                                          rslt))
        {
            ToLua<QTransform*> tolua = rslt;
            tolua.push(L, IS_OWNER);
            return 1;
        }
    }
    lua_pushnil(L);
    return 1;
}

/* ============================================================================================ */

extern "C" int lqtk_QTransform_inverted(lua_State* L)
{
    FromLua<QTransform*> arg1;
    arg1.check(L, 1);
    {
        bool isInvertible = false;
        QTransform rslt = arg1.getValue()->QTransform::inverted(&isInvertible);
        if (isInvertible) {
            ToLua<QTransform*> tolua = rslt;
            tolua.push(L, IS_OWNER);
            return 1;
        }
    }
    lua_pushnil(L);
    return 1;
}

/* ============================================================================================ */

extern "C" int lqtk_QTransform_mapXY(lua_State* L)
{
    FromLua<QTransform*> thiz;
    FromLua<double> x;
    FromLua<double> y;
    thiz.check(L, 1);
    x.check(L, 2);
    y.check(L, 3);
    
    qreal tx, ty;
    thiz.getValue()->map(x, y, &tx, &ty);
    lua_pushnumber(L, tx);
    lua_pushnumber(L, ty);
    return 2;
}

/* ============================================================================================ */
