// Type: QPainter
// Base: nil

/* ============================================================================================ */

#include <QBrush>
#include <QColor>
#include <QGradient>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPixmap>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QTransform>
#include <QWidget>
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
#include "QPainterBinding.hpp"
#include "QPainterPathBinding.hpp"
#include "QPixmapBinding.hpp"
#include "QPointBinding.hpp"
#include "QPointFBinding.hpp"
#include "QRectBinding.hpp"
#include "QRectFBinding.hpp"
#include "QRegionBinding.hpp"
#include "QTransformBinding.hpp"
#include "QWidgetBinding.hpp"
#include "QtBinding.hpp"
#include "QPainterWrapperBase.hpp"
#include "QPainterWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QPainterWrapper::QPainterWrapper()
        : QPainterWrapperBase()
    {}
    QPainterWrapper::QPainterWrapper(
                   QWidget* arg1) 
        : QPainterWrapperBase(
                   arg1)
    {}
    QPainterWrapper::QPainterWrapper(
                   QPixmapWrapperBase* arg1) 
        : QPainterWrapperBase(
                   arg1)
    {}

/* -------------------------------------------------------------------------------------------- */

    QPainterWrapper::~QPainterWrapper() {
        trace::printf("Deleting lqtk::QPainterWrapper: %p\n", this);
    }

} // namespace lqtk

/* ============================================================================================ */


struct lqtk_QPainter_backgroundMode_Args
{
    FromLua<QPainter*> arg_1_1;
    ToLua<Qt::BGMode> rslt_1;
};

