// Type: QDir
// Base: nil

/* ============================================================================================ */

#include <QChar>
#include <QDir>
#include <QFileDevice>
#include <QFileInfo>
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
#include "QCharBinding.hpp"
#include "QDirBinding.hpp"
#include "QFileDeviceBinding.hpp"
#include "QFileInfoBinding.hpp"
#include "QObjectBinding.hpp"
#include "QStringBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QDir_addSearchPath_Args
{
    FromLua<QString> arg_1_1;
    FromLua<QString> arg_1_2;
};

static int lqtk_QDir_addSearchPath_doLua(lua_State* L)
{
    lqtk_QDir_addSearchPath_Args* args = (lqtk_QDir_addSearchPath_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                    QDir::addSearchPath(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "addSearchPath", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_addSearchPath(lua_State* L)
{
    try {
        lqtk_QDir_addSearchPath_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_addSearchPath_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_cleanPath_Args
{
    FromLua<QString> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QDir_cleanPath_doLua(lua_State* L)
{
    lqtk_QDir_cleanPath_Args* args = (lqtk_QDir_cleanPath_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QDir::cleanPath(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "cleanPath", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_cleanPath(lua_State* L)
{
    try {
        lqtk_QDir_cleanPath_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_cleanPath_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_current_Args
{
    ToLua<QDir*> rslt_1;
};

extern "C" int lqtk_QDir_current(lua_State* L)
{
    lqtk_QDir_current_Args  argValues;
    lqtk_QDir_current_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QDir::current();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "current", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_currentPath_Args
{
    ToLua<QString> rslt_1;
};

static int lqtk_QDir_currentPath_doLua(lua_State* L)
{
    lqtk_QDir_currentPath_Args* args = (lqtk_QDir_currentPath_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QDir::currentPath();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "currentPath", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_currentPath(lua_State* L)
{
    try {
        lqtk_QDir_currentPath_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_currentPath_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_drives_Args
{
    ToLua<QList<QFileInfo>> rslt_1;
};

static int lqtk_QDir_drives_doLua(lua_State* L)
{
    lqtk_QDir_drives_Args* args = (lqtk_QDir_drives_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QDir::drives();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "drives", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_drives(lua_State* L)
{
    try {
        lqtk_QDir_drives_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_drives_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_fromNativeSeparators_Args
{
    FromLua<QString> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QDir_fromNativeSeparators_doLua(lua_State* L)
{
    lqtk_QDir_fromNativeSeparators_Args* args = (lqtk_QDir_fromNativeSeparators_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QDir::fromNativeSeparators(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "fromNativeSeparators", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_fromNativeSeparators(lua_State* L)
{
    try {
        lqtk_QDir_fromNativeSeparators_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_fromNativeSeparators_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_home_Args
{
    ToLua<QDir*> rslt_1;
};

extern "C" int lqtk_QDir_home(lua_State* L)
{
    lqtk_QDir_home_Args  argValues;
    lqtk_QDir_home_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QDir::home();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "home", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_homePath_Args
{
    ToLua<QString> rslt_1;
};

static int lqtk_QDir_homePath_doLua(lua_State* L)
{
    lqtk_QDir_homePath_Args* args = (lqtk_QDir_homePath_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QDir::homePath();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "homePath", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_homePath(lua_State* L)
{
    try {
        lqtk_QDir_homePath_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_homePath_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_isAbsolutePath_Args
{
    FromLua<QString> arg_1_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QDir_isAbsolutePath_doLua(lua_State* L)
{
    lqtk_QDir_isAbsolutePath_Args* args = (lqtk_QDir_isAbsolutePath_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QDir::isAbsolutePath(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "isAbsolutePath", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_isAbsolutePath(lua_State* L)
{
    try {
        lqtk_QDir_isAbsolutePath_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_isAbsolutePath_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_isRelativePath_Args
{
    FromLua<QString> arg_1_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QDir_isRelativePath_doLua(lua_State* L)
{
    lqtk_QDir_isRelativePath_Args* args = (lqtk_QDir_isRelativePath_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QDir::isRelativePath(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "isRelativePath", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_isRelativePath(lua_State* L)
{
    try {
        lqtk_QDir_isRelativePath_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_isRelativePath_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_listSeparator_Args
{
    ToLua<QChar*> rslt_1;
};

extern "C" int lqtk_QDir_listSeparator(lua_State* L)
{
    lqtk_QDir_listSeparator_Args  argValues;
    lqtk_QDir_listSeparator_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QDir::listSeparator();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "listSeparator", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_match_Args
{
    FromLua<QString> arg_1_1;
    FromLua<QString> arg_1_2;
    FromLua<QStringList> arg_2_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QDir_match_doLua(lua_State* L)
{
    lqtk_QDir_match_Args* args = (lqtk_QDir_match_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_1_2.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    QDir::match(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            if (!args->arg_1_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    QDir::match(args->arg_2_1.getValue(), args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QDir", "match", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_match(lua_State* L)
{
    try {
        lqtk_QDir_match_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_match_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_root_Args
{
    ToLua<QDir*> rslt_1;
};

extern "C" int lqtk_QDir_root(lua_State* L)
{
    lqtk_QDir_root_Args  argValues;
    lqtk_QDir_root_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QDir::root();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "root", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_rootPath_Args
{
    ToLua<QString> rslt_1;
};

static int lqtk_QDir_rootPath_doLua(lua_State* L)
{
    lqtk_QDir_rootPath_Args* args = (lqtk_QDir_rootPath_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QDir::rootPath();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "rootPath", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_rootPath(lua_State* L)
{
    try {
        lqtk_QDir_rootPath_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_rootPath_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_searchPaths_Args
{
    FromLua<QString> arg_1_1;
    ToLua<QStringList> rslt_1;
};

static int lqtk_QDir_searchPaths_doLua(lua_State* L)
{
    lqtk_QDir_searchPaths_Args* args = (lqtk_QDir_searchPaths_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QDir::searchPaths(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "searchPaths", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_searchPaths(lua_State* L)
{
    try {
        lqtk_QDir_searchPaths_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_searchPaths_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_separator_Args
{
    ToLua<QChar*> rslt_1;
};

extern "C" int lqtk_QDir_separator(lua_State* L)
{
    lqtk_QDir_separator_Args  argValues;
    lqtk_QDir_separator_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QDir::separator();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "separator", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_setCurrent_Args
{
    FromLua<QString> arg_1_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QDir_setCurrent_doLua(lua_State* L)
{
    lqtk_QDir_setCurrent_Args* args = (lqtk_QDir_setCurrent_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QDir::setCurrent(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "setCurrent", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_setCurrent(lua_State* L)
{
    try {
        lqtk_QDir_setCurrent_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_setCurrent_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_setSearchPaths_Args
{
    FromLua<QString> arg_1_1;
    FromLua<QStringList> arg_2_1;
};

static int lqtk_QDir_setSearchPaths_doLua(lua_State* L)
{
    lqtk_QDir_setSearchPaths_Args* args = (lqtk_QDir_setSearchPaths_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    QDir::setSearchPaths(args->arg_1_1.getValue(), args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "setSearchPaths", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_setSearchPaths(lua_State* L)
{
    try {
        lqtk_QDir_setSearchPaths_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_setSearchPaths_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_temp_Args
{
    ToLua<QDir*> rslt_1;
};

extern "C" int lqtk_QDir_temp(lua_State* L)
{
    lqtk_QDir_temp_Args  argValues;
    lqtk_QDir_temp_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QDir::temp();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "temp", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_tempPath_Args
{
    ToLua<QString> rslt_1;
};

static int lqtk_QDir_tempPath_doLua(lua_State* L)
{
    lqtk_QDir_tempPath_Args* args = (lqtk_QDir_tempPath_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QDir::tempPath();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "tempPath", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_tempPath(lua_State* L)
{
    try {
        lqtk_QDir_tempPath_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_tempPath_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_toNativeSeparators_Args
{
    FromLua<QString> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QDir_toNativeSeparators_doLua(lua_State* L)
{
    lqtk_QDir_toNativeSeparators_Args* args = (lqtk_QDir_toNativeSeparators_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QDir::toNativeSeparators(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "toNativeSeparators", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_toNativeSeparators(lua_State* L)
{
    try {
        lqtk_QDir_toNativeSeparators_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_toNativeSeparators_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_absoluteFilePath_Args
{
    FromLua<QDir*> arg_1_1;
    FromLua<QString> arg_2_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QDir_absoluteFilePath_doLua(lua_State* L)
{
    lqtk_QDir_absoluteFilePath_Args* args = (lqtk_QDir_absoluteFilePath_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::absoluteFilePath(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "absoluteFilePath", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_absoluteFilePath(lua_State* L)
{
    try {
        lqtk_QDir_absoluteFilePath_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_absoluteFilePath_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_absolutePath_Args
{
    FromLua<QDir*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QDir_absolutePath_doLua(lua_State* L)
{
    lqtk_QDir_absolutePath_Args* args = (lqtk_QDir_absolutePath_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::absolutePath();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "absolutePath", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_absolutePath(lua_State* L)
{
    try {
        lqtk_QDir_absolutePath_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_absolutePath_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_canonicalPath_Args
{
    FromLua<QDir*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QDir_canonicalPath_doLua(lua_State* L)
{
    lqtk_QDir_canonicalPath_Args* args = (lqtk_QDir_canonicalPath_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::canonicalPath();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "canonicalPath", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_canonicalPath(lua_State* L)
{
    try {
        lqtk_QDir_canonicalPath_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_canonicalPath_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_cd_Args
{
    FromLua<QDir*> arg_1_1;
    FromLua<QString> arg_2_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QDir_cd_doLua(lua_State* L)
{
    lqtk_QDir_cd_Args* args = (lqtk_QDir_cd_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::cd(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "cd", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_cd(lua_State* L)
{
    try {
        lqtk_QDir_cd_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_cd_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_cdUp_Args
{
    FromLua<QDir*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QDir_cdUp(lua_State* L)
{
    lqtk_QDir_cdUp_Args  argValues;
    lqtk_QDir_cdUp_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::cdUp();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "cdUp", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_count_Args
{
    FromLua<QDir*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QDir_count(lua_State* L)
{
    lqtk_QDir_count_Args  argValues;
    lqtk_QDir_count_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::count();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "count", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_dirName_Args
{
    FromLua<QDir*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QDir_dirName_doLua(lua_State* L)
{
    lqtk_QDir_dirName_Args* args = (lqtk_QDir_dirName_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::dirName();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "dirName", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_dirName(lua_State* L)
{
    try {
        lqtk_QDir_dirName_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_dirName_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_entryInfoList_Args
{
    FromLua<QDir*> arg_1_1;
    FromLua<QStringList> arg_2_1;
    FromLua<QDir::Filters> arg_3_1;
    FromLua<QDir::SortFlags> arg_4_1;
    ToLua<QList<QFileInfo>> rslt_1;
};

static int lqtk_QDir_entryInfoList_doLua(lua_State* L)
{
    lqtk_QDir_entryInfoList_Args* args = (lqtk_QDir_entryInfoList_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::entryInfoList();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::entryInfoList(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::entryInfoList(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
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
                    args->arg_1_1.getValue()->QDir::entryInfoList(args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_4_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::entryInfoList(args->arg_3_1.getValue());
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
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            if (!args->arg_4_1.test(L, argOffs+3)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::entryInfoList(args->arg_3_1.getValue(), args->arg_4_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 3) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            assert(false);
        }
        return util::argCountError(L, "QDir", "entryInfoList", nargs, "1,2,3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_entryInfoList(lua_State* L)
{
    try {
        lqtk_QDir_entryInfoList_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_entryInfoList_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_entryList_Args
{
    FromLua<QDir*> arg_1_1;
    FromLua<QStringList> arg_2_1;
    FromLua<QDir::Filters> arg_3_1;
    FromLua<QDir::SortFlags> arg_4_1;
    ToLua<QStringList> rslt_1;
};

static int lqtk_QDir_entryList_doLua(lua_State* L)
{
    lqtk_QDir_entryList_Args* args = (lqtk_QDir_entryList_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::entryList(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::entryList(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
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
                    args->arg_1_1.getValue()->QDir::entryList(args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_4_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::entryList();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::entryList(args->arg_3_1.getValue());
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
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            if (!args->arg_4_1.test(L, argOffs+3)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::entryList(args->arg_3_1.getValue(), args->arg_4_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 3) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            assert(false);
        }
        return util::argCountError(L, "QDir", "entryList", nargs, "1,2,3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_entryList(lua_State* L)
{
    try {
        lqtk_QDir_entryList_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_entryList_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_exists_Args
{
    FromLua<QDir*> arg_1_1;
    FromLua<QString> arg_2_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QDir_exists_doLua(lua_State* L)
{
    lqtk_QDir_exists_Args* args = (lqtk_QDir_exists_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::exists(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::exists();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "exists", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_exists(lua_State* L)
{
    try {
        lqtk_QDir_exists_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_exists_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_filePath_Args
{
    FromLua<QDir*> arg_1_1;
    FromLua<QString> arg_2_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QDir_filePath_doLua(lua_State* L)
{
    lqtk_QDir_filePath_Args* args = (lqtk_QDir_filePath_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::filePath(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "filePath", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_filePath(lua_State* L)
{
    try {
        lqtk_QDir_filePath_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_filePath_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_filter_Args
{
    FromLua<QDir*> arg_1_1;
    ToLua<QDir::Filters> rslt_1;
};

extern "C" int lqtk_QDir_filter(lua_State* L)
{
    lqtk_QDir_filter_Args  argValues;
    lqtk_QDir_filter_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::filter();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "filter", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_isAbsolute_Args
{
    FromLua<QDir*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QDir_isAbsolute(lua_State* L)
{
    lqtk_QDir_isAbsolute_Args  argValues;
    lqtk_QDir_isAbsolute_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::isAbsolute();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "isAbsolute", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_isEmpty_Args
{
    FromLua<QDir*> arg_1_1;
    FromLua<QDir::Filters> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QDir_isEmpty(lua_State* L)
{
    lqtk_QDir_isEmpty_Args  argValues;
    lqtk_QDir_isEmpty_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::isEmpty();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::isEmpty(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "isEmpty", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_isReadable_Args
{
    FromLua<QDir*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QDir_isReadable(lua_State* L)
{
    lqtk_QDir_isReadable_Args  argValues;
    lqtk_QDir_isReadable_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::isReadable();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "isReadable", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_isRelative_Args
{
    FromLua<QDir*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QDir_isRelative(lua_State* L)
{
    lqtk_QDir_isRelative_Args  argValues;
    lqtk_QDir_isRelative_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::isRelative();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "isRelative", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_isRoot_Args
{
    FromLua<QDir*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QDir_isRoot(lua_State* L)
{
    lqtk_QDir_isRoot_Args  argValues;
    lqtk_QDir_isRoot_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::isRoot();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "isRoot", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_makeAbsolute_Args
{
    FromLua<QDir*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QDir_makeAbsolute(lua_State* L)
{
    lqtk_QDir_makeAbsolute_Args  argValues;
    lqtk_QDir_makeAbsolute_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::makeAbsolute();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "makeAbsolute", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_mkdir_Args
{
    FromLua<QDir*> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<QFileDevice::Permissions> arg_3_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QDir_mkdir_doLua(lua_State* L)
{
    lqtk_QDir_mkdir_Args* args = (lqtk_QDir_mkdir_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::mkdir(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::mkdir(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "mkdir", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_mkdir(lua_State* L)
{
    try {
        lqtk_QDir_mkdir_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_mkdir_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_mkpath_Args
{
    FromLua<QDir*> arg_1_1;
    FromLua<QString> arg_2_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QDir_mkpath_doLua(lua_State* L)
{
    lqtk_QDir_mkpath_Args* args = (lqtk_QDir_mkpath_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::mkpath(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "mkpath", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_mkpath(lua_State* L)
{
    try {
        lqtk_QDir_mkpath_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_mkpath_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_nameFilters_Args
{
    FromLua<QDir*> arg_1_1;
    ToLua<QStringList> rslt_1;
};

static int lqtk_QDir_nameFilters_doLua(lua_State* L)
{
    lqtk_QDir_nameFilters_Args* args = (lqtk_QDir_nameFilters_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::nameFilters();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "nameFilters", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_nameFilters(lua_State* L)
{
    try {
        lqtk_QDir_nameFilters_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_nameFilters_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_path_Args
{
    FromLua<QDir*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QDir_path_doLua(lua_State* L)
{
    lqtk_QDir_path_Args* args = (lqtk_QDir_path_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::path();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "path", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_path(lua_State* L)
{
    try {
        lqtk_QDir_path_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_path_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_refresh_Args
{
    FromLua<QDir*> arg_1_1;
};

extern "C" int lqtk_QDir_refresh(lua_State* L)
{
    lqtk_QDir_refresh_Args  argValues;
    lqtk_QDir_refresh_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QDir::refresh();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "refresh", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_relativeFilePath_Args
{
    FromLua<QDir*> arg_1_1;
    FromLua<QString> arg_2_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QDir_relativeFilePath_doLua(lua_State* L)
{
    lqtk_QDir_relativeFilePath_Args* args = (lqtk_QDir_relativeFilePath_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::relativeFilePath(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "relativeFilePath", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_relativeFilePath(lua_State* L)
{
    try {
        lqtk_QDir_relativeFilePath_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_relativeFilePath_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_remove_Args
{
    FromLua<QDir*> arg_1_1;
    FromLua<QString> arg_2_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QDir_remove_doLua(lua_State* L)
{
    lqtk_QDir_remove_Args* args = (lqtk_QDir_remove_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::remove(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "remove", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_remove(lua_State* L)
{
    try {
        lqtk_QDir_remove_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_remove_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_removeRecursively_Args
{
    FromLua<QDir*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QDir_removeRecursively(lua_State* L)
{
    lqtk_QDir_removeRecursively_Args  argValues;
    lqtk_QDir_removeRecursively_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::removeRecursively();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "removeRecursively", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_rename_Args
{
    FromLua<QDir*> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<QString> arg_2_2;
    ToLua<bool> rslt_1;
};

static int lqtk_QDir_rename_doLua(lua_State* L)
{
    lqtk_QDir_rename_Args* args = (lqtk_QDir_rename_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::rename(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "rename", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_rename(lua_State* L)
{
    try {
        lqtk_QDir_rename_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_rename_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_rmdir_Args
{
    FromLua<QDir*> arg_1_1;
    FromLua<QString> arg_2_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QDir_rmdir_doLua(lua_State* L)
{
    lqtk_QDir_rmdir_Args* args = (lqtk_QDir_rmdir_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::rmdir(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "rmdir", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_rmdir(lua_State* L)
{
    try {
        lqtk_QDir_rmdir_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_rmdir_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_rmpath_Args
{
    FromLua<QDir*> arg_1_1;
    FromLua<QString> arg_2_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QDir_rmpath_doLua(lua_State* L)
{
    lqtk_QDir_rmpath_Args* args = (lqtk_QDir_rmpath_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::rmpath(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "rmpath", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_rmpath(lua_State* L)
{
    try {
        lqtk_QDir_rmpath_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_rmpath_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_setFilter_Args
{
    FromLua<QDir*> arg_1_1;
    FromLua<QDir::Filters> arg_2_1;
};

extern "C" int lqtk_QDir_setFilter(lua_State* L)
{
    lqtk_QDir_setFilter_Args  argValues;
    lqtk_QDir_setFilter_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QDir::setFilter(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "setFilter", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_setNameFilters_Args
{
    FromLua<QDir*> arg_1_1;
    FromLua<QStringList> arg_2_1;
};

static int lqtk_QDir_setNameFilters_doLua(lua_State* L)
{
    lqtk_QDir_setNameFilters_Args* args = (lqtk_QDir_setNameFilters_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QDir::setNameFilters(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "setNameFilters", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_setNameFilters(lua_State* L)
{
    try {
        lqtk_QDir_setNameFilters_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_setNameFilters_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_setPath_Args
{
    FromLua<QDir*> arg_1_1;
    FromLua<QString> arg_2_1;
};

static int lqtk_QDir_setPath_doLua(lua_State* L)
{
    lqtk_QDir_setPath_Args* args = (lqtk_QDir_setPath_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QDir::setPath(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "setPath", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_setPath(lua_State* L)
{
    try {
        lqtk_QDir_setPath_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_setPath_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_setSorting_Args
{
    FromLua<QDir*> arg_1_1;
    FromLua<QDir::SortFlags> arg_2_1;
};

extern "C" int lqtk_QDir_setSorting(lua_State* L)
{
    lqtk_QDir_setSorting_Args  argValues;
    lqtk_QDir_setSorting_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QDir::setSorting(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "setSorting", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDir_sorting_Args
{
    FromLua<QDir*> arg_1_1;
    ToLua<QDir::SortFlags> rslt_1;
};

extern "C" int lqtk_QDir_sorting(lua_State* L)
{
    lqtk_QDir_sorting_Args  argValues;
    lqtk_QDir_sorting_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDir::sorting();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDir", "sorting", nargs, "1");
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
        QDirBinding::QType* ptr = static_cast<QDirBinding::QType*>(objectPtr);
        if (targetClassInfo == &QDirBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QDir* ptr = (QDir*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

struct lqtk_QDir_new_Args
{
    explicit lqtk_QDir_new_Args(bool explicitNew)
        : explicitNew(explicitNew)
    {}
    bool explicitNew;
    FromLua<QString> arg_1_1;
    FromLua<QString> arg_1_2;
    FromLua<QDir::SortFlags> arg_2_1;
    FromLua<QDir::Filters> arg_3_1;
    FromLua<QDir*> arg_4_1;
    ToLua<QDir*> rslt_1;
};

static int lqtk_QDir_new_doLua(lua_State* L)
{
    lqtk_QDir_new_Args* args = (lqtk_QDir_new_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    bool explicitNew = args->explicitNew;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QDirBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QDir> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QDir* rslt = 
                    new QDir();
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
                QDir* rslt = 
                    new QDir(args->arg_1_1.getValue());
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
                QDir* rslt = 
                    new QDir(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            args->arg_2_1.check(L, argOffs+3);
            {
                QDir* rslt = 
                    new QDir(args->arg_1_1.getValue(), args->arg_1_2.getValue(), args->arg_2_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            args->arg_2_1.check(L, argOffs+3);
            args->arg_3_1.check(L, argOffs+4);
            {
                QDir* rslt = 
                    new QDir(args->arg_1_1.getValue(), args->arg_1_2.getValue(), args->arg_2_1.getValue(), args->arg_3_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_4_1.test(L, argOffs+1)) break;
            {
                QDir* rslt = 
                    new QDir(*args->arg_4_1.getValue());
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
            return util::argCountError(L, "QDir", "new", nargs, "1,2,3,4,5");
        } else {
            return util::argCountError(L, "QDir", nullptr, nargs, "0,1,2,3,4");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDir_constructor(lua_State* L, bool explicitNew)
{
    try {
        lqtk_QDir_new_Args args(explicitNew);
        return BindingUtil::callMethodFromLua(L, lqtk_QDir_new_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QDir_new(lua_State* L)
{
    return lqtk_QDir_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QDirBinding::pushObject(lua_State* L, QDir* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QDir>(L, hasUserValue);     // -> uval?, udata
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
    { "AllDirs",              Member::INTEGER,              (void*) QDir::AllDirs },
    { "AllEntries",           Member::INTEGER,              (void*) QDir::AllEntries },
    { "CaseSensitive",        Member::INTEGER,              (void*) QDir::CaseSensitive },
    { "Dirs",                 Member::INTEGER,              (void*) QDir::Dirs },
    { "DirsFirst",            Member::INTEGER,              (void*) QDir::DirsFirst },
    { "DirsLast",             Member::INTEGER,              (void*) QDir::DirsLast },
    { "Drives",               Member::INTEGER,              (void*) QDir::Drives },
    { "Executable",           Member::INTEGER,              (void*) QDir::Executable },
    { "Files",                Member::INTEGER,              (void*) QDir::Files },
    { "Hidden",               Member::INTEGER,              (void*) QDir::Hidden },
    { "IgnoreCase",           Member::INTEGER,              (void*) QDir::IgnoreCase },
    { "LocaleAware",          Member::INTEGER,              (void*) QDir::LocaleAware },
    { "Modified",             Member::INTEGER,              (void*) QDir::Modified },
    { "Name",                 Member::INTEGER,              (void*) QDir::Name },
    { "NoDot",                Member::INTEGER,              (void*) QDir::NoDot },
    { "NoDotAndDotDot",       Member::INTEGER,              (void*) QDir::NoDotAndDotDot },
    { "NoDotDot",             Member::INTEGER,              (void*) QDir::NoDotDot },
    { "NoSort",               Member::INTEGER,              (void*) QDir::NoSort },
    { "NoSymLinks",           Member::INTEGER,              (void*) QDir::NoSymLinks },
    { "Readable",             Member::INTEGER,              (void*) QDir::Readable },
    { "Reversed",             Member::INTEGER,              (void*) QDir::Reversed },
    { "Size",                 Member::INTEGER,              (void*) QDir::Size },
    { "System",               Member::INTEGER,              (void*) QDir::System },
    { "Time",                 Member::INTEGER,              (void*) QDir::Time },
    { "Type",                 Member::INTEGER,              (void*) QDir::Type },
    { "Unsorted",             Member::INTEGER,              (void*) QDir::Unsorted },
    { "Writable",             Member::INTEGER,              (void*) QDir::Writable },
    { "absoluteFilePath",     Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_absoluteFilePath },
    { "absolutePath",         Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_absolutePath },
    { "addSearchPath",        Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_addSearchPath },
    { "canonicalPath",        Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_canonicalPath },
    { "cd",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_cd },
    { "cdUp",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_cdUp },
    { "cleanPath",            Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_cleanPath },
    { "count",                Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_count },
    { "current",              Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_current },
    { "currentPath",          Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_currentPath },
    { "dirName",              Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_dirName },
    { "drives",               Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_drives },
    { "entryInfoList",        Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_entryInfoList },
    { "entryList",            Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_entryList },
    { "exists",               Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_exists },
    { "filePath",             Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_filePath },
    { "filter",               Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_filter },
    { "fromNativeSeparators", Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_fromNativeSeparators },
    { "home",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_home },
    { "homePath",             Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_homePath },
    { "isAbsolute",           Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_isAbsolute },
    { "isAbsolutePath",       Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_isAbsolutePath },
    { "isEmpty",              Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_isEmpty },
    { "isReadable",           Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_isReadable },
    { "isRelative",           Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_isRelative },
    { "isRelativePath",       Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_isRelativePath },
    { "isRoot",               Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_isRoot },
    { "listSeparator",        Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_listSeparator },
    { "makeAbsolute",         Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_makeAbsolute },
    { "match",                Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_match },
    { "mkdir",                Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_mkdir },
    { "mkpath",               Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_mkpath },
    { "nameFilters",          Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_nameFilters },
    { "path",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_path },
    { "refresh",              Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_refresh },
    { "relativeFilePath",     Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_relativeFilePath },
    { "remove",               Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_remove },
    { "removeRecursively",    Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_removeRecursively },
    { "rename",               Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_rename },
    { "rmdir",                Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_rmdir },
    { "rmpath",               Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_rmpath },
    { "root",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_root },
    { "rootPath",             Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_rootPath },
    { "searchPaths",          Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_searchPaths },
    { "separator",            Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_separator },
    { "setCurrent",           Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_setCurrent },
    { "setFilter",            Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_setFilter },
    { "setNameFilters",       Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_setNameFilters },
    { "setPath",              Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_setPath },
    { "setSearchPaths",       Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_setSearchPaths },
    { "setSorting",           Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_setSorting },
    { "sorting",              Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_sorting },
    { "temp",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_temp },
    { "tempPath",             Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_tempPath },
    { "toNativeSeparators",   Member::NORMAL_FUNCTION,      (void*) lqtk_QDir_toNativeSeparators },
    { NULL,                   Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QDirBinding::classInfo = 
{
    "QDir",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QDir_constructor,
    lqtk_QDir_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    82,
    members
};

/* ============================================================================================ */

int QDirBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
