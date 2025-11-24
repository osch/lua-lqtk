// Type: QPixmap
// Base: nil

/* ============================================================================================ */

#include <QColor>
#include <QObject>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QSizeF>
#include <QString>
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
#include "ObjectGuard.hpp"
#include "QColorBinding.hpp"
#include "QObjectBinding.hpp"
#include "QPixmapBinding.hpp"
#include "QRectBinding.hpp"
#include "QSizeBinding.hpp"
#include "QSizeFBinding.hpp"
#include "QStringBinding.hpp"
#include "QtBinding.hpp"
#include "QPixmapWrapperBase.hpp"
#include "QPixmapWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QPixmapWrapper::QPixmapWrapper()
        : QPixmapWrapperBase()
    {}
    QPixmapWrapper::QPixmapWrapper(
                   int arg1, 
                   int arg2) 
        : QPixmapWrapperBase(
                   arg1,
                   arg2)
    {}
    QPixmapWrapper::QPixmapWrapper(
                   QString arg1) 
        : QPixmapWrapperBase(
                   arg1)
    {}
    QPixmapWrapper::QPixmapWrapper(
                   QSize arg1) 
        : QPixmapWrapperBase(
                   arg1)
    {}
    QPixmapWrapper::QPixmapWrapper(
                   QPixmap arg1) 
        : QPixmapWrapperBase(
                   arg1)
    {}

/* -------------------------------------------------------------------------------------------- */

    QPixmapWrapper::~QPixmapWrapper() {
        trace::printf("Deleting lqtk::QPixmapWrapper: %p\n", this);
    }

} // namespace lqtk

/* ============================================================================================ */


