// Type: QFontDatabase
// Base: nil

/* ============================================================================================ */

#include <QByteArray>
#include <QChar>
#include <QFont>
#include <QFontDatabase>
#include <QObject>
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
#include "QByteArrayBinding.hpp"
#include "QCharBinding.hpp"
#include "QFontBinding.hpp"
#include "QFontDatabaseBinding.hpp"
#include "QObjectBinding.hpp"
#include "QStringBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QFontDatabase_addApplicationEmojiFontFamily_Args
{
    FromLua<QString> arg_1_1;
};

static int lqtk_QFontDatabase_addApplicationEmojiFontFamily_doLua(lua_State* L)
{
    lqtk_QFontDatabase_addApplicationEmojiFontFamily_Args* args = (lqtk_QFontDatabase_addApplicationEmojiFontFamily_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    QFontDatabase::addApplicationEmojiFontFamily(args->arg_1_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "addApplicationEmojiFontFamily", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_addApplicationEmojiFontFamily(lua_State* L)
{
    try {
        lqtk_QFontDatabase_addApplicationEmojiFontFamily_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_addApplicationEmojiFontFamily_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_addApplicationFallbackFontFamily_Args
{
    FromLua<QChar::Script> arg_1_1;
    FromLua<QString> arg_2_1;
};

static int lqtk_QFontDatabase_addApplicationFallbackFontFamily_doLua(lua_State* L)
{
    lqtk_QFontDatabase_addApplicationFallbackFontFamily_Args* args = (lqtk_QFontDatabase_addApplicationFallbackFontFamily_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    QFontDatabase::addApplicationFallbackFontFamily(args->arg_1_1.getValue(), args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "addApplicationFallbackFontFamily", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_addApplicationFallbackFontFamily(lua_State* L)
{
    try {
        lqtk_QFontDatabase_addApplicationFallbackFontFamily_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_addApplicationFallbackFontFamily_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_addApplicationFont_Args
{
    FromLua<QString> arg_1_1;
    ToLua<int> rslt_1;
};

static int lqtk_QFontDatabase_addApplicationFont_doLua(lua_State* L)
{
    lqtk_QFontDatabase_addApplicationFont_Args* args = (lqtk_QFontDatabase_addApplicationFont_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QFontDatabase::addApplicationFont(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "addApplicationFont", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_addApplicationFont(lua_State* L)
{
    try {
        lqtk_QFontDatabase_addApplicationFont_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_addApplicationFont_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_addApplicationFontFromData_Args
{
    FromLua<QByteArray*> arg_1_1;
    ToLua<int> rslt_1;
};

static int lqtk_QFontDatabase_addApplicationFontFromData_doLua(lua_State* L)
{
    lqtk_QFontDatabase_addApplicationFontFromData_Args* args = (lqtk_QFontDatabase_addApplicationFontFromData_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QFontDatabase::addApplicationFontFromData(*args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "addApplicationFontFromData", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_addApplicationFontFromData(lua_State* L)
{
    try {
        lqtk_QFontDatabase_addApplicationFontFromData_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_addApplicationFontFromData_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_applicationEmojiFontFamilies_Args
{
    ToLua<QStringList> rslt_1;
};

static int lqtk_QFontDatabase_applicationEmojiFontFamilies_doLua(lua_State* L)
{
    lqtk_QFontDatabase_applicationEmojiFontFamilies_Args* args = (lqtk_QFontDatabase_applicationEmojiFontFamilies_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QFontDatabase::applicationEmojiFontFamilies();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "applicationEmojiFontFamilies", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_applicationEmojiFontFamilies(lua_State* L)
{
    try {
        lqtk_QFontDatabase_applicationEmojiFontFamilies_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_applicationEmojiFontFamilies_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_applicationFallbackFontFamilies_Args
{
    FromLua<QChar::Script> arg_1_1;
    ToLua<QStringList> rslt_1;
};

static int lqtk_QFontDatabase_applicationFallbackFontFamilies_doLua(lua_State* L)
{
    lqtk_QFontDatabase_applicationFallbackFontFamilies_Args* args = (lqtk_QFontDatabase_applicationFallbackFontFamilies_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QFontDatabase::applicationFallbackFontFamilies(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "applicationFallbackFontFamilies", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_applicationFallbackFontFamilies(lua_State* L)
{
    try {
        lqtk_QFontDatabase_applicationFallbackFontFamilies_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_applicationFallbackFontFamilies_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_applicationFontFamilies_Args
{
    FromLua<int> arg_1_1;
    ToLua<QStringList> rslt_1;
};

static int lqtk_QFontDatabase_applicationFontFamilies_doLua(lua_State* L)
{
    lqtk_QFontDatabase_applicationFontFamilies_Args* args = (lqtk_QFontDatabase_applicationFontFamilies_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QFontDatabase::applicationFontFamilies(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "applicationFontFamilies", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_applicationFontFamilies(lua_State* L)
{
    try {
        lqtk_QFontDatabase_applicationFontFamilies_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_applicationFontFamilies_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_bold_Args
{
    FromLua<QString> arg_1_1;
    FromLua<QString> arg_1_2;
    ToLua<bool> rslt_1;
};

static int lqtk_QFontDatabase_bold_doLua(lua_State* L)
{
    lqtk_QFontDatabase_bold_Args* args = (lqtk_QFontDatabase_bold_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QFontDatabase::bold(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "bold", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_bold(lua_State* L)
{
    try {
        lqtk_QFontDatabase_bold_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_bold_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_families_Args
{
    FromLua<QFontDatabase::WritingSystem> arg_1_1;
    ToLua<QStringList> rslt_1;
};

static int lqtk_QFontDatabase_families_doLua(lua_State* L)
{
    lqtk_QFontDatabase_families_Args* args = (lqtk_QFontDatabase_families_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QFontDatabase::families();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QFontDatabase::families(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "families", nargs, "0,1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_families(lua_State* L)
{
    try {
        lqtk_QFontDatabase_families_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_families_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_font_Args
{
    FromLua<QString> arg_1_1;
    FromLua<QString> arg_1_2;
    FromLua<int> arg_2_1;
    ToLua<QFont*> rslt_1;
};

static int lqtk_QFontDatabase_font_doLua(lua_State* L)
{
    lqtk_QFontDatabase_font_Args* args = (lqtk_QFontDatabase_font_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            args->arg_2_1.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    QFontDatabase::font(args->arg_1_1.getValue(), args->arg_1_2.getValue(), args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "font", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_font(lua_State* L)
{
    try {
        lqtk_QFontDatabase_font_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_font_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_isBitmapScalable_Args
{
    FromLua<QString> arg_1_1;
    FromLua<QString> arg_1_2;
    ToLua<bool> rslt_1;
};

static int lqtk_QFontDatabase_isBitmapScalable_doLua(lua_State* L)
{
    lqtk_QFontDatabase_isBitmapScalable_Args* args = (lqtk_QFontDatabase_isBitmapScalable_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QFontDatabase::isBitmapScalable(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QFontDatabase::isBitmapScalable(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "isBitmapScalable", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_isBitmapScalable(lua_State* L)
{
    try {
        lqtk_QFontDatabase_isBitmapScalable_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_isBitmapScalable_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_isFixedPitch_Args
{
    FromLua<QString> arg_1_1;
    FromLua<QString> arg_1_2;
    ToLua<bool> rslt_1;
};

static int lqtk_QFontDatabase_isFixedPitch_doLua(lua_State* L)
{
    lqtk_QFontDatabase_isFixedPitch_Args* args = (lqtk_QFontDatabase_isFixedPitch_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QFontDatabase::isFixedPitch(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QFontDatabase::isFixedPitch(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "isFixedPitch", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_isFixedPitch(lua_State* L)
{
    try {
        lqtk_QFontDatabase_isFixedPitch_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_isFixedPitch_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_isPrivateFamily_Args
{
    FromLua<QString> arg_1_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QFontDatabase_isPrivateFamily_doLua(lua_State* L)
{
    lqtk_QFontDatabase_isPrivateFamily_Args* args = (lqtk_QFontDatabase_isPrivateFamily_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QFontDatabase::isPrivateFamily(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "isPrivateFamily", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_isPrivateFamily(lua_State* L)
{
    try {
        lqtk_QFontDatabase_isPrivateFamily_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_isPrivateFamily_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_isScalable_Args
{
    FromLua<QString> arg_1_1;
    FromLua<QString> arg_1_2;
    ToLua<bool> rslt_1;
};

static int lqtk_QFontDatabase_isScalable_doLua(lua_State* L)
{
    lqtk_QFontDatabase_isScalable_Args* args = (lqtk_QFontDatabase_isScalable_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QFontDatabase::isScalable(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QFontDatabase::isScalable(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "isScalable", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_isScalable(lua_State* L)
{
    try {
        lqtk_QFontDatabase_isScalable_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_isScalable_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_isSmoothlyScalable_Args
{
    FromLua<QString> arg_1_1;
    FromLua<QString> arg_1_2;
    ToLua<bool> rslt_1;
};

static int lqtk_QFontDatabase_isSmoothlyScalable_doLua(lua_State* L)
{
    lqtk_QFontDatabase_isSmoothlyScalable_Args* args = (lqtk_QFontDatabase_isSmoothlyScalable_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QFontDatabase::isSmoothlyScalable(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QFontDatabase::isSmoothlyScalable(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "isSmoothlyScalable", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_isSmoothlyScalable(lua_State* L)
{
    try {
        lqtk_QFontDatabase_isSmoothlyScalable_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_isSmoothlyScalable_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_italic_Args
{
    FromLua<QString> arg_1_1;
    FromLua<QString> arg_1_2;
    ToLua<bool> rslt_1;
};

static int lqtk_QFontDatabase_italic_doLua(lua_State* L)
{
    lqtk_QFontDatabase_italic_Args* args = (lqtk_QFontDatabase_italic_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QFontDatabase::italic(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "italic", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_italic(lua_State* L)
{
    try {
        lqtk_QFontDatabase_italic_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_italic_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_pointSizes_Args
{
    FromLua<QString> arg_1_1;
    FromLua<QString> arg_1_2;
    ToLua<QList<int>> rslt_1;
};

static int lqtk_QFontDatabase_pointSizes_doLua(lua_State* L)
{
    lqtk_QFontDatabase_pointSizes_Args* args = (lqtk_QFontDatabase_pointSizes_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QFontDatabase::pointSizes(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QFontDatabase::pointSizes(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "pointSizes", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_pointSizes(lua_State* L)
{
    try {
        lqtk_QFontDatabase_pointSizes_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_pointSizes_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_removeAllApplicationFonts_Args
{
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFontDatabase_removeAllApplicationFonts(lua_State* L)
{
    lqtk_QFontDatabase_removeAllApplicationFonts_Args  argValues;
    lqtk_QFontDatabase_removeAllApplicationFonts_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QFontDatabase::removeAllApplicationFonts();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "removeAllApplicationFonts", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_removeApplicationEmojiFontFamily_Args
{
    FromLua<QString> arg_1_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QFontDatabase_removeApplicationEmojiFontFamily_doLua(lua_State* L)
{
    lqtk_QFontDatabase_removeApplicationEmojiFontFamily_Args* args = (lqtk_QFontDatabase_removeApplicationEmojiFontFamily_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QFontDatabase::removeApplicationEmojiFontFamily(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "removeApplicationEmojiFontFamily", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_removeApplicationEmojiFontFamily(lua_State* L)
{
    try {
        lqtk_QFontDatabase_removeApplicationEmojiFontFamily_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_removeApplicationEmojiFontFamily_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_removeApplicationFallbackFontFamily_Args
{
    FromLua<QChar::Script> arg_1_1;
    FromLua<QString> arg_2_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QFontDatabase_removeApplicationFallbackFontFamily_doLua(lua_State* L)
{
    lqtk_QFontDatabase_removeApplicationFallbackFontFamily_Args* args = (lqtk_QFontDatabase_removeApplicationFallbackFontFamily_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QFontDatabase::removeApplicationFallbackFontFamily(args->arg_1_1.getValue(), args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "removeApplicationFallbackFontFamily", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_removeApplicationFallbackFontFamily(lua_State* L)
{
    try {
        lqtk_QFontDatabase_removeApplicationFallbackFontFamily_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_removeApplicationFallbackFontFamily_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_removeApplicationFont_Args
{
    FromLua<int> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFontDatabase_removeApplicationFont(lua_State* L)
{
    lqtk_QFontDatabase_removeApplicationFont_Args  argValues;
    lqtk_QFontDatabase_removeApplicationFont_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QFontDatabase::removeApplicationFont(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "removeApplicationFont", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_setApplicationEmojiFontFamilies_Args
{
    FromLua<QStringList> arg_1_1;
};

static int lqtk_QFontDatabase_setApplicationEmojiFontFamilies_doLua(lua_State* L)
{
    lqtk_QFontDatabase_setApplicationEmojiFontFamilies_Args* args = (lqtk_QFontDatabase_setApplicationEmojiFontFamilies_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    QFontDatabase::setApplicationEmojiFontFamilies(args->arg_1_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "setApplicationEmojiFontFamilies", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_setApplicationEmojiFontFamilies(lua_State* L)
{
    try {
        lqtk_QFontDatabase_setApplicationEmojiFontFamilies_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_setApplicationEmojiFontFamilies_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_setApplicationFallbackFontFamilies_Args
{
    FromLua<QChar::Script> arg_1_1;
    FromLua<QStringList> arg_2_1;
};

static int lqtk_QFontDatabase_setApplicationFallbackFontFamilies_doLua(lua_State* L)
{
    lqtk_QFontDatabase_setApplicationFallbackFontFamilies_Args* args = (lqtk_QFontDatabase_setApplicationFallbackFontFamilies_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    QFontDatabase::setApplicationFallbackFontFamilies(args->arg_1_1.getValue(), args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "setApplicationFallbackFontFamilies", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_setApplicationFallbackFontFamilies(lua_State* L)
{
    try {
        lqtk_QFontDatabase_setApplicationFallbackFontFamilies_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_setApplicationFallbackFontFamilies_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_smoothSizes_Args
{
    FromLua<QString> arg_1_1;
    FromLua<QString> arg_1_2;
    ToLua<QList<int>> rslt_1;
};

static int lqtk_QFontDatabase_smoothSizes_doLua(lua_State* L)
{
    lqtk_QFontDatabase_smoothSizes_Args* args = (lqtk_QFontDatabase_smoothSizes_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QFontDatabase::smoothSizes(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "smoothSizes", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_smoothSizes(lua_State* L)
{
    try {
        lqtk_QFontDatabase_smoothSizes_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_smoothSizes_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_standardSizes_Args
{
    ToLua<QList<int>> rslt_1;
};

static int lqtk_QFontDatabase_standardSizes_doLua(lua_State* L)
{
    lqtk_QFontDatabase_standardSizes_Args* args = (lqtk_QFontDatabase_standardSizes_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QFontDatabase::standardSizes();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "standardSizes", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_standardSizes(lua_State* L)
{
    try {
        lqtk_QFontDatabase_standardSizes_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_standardSizes_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_styleString_Args
{
    FromLua<QFont*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QFontDatabase_styleString_doLua(lua_State* L)
{
    lqtk_QFontDatabase_styleString_Args* args = (lqtk_QFontDatabase_styleString_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QFontDatabase::styleString(*args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "styleString", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_styleString(lua_State* L)
{
    try {
        lqtk_QFontDatabase_styleString_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_styleString_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_styles_Args
{
    FromLua<QString> arg_1_1;
    ToLua<QStringList> rslt_1;
};

static int lqtk_QFontDatabase_styles_doLua(lua_State* L)
{
    lqtk_QFontDatabase_styles_Args* args = (lqtk_QFontDatabase_styles_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QFontDatabase::styles(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "styles", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_styles(lua_State* L)
{
    try {
        lqtk_QFontDatabase_styles_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_styles_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_systemFont_Args
{
    FromLua<QFontDatabase::SystemFont> arg_1_1;
    ToLua<QFont*> rslt_1;
};

extern "C" int lqtk_QFontDatabase_systemFont(lua_State* L)
{
    lqtk_QFontDatabase_systemFont_Args  argValues;
    lqtk_QFontDatabase_systemFont_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QFontDatabase::systemFont(args->arg_1_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "systemFont", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_weight_Args
{
    FromLua<QString> arg_1_1;
    FromLua<QString> arg_1_2;
    ToLua<int> rslt_1;
};

static int lqtk_QFontDatabase_weight_doLua(lua_State* L)
{
    lqtk_QFontDatabase_weight_Args* args = (lqtk_QFontDatabase_weight_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QFontDatabase::weight(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "weight", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_weight(lua_State* L)
{
    try {
        lqtk_QFontDatabase_weight_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_weight_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_writingSystemName_Args
{
    FromLua<QFontDatabase::WritingSystem> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QFontDatabase_writingSystemName_doLua(lua_State* L)
{
    lqtk_QFontDatabase_writingSystemName_Args* args = (lqtk_QFontDatabase_writingSystemName_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QFontDatabase::writingSystemName(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "writingSystemName", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_writingSystemName(lua_State* L)
{
    try {
        lqtk_QFontDatabase_writingSystemName_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_writingSystemName_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_writingSystemSample_Args
{
    FromLua<QFontDatabase::WritingSystem> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QFontDatabase_writingSystemSample_doLua(lua_State* L)
{
    lqtk_QFontDatabase_writingSystemSample_Args* args = (lqtk_QFontDatabase_writingSystemSample_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QFontDatabase::writingSystemSample(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "writingSystemSample", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_writingSystemSample(lua_State* L)
{
    try {
        lqtk_QFontDatabase_writingSystemSample_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_writingSystemSample_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFontDatabase_writingSystems_Args
{
    FromLua<QString> arg_1_1;
    ToLua<QList<int>> rslt_1;
};

static int lqtk_QFontDatabase_writingSystems_doLua(lua_State* L)
{
    lqtk_QFontDatabase_writingSystems_Args* args = (lqtk_QFontDatabase_writingSystems_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QFontDatabase::writingSystems();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QFontDatabase::writingSystems(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFontDatabase", "writingSystems", nargs, "0,1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFontDatabase_writingSystems(lua_State* L)
{
    try {
        lqtk_QFontDatabase_writingSystems_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFontDatabase_writingSystems_doLua, &args);
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
        QFontDatabaseBinding::QType* ptr = static_cast<QFontDatabaseBinding::QType*>(objectPtr);
        if (targetClassInfo == &QFontDatabaseBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

ObjectUdata* QFontDatabaseBinding::pushObject(lua_State* L, QFontDatabase* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QFontDatabase>(L, hasUserValue);     // -> uval?, udata
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
    { "Any",                                 Member::INTEGER,              (void*) QFontDatabase::Any },
    { "Arabic",                              Member::INTEGER,              (void*) QFontDatabase::Arabic },
    { "Armenian",                            Member::INTEGER,              (void*) QFontDatabase::Armenian },
    { "Bengali",                             Member::INTEGER,              (void*) QFontDatabase::Bengali },
    { "Cyrillic",                            Member::INTEGER,              (void*) QFontDatabase::Cyrillic },
    { "Devanagari",                          Member::INTEGER,              (void*) QFontDatabase::Devanagari },
    { "FixedFont",                           Member::INTEGER,              (void*) QFontDatabase::FixedFont },
    { "GeneralFont",                         Member::INTEGER,              (void*) QFontDatabase::GeneralFont },
    { "Georgian",                            Member::INTEGER,              (void*) QFontDatabase::Georgian },
    { "Greek",                               Member::INTEGER,              (void*) QFontDatabase::Greek },
    { "Gujarati",                            Member::INTEGER,              (void*) QFontDatabase::Gujarati },
    { "Gurmukhi",                            Member::INTEGER,              (void*) QFontDatabase::Gurmukhi },
    { "Hebrew",                              Member::INTEGER,              (void*) QFontDatabase::Hebrew },
    { "Japanese",                            Member::INTEGER,              (void*) QFontDatabase::Japanese },
    { "Kannada",                             Member::INTEGER,              (void*) QFontDatabase::Kannada },
    { "Khmer",                               Member::INTEGER,              (void*) QFontDatabase::Khmer },
    { "Korean",                              Member::INTEGER,              (void*) QFontDatabase::Korean },
    { "Lao",                                 Member::INTEGER,              (void*) QFontDatabase::Lao },
    { "Latin",                               Member::INTEGER,              (void*) QFontDatabase::Latin },
    { "Malayalam",                           Member::INTEGER,              (void*) QFontDatabase::Malayalam },
    { "Myanmar",                             Member::INTEGER,              (void*) QFontDatabase::Myanmar },
    { "Nko",                                 Member::INTEGER,              (void*) QFontDatabase::Nko },
    { "Ogham",                               Member::INTEGER,              (void*) QFontDatabase::Ogham },
    { "Oriya",                               Member::INTEGER,              (void*) QFontDatabase::Oriya },
    { "Other",                               Member::INTEGER,              (void*) QFontDatabase::Other },
    { "Runic",                               Member::INTEGER,              (void*) QFontDatabase::Runic },
    { "SimplifiedChinese",                   Member::INTEGER,              (void*) QFontDatabase::SimplifiedChinese },
    { "Sinhala",                             Member::INTEGER,              (void*) QFontDatabase::Sinhala },
    { "SmallestReadableFont",                Member::INTEGER,              (void*) QFontDatabase::SmallestReadableFont },
    { "Symbol",                              Member::INTEGER,              (void*) QFontDatabase::Symbol },
    { "Syriac",                              Member::INTEGER,              (void*) QFontDatabase::Syriac },
    { "Tamil",                               Member::INTEGER,              (void*) QFontDatabase::Tamil },
    { "Telugu",                              Member::INTEGER,              (void*) QFontDatabase::Telugu },
    { "Thaana",                              Member::INTEGER,              (void*) QFontDatabase::Thaana },
    { "Thai",                                Member::INTEGER,              (void*) QFontDatabase::Thai },
    { "Tibetan",                             Member::INTEGER,              (void*) QFontDatabase::Tibetan },
    { "TitleFont",                           Member::INTEGER,              (void*) QFontDatabase::TitleFont },
    { "TraditionalChinese",                  Member::INTEGER,              (void*) QFontDatabase::TraditionalChinese },
    { "Vietnamese",                          Member::INTEGER,              (void*) QFontDatabase::Vietnamese },
    { "addApplicationEmojiFontFamily",       Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_addApplicationEmojiFontFamily },
    { "addApplicationFallbackFontFamily",    Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_addApplicationFallbackFontFamily },
    { "addApplicationFont",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_addApplicationFont },
    { "addApplicationFontFromData",          Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_addApplicationFontFromData },
    { "applicationEmojiFontFamilies",        Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_applicationEmojiFontFamilies },
    { "applicationFallbackFontFamilies",     Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_applicationFallbackFontFamilies },
    { "applicationFontFamilies",             Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_applicationFontFamilies },
    { "bold",                                Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_bold },
    { "families",                            Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_families },
    { "font",                                Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_font },
    { "isBitmapScalable",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_isBitmapScalable },
    { "isFixedPitch",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_isFixedPitch },
    { "isPrivateFamily",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_isPrivateFamily },
    { "isScalable",                          Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_isScalable },
    { "isSmoothlyScalable",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_isSmoothlyScalable },
    { "italic",                              Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_italic },
    { "pointSizes",                          Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_pointSizes },
    { "removeAllApplicationFonts",           Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_removeAllApplicationFonts },
    { "removeApplicationEmojiFontFamily",    Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_removeApplicationEmojiFontFamily },
    { "removeApplicationFallbackFontFamily", Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_removeApplicationFallbackFontFamily },
    { "removeApplicationFont",               Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_removeApplicationFont },
    { "setApplicationEmojiFontFamilies",     Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_setApplicationEmojiFontFamilies },
    { "setApplicationFallbackFontFamilies",  Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_setApplicationFallbackFontFamilies },
    { "smoothSizes",                         Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_smoothSizes },
    { "standardSizes",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_standardSizes },
    { "styleString",                         Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_styleString },
    { "styles",                              Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_styles },
    { "systemFont",                          Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_systemFont },
    { "weight",                              Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_weight },
    { "writingSystemName",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_writingSystemName },
    { "writingSystemSample",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_writingSystemSample },
    { "writingSystems",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QFontDatabase_writingSystems },
    { NULL,                                  Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QFontDatabaseBinding::classInfo = 
{
    "QFontDatabase",

    NULL,

    false, // isQObject
    false, // needsGuard
    NULL, // constructFunc
    NULL, // newFunc
    castFunction,
    NULL, // deleteFunction
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    71,
    members
};

/* ============================================================================================ */

int QFontDatabaseBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
