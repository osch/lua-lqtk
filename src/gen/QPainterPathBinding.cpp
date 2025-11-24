// Type: QPainterPath
// Base: nil

/* ============================================================================================ */

#include <QFont>
#include <QObject>
#include <QPainterPath>
#include <QPointF>
#include <QPolygonF>
#include <QRectF>
#include <QRegion>
#include <QString>
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
#include "QFontBinding.hpp"
#include "QObjectBinding.hpp"
#include "QPainterPathBinding.hpp"
#include "QPointFBinding.hpp"
#include "QPolygonFBinding.hpp"
#include "QRectFBinding.hpp"
#include "QRegionBinding.hpp"
#include "QStringBinding.hpp"
#include "QTransformBinding.hpp"
#include "QtBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QPainterPath_addEllipse_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<QRectF*> arg_2_1;
    FromLua<QPointF*> arg_3_1;
    FromLua<double> arg_4_1;
    FromLua<double> arg_4_2;
    FromLua<double> arg_4_3;
    FromLua<double> arg_4_4;
};

extern "C" int lqtk_QPainterPath_addEllipse(lua_State* L)
{
    lqtk_QPainterPath_addEllipse_Args  argValues;
    lqtk_QPainterPath_addEllipse_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QPainterPath::addEllipse(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            args->arg_4_1.check(L, argOffs+3);
            args->arg_4_2.check(L, argOffs+4);
            {
                    args->arg_1_1.getValue()->QPainterPath::addEllipse(*args->arg_3_1.getValue(), args->arg_4_1.getValue(), args->arg_4_2.getValue());
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
                    args->arg_1_1.getValue()->QPainterPath::addEllipse(args->arg_4_1.getValue(), args->arg_4_2.getValue(), args->arg_4_3.getValue(), args->arg_4_4.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "addEllipse", nargs, "2,4,5");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_addPath_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<QPainterPath*> arg_2_1;
};

extern "C" int lqtk_QPainterPath_addPath(lua_State* L)
{
    lqtk_QPainterPath_addPath_Args  argValues;
    lqtk_QPainterPath_addPath_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QPainterPath::addPath(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "addPath", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_addPolygon_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<QPolygonF*> arg_2_1;
};

extern "C" int lqtk_QPainterPath_addPolygon(lua_State* L)
{
    lqtk_QPainterPath_addPolygon_Args  argValues;
    lqtk_QPainterPath_addPolygon_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QPainterPath::addPolygon(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "addPolygon", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_addRect_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<QRectF*> arg_2_1;
    FromLua<double> arg_3_1;
    FromLua<double> arg_3_2;
    FromLua<double> arg_3_3;
    FromLua<double> arg_3_4;
};

extern "C" int lqtk_QPainterPath_addRect(lua_State* L)
{
    lqtk_QPainterPath_addRect_Args  argValues;
    lqtk_QPainterPath_addRect_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QPainterPath::addRect(*args->arg_2_1.getValue());
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
                    args->arg_1_1.getValue()->QPainterPath::addRect(args->arg_3_1.getValue(), args->arg_3_2.getValue(), args->arg_3_3.getValue(), args->arg_3_4.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "addRect", nargs, "2,5");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_addRegion_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<QRegion*> arg_2_1;
};

extern "C" int lqtk_QPainterPath_addRegion(lua_State* L)
{
    lqtk_QPainterPath_addRegion_Args  argValues;
    lqtk_QPainterPath_addRegion_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QPainterPath::addRegion(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "addRegion", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_addRoundedRect_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<QRectF*> arg_2_1;
    FromLua<double> arg_3_1;
    FromLua<double> arg_3_2;
    FromLua<double> arg_3_3;
    FromLua<double> arg_3_4;
    FromLua<double> arg_3_5;
    FromLua<double> arg_3_6;
    FromLua<Qt::SizeMode> arg_4_1;
};

extern "C" int lqtk_QPainterPath_addRoundedRect(lua_State* L)
{
    lqtk_QPainterPath_addRoundedRect_Args  argValues;
    lqtk_QPainterPath_addRoundedRect_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_3_2.check(L, argOffs+4);
            {
                    args->arg_1_1.getValue()->QPainterPath::addRoundedRect(*args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_3_2.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 5) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_3_2.check(L, argOffs+4);
            args->arg_4_1.check(L, argOffs+5);
            {
                    args->arg_1_1.getValue()->QPainterPath::addRoundedRect(*args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_3_2.getValue(), args->arg_4_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 7) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            args->arg_3_2.check(L, argOffs+3);
            args->arg_3_3.check(L, argOffs+4);
            args->arg_3_4.check(L, argOffs+5);
            args->arg_3_5.check(L, argOffs+6);
            args->arg_3_6.check(L, argOffs+7);
            {
                    args->arg_1_1.getValue()->QPainterPath::addRoundedRect(args->arg_3_1.getValue(), args->arg_3_2.getValue(), args->arg_3_3.getValue(), args->arg_3_4.getValue(), args->arg_3_5.getValue(), args->arg_3_6.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 8) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            args->arg_3_2.check(L, argOffs+3);
            args->arg_3_3.check(L, argOffs+4);
            args->arg_3_4.check(L, argOffs+5);
            args->arg_3_5.check(L, argOffs+6);
            args->arg_3_6.check(L, argOffs+7);
            args->arg_4_1.check(L, argOffs+8);
            {
                    args->arg_1_1.getValue()->QPainterPath::addRoundedRect(args->arg_3_1.getValue(), args->arg_3_2.getValue(), args->arg_3_3.getValue(), args->arg_3_4.getValue(), args->arg_3_5.getValue(), args->arg_3_6.getValue(), args->arg_4_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "addRoundedRect", nargs, "4,5,7,8");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_addText_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
    FromLua<QFont*> arg_3_1;
    FromLua<QString> arg_4_1;
    FromLua<double> arg_5_1;
    FromLua<double> arg_5_2;
};

static int lqtk_QPainterPath_addText_doLua(lua_State* L)
{
    lqtk_QPainterPath_addText_Args* args = (lqtk_QPainterPath_addText_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_4_1.check(L, argOffs+4);
            {
                    args->arg_1_1.getValue()->QPainterPath::addText(*args->arg_2_1.getValue(), *args->arg_3_1.getValue(), args->arg_4_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 5) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_5_1.check(L, argOffs+2);
            args->arg_5_2.check(L, argOffs+3);
            args->arg_3_1.check(L, argOffs+4);
            args->arg_4_1.check(L, argOffs+5);
            {
                    args->arg_1_1.getValue()->QPainterPath::addText(args->arg_5_1.getValue(), args->arg_5_2.getValue(), *args->arg_3_1.getValue(), args->arg_4_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "addText", nargs, "4,5");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QPainterPath_addText(lua_State* L)
{
    try {
        lqtk_QPainterPath_addText_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QPainterPath_addText_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_angleAtPercent_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<double> arg_2_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QPainterPath_angleAtPercent(lua_State* L)
{
    lqtk_QPainterPath_angleAtPercent_Args  argValues;
    lqtk_QPainterPath_angleAtPercent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::angleAtPercent(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "angleAtPercent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_arcMoveTo_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<QRectF*> arg_2_1;
    FromLua<double> arg_3_1;
    FromLua<double> arg_3_2;
    FromLua<double> arg_3_3;
    FromLua<double> arg_3_4;
    FromLua<double> arg_3_5;
};

extern "C" int lqtk_QPainterPath_arcMoveTo(lua_State* L)
{
    lqtk_QPainterPath_arcMoveTo_Args  argValues;
    lqtk_QPainterPath_arcMoveTo_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QPainterPath::arcMoveTo(*args->arg_2_1.getValue(), args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 6) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            args->arg_3_2.check(L, argOffs+3);
            args->arg_3_3.check(L, argOffs+4);
            args->arg_3_4.check(L, argOffs+5);
            args->arg_3_5.check(L, argOffs+6);
            {
                    args->arg_1_1.getValue()->QPainterPath::arcMoveTo(args->arg_3_1.getValue(), args->arg_3_2.getValue(), args->arg_3_3.getValue(), args->arg_3_4.getValue(), args->arg_3_5.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "arcMoveTo", nargs, "3,6");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_arcTo_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<QRectF*> arg_2_1;
    FromLua<double> arg_3_1;
    FromLua<double> arg_3_2;
    FromLua<double> arg_3_3;
    FromLua<double> arg_3_4;
    FromLua<double> arg_3_5;
    FromLua<double> arg_3_6;
};

extern "C" int lqtk_QPainterPath_arcTo(lua_State* L)
{
    lqtk_QPainterPath_arcTo_Args  argValues;
    lqtk_QPainterPath_arcTo_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_3_2.check(L, argOffs+4);
            {
                    args->arg_1_1.getValue()->QPainterPath::arcTo(*args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_3_2.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 7) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            args->arg_3_2.check(L, argOffs+3);
            args->arg_3_3.check(L, argOffs+4);
            args->arg_3_4.check(L, argOffs+5);
            args->arg_3_5.check(L, argOffs+6);
            args->arg_3_6.check(L, argOffs+7);
            {
                    args->arg_1_1.getValue()->QPainterPath::arcTo(args->arg_3_1.getValue(), args->arg_3_2.getValue(), args->arg_3_3.getValue(), args->arg_3_4.getValue(), args->arg_3_5.getValue(), args->arg_3_6.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "arcTo", nargs, "4,7");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_boundingRect_Args
{
    FromLua<QPainterPath*> arg_1_1;
    ToLua<QRectF*> rslt_1;
};

extern "C" int lqtk_QPainterPath_boundingRect(lua_State* L)
{
    lqtk_QPainterPath_boundingRect_Args  argValues;
    lqtk_QPainterPath_boundingRect_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::boundingRect();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "boundingRect", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_capacity_Args
{
    FromLua<QPainterPath*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QPainterPath_capacity(lua_State* L)
{
    lqtk_QPainterPath_capacity_Args  argValues;
    lqtk_QPainterPath_capacity_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::capacity();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "capacity", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_clear_Args
{
    FromLua<QPainterPath*> arg_1_1;
};

extern "C" int lqtk_QPainterPath_clear(lua_State* L)
{
    lqtk_QPainterPath_clear_Args  argValues;
    lqtk_QPainterPath_clear_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QPainterPath::clear();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "clear", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_closeSubpath_Args
{
    FromLua<QPainterPath*> arg_1_1;
};

extern "C" int lqtk_QPainterPath_closeSubpath(lua_State* L)
{
    lqtk_QPainterPath_closeSubpath_Args  argValues;
    lqtk_QPainterPath_closeSubpath_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QPainterPath::closeSubpath();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "closeSubpath", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_connectPath_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<QPainterPath*> arg_2_1;
};

extern "C" int lqtk_QPainterPath_connectPath(lua_State* L)
{
    lqtk_QPainterPath_connectPath_Args  argValues;
    lqtk_QPainterPath_connectPath_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QPainterPath::connectPath(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "connectPath", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_contains_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<QPainterPath*> arg_2_1;
    FromLua<QPointF*> arg_3_1;
    FromLua<QRectF*> arg_4_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QPainterPath_contains(lua_State* L)
{
    lqtk_QPainterPath_contains_Args  argValues;
    lqtk_QPainterPath_contains_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::contains(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::contains(*args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_4_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::contains(*args->arg_4_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QPainterPath", "contains", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_controlPointRect_Args
{
    FromLua<QPainterPath*> arg_1_1;
    ToLua<QRectF*> rslt_1;
};

extern "C" int lqtk_QPainterPath_controlPointRect(lua_State* L)
{
    lqtk_QPainterPath_controlPointRect_Args  argValues;
    lqtk_QPainterPath_controlPointRect_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::controlPointRect();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "controlPointRect", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_cubicTo_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
    FromLua<QPointF*> arg_2_2;
    FromLua<QPointF*> arg_2_3;
    FromLua<double> arg_3_1;
    FromLua<double> arg_3_2;
    FromLua<double> arg_3_3;
    FromLua<double> arg_3_4;
    FromLua<double> arg_3_5;
    FromLua<double> arg_3_6;
};

extern "C" int lqtk_QPainterPath_cubicTo(lua_State* L)
{
    lqtk_QPainterPath_cubicTo_Args  argValues;
    lqtk_QPainterPath_cubicTo_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            args->arg_2_3.check(L, argOffs+4);
            {
                    args->arg_1_1.getValue()->QPainterPath::cubicTo(*args->arg_2_1.getValue(), *args->arg_2_2.getValue(), *args->arg_2_3.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 7) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            args->arg_3_2.check(L, argOffs+3);
            args->arg_3_3.check(L, argOffs+4);
            args->arg_3_4.check(L, argOffs+5);
            args->arg_3_5.check(L, argOffs+6);
            args->arg_3_6.check(L, argOffs+7);
            {
                    args->arg_1_1.getValue()->QPainterPath::cubicTo(args->arg_3_1.getValue(), args->arg_3_2.getValue(), args->arg_3_3.getValue(), args->arg_3_4.getValue(), args->arg_3_5.getValue(), args->arg_3_6.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "cubicTo", nargs, "4,7");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_currentPosition_Args
{
    FromLua<QPainterPath*> arg_1_1;
    ToLua<QPointF*> rslt_1;
};

extern "C" int lqtk_QPainterPath_currentPosition(lua_State* L)
{
    lqtk_QPainterPath_currentPosition_Args  argValues;
    lqtk_QPainterPath_currentPosition_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::currentPosition();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "currentPosition", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_elementCount_Args
{
    FromLua<QPainterPath*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QPainterPath_elementCount(lua_State* L)
{
    lqtk_QPainterPath_elementCount_Args  argValues;
    lqtk_QPainterPath_elementCount_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::elementCount();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "elementCount", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_fillRule_Args
{
    FromLua<QPainterPath*> arg_1_1;
    ToLua<Qt::FillRule> rslt_1;
};

extern "C" int lqtk_QPainterPath_fillRule(lua_State* L)
{
    lqtk_QPainterPath_fillRule_Args  argValues;
    lqtk_QPainterPath_fillRule_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QPainterPath::fillRule();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "fillRule", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_intersected_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<QPainterPath*> arg_2_1;
    ToLua<QPainterPath*> rslt_1;
};

extern "C" int lqtk_QPainterPath_intersected(lua_State* L)
{
    lqtk_QPainterPath_intersected_Args  argValues;
    lqtk_QPainterPath_intersected_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::intersected(*args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "intersected", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_intersects_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<QPainterPath*> arg_2_1;
    FromLua<QRectF*> arg_3_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QPainterPath_intersects(lua_State* L)
{
    lqtk_QPainterPath_intersects_Args  argValues;
    lqtk_QPainterPath_intersects_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::intersects(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::intersects(*args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QPainterPath", "intersects", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_isEmpty_Args
{
    FromLua<QPainterPath*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QPainterPath_isEmpty(lua_State* L)
{
    lqtk_QPainterPath_isEmpty_Args  argValues;
    lqtk_QPainterPath_isEmpty_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::isEmpty();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "isEmpty", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_length_Args
{
    FromLua<QPainterPath*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QPainterPath_length(lua_State* L)
{
    lqtk_QPainterPath_length_Args  argValues;
    lqtk_QPainterPath_length_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::length();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "length", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_lineTo_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
    FromLua<double> arg_3_1;
    FromLua<double> arg_3_2;
};

extern "C" int lqtk_QPainterPath_lineTo(lua_State* L)
{
    lqtk_QPainterPath_lineTo_Args  argValues;
    lqtk_QPainterPath_lineTo_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QPainterPath::lineTo(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            args->arg_3_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QPainterPath::lineTo(args->arg_3_1.getValue(), args->arg_3_2.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "lineTo", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_moveTo_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
    FromLua<double> arg_3_1;
    FromLua<double> arg_3_2;
};

extern "C" int lqtk_QPainterPath_moveTo(lua_State* L)
{
    lqtk_QPainterPath_moveTo_Args  argValues;
    lqtk_QPainterPath_moveTo_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QPainterPath::moveTo(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            args->arg_3_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QPainterPath::moveTo(args->arg_3_1.getValue(), args->arg_3_2.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "moveTo", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_percentAtLength_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<double> arg_2_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QPainterPath_percentAtLength(lua_State* L)
{
    lqtk_QPainterPath_percentAtLength_Args  argValues;
    lqtk_QPainterPath_percentAtLength_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::percentAtLength(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "percentAtLength", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_pointAtPercent_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<double> arg_2_1;
    ToLua<QPointF*> rslt_1;
};

extern "C" int lqtk_QPainterPath_pointAtPercent(lua_State* L)
{
    lqtk_QPainterPath_pointAtPercent_Args  argValues;
    lqtk_QPainterPath_pointAtPercent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::pointAtPercent(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "pointAtPercent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_quadTo_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
    FromLua<QPointF*> arg_2_2;
    FromLua<double> arg_3_1;
    FromLua<double> arg_3_2;
    FromLua<double> arg_3_3;
    FromLua<double> arg_3_4;
};

extern "C" int lqtk_QPainterPath_quadTo(lua_State* L)
{
    lqtk_QPainterPath_quadTo_Args  argValues;
    lqtk_QPainterPath_quadTo_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QPainterPath::quadTo(*args->arg_2_1.getValue(), *args->arg_2_2.getValue());
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
                    args->arg_1_1.getValue()->QPainterPath::quadTo(args->arg_3_1.getValue(), args->arg_3_2.getValue(), args->arg_3_3.getValue(), args->arg_3_4.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "quadTo", nargs, "3,5");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_reserve_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QPainterPath_reserve(lua_State* L)
{
    lqtk_QPainterPath_reserve_Args  argValues;
    lqtk_QPainterPath_reserve_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QPainterPath::reserve(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "reserve", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_setElementPositionAt_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<double> arg_3_1;
    FromLua<double> arg_3_2;
};

extern "C" int lqtk_QPainterPath_setElementPositionAt(lua_State* L)
{
    lqtk_QPainterPath_setElementPositionAt_Args  argValues;
    lqtk_QPainterPath_setElementPositionAt_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_3_2.check(L, argOffs+4);
            {
                    args->arg_1_1.getValue()->QPainterPath::setElementPositionAt(args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_3_2.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "setElementPositionAt", nargs, "4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_setFillRule_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<Qt::FillRule> arg_2_1;
};

extern "C" int lqtk_QPainterPath_setFillRule(lua_State* L)
{
    lqtk_QPainterPath_setFillRule_Args  argValues;
    lqtk_QPainterPath_setFillRule_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QPainterPath::setFillRule(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "setFillRule", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_simplified_Args
{
    FromLua<QPainterPath*> arg_1_1;
    ToLua<QPainterPath*> rslt_1;
};

extern "C" int lqtk_QPainterPath_simplified(lua_State* L)
{
    lqtk_QPainterPath_simplified_Args  argValues;
    lqtk_QPainterPath_simplified_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::simplified();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "simplified", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_slopeAtPercent_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<double> arg_2_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QPainterPath_slopeAtPercent(lua_State* L)
{
    lqtk_QPainterPath_slopeAtPercent_Args  argValues;
    lqtk_QPainterPath_slopeAtPercent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::slopeAtPercent(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "slopeAtPercent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_subtracted_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<QPainterPath*> arg_2_1;
    ToLua<QPainterPath*> rslt_1;
};

extern "C" int lqtk_QPainterPath_subtracted(lua_State* L)
{
    lqtk_QPainterPath_subtracted_Args  argValues;
    lqtk_QPainterPath_subtracted_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::subtracted(*args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "subtracted", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_toFillPolygon_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<QTransform*> arg_2_1;
    ToLua<QPolygonF*> rslt_1;
};

extern "C" int lqtk_QPainterPath_toFillPolygon(lua_State* L)
{
    lqtk_QPainterPath_toFillPolygon_Args  argValues;
    lqtk_QPainterPath_toFillPolygon_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::toFillPolygon();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::toFillPolygon(*args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "toFillPolygon", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_toFillPolygons_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<QTransform*> arg_2_1;
    ToLua<QList<QPolygonF>> rslt_1;
};

static int lqtk_QPainterPath_toFillPolygons_doLua(lua_State* L)
{
    lqtk_QPainterPath_toFillPolygons_Args* args = (lqtk_QPainterPath_toFillPolygons_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::toFillPolygons();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::toFillPolygons(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "toFillPolygons", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QPainterPath_toFillPolygons(lua_State* L)
{
    try {
        lqtk_QPainterPath_toFillPolygons_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QPainterPath_toFillPolygons_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_toReversed_Args
{
    FromLua<QPainterPath*> arg_1_1;
    ToLua<QPainterPath*> rslt_1;
};

extern "C" int lqtk_QPainterPath_toReversed(lua_State* L)
{
    lqtk_QPainterPath_toReversed_Args  argValues;
    lqtk_QPainterPath_toReversed_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::toReversed();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "toReversed", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_toSubpathPolygons_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<QTransform*> arg_2_1;
    ToLua<QList<QPolygonF>> rslt_1;
};

static int lqtk_QPainterPath_toSubpathPolygons_doLua(lua_State* L)
{
    lqtk_QPainterPath_toSubpathPolygons_Args* args = (lqtk_QPainterPath_toSubpathPolygons_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::toSubpathPolygons();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::toSubpathPolygons(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "toSubpathPolygons", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QPainterPath_toSubpathPolygons(lua_State* L)
{
    try {
        lqtk_QPainterPath_toSubpathPolygons_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QPainterPath_toSubpathPolygons_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_translate_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<double> arg_2_1;
    FromLua<double> arg_2_2;
    FromLua<QPointF*> arg_3_1;
};

extern "C" int lqtk_QPainterPath_translate(lua_State* L)
{
    lqtk_QPainterPath_translate_Args  argValues;
    lqtk_QPainterPath_translate_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QPainterPath::translate(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QPainterPath::translate(*args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "translate", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_translated_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<double> arg_2_1;
    FromLua<double> arg_2_2;
    FromLua<QPointF*> arg_3_1;
    ToLua<QPainterPath*> rslt_1;
};

extern "C" int lqtk_QPainterPath_translated(lua_State* L)
{
    lqtk_QPainterPath_translated_Args  argValues;
    lqtk_QPainterPath_translated_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::translated(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::translated(*args->arg_3_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "translated", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_united_Args
{
    FromLua<QPainterPath*> arg_1_1;
    FromLua<QPainterPath*> arg_2_1;
    ToLua<QPainterPath*> rslt_1;
};

extern "C" int lqtk_QPainterPath_united(lua_State* L)
{
    lqtk_QPainterPath_united_Args  argValues;
    lqtk_QPainterPath_united_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPainterPath::united(*args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPainterPath", "united", nargs, "2");
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
        QPainterPathBinding::QType* ptr = static_cast<QPainterPathBinding::QType*>(objectPtr);
        if (targetClassInfo == &QPainterPathBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QPainterPath* ptr = (QPainterPath*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QPainterPath_new_Args
{
    FromLua<QPointF*> arg_1_1;
    FromLua<QPainterPath*> arg_2_1;
    ToLua<QPainterPath*> rslt_1;
};

extern "C" int lqtk_QPainterPath_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QPainterPath_new_Args  argValues;
    lqtk_QPainterPath_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QPainterPathBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QPainterPath> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QPainterPath* rslt = 
                    new QPainterPath();
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
                QPainterPath* rslt = 
                    new QPainterPath(*args->arg_1_1.getValue());
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
                QPainterPath* rslt = 
                    new QPainterPath(*args->arg_2_1.getValue());
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
            return util::argCountError(L, "QPainterPath", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QPainterPath", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QPainterPath_new(lua_State* L)
{
    return lqtk_QPainterPath_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QPainterPathBinding::pushObject(lua_State* L, QPainterPath* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QPainterPath>(L, hasUserValue);     // -> uval?, udata
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
    { "CurveToDataElement",   Member::INTEGER,              (void*) QPainterPath::CurveToDataElement },
    { "CurveToElement",       Member::INTEGER,              (void*) QPainterPath::CurveToElement },
    { "LineToElement",        Member::INTEGER,              (void*) QPainterPath::LineToElement },
    { "MoveToElement",        Member::INTEGER,              (void*) QPainterPath::MoveToElement },
    { "addEllipse",           Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_addEllipse },
    { "addPath",              Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_addPath },
    { "addPolygon",           Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_addPolygon },
    { "addRect",              Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_addRect },
    { "addRegion",            Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_addRegion },
    { "addRoundedRect",       Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_addRoundedRect },
    { "addText",              Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_addText },
    { "angleAtPercent",       Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_angleAtPercent },
    { "arcMoveTo",            Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_arcMoveTo },
    { "arcTo",                Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_arcTo },
    { "boundingRect",         Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_boundingRect },
    { "capacity",             Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_capacity },
    { "clear",                Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_clear },
    { "closeSubpath",         Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_closeSubpath },
    { "connectPath",          Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_connectPath },
    { "contains",             Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_contains },
    { "controlPointRect",     Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_controlPointRect },
    { "cubicTo",              Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_cubicTo },
    { "currentPosition",      Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_currentPosition },
    { "elementCount",         Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_elementCount },
    { "fillRule",             Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_fillRule },
    { "intersected",          Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_intersected },
    { "intersects",           Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_intersects },
    { "isEmpty",              Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_isEmpty },
    { "length",               Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_length },
    { "lineTo",               Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_lineTo },
    { "moveTo",               Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_moveTo },
    { "percentAtLength",      Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_percentAtLength },
    { "pointAtPercent",       Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_pointAtPercent },
    { "quadTo",               Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_quadTo },
    { "reserve",              Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_reserve },
    { "setElementPositionAt", Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_setElementPositionAt },
    { "setFillRule",          Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_setFillRule },
    { "simplified",           Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_simplified },
    { "slopeAtPercent",       Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_slopeAtPercent },
    { "subtracted",           Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_subtracted },
    { "toFillPolygon",        Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_toFillPolygon },
    { "toFillPolygons",       Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_toFillPolygons },
    { "toReversed",           Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_toReversed },
    { "toSubpathPolygons",    Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_toSubpathPolygons },
    { "translate",            Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_translate },
    { "translated",           Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_translated },
    { "united",               Member::NORMAL_FUNCTION,      (void*) lqtk_QPainterPath_united },
    { NULL,                   Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QPainterPathBinding::classInfo = 
{
    "QPainterPath",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QPainterPath_constructor,
    lqtk_QPainterPath_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    47,
    members
};

/* ============================================================================================ */

int QPainterPathBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
