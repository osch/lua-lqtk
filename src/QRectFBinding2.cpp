/* ============================================================================================ */

#include <QObject>
#include <QPointer>
#include <QMetaMethod>
#include <QRectF>

/* ============================================================================================ */

#include "init.h"
#include "util.hpp"

#include "ClassInfo.hpp"
#include "QRectFBinding.hpp"
#include "FromLua.hpp"

/* ============================================================================================ */

using namespace lqtk;

/* ============================================================================================ */

extern "C" int lqtk_QRectF_getCoords(lua_State* L)
{
    FromLua<QRectF*> arg1;
    arg1.check(L, 1);
    qreal x1, y1, x2, y2;
    arg1.getValue()->getCoords(&x1, &y1, &x2, &y2);
    lua_pushnumber(L, x1);
    lua_pushnumber(L, y1);
    lua_pushnumber(L, x2);
    lua_pushnumber(L, y2);
    return 4;
}

extern "C" int lqtk_QRectF_getRect(lua_State* L)
{
    FromLua<QRectF*> arg1;
    arg1.check(L, 1);
    qreal x, y, w, h;
    arg1.getValue()->getRect(&x, &y, &w, &h);
    lua_pushnumber(L, x);
    lua_pushnumber(L, y);
    lua_pushnumber(L, w);
    lua_pushnumber(L, h);
    return 4;
}