extern "C" int lqtk_QPainter_backgroundMode(lua_State* L)
{
    lqtk_QPainter_backgroundMode_Args  argValues;
    lqtk_QPainter_backgroundMode_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QPainter::backgroundMode();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainter", "backgroundMode", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainter_begin_Args
{
    FromLua<QPainter*> arg_1_1;
    FromLua<QWidget*> arg_2_1;
    FromLua<QPixmap*> arg_3_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QPainter_begin(lua_State* L)
{
    lqtk_QPainter_begin_Args  argValues;
    lqtk_QPainter_begin_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    QPainterBinding::delegate_begin(args->arg_1_1.getValue(), args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    QPainterBinding::delegate_begin(args->arg_1_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QPainter", "begin", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainter_clipPath_Args
{
    FromLua<QPainter*> arg_1_1;
    ToLua<QPainterPath*> rslt_1;
};

extern "C" int lqtk_QPainter_clipPath(lua_State* L)
{
    lqtk_QPainter_clipPath_Args  argValues;
    lqtk_QPainter_clipPath_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainter::clipPath();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainter", "clipPath", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainter_clipRegion_Args
{
    FromLua<QPainter*> arg_1_1;
    ToLua<QRegion*> rslt_1;
};

extern "C" int lqtk_QPainter_clipRegion(lua_State* L)
{
    lqtk_QPainter_clipRegion_Args  argValues;
    lqtk_QPainter_clipRegion_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainter::clipRegion();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainter", "clipRegion", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainter_combinedTransform_Args
{
    FromLua<QPainter*> arg_1_1;
    ToLua<QTransform*> rslt_1;
};

extern "C" int lqtk_QPainter_combinedTransform(lua_State* L)
{
    lqtk_QPainter_combinedTransform_Args  argValues;
    lqtk_QPainter_combinedTransform_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainter::combinedTransform();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainter", "combinedTransform", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainter_compositionMode_Args
{
    FromLua<QPainter*> arg_1_1;
    ToLua<QPainter::CompositionMode> rslt_1;
};

extern "C" int lqtk_QPainter_compositionMode(lua_State* L)
{
    lqtk_QPainter_compositionMode_Args  argValues;
    lqtk_QPainter_compositionMode_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QPainter::compositionMode();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainter", "compositionMode", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainter_drawConvexPolygon_Args
{
    FromLua<QPainter*> arg_1_1;
    FromLua<QList<QPoint>> arg_2_1;
};

static int lqtk_QPainter_drawConvexPolygon_doLua(lua_State* L)
{
    lqtk_QPainter_drawConvexPolygon_Args* args = (lqtk_QPainter_drawConvexPolygon_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    QPainterBinding::delegate_drawConvexPolygon(args->arg_1_1.getValue(), args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainter", "drawConvexPolygon", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QPainter_drawConvexPolygon(lua_State* L)
{
    try {
        lqtk_QPainter_drawConvexPolygon_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QPainter_drawConvexPolygon_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainter_drawEllipse_Args
{
    FromLua<QPainter*> arg_1_1;
    FromLua<QRect*> arg_2_1;
    FromLua<QPoint*> arg_3_1;
    FromLua<int> arg_4_1;
    FromLua<int> arg_4_2;
    FromLua<int> arg_4_3;
    FromLua<int> arg_4_4;
};

extern "C" int lqtk_QPainter_drawEllipse(lua_State* L)
{
    lqtk_QPainter_drawEllipse_Args  argValues;
    lqtk_QPainter_drawEllipse_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QPainter::drawEllipse(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            args->arg_4_1.check(L, argOffs+3);
            args->arg_4_2.check(L, argOffs+4);
            {
                    args->arg_1_1.getValue()->QPainter::drawEllipse(*args->arg_3_1.getValue(), args->arg_4_1.getValue(), args->arg_4_2.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 5) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_4_1.check(L, argOffs+2);
            args->arg_4_2.check(L, argOffs+3);
            args->arg_4_3.check(L, argOffs+4);
            args->arg_4_4.check(L, argOffs+5);
            {
                    args->arg_1_1.getValue()->QPainter::drawEllipse(args->arg_4_1.getValue(), args->arg_4_2.getValue(), args->arg_4_3.getValue(), args->arg_4_4.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainter", "drawEllipse", nargs, "2,4,5");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainter_drawPath_Args
{
    FromLua<QPainter*> arg_1_1;
    FromLua<QPainterPath*> arg_2_1;
};

extern "C" int lqtk_QPainter_drawPath(lua_State* L)
{
    lqtk_QPainter_drawPath_Args  argValues;
    lqtk_QPainter_drawPath_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QPainter::drawPath(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainter", "drawPath", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainter_drawPie_Args
{
    FromLua<QPainter*> arg_1_1;
    FromLua<QRectF*> arg_2_1;
    FromLua<int> arg_3_1;
    FromLua<int> arg_3_2;
    FromLua<int> arg_3_3;
    FromLua<int> arg_3_4;
    FromLua<int> arg_3_5;
    FromLua<int> arg_3_6;
    FromLua<QRect*> arg_4_1;
};

extern "C" int lqtk_QPainter_drawPie(lua_State* L)
{
    lqtk_QPainter_drawPie_Args  argValues;
    lqtk_QPainter_drawPie_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 4) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            if (!args->arg_3_2.test(L, argOffs+4)) break;
            {
                    args->arg_1_1.getValue()->QPainter::drawPie(*args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_3_2.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 4) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_4_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            if (!args->arg_3_2.test(L, argOffs+4)) break;
            {
                    args->arg_1_1.getValue()->QPainter::drawPie(*args->arg_4_1.getValue(), args->arg_3_1.getValue(), args->arg_3_2.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 4) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_3_2.check(L, argOffs+4);
            assert(false);
        }
        if (nargs == 7) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            args->arg_3_2.check(L, argOffs+3);
            args->arg_3_3.check(L, argOffs+4);
            args->arg_3_4.check(L, argOffs+5);
            args->arg_3_5.check(L, argOffs+6);
            args->arg_3_6.check(L, argOffs+7);
            {
                    args->arg_1_1.getValue()->QPainter::drawPie(args->arg_3_1.getValue(), args->arg_3_2.getValue(), args->arg_3_3.getValue(), args->arg_3_4.getValue(), args->arg_3_5.getValue(), args->arg_3_6.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainter", "drawPie", nargs, "4,7");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainter_drawPixmap_Args
{
    FromLua<QPainter*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
    FromLua<int> arg_2_3;
    FromLua<int> arg_2_4;
    FromLua<int> arg_2_5;
    FromLua<int> arg_2_6;
    FromLua<int> arg_2_7;
    FromLua<int> arg_2_8;
    FromLua<QPixmap*> arg_3_1;
    FromLua<QRectF*> arg_4_1;
    FromLua<QRectF*> arg_4_2;
    FromLua<QPoint*> arg_5_1;
    FromLua<QPointF*> arg_6_1;
    FromLua<QRect*> arg_7_1;
    FromLua<QRect*> arg_7_2;
};

extern "C" int lqtk_QPainter_drawPixmap(lua_State* L)
{
    lqtk_QPainter_drawPixmap_Args  argValues;
    lqtk_QPainter_drawPixmap_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 4) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_2_2.test(L, argOffs+3)) break;
            if (!args->arg_3_1.test(L, argOffs+4)) break;
            {
                    args->arg_1_1.getValue()->QPainter::drawPixmap(args->arg_2_1.getValue(), args->arg_2_2.getValue(), *args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 4) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_4_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            if (!args->arg_4_2.test(L, argOffs+4)) break;
            {
                    args->arg_1_1.getValue()->QPainter::drawPixmap(*args->arg_4_1.getValue(), *args->arg_3_1.getValue(), *args->arg_4_2.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_5_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QPainter::drawPixmap(*args->arg_5_1.getValue(), *args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_6_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QPainter::drawPixmap(*args->arg_6_1.getValue(), *args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_7_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QPainter::drawPixmap(*args->arg_7_1.getValue(), *args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_5_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            assert(false);
        }
        if (nargs == 4) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_5_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            if (!args->arg_7_1.test(L, argOffs+4)) break;
            {
                    args->arg_1_1.getValue()->QPainter::drawPixmap(*args->arg_5_1.getValue(), *args->arg_3_1.getValue(), *args->arg_7_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 4) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_6_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            if (!args->arg_4_1.test(L, argOffs+4)) break;
            {
                    args->arg_1_1.getValue()->QPainter::drawPixmap(*args->arg_6_1.getValue(), *args->arg_3_1.getValue(), *args->arg_4_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 4) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_7_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            if (!args->arg_7_2.test(L, argOffs+4)) break;
            {
                    args->arg_1_1.getValue()->QPainter::drawPixmap(*args->arg_7_1.getValue(), *args->arg_3_1.getValue(), *args->arg_7_2.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 4) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            args->arg_3_1.check(L, argOffs+4);
            assert(false);
        }
        if (nargs == 6) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            args->arg_2_3.check(L, argOffs+4);
            args->arg_2_4.check(L, argOffs+5);
            args->arg_3_1.check(L, argOffs+6);
            {
                    args->arg_1_1.getValue()->QPainter::drawPixmap(args->arg_2_1.getValue(), args->arg_2_2.getValue(), args->arg_2_3.getValue(), args->arg_2_4.getValue(), *args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 8) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            args->arg_3_1.check(L, argOffs+4);
            args->arg_2_3.check(L, argOffs+5);
            args->arg_2_4.check(L, argOffs+6);
            args->arg_2_5.check(L, argOffs+7);
            args->arg_2_6.check(L, argOffs+8);
            {
                    args->arg_1_1.getValue()->QPainter::drawPixmap(args->arg_2_1.getValue(), args->arg_2_2.getValue(), *args->arg_3_1.getValue(), args->arg_2_3.getValue(), args->arg_2_4.getValue(), args->arg_2_5.getValue(), args->arg_2_6.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 10) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            args->arg_2_3.check(L, argOffs+4);
            args->arg_2_4.check(L, argOffs+5);
            args->arg_3_1.check(L, argOffs+6);
            args->arg_2_5.check(L, argOffs+7);
            args->arg_2_6.check(L, argOffs+8);
            args->arg_2_7.check(L, argOffs+9);
            args->arg_2_8.check(L, argOffs+10);
            {
                    args->arg_1_1.getValue()->QPainter::drawPixmap(args->arg_2_1.getValue(), args->arg_2_2.getValue(), args->arg_2_3.getValue(), args->arg_2_4.getValue(), *args->arg_3_1.getValue(), args->arg_2_5.getValue(), args->arg_2_6.getValue(), args->arg_2_7.getValue(), args->arg_2_8.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainter", "drawPixmap", nargs, "10,3,4,6,8");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainter_drawRect_Args
{
    FromLua<QPainter*> arg_1_1;
    FromLua<QRect*> arg_2_1;
    FromLua<int> arg_3_1;
    FromLua<int> arg_3_2;
    FromLua<int> arg_3_3;
    FromLua<int> arg_3_4;
};

extern "C" int lqtk_QPainter_drawRect(lua_State* L)
{
    lqtk_QPainter_drawRect_Args  argValues;
    lqtk_QPainter_drawRect_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QPainter::drawRect(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 5) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            args->arg_3_2.check(L, argOffs+3);
            args->arg_3_3.check(L, argOffs+4);
            args->arg_3_4.check(L, argOffs+5);
            {
                    args->arg_1_1.getValue()->QPainter::drawRect(args->arg_3_1.getValue(), args->arg_3_2.getValue(), args->arg_3_3.getValue(), args->arg_3_4.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainter", "drawRect", nargs, "2,5");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainter_fillPath_Args
{
    FromLua<QPainter*> arg_1_1;
    FromLua<QPainterPath*> arg_2_1;
    FromLua<QBrush*> arg_3_1;
};

extern "C" int lqtk_QPainter_fillPath(lua_State* L)
{
    lqtk_QPainter_fillPath_Args  argValues;
    lqtk_QPainter_fillPath_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QPainter::fillPath(*args->arg_2_1.getValue(), *args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainter", "fillPath", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainter_fillRect_Args
{
    FromLua<QPainter*> arg_1_1;
    FromLua<QRectF*> arg_2_1;
    FromLua<QBrush*> arg_3_1;
    FromLua<QRect*> arg_4_1;
    FromLua<QGradient::Preset> arg_5_1;
    FromLua<Qt::BrushStyle> arg_6_1;
    FromLua<Qt::GlobalColor> arg_7_1;
    FromLua<QColor*> arg_8_1;
    FromLua<int> arg_9_1;
    FromLua<int> arg_9_2;
    FromLua<int> arg_9_3;
    FromLua<int> arg_9_4;
};

extern "C" int lqtk_QPainter_fillRect(lua_State* L)
{
    lqtk_QPainter_fillRect_Args  argValues;
    lqtk_QPainter_fillRect_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QPainter::fillRect(*args->arg_2_1.getValue(), *args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_4_1.test(L, argOffs+2)) break;
            if (!args->arg_5_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QPainter::fillRect(*args->arg_4_1.getValue(), args->arg_5_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_4_1.test(L, argOffs+2)) break;
            if (!args->arg_6_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QPainter::fillRect(*args->arg_4_1.getValue(), args->arg_6_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_4_1.test(L, argOffs+2)) break;
            if (!args->arg_7_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QPainter::fillRect(*args->arg_4_1.getValue(), args->arg_7_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_4_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QPainter::fillRect(*args->arg_4_1.getValue(), *args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_4_1.test(L, argOffs+2)) break;
            if (!args->arg_8_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QPainter::fillRect(*args->arg_4_1.getValue(), *args->arg_8_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_5_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QPainter::fillRect(*args->arg_2_1.getValue(), args->arg_5_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_6_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QPainter::fillRect(*args->arg_2_1.getValue(), args->arg_6_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_7_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QPainter::fillRect(*args->arg_2_1.getValue(), args->arg_7_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_8_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QPainter::fillRect(*args->arg_2_1.getValue(), *args->arg_8_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            assert(false);
        }
        if (nargs == 6) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_9_1.test(L, argOffs+2)) break;
            if (!args->arg_9_2.test(L, argOffs+3)) break;
            if (!args->arg_9_3.test(L, argOffs+4)) break;
            if (!args->arg_9_4.test(L, argOffs+5)) break;
            if (!args->arg_5_1.test(L, argOffs+6)) break;
            {
                    args->arg_1_1.getValue()->QPainter::fillRect(args->arg_9_1.getValue(), args->arg_9_2.getValue(), args->arg_9_3.getValue(), args->arg_9_4.getValue(), args->arg_5_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 6) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_9_1.test(L, argOffs+2)) break;
            if (!args->arg_9_2.test(L, argOffs+3)) break;
            if (!args->arg_9_3.test(L, argOffs+4)) break;
            if (!args->arg_9_4.test(L, argOffs+5)) break;
            if (!args->arg_6_1.test(L, argOffs+6)) break;
            {
                    args->arg_1_1.getValue()->QPainter::fillRect(args->arg_9_1.getValue(), args->arg_9_2.getValue(), args->arg_9_3.getValue(), args->arg_9_4.getValue(), args->arg_6_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 6) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_9_1.test(L, argOffs+2)) break;
            if (!args->arg_9_2.test(L, argOffs+3)) break;
            if (!args->arg_9_3.test(L, argOffs+4)) break;
            if (!args->arg_9_4.test(L, argOffs+5)) break;
            if (!args->arg_7_1.test(L, argOffs+6)) break;
            {
                    args->arg_1_1.getValue()->QPainter::fillRect(args->arg_9_1.getValue(), args->arg_9_2.getValue(), args->arg_9_3.getValue(), args->arg_9_4.getValue(), args->arg_7_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 6) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_9_1.test(L, argOffs+2)) break;
            if (!args->arg_9_2.test(L, argOffs+3)) break;
            if (!args->arg_9_3.test(L, argOffs+4)) break;
            if (!args->arg_9_4.test(L, argOffs+5)) break;
            if (!args->arg_3_1.test(L, argOffs+6)) break;
            {
                    args->arg_1_1.getValue()->QPainter::fillRect(args->arg_9_1.getValue(), args->arg_9_2.getValue(), args->arg_9_3.getValue(), args->arg_9_4.getValue(), *args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 6) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_9_1.test(L, argOffs+2)) break;
            if (!args->arg_9_2.test(L, argOffs+3)) break;
            if (!args->arg_9_3.test(L, argOffs+4)) break;
            if (!args->arg_9_4.test(L, argOffs+5)) break;
            if (!args->arg_8_1.test(L, argOffs+6)) break;
            {
                    args->arg_1_1.getValue()->QPainter::fillRect(args->arg_9_1.getValue(), args->arg_9_2.getValue(), args->arg_9_3.getValue(), args->arg_9_4.getValue(), *args->arg_8_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 6) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_9_1.check(L, argOffs+2);
            args->arg_9_2.check(L, argOffs+3);
            args->arg_9_3.check(L, argOffs+4);
            args->arg_9_4.check(L, argOffs+5);
            args->arg_5_1.check(L, argOffs+6);
            assert(false);
        }
        return util::argCountError(L, "QPainter", "fillRect", nargs, "3,6");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainter_finish_Args
{
    FromLua<QPainter*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QPainter_finish(lua_State* L)
{
    lqtk_QPainter_finish_Args  argValues;
    lqtk_QPainter_finish_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QPainterBinding::delegate_finish(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainter", "finish", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainter_restore_Args
{
    FromLua<QPainter*> arg_1_1;
};

extern "C" int lqtk_QPainter_restore(lua_State* L)
{
    lqtk_QPainter_restore_Args  argValues;
    lqtk_QPainter_restore_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QPainter::restore();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainter", "restore", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainter_rotate_Args
{
    FromLua<QPainter*> arg_1_1;
    FromLua<double> arg_2_1;
};

extern "C" int lqtk_QPainter_rotate(lua_State* L)
{
    lqtk_QPainter_rotate_Args  argValues;
    lqtk_QPainter_rotate_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QPainter::rotate(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainter", "rotate", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainter_save_Args
{
    FromLua<QPainter*> arg_1_1;
};

extern "C" int lqtk_QPainter_save(lua_State* L)
{
    lqtk_QPainter_save_Args  argValues;
    lqtk_QPainter_save_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QPainter::save();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainter", "save", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainter_scale_Args
{
    FromLua<QPainter*> arg_1_1;
    FromLua<double> arg_2_1;
    FromLua<double> arg_2_2;
};

extern "C" int lqtk_QPainter_scale(lua_State* L)
{
    lqtk_QPainter_scale_Args  argValues;
    lqtk_QPainter_scale_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QPainter::scale(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainter", "scale", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainter_setBrush_Args
{
    FromLua<QPainter*> arg_1_1;
    FromLua<QColor*> arg_2_1;
    FromLua<QBrush*> arg_3_1;
    FromLua<QGradient*> arg_4_1;
};

extern "C" int lqtk_QPainter_setBrush(lua_State* L)
{
    lqtk_QPainter_setBrush_Args  argValues;
    lqtk_QPainter_setBrush_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                    args->arg_1_1.getValue()->QPainter::setBrush(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                    args->arg_1_1.getValue()->QPainter::setBrush(*args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_4_1.test(L, argOffs+2)) break;
            {
                    args->arg_1_1.getValue()->QPainter::setBrush(*args->arg_4_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QPainter", "setBrush", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainter_setPen_Args
{
    FromLua<QPainter*> arg_1_1;
    FromLua<Qt::PenStyle> arg_2_1;
};

extern "C" int lqtk_QPainter_setPen(lua_State* L)
{
    lqtk_QPainter_setPen_Args  argValues;
    lqtk_QPainter_setPen_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QPainter::setPen(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainter", "setPen", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainter_setRenderHint_Args
{
    FromLua<QPainter*> arg_1_1;
    FromLua<QPainter::RenderHint> arg_2_1;
};

extern "C" int lqtk_QPainter_setRenderHint(lua_State* L)
{
    lqtk_QPainter_setRenderHint_Args  argValues;
    lqtk_QPainter_setRenderHint_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QPainter::setRenderHint(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainter", "setRenderHint", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainter_translate_Args
{
    FromLua<QPainter*> arg_1_1;
    FromLua<double> arg_2_1;
    FromLua<double> arg_2_2;
};

extern "C" int lqtk_QPainter_translate(lua_State* L)
{
    lqtk_QPainter_translate_Args  argValues;
    lqtk_QPainter_translate_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QPainter::translate(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainter", "translate", nargs, "3");
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
        QPainterBinding::QType* ptr = static_cast<QPainterBinding::QType*>(objectPtr);
        if (targetClassInfo == &QPainterBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QPainter* ptr = (QPainter*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static const char* validityErrorFunction(void* objectPtr)
{
    if (objectPtr) {
        QPainterWrapperBase* wrapper = (QPainterWrapperBase*) objectPtr;
        return wrapper->lqtk_validityError();
    }
    return nullptr;
}

/* ============================================================================================ */


struct lqtk_QPainter_new_Args
{
    FromLua<QWidget*> arg_1_1;
    FromLua<QPixmap*> arg_2_1;
    ToLua<QPainter*> rslt_1;
};

extern "C" int lqtk_QPainter_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QPainter_new_Args  argValues;
    lqtk_QPainter_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QPainterBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QPainter> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QPainterWrapper* rslt = 
                    new QPainterWrapper();
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, (QPainterWrapperBase*)rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                QPainterWrapper* rslt = 
                    new QPainterWrapper(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, (QPainterWrapperBase*)rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                QPainterWrapper* rslt = 
                    new QPainterWrapper(args->arg_2_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, (QPainterWrapperBase*)rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        if (explicitNew) {
            return util::argCountError(L, "QPainter", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QPainter", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QPainter_new(lua_State* L)
{
    return lqtk_QPainter_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */


static const Member members[] =
{
    { "Antialiasing",                        Member::INTEGER,              (void*) QPainter::Antialiasing },
    { "CompositionMode_Clear",               Member::INTEGER,              (void*) QPainter::CompositionMode_Clear },
    { "CompositionMode_ColorBurn",           Member::INTEGER,              (void*) QPainter::CompositionMode_ColorBurn },
    { "CompositionMode_ColorDodge",          Member::INTEGER,              (void*) QPainter::CompositionMode_ColorDodge },
    { "CompositionMode_Darken",              Member::INTEGER,              (void*) QPainter::CompositionMode_Darken },
    { "CompositionMode_Destination",         Member::INTEGER,              (void*) QPainter::CompositionMode_Destination },
    { "CompositionMode_DestinationAtop",     Member::INTEGER,              (void*) QPainter::CompositionMode_DestinationAtop },
    { "CompositionMode_DestinationIn",       Member::INTEGER,              (void*) QPainter::CompositionMode_DestinationIn },
    { "CompositionMode_DestinationOut",      Member::INTEGER,              (void*) QPainter::CompositionMode_DestinationOut },
    { "CompositionMode_DestinationOver",     Member::INTEGER,              (void*) QPainter::CompositionMode_DestinationOver },
    { "CompositionMode_Difference",          Member::INTEGER,              (void*) QPainter::CompositionMode_Difference },
    { "CompositionMode_Exclusion",           Member::INTEGER,              (void*) QPainter::CompositionMode_Exclusion },
    { "CompositionMode_HardLight",           Member::INTEGER,              (void*) QPainter::CompositionMode_HardLight },
    { "CompositionMode_Lighten",             Member::INTEGER,              (void*) QPainter::CompositionMode_Lighten },
    { "CompositionMode_Multiply",            Member::INTEGER,              (void*) QPainter::CompositionMode_Multiply },
    { "CompositionMode_Overlay",             Member::INTEGER,              (void*) QPainter::CompositionMode_Overlay },
    { "CompositionMode_Plus",                Member::INTEGER,              (void*) QPainter::CompositionMode_Plus },
    { "CompositionMode_Screen",              Member::INTEGER,              (void*) QPainter::CompositionMode_Screen },
    { "CompositionMode_SoftLight",           Member::INTEGER,              (void*) QPainter::CompositionMode_SoftLight },
    { "CompositionMode_Source",              Member::INTEGER,              (void*) QPainter::CompositionMode_Source },
    { "CompositionMode_SourceAtop",          Member::INTEGER,              (void*) QPainter::CompositionMode_SourceAtop },
    { "CompositionMode_SourceIn",            Member::INTEGER,              (void*) QPainter::CompositionMode_SourceIn },
    { "CompositionMode_SourceOut",           Member::INTEGER,              (void*) QPainter::CompositionMode_SourceOut },
    { "CompositionMode_SourceOver",          Member::INTEGER,              (void*) QPainter::CompositionMode_SourceOver },
    { "CompositionMode_Xor",                 Member::INTEGER,              (void*) QPainter::CompositionMode_Xor },
    { "LosslessImageRendering",              Member::INTEGER,              (void*) QPainter::LosslessImageRendering },
    { "NonCosmeticBrushPatterns",            Member::INTEGER,              (void*) QPainter::NonCosmeticBrushPatterns },
    { "OpaqueHint",                          Member::INTEGER,              (void*) QPainter::OpaqueHint },
    { "RasterOp_ClearDestination",           Member::INTEGER,              (void*) QPainter::RasterOp_ClearDestination },
    { "RasterOp_NotDestination",             Member::INTEGER,              (void*) QPainter::RasterOp_NotDestination },
    { "RasterOp_NotSource",                  Member::INTEGER,              (void*) QPainter::RasterOp_NotSource },
    { "RasterOp_NotSourceAndDestination",    Member::INTEGER,              (void*) QPainter::RasterOp_NotSourceAndDestination },
    { "RasterOp_NotSourceAndNotDestination", Member::INTEGER,              (void*) QPainter::RasterOp_NotSourceAndNotDestination },
    { "RasterOp_NotSourceOrDestination",     Member::INTEGER,              (void*) QPainter::RasterOp_NotSourceOrDestination },
    { "RasterOp_NotSourceOrNotDestination",  Member::INTEGER,              (void*) QPainter::RasterOp_NotSourceOrNotDestination },
    { "RasterOp_NotSourceXorDestination",    Member::INTEGER,              (void*) QPainter::RasterOp_NotSourceXorDestination },
    { "RasterOp_SetDestination",             Member::INTEGER,              (void*) QPainter::RasterOp_SetDestination },
    { "RasterOp_SourceAndDestination",       Member::INTEGER,              (void*) QPainter::RasterOp_SourceAndDestination },
    { "RasterOp_SourceAndNotDestination",    Member::INTEGER,              (void*) QPainter::RasterOp_SourceAndNotDestination },
    { "RasterOp_SourceOrDestination",        Member::INTEGER,              (void*) QPainter::RasterOp_SourceOrDestination },
    { "RasterOp_SourceOrNotDestination",     Member::INTEGER,              (void*) QPainter::RasterOp_SourceOrNotDestination },
    { "RasterOp_SourceXorDestination",       Member::INTEGER,              (void*) QPainter::RasterOp_SourceXorDestination },
    { "SmoothPixmapTransform",               Member::INTEGER,              (void*) QPainter::SmoothPixmapTransform },
    { "TextAntialiasing",                    Member::INTEGER,              (void*) QPainter::TextAntialiasing },
    { "VerticalSubpixelPositioning",         Member::INTEGER,              (void*) QPainter::VerticalSubpixelPositioning },
    { "backgroundMode",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QPainter_backgroundMode },
    { "begin",                               Member::NORMAL_FUNCTION,      (void*) lqtk_QPainter_begin },
    { "clipPath",                            Member::NORMAL_FUNCTION,      (void*) lqtk_QPainter_clipPath },
    { "clipRegion",                          Member::NORMAL_FUNCTION,      (void*) lqtk_QPainter_clipRegion },
    { "combinedTransform",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QPainter_combinedTransform },
    { "compositionMode",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QPainter_compositionMode },
    { "drawConvexPolygon",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QPainter_drawConvexPolygon },
    { "drawEllipse",                         Member::NORMAL_FUNCTION,      (void*) lqtk_QPainter_drawEllipse },
    { "drawPath",                            Member::NORMAL_FUNCTION,      (void*) lqtk_QPainter_drawPath },
    { "drawPie",                             Member::NORMAL_FUNCTION,      (void*) lqtk_QPainter_drawPie },
    { "drawPixmap",                          Member::NORMAL_FUNCTION,      (void*) lqtk_QPainter_drawPixmap },
    { "drawRect",                            Member::NORMAL_FUNCTION,      (void*) lqtk_QPainter_drawRect },
    { "fillPath",                            Member::NORMAL_FUNCTION,      (void*) lqtk_QPainter_fillPath },
    { "fillRect",                            Member::NORMAL_FUNCTION,      (void*) lqtk_QPainter_fillRect },
    { "finish",                              Member::NORMAL_FUNCTION,      (void*) lqtk_QPainter_finish },
    { "restore",                             Member::NORMAL_FUNCTION,      (void*) lqtk_QPainter_restore },
    { "rotate",                              Member::NORMAL_FUNCTION,      (void*) lqtk_QPainter_rotate },
    { "save",                                Member::NORMAL_FUNCTION,      (void*) lqtk_QPainter_save },
    { "scale",                               Member::NORMAL_FUNCTION,      (void*) lqtk_QPainter_scale },
    { "setBrush",                            Member::NORMAL_FUNCTION,      (void*) lqtk_QPainter_setBrush },
    { "setPen",                              Member::NORMAL_FUNCTION,      (void*) lqtk_QPainter_setPen },
    { "setRenderHint",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QPainter_setRenderHint },
    { "translate",                           Member::NORMAL_FUNCTION,      (void*) lqtk_QPainter_translate },
    { NULL,                                  Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QPainterBinding::classInfo = 
{
    "QPainter",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QPainter_constructor,
    lqtk_QPainter_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    validityErrorFunction,
    NULL, // setUserValueFunction
    68,
    members
};

/* ============================================================================================ */

int QPainterBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