struct lqtk_QPixmap_defaultDepth_Args
{
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QPixmap_defaultDepth(lua_State* L)
{
    lqtk_QPixmap_defaultDepth_Args  argValues;
    lqtk_QPixmap_defaultDepth_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QPixmap::defaultDepth();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPixmap", "defaultDepth", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPixmap_deviceIndependentSize_Args
{
    FromLua<QPixmap*> arg_1_1;
    ToLua<QSizeF*> rslt_1;
};

extern "C" int lqtk_QPixmap_deviceIndependentSize(lua_State* L)
{
    lqtk_QPixmap_deviceIndependentSize_Args  argValues;
    lqtk_QPixmap_deviceIndependentSize_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPixmap::deviceIndependentSize();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPixmap", "deviceIndependentSize", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPixmap_devicePixelRatio_Args
{
    FromLua<QPixmap*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QPixmap_devicePixelRatio(lua_State* L)
{
    lqtk_QPixmap_devicePixelRatio_Args  argValues;
    lqtk_QPixmap_devicePixelRatio_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPixmap::devicePixelRatio();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPixmap", "devicePixelRatio", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPixmap_fill_Args
{
    FromLua<QPixmap*> arg_1_1;
    FromLua<QColor*> arg_2_1;
    FromLua<Qt::GlobalColor> arg_3_1;
};

extern "C" int lqtk_QPixmap_fill(lua_State* L)
{
    lqtk_QPixmap_fill_Args  argValues;
    lqtk_QPixmap_fill_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QPixmap::fill();
                return 0;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                    args->arg_1_1.getValue()->QPixmap::fill(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                    args->arg_1_1.getValue()->QPixmap::fill(args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QPixmap", "fill", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPixmap_hasAlpha_Args
{
    FromLua<QPixmap*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QPixmap_hasAlpha(lua_State* L)
{
    lqtk_QPixmap_hasAlpha_Args  argValues;
    lqtk_QPixmap_hasAlpha_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPixmap::hasAlpha();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPixmap", "hasAlpha", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPixmap_hasAlphaChannel_Args
{
    FromLua<QPixmap*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QPixmap_hasAlphaChannel(lua_State* L)
{
    lqtk_QPixmap_hasAlphaChannel_Args  argValues;
    lqtk_QPixmap_hasAlphaChannel_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPixmap::hasAlphaChannel();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPixmap", "hasAlphaChannel", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPixmap_height_Args
{
    FromLua<QPixmap*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QPixmap_height(lua_State* L)
{
    lqtk_QPixmap_height_Args  argValues;
    lqtk_QPixmap_height_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPixmap::height();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPixmap", "height", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPixmap_isNull_Args
{
    FromLua<QPixmap*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QPixmap_isNull(lua_State* L)
{
    lqtk_QPixmap_isNull_Args  argValues;
    lqtk_QPixmap_isNull_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPixmap::isNull();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPixmap", "isNull", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPixmap_rect_Args
{
    FromLua<QPixmap*> arg_1_1;
    ToLua<QRect*> rslt_1;
};

extern "C" int lqtk_QPixmap_rect(lua_State* L)
{
    lqtk_QPixmap_rect_Args  argValues;
    lqtk_QPixmap_rect_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPixmap::rect();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPixmap", "rect", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPixmap_setDevicePixelRatio_Args
{
    FromLua<QPixmap*> arg_1_1;
    FromLua<double> arg_2_1;
};

extern "C" int lqtk_QPixmap_setDevicePixelRatio(lua_State* L)
{
    lqtk_QPixmap_setDevicePixelRatio_Args  argValues;
    lqtk_QPixmap_setDevicePixelRatio_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QPixmap::setDevicePixelRatio(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QPixmap", "setDevicePixelRatio", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPixmap_size_Args
{
    FromLua<QPixmap*> arg_1_1;
    ToLua<QSize*> rslt_1;
};

extern "C" int lqtk_QPixmap_size(lua_State* L)
{
    lqtk_QPixmap_size_Args  argValues;
    lqtk_QPixmap_size_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPixmap::size();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPixmap", "size", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QPixmap_width_Args
{
    FromLua<QPixmap*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QPixmap_width(lua_State* L)
{
    lqtk_QPixmap_width_Args  argValues;
    lqtk_QPixmap_width_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QPixmap::width();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QPixmap", "width", nargs, "1");
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
        QPixmapBinding::QType* ptr = static_cast<QPixmapBinding::QType*>(objectPtr);
        if (targetClassInfo == &QPixmapBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QPixmap* ptr = (QPixmap*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QPixmap_new_Args
{
    explicit lqtk_QPixmap_new_Args(bool explicitNew)
        : explicitNew(explicitNew)
    {}
    bool explicitNew;
    FromLua<int> arg_1_1;
    FromLua<int> arg_1_2;
    FromLua<QString> arg_2_1;
    FromLua<QSize*> arg_3_1;
    FromLua<QPixmap*> arg_4_1;
    ToLua<QPixmap*> rslt_1;
};

static int lqtk_QPixmap_new_doLua(lua_State* L)
{
    lqtk_QPixmap_new_Args* args = (lqtk_QPixmap_new_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    bool explicitNew = args->explicitNew;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QPixmapBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QPixmap> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QPixmapWrapper* rslt = 
                    new QPixmapWrapper();
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setObjectGuard(L, -1, rslt->lqtk_initObjectGuard((QPixmapWrapperBase*)rslt),
                                             IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                QPixmapWrapper* rslt = 
                    new QPixmapWrapper(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setObjectGuard(L, -1, rslt->lqtk_initObjectGuard((QPixmapWrapperBase*)rslt),
                                             IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                QPixmapWrapper* rslt = 
                    new QPixmapWrapper(args->arg_2_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setObjectGuard(L, -1, rslt->lqtk_initObjectGuard((QPixmapWrapperBase*)rslt),
                                             IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_3_1.test(L, argOffs+1)) break;
            {
                QPixmapWrapper* rslt = 
                    new QPixmapWrapper(*args->arg_3_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setObjectGuard(L, -1, rslt->lqtk_initObjectGuard((QPixmapWrapperBase*)rslt),
                                             IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_4_1.test(L, argOffs+1)) break;
            {
                QPixmapWrapper* rslt = 
                    new QPixmapWrapper(*args->arg_4_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setObjectGuard(L, -1, rslt->lqtk_initObjectGuard((QPixmapWrapperBase*)rslt),
                                             IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_2_1.check(L, argOffs+1);
            assert(false);
        }
        if (explicitNew) {
            return util::argCountError(L, "QPixmap", "new", nargs, "1,2,3");
        } else {
            return util::argCountError(L, "QPixmap", nullptr, nargs, "0,1,2");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QPixmap_constructor(lua_State* L, bool explicitNew)
{
    try {
        lqtk_QPixmap_new_Args args(explicitNew);
        return BindingUtil::callMethodFromLua(L, lqtk_QPixmap_new_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QPixmap_new(lua_State* L)
{
    return lqtk_QPixmap_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */


static const Member members[] =
{
    { "defaultDepth",          Member::NORMAL_FUNCTION,      (void*) lqtk_QPixmap_defaultDepth },
    { "deviceIndependentSize", Member::NORMAL_FUNCTION,      (void*) lqtk_QPixmap_deviceIndependentSize },
    { "devicePixelRatio",      Member::NORMAL_FUNCTION,      (void*) lqtk_QPixmap_devicePixelRatio },
    { "fill",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QPixmap_fill },
    { "hasAlpha",              Member::NORMAL_FUNCTION,      (void*) lqtk_QPixmap_hasAlpha },
    { "hasAlphaChannel",       Member::NORMAL_FUNCTION,      (void*) lqtk_QPixmap_hasAlphaChannel },
    { "height",                Member::NORMAL_FUNCTION,      (void*) lqtk_QPixmap_height },
    { "isNull",                Member::NORMAL_FUNCTION,      (void*) lqtk_QPixmap_isNull },
    { "rect",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QPixmap_rect },
    { "setDevicePixelRatio",   Member::NORMAL_FUNCTION,      (void*) lqtk_QPixmap_setDevicePixelRatio },
    { "size",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QPixmap_size },
    { "width",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QPixmap_width },
    { NULL,                    Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QPixmapBinding::classInfo = 
{
    "QPixmap",

    NULL,

    false, // isQObject
    true,  // needsGuard
    lqtk_QPixmap_constructor,
    lqtk_QPixmap_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    12,
    members
};

/* ============================================================================================ */

int QPixmapBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
