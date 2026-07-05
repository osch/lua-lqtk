// Type: QIcon
// Base: nil

/* ============================================================================================ */

#include <QIcon>
#include <QObject>
#include <QPixmap>
#include <QSize>
#include <QString>

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
#include "QIconBinding.hpp"
#include "QObjectBinding.hpp"
#include "QPixmapBinding.hpp"
#include "QSizeBinding.hpp"
#include "QStringBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QIcon_fallbackSearchPaths_Args
{
    ToLua<QStringList> rslt_1;
};

static int lqtk_QIcon_fallbackSearchPaths_doLua(lua_State* L)
{
    lqtk_QIcon_fallbackSearchPaths_Args* args = (lqtk_QIcon_fallbackSearchPaths_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QIcon::fallbackSearchPaths();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QIcon", "fallbackSearchPaths", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QIcon_fallbackSearchPaths(lua_State* L)
{
    try {
        lqtk_QIcon_fallbackSearchPaths_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QIcon_fallbackSearchPaths_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QIcon_fallbackThemeName_Args
{
    ToLua<QString> rslt_1;
};

static int lqtk_QIcon_fallbackThemeName_doLua(lua_State* L)
{
    lqtk_QIcon_fallbackThemeName_Args* args = (lqtk_QIcon_fallbackThemeName_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QIcon::fallbackThemeName();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QIcon", "fallbackThemeName", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QIcon_fallbackThemeName(lua_State* L)
{
    try {
        lqtk_QIcon_fallbackThemeName_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QIcon_fallbackThemeName_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QIcon_fromTheme_Args
{
    FromLua<QString> arg_1_1;
    FromLua<QIcon*> arg_2_1;
    ToLua<QIcon*> rslt_1;
};

static int lqtk_QIcon_fromTheme_doLua(lua_State* L)
{
    lqtk_QIcon_fromTheme_Args* args = (lqtk_QIcon_fromTheme_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QIcon::fromTheme(args->arg_1_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QIcon::fromTheme(args->arg_1_1.getValue(), *args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QIcon", "fromTheme", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QIcon_fromTheme(lua_State* L)
{
    try {
        lqtk_QIcon_fromTheme_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QIcon_fromTheme_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QIcon_hasThemeIcon_Args
{
    FromLua<QString> arg_1_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QIcon_hasThemeIcon_doLua(lua_State* L)
{
    lqtk_QIcon_hasThemeIcon_Args* args = (lqtk_QIcon_hasThemeIcon_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QIcon::hasThemeIcon(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QIcon", "hasThemeIcon", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QIcon_hasThemeIcon(lua_State* L)
{
    try {
        lqtk_QIcon_hasThemeIcon_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QIcon_hasThemeIcon_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QIcon_setFallbackSearchPaths_Args
{
    FromLua<QStringList> arg_1_1;
};

static int lqtk_QIcon_setFallbackSearchPaths_doLua(lua_State* L)
{
    lqtk_QIcon_setFallbackSearchPaths_Args* args = (lqtk_QIcon_setFallbackSearchPaths_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    QIcon::setFallbackSearchPaths(args->arg_1_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QIcon", "setFallbackSearchPaths", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QIcon_setFallbackSearchPaths(lua_State* L)
{
    try {
        lqtk_QIcon_setFallbackSearchPaths_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QIcon_setFallbackSearchPaths_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QIcon_setFallbackThemeName_Args
{
    FromLua<QString> arg_1_1;
};

static int lqtk_QIcon_setFallbackThemeName_doLua(lua_State* L)
{
    lqtk_QIcon_setFallbackThemeName_Args* args = (lqtk_QIcon_setFallbackThemeName_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    QIcon::setFallbackThemeName(args->arg_1_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QIcon", "setFallbackThemeName", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QIcon_setFallbackThemeName(lua_State* L)
{
    try {
        lqtk_QIcon_setFallbackThemeName_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QIcon_setFallbackThemeName_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QIcon_setThemeName_Args
{
    FromLua<QString> arg_1_1;
};

static int lqtk_QIcon_setThemeName_doLua(lua_State* L)
{
    lqtk_QIcon_setThemeName_Args* args = (lqtk_QIcon_setThemeName_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    QIcon::setThemeName(args->arg_1_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QIcon", "setThemeName", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QIcon_setThemeName(lua_State* L)
{
    try {
        lqtk_QIcon_setThemeName_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QIcon_setThemeName_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QIcon_setThemeSearchPaths_Args
{
    FromLua<QStringList> arg_1_1;
};

static int lqtk_QIcon_setThemeSearchPaths_doLua(lua_State* L)
{
    lqtk_QIcon_setThemeSearchPaths_Args* args = (lqtk_QIcon_setThemeSearchPaths_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    QIcon::setThemeSearchPaths(args->arg_1_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QIcon", "setThemeSearchPaths", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QIcon_setThemeSearchPaths(lua_State* L)
{
    try {
        lqtk_QIcon_setThemeSearchPaths_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QIcon_setThemeSearchPaths_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QIcon_themeName_Args
{
    ToLua<QString> rslt_1;
};

static int lqtk_QIcon_themeName_doLua(lua_State* L)
{
    lqtk_QIcon_themeName_Args* args = (lqtk_QIcon_themeName_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QIcon::themeName();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QIcon", "themeName", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QIcon_themeName(lua_State* L)
{
    try {
        lqtk_QIcon_themeName_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QIcon_themeName_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QIcon_themeSearchPaths_Args
{
    ToLua<QStringList> rslt_1;
};

static int lqtk_QIcon_themeSearchPaths_doLua(lua_State* L)
{
    lqtk_QIcon_themeSearchPaths_Args* args = (lqtk_QIcon_themeSearchPaths_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QIcon::themeSearchPaths();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QIcon", "themeSearchPaths", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QIcon_themeSearchPaths(lua_State* L)
{
    try {
        lqtk_QIcon_themeSearchPaths_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QIcon_themeSearchPaths_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QIcon_actualSize_Args
{
    FromLua<QIcon*> arg_1_1;
    FromLua<QSize*> arg_2_1;
    FromLua<QIcon::Mode> arg_3_1;
    FromLua<QIcon::State> arg_4_1;
    ToLua<QSize*> rslt_1;
};

extern "C" int lqtk_QIcon_actualSize(lua_State* L)
{
    lqtk_QIcon_actualSize_Args  argValues;
    lqtk_QIcon_actualSize_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QIcon::actualSize(*args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QIcon::actualSize(*args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_4_1.check(L, argOffs+4);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QIcon::actualSize(*args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_4_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QIcon", "actualSize", nargs, "2,3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QIcon_addFile_Args
{
    FromLua<QIcon*> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<QSize*> arg_3_1;
    FromLua<QIcon::Mode> arg_4_1;
    FromLua<QIcon::State> arg_5_1;
};

static int lqtk_QIcon_addFile_doLua(lua_State* L)
{
    lqtk_QIcon_addFile_Args* args = (lqtk_QIcon_addFile_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QIcon::addFile(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QIcon::addFile(args->arg_2_1.getValue(), *args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_4_1.check(L, argOffs+4);
            {
                    args->arg_1_1.getValue()->QIcon::addFile(args->arg_2_1.getValue(), *args->arg_3_1.getValue(), args->arg_4_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 5) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_4_1.check(L, argOffs+4);
            args->arg_5_1.check(L, argOffs+5);
            {
                    args->arg_1_1.getValue()->QIcon::addFile(args->arg_2_1.getValue(), *args->arg_3_1.getValue(), args->arg_4_1.getValue(), args->arg_5_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QIcon", "addFile", nargs, "2,3,4,5");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QIcon_addFile(lua_State* L)
{
    try {
        lqtk_QIcon_addFile_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QIcon_addFile_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QIcon_addPixmap_Args
{
    FromLua<QIcon*> arg_1_1;
    FromLua<QPixmap*> arg_2_1;
    FromLua<QIcon::Mode> arg_3_1;
    FromLua<QIcon::State> arg_4_1;
};

extern "C" int lqtk_QIcon_addPixmap(lua_State* L)
{
    lqtk_QIcon_addPixmap_Args  argValues;
    lqtk_QIcon_addPixmap_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QIcon::addPixmap(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QIcon::addPixmap(*args->arg_2_1.getValue(), args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_4_1.check(L, argOffs+4);
            {
                    args->arg_1_1.getValue()->QIcon::addPixmap(*args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_4_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QIcon", "addPixmap", nargs, "2,3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QIcon_availableSizes_Args
{
    FromLua<QIcon*> arg_1_1;
    FromLua<QIcon::Mode> arg_2_1;
    FromLua<QIcon::State> arg_3_1;
    ToLua<QList<QSize>> rslt_1;
};

static int lqtk_QIcon_availableSizes_doLua(lua_State* L)
{
    lqtk_QIcon_availableSizes_Args* args = (lqtk_QIcon_availableSizes_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QIcon::availableSizes();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QIcon::availableSizes(args->arg_2_1.getValue());
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
                    args->arg_1_1.getValue()->QIcon::availableSizes(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QIcon", "availableSizes", nargs, "1,2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QIcon_availableSizes(lua_State* L)
{
    try {
        lqtk_QIcon_availableSizes_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QIcon_availableSizes_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QIcon_cacheKey_Args
{
    FromLua<QIcon*> arg_1_1;
    ToLua<qint64> rslt_1;
};

extern "C" int lqtk_QIcon_cacheKey(lua_State* L)
{
    lqtk_QIcon_cacheKey_Args  argValues;
    lqtk_QIcon_cacheKey_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QIcon::cacheKey();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QIcon", "cacheKey", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QIcon_isMask_Args
{
    FromLua<QIcon*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QIcon_isMask(lua_State* L)
{
    lqtk_QIcon_isMask_Args  argValues;
    lqtk_QIcon_isMask_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QIcon::isMask();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QIcon", "isMask", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QIcon_isNull_Args
{
    FromLua<QIcon*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QIcon_isNull(lua_State* L)
{
    lqtk_QIcon_isNull_Args  argValues;
    lqtk_QIcon_isNull_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QIcon::isNull();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QIcon", "isNull", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QIcon_name_Args
{
    FromLua<QIcon*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QIcon_name_doLua(lua_State* L)
{
    lqtk_QIcon_name_Args* args = (lqtk_QIcon_name_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QIcon::name();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QIcon", "name", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QIcon_name(lua_State* L)
{
    try {
        lqtk_QIcon_name_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QIcon_name_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QIcon_setIsMask_Args
{
    FromLua<QIcon*> arg_1_1;
    FromLua<bool> arg_2_1;
};

extern "C" int lqtk_QIcon_setIsMask(lua_State* L)
{
    lqtk_QIcon_setIsMask_Args  argValues;
    lqtk_QIcon_setIsMask_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QIcon::setIsMask(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QIcon", "setIsMask", nargs, "2");
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
        QIconBinding::QType* ptr = static_cast<QIconBinding::QType*>(objectPtr);
        if (targetClassInfo == &QIconBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QIcon* ptr = (QIcon*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

struct lqtk_QIcon_new_Args
{
    explicit lqtk_QIcon_new_Args(bool explicitNew)
        : explicitNew(explicitNew)
    {}
    bool explicitNew;
    FromLua<QPixmap*> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<QIcon*> arg_3_1;
    ToLua<QIcon*> rslt_1;
};

static int lqtk_QIcon_new_doLua(lua_State* L)
{
    lqtk_QIcon_new_Args* args = (lqtk_QIcon_new_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    bool explicitNew = args->explicitNew;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QIconBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QIcon> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QIcon* rslt = 
                    new QIcon();
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
                QIcon* rslt = 
                    new QIcon(*args->arg_1_1.getValue());
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
                QIcon* rslt = 
                    new QIcon(args->arg_2_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_3_1.test(L, argOffs+1)) break;
            {
                QIcon* rslt = 
                    new QIcon(*args->arg_3_1.getValue());
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
            return util::argCountError(L, "QIcon", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QIcon", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QIcon_constructor(lua_State* L, bool explicitNew)
{
    try {
        lqtk_QIcon_new_Args args(explicitNew);
        return BindingUtil::callMethodFromLua(L, lqtk_QIcon_new_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QIcon_new(lua_State* L)
{
    return lqtk_QIcon_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QIconBinding::pushObject(lua_State* L, QIcon* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QIcon>(L, hasUserValue);     // -> uval?, udata
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
    { "Active",                 Member::INTEGER,              (void*) QIcon::Active },
    { "Disabled",               Member::INTEGER,              (void*) QIcon::Disabled },
    { "Normal",                 Member::INTEGER,              (void*) QIcon::Normal },
    { "Off",                    Member::INTEGER,              (void*) QIcon::Off },
    { "On",                     Member::INTEGER,              (void*) QIcon::On },
    { "Selected",               Member::INTEGER,              (void*) QIcon::Selected },
    { "actualSize",             Member::NORMAL_FUNCTION,      (void*) lqtk_QIcon_actualSize },
    { "addFile",                Member::NORMAL_FUNCTION,      (void*) lqtk_QIcon_addFile },
    { "addPixmap",              Member::NORMAL_FUNCTION,      (void*) lqtk_QIcon_addPixmap },
    { "availableSizes",         Member::NORMAL_FUNCTION,      (void*) lqtk_QIcon_availableSizes },
    { "cacheKey",               Member::NORMAL_FUNCTION,      (void*) lqtk_QIcon_cacheKey },
    { "fallbackSearchPaths",    Member::NORMAL_FUNCTION,      (void*) lqtk_QIcon_fallbackSearchPaths },
    { "fallbackThemeName",      Member::NORMAL_FUNCTION,      (void*) lqtk_QIcon_fallbackThemeName },
    { "fromTheme",              Member::NORMAL_FUNCTION,      (void*) lqtk_QIcon_fromTheme },
    { "hasThemeIcon",           Member::NORMAL_FUNCTION,      (void*) lqtk_QIcon_hasThemeIcon },
    { "isMask",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QIcon_isMask },
    { "isNull",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QIcon_isNull },
    { "name",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QIcon_name },
    { "setFallbackSearchPaths", Member::NORMAL_FUNCTION,      (void*) lqtk_QIcon_setFallbackSearchPaths },
    { "setFallbackThemeName",   Member::NORMAL_FUNCTION,      (void*) lqtk_QIcon_setFallbackThemeName },
    { "setIsMask",              Member::NORMAL_FUNCTION,      (void*) lqtk_QIcon_setIsMask },
    { "setThemeName",           Member::NORMAL_FUNCTION,      (void*) lqtk_QIcon_setThemeName },
    { "setThemeSearchPaths",    Member::NORMAL_FUNCTION,      (void*) lqtk_QIcon_setThemeSearchPaths },
    { "themeName",              Member::NORMAL_FUNCTION,      (void*) lqtk_QIcon_themeName },
    { "themeSearchPaths",       Member::NORMAL_FUNCTION,      (void*) lqtk_QIcon_themeSearchPaths },
    { NULL,                     Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QIconBinding::classInfo = 
{
    "QIcon",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QIcon_constructor,
    lqtk_QIcon_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    25,
    members
};

/* ============================================================================================ */

int QIconBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
