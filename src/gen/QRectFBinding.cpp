// Type: QRectF
// Base: nil

/* ============================================================================================ */

#include <QObject>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QSizeF>

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
#include "QPointFBinding.hpp"
#include "QRectBinding.hpp"
#include "QRectFBinding.hpp"
#include "QSizeFBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QRectF_adjust_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<double> arg_2_1;
    FromLua<double> arg_2_2;
    FromLua<double> arg_2_3;
    FromLua<double> arg_2_4;
};

extern "C" int lqtk_QRectF_adjust(lua_State* L)
{
    lqtk_QRectF_adjust_Args  argValues;
    lqtk_QRectF_adjust_Args* args = &argValues;
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
                    args->arg_1_1.getValue()->QRectF::adjust(args->arg_2_1.getValue(), args->arg_2_2.getValue(), args->arg_2_3.getValue(), args->arg_2_4.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "adjust", nargs, "5");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_adjusted_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<double> arg_2_1;
    FromLua<double> arg_2_2;
    FromLua<double> arg_2_3;
    FromLua<double> arg_2_4;
    ToLua<QRectF*> rslt_1;
};

extern "C" int lqtk_QRectF_adjusted(lua_State* L)
{
    lqtk_QRectF_adjusted_Args  argValues;
    lqtk_QRectF_adjusted_Args* args = &argValues;
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
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::adjusted(args->arg_2_1.getValue(), args->arg_2_2.getValue(), args->arg_2_3.getValue(), args->arg_2_4.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "adjusted", nargs, "5");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_bottom_Args
{
    FromLua<QRectF*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QRectF_bottom(lua_State* L)
{
    lqtk_QRectF_bottom_Args  argValues;
    lqtk_QRectF_bottom_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::bottom();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "bottom", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_bottomLeft_Args
{
    FromLua<QRectF*> arg_1_1;
    ToLua<QPointF*> rslt_1;
};

extern "C" int lqtk_QRectF_bottomLeft(lua_State* L)
{
    lqtk_QRectF_bottomLeft_Args  argValues;
    lqtk_QRectF_bottomLeft_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::bottomLeft();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "bottomLeft", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_bottomRight_Args
{
    FromLua<QRectF*> arg_1_1;
    ToLua<QPointF*> rslt_1;
};

extern "C" int lqtk_QRectF_bottomRight(lua_State* L)
{
    lqtk_QRectF_bottomRight_Args  argValues;
    lqtk_QRectF_bottomRight_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::bottomRight();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "bottomRight", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_center_Args
{
    FromLua<QRectF*> arg_1_1;
    ToLua<QPointF*> rslt_1;
};

extern "C" int lqtk_QRectF_center(lua_State* L)
{
    lqtk_QRectF_center_Args  argValues;
    lqtk_QRectF_center_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::center();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "center", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_contains_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
    FromLua<QRectF*> arg_3_1;
    FromLua<double> arg_4_1;
    FromLua<double> arg_4_2;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QRectF_contains(lua_State* L)
{
    lqtk_QRectF_contains_Args  argValues;
    lqtk_QRectF_contains_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::contains(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::contains(*args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_4_1.check(L, argOffs+2);
            args->arg_4_2.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::contains(args->arg_4_1.getValue(), args->arg_4_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "contains", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QRectF_getCoords(lua_State* L);

/* ============================================================================================ */

extern "C" int lqtk_QRectF_getRect(lua_State* L);

/* ============================================================================================ */


struct lqtk_QRectF_height_Args
{
    FromLua<QRectF*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QRectF_height(lua_State* L)
{
    lqtk_QRectF_height_Args  argValues;
    lqtk_QRectF_height_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::height();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "height", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_intersected_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<QRectF*> arg_2_1;
    ToLua<QRectF*> rslt_1;
};

extern "C" int lqtk_QRectF_intersected(lua_State* L)
{
    lqtk_QRectF_intersected_Args  argValues;
    lqtk_QRectF_intersected_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::intersected(*args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "intersected", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_intersects_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<QRectF*> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QRectF_intersects(lua_State* L)
{
    lqtk_QRectF_intersects_Args  argValues;
    lqtk_QRectF_intersects_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::intersects(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "intersects", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_isEmpty_Args
{
    FromLua<QRectF*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QRectF_isEmpty(lua_State* L)
{
    lqtk_QRectF_isEmpty_Args  argValues;
    lqtk_QRectF_isEmpty_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::isEmpty();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "isEmpty", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_isNull_Args
{
    FromLua<QRectF*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QRectF_isNull(lua_State* L)
{
    lqtk_QRectF_isNull_Args  argValues;
    lqtk_QRectF_isNull_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::isNull();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "isNull", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_isValid_Args
{
    FromLua<QRectF*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QRectF_isValid(lua_State* L)
{
    lqtk_QRectF_isValid_Args  argValues;
    lqtk_QRectF_isValid_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::isValid();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "isValid", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_left_Args
{
    FromLua<QRectF*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QRectF_left(lua_State* L)
{
    lqtk_QRectF_left_Args  argValues;
    lqtk_QRectF_left_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::left();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "left", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_moveBottom_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<double> arg_2_1;
};

extern "C" int lqtk_QRectF_moveBottom(lua_State* L)
{
    lqtk_QRectF_moveBottom_Args  argValues;
    lqtk_QRectF_moveBottom_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRectF::moveBottom(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "moveBottom", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_moveBottomLeft_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
};

extern "C" int lqtk_QRectF_moveBottomLeft(lua_State* L)
{
    lqtk_QRectF_moveBottomLeft_Args  argValues;
    lqtk_QRectF_moveBottomLeft_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRectF::moveBottomLeft(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "moveBottomLeft", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_moveBottomRight_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
};

extern "C" int lqtk_QRectF_moveBottomRight(lua_State* L)
{
    lqtk_QRectF_moveBottomRight_Args  argValues;
    lqtk_QRectF_moveBottomRight_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRectF::moveBottomRight(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "moveBottomRight", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_moveCenter_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
};

extern "C" int lqtk_QRectF_moveCenter(lua_State* L)
{
    lqtk_QRectF_moveCenter_Args  argValues;
    lqtk_QRectF_moveCenter_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRectF::moveCenter(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "moveCenter", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_moveLeft_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<double> arg_2_1;
};

extern "C" int lqtk_QRectF_moveLeft(lua_State* L)
{
    lqtk_QRectF_moveLeft_Args  argValues;
    lqtk_QRectF_moveLeft_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRectF::moveLeft(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "moveLeft", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_moveRight_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<double> arg_2_1;
};

extern "C" int lqtk_QRectF_moveRight(lua_State* L)
{
    lqtk_QRectF_moveRight_Args  argValues;
    lqtk_QRectF_moveRight_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRectF::moveRight(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "moveRight", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_moveTo_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<double> arg_2_1;
    FromLua<double> arg_2_2;
    FromLua<QPointF*> arg_3_1;
};

extern "C" int lqtk_QRectF_moveTo(lua_State* L)
{
    lqtk_QRectF_moveTo_Args  argValues;
    lqtk_QRectF_moveTo_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QRectF::moveTo(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRectF::moveTo(*args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "moveTo", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_moveTop_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<double> arg_2_1;
};

extern "C" int lqtk_QRectF_moveTop(lua_State* L)
{
    lqtk_QRectF_moveTop_Args  argValues;
    lqtk_QRectF_moveTop_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRectF::moveTop(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "moveTop", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_moveTopLeft_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
};

extern "C" int lqtk_QRectF_moveTopLeft(lua_State* L)
{
    lqtk_QRectF_moveTopLeft_Args  argValues;
    lqtk_QRectF_moveTopLeft_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRectF::moveTopLeft(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "moveTopLeft", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_moveTopRight_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
};

extern "C" int lqtk_QRectF_moveTopRight(lua_State* L)
{
    lqtk_QRectF_moveTopRight_Args  argValues;
    lqtk_QRectF_moveTopRight_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRectF::moveTopRight(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "moveTopRight", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_normalized_Args
{
    FromLua<QRectF*> arg_1_1;
    ToLua<QRectF*> rslt_1;
};

extern "C" int lqtk_QRectF_normalized(lua_State* L)
{
    lqtk_QRectF_normalized_Args  argValues;
    lqtk_QRectF_normalized_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::normalized();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "normalized", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_right_Args
{
    FromLua<QRectF*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QRectF_right(lua_State* L)
{
    lqtk_QRectF_right_Args  argValues;
    lqtk_QRectF_right_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::right();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "right", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_setBottom_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<double> arg_2_1;
};

extern "C" int lqtk_QRectF_setBottom(lua_State* L)
{
    lqtk_QRectF_setBottom_Args  argValues;
    lqtk_QRectF_setBottom_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRectF::setBottom(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "setBottom", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_setBottomLeft_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
};

extern "C" int lqtk_QRectF_setBottomLeft(lua_State* L)
{
    lqtk_QRectF_setBottomLeft_Args  argValues;
    lqtk_QRectF_setBottomLeft_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRectF::setBottomLeft(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "setBottomLeft", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_setBottomRight_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
};

extern "C" int lqtk_QRectF_setBottomRight(lua_State* L)
{
    lqtk_QRectF_setBottomRight_Args  argValues;
    lqtk_QRectF_setBottomRight_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRectF::setBottomRight(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "setBottomRight", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_setCoords_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<double> arg_2_1;
    FromLua<double> arg_2_2;
    FromLua<double> arg_2_3;
    FromLua<double> arg_2_4;
};

extern "C" int lqtk_QRectF_setCoords(lua_State* L)
{
    lqtk_QRectF_setCoords_Args  argValues;
    lqtk_QRectF_setCoords_Args* args = &argValues;
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
                    args->arg_1_1.getValue()->QRectF::setCoords(args->arg_2_1.getValue(), args->arg_2_2.getValue(), args->arg_2_3.getValue(), args->arg_2_4.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "setCoords", nargs, "5");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_setHeight_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<double> arg_2_1;
};

extern "C" int lqtk_QRectF_setHeight(lua_State* L)
{
    lqtk_QRectF_setHeight_Args  argValues;
    lqtk_QRectF_setHeight_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRectF::setHeight(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "setHeight", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_setLeft_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<double> arg_2_1;
};

extern "C" int lqtk_QRectF_setLeft(lua_State* L)
{
    lqtk_QRectF_setLeft_Args  argValues;
    lqtk_QRectF_setLeft_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRectF::setLeft(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "setLeft", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_setRect_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<double> arg_2_1;
    FromLua<double> arg_2_2;
    FromLua<double> arg_2_3;
    FromLua<double> arg_2_4;
};

extern "C" int lqtk_QRectF_setRect(lua_State* L)
{
    lqtk_QRectF_setRect_Args  argValues;
    lqtk_QRectF_setRect_Args* args = &argValues;
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
                    args->arg_1_1.getValue()->QRectF::setRect(args->arg_2_1.getValue(), args->arg_2_2.getValue(), args->arg_2_3.getValue(), args->arg_2_4.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "setRect", nargs, "5");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_setRight_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<double> arg_2_1;
};

extern "C" int lqtk_QRectF_setRight(lua_State* L)
{
    lqtk_QRectF_setRight_Args  argValues;
    lqtk_QRectF_setRight_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRectF::setRight(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "setRight", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_setSize_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<QSizeF*> arg_2_1;
};

extern "C" int lqtk_QRectF_setSize(lua_State* L)
{
    lqtk_QRectF_setSize_Args  argValues;
    lqtk_QRectF_setSize_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRectF::setSize(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "setSize", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_setTop_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<double> arg_2_1;
};

extern "C" int lqtk_QRectF_setTop(lua_State* L)
{
    lqtk_QRectF_setTop_Args  argValues;
    lqtk_QRectF_setTop_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRectF::setTop(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "setTop", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_setTopLeft_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
};

extern "C" int lqtk_QRectF_setTopLeft(lua_State* L)
{
    lqtk_QRectF_setTopLeft_Args  argValues;
    lqtk_QRectF_setTopLeft_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRectF::setTopLeft(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "setTopLeft", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_setTopRight_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
};

extern "C" int lqtk_QRectF_setTopRight(lua_State* L)
{
    lqtk_QRectF_setTopRight_Args  argValues;
    lqtk_QRectF_setTopRight_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRectF::setTopRight(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "setTopRight", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_setWidth_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<double> arg_2_1;
};

extern "C" int lqtk_QRectF_setWidth(lua_State* L)
{
    lqtk_QRectF_setWidth_Args  argValues;
    lqtk_QRectF_setWidth_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRectF::setWidth(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "setWidth", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_setX_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<double> arg_2_1;
};

extern "C" int lqtk_QRectF_setX(lua_State* L)
{
    lqtk_QRectF_setX_Args  argValues;
    lqtk_QRectF_setX_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRectF::setX(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "setX", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_setY_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<double> arg_2_1;
};

extern "C" int lqtk_QRectF_setY(lua_State* L)
{
    lqtk_QRectF_setY_Args  argValues;
    lqtk_QRectF_setY_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRectF::setY(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "setY", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_size_Args
{
    FromLua<QRectF*> arg_1_1;
    ToLua<QSizeF*> rslt_1;
};

extern "C" int lqtk_QRectF_size(lua_State* L)
{
    lqtk_QRectF_size_Args  argValues;
    lqtk_QRectF_size_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::size();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "size", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_toAlignedRect_Args
{
    FromLua<QRectF*> arg_1_1;
    ToLua<QRect*> rslt_1;
};

extern "C" int lqtk_QRectF_toAlignedRect(lua_State* L)
{
    lqtk_QRectF_toAlignedRect_Args  argValues;
    lqtk_QRectF_toAlignedRect_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::toAlignedRect();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "toAlignedRect", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_toRect_Args
{
    FromLua<QRectF*> arg_1_1;
    ToLua<QRect*> rslt_1;
};

extern "C" int lqtk_QRectF_toRect(lua_State* L)
{
    lqtk_QRectF_toRect_Args  argValues;
    lqtk_QRectF_toRect_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::toRect();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "toRect", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_top_Args
{
    FromLua<QRectF*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QRectF_top(lua_State* L)
{
    lqtk_QRectF_top_Args  argValues;
    lqtk_QRectF_top_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::top();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "top", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_topLeft_Args
{
    FromLua<QRectF*> arg_1_1;
    ToLua<QPointF*> rslt_1;
};

extern "C" int lqtk_QRectF_topLeft(lua_State* L)
{
    lqtk_QRectF_topLeft_Args  argValues;
    lqtk_QRectF_topLeft_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::topLeft();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "topLeft", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_topRight_Args
{
    FromLua<QRectF*> arg_1_1;
    ToLua<QPointF*> rslt_1;
};

extern "C" int lqtk_QRectF_topRight(lua_State* L)
{
    lqtk_QRectF_topRight_Args  argValues;
    lqtk_QRectF_topRight_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::topRight();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "topRight", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_translate_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<double> arg_2_1;
    FromLua<double> arg_2_2;
    FromLua<QPointF*> arg_3_1;
};

extern "C" int lqtk_QRectF_translate(lua_State* L)
{
    lqtk_QRectF_translate_Args  argValues;
    lqtk_QRectF_translate_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QRectF::translate(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRectF::translate(*args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "translate", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_translated_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<double> arg_2_1;
    FromLua<double> arg_2_2;
    FromLua<QPointF*> arg_3_1;
    ToLua<QRectF*> rslt_1;
};

extern "C" int lqtk_QRectF_translated(lua_State* L)
{
    lqtk_QRectF_translated_Args  argValues;
    lqtk_QRectF_translated_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::translated(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::translated(*args->arg_3_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "translated", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_transposed_Args
{
    FromLua<QRectF*> arg_1_1;
    ToLua<QRectF*> rslt_1;
};

extern "C" int lqtk_QRectF_transposed(lua_State* L)
{
    lqtk_QRectF_transposed_Args  argValues;
    lqtk_QRectF_transposed_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::transposed();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "transposed", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_united_Args
{
    FromLua<QRectF*> arg_1_1;
    FromLua<QRectF*> arg_2_1;
    ToLua<QRectF*> rslt_1;
};

extern "C" int lqtk_QRectF_united(lua_State* L)
{
    lqtk_QRectF_united_Args  argValues;
    lqtk_QRectF_united_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::united(*args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "united", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_width_Args
{
    FromLua<QRectF*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QRectF_width(lua_State* L)
{
    lqtk_QRectF_width_Args  argValues;
    lqtk_QRectF_width_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::width();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "width", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_x_Args
{
    FromLua<QRectF*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QRectF_x(lua_State* L)
{
    lqtk_QRectF_x_Args  argValues;
    lqtk_QRectF_x_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::x();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "x", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_y_Args
{
    FromLua<QRectF*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QRectF_y(lua_State* L)
{
    lqtk_QRectF_y_Args  argValues;
    lqtk_QRectF_y_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRectF::y();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRectF", "y", nargs, "1");
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
        QRectFBinding::QType* ptr = static_cast<QRectFBinding::QType*>(objectPtr);
        if (targetClassInfo == &QRectFBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QRectF* ptr = (QRectF*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QRectF_new_Args
{
    FromLua<QRect*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
    FromLua<QPointF*> arg_2_2;
    FromLua<QSizeF*> arg_3_1;
    FromLua<double> arg_4_1;
    FromLua<double> arg_4_2;
    FromLua<double> arg_4_3;
    FromLua<double> arg_4_4;
    ToLua<QRectF*> rslt_1;
};

extern "C" int lqtk_QRectF_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QRectF_new_Args  argValues;
    lqtk_QRectF_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QRectFBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QRectF> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QRectF* rslt = 
                    new QRectF();
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
                QRectF* rslt = 
                    new QRectF(*args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            if (!args->arg_2_2.test(L, argOffs+2)) break;
            {
                QRectF* rslt = 
                    new QRectF(*args->arg_2_1.getValue(), *args->arg_2_2.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                QRectF* rslt = 
                    new QRectF(*args->arg_2_1.getValue(), *args->arg_3_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_2_1.check(L, argOffs+1);
            args->arg_2_2.check(L, argOffs+2);
            assert(false);
        }
        if (nargs == 4) { do {
            args->arg_4_1.check(L, argOffs+1);
            args->arg_4_2.check(L, argOffs+2);
            args->arg_4_3.check(L, argOffs+3);
            args->arg_4_4.check(L, argOffs+4);
            {
                QRectF* rslt = 
                    new QRectF(args->arg_4_1.getValue(), args->arg_4_2.getValue(), args->arg_4_3.getValue(), args->arg_4_4.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QRectF", "new", nargs, "1,2,3,5");
        } else {
            return util::argCountError(L, "QRectF", nullptr, nargs, "0,1,2,4");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QRectF_new(lua_State* L)
{
    return lqtk_QRectF_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QRectFBinding::pushObject(lua_State* L, QRectF* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QRectF>(L, hasUserValue);     // -> uval?, udata
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
    { "adjust",          Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_adjust },
    { "adjusted",        Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_adjusted },
    { "bottom",          Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_bottom },
    { "bottomLeft",      Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_bottomLeft },
    { "bottomRight",     Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_bottomRight },
    { "center",          Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_center },
    { "contains",        Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_contains },
    { "getCoords",       Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_getCoords },
    { "getRect",         Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_getRect },
    { "height",          Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_height },
    { "intersected",     Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_intersected },
    { "intersects",      Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_intersects },
    { "isEmpty",         Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_isEmpty },
    { "isNull",          Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_isNull },
    { "isValid",         Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_isValid },
    { "left",            Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_left },
    { "moveBottom",      Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_moveBottom },
    { "moveBottomLeft",  Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_moveBottomLeft },
    { "moveBottomRight", Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_moveBottomRight },
    { "moveCenter",      Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_moveCenter },
    { "moveLeft",        Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_moveLeft },
    { "moveRight",       Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_moveRight },
    { "moveTo",          Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_moveTo },
    { "moveTop",         Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_moveTop },
    { "moveTopLeft",     Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_moveTopLeft },
    { "moveTopRight",    Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_moveTopRight },
    { "normalized",      Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_normalized },
    { "right",           Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_right },
    { "setBottom",       Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_setBottom },
    { "setBottomLeft",   Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_setBottomLeft },
    { "setBottomRight",  Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_setBottomRight },
    { "setCoords",       Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_setCoords },
    { "setHeight",       Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_setHeight },
    { "setLeft",         Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_setLeft },
    { "setRect",         Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_setRect },
    { "setRight",        Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_setRight },
    { "setSize",         Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_setSize },
    { "setTop",          Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_setTop },
    { "setTopLeft",      Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_setTopLeft },
    { "setTopRight",     Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_setTopRight },
    { "setWidth",        Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_setWidth },
    { "setX",            Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_setX },
    { "setY",            Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_setY },
    { "size",            Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_size },
    { "toAlignedRect",   Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_toAlignedRect },
    { "toRect",          Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_toRect },
    { "top",             Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_top },
    { "topLeft",         Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_topLeft },
    { "topRight",        Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_topRight },
    { "translate",       Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_translate },
    { "translated",      Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_translated },
    { "transposed",      Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_transposed },
    { "united",          Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_united },
    { "width",           Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_width },
    { "x",               Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_x },
    { "y",               Member::NORMAL_FUNCTION,      (void*) lqtk_QRectF_y },
    { NULL,              Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QRectFBinding::classInfo = 
{
    "QRectF",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QRectF_constructor,
    lqtk_QRectF_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    56,
    members
};

/* ============================================================================================ */

int QRectFBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
