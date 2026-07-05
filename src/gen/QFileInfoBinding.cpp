// Type: QFileInfo
// Base: nil

/* ============================================================================================ */

#include <QDateTime>
#include <QDir>
#include <QFileDevice>
#include <QFileInfo>
#include <QObject>
#include <QString>
#include <QTimeZone>

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
#include "QDateTimeBinding.hpp"
#include "QDirBinding.hpp"
#include "QFileDeviceBinding.hpp"
#include "QFileInfoBinding.hpp"
#include "QObjectBinding.hpp"
#include "QStringBinding.hpp"
#include "QTimeZoneBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QFileInfo_exists_Args
{
    FromLua<QFileInfo*> arg_1_1;
    FromLua<QString> arg_2_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QFileInfo_exists_doLua(lua_State* L)
{
    lqtk_QFileInfo_exists_Args* args = (lqtk_QFileInfo_exists_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::exists();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QFileInfo::exists(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QFileInfo", "exists", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFileInfo_exists(lua_State* L)
{
    try {
        lqtk_QFileInfo_exists_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFileInfo_exists_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_absoluteDir_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<QDir*> rslt_1;
};

extern "C" int lqtk_QFileInfo_absoluteDir(lua_State* L)
{
    lqtk_QFileInfo_absoluteDir_Args  argValues;
    lqtk_QFileInfo_absoluteDir_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::absoluteDir();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "absoluteDir", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_absoluteFilePath_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QFileInfo_absoluteFilePath_doLua(lua_State* L)
{
    lqtk_QFileInfo_absoluteFilePath_Args* args = (lqtk_QFileInfo_absoluteFilePath_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::absoluteFilePath();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "absoluteFilePath", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFileInfo_absoluteFilePath(lua_State* L)
{
    try {
        lqtk_QFileInfo_absoluteFilePath_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFileInfo_absoluteFilePath_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_absolutePath_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QFileInfo_absolutePath_doLua(lua_State* L)
{
    lqtk_QFileInfo_absolutePath_Args* args = (lqtk_QFileInfo_absolutePath_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::absolutePath();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "absolutePath", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFileInfo_absolutePath(lua_State* L)
{
    try {
        lqtk_QFileInfo_absolutePath_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFileInfo_absolutePath_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_baseName_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QFileInfo_baseName_doLua(lua_State* L)
{
    lqtk_QFileInfo_baseName_Args* args = (lqtk_QFileInfo_baseName_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::baseName();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "baseName", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFileInfo_baseName(lua_State* L)
{
    try {
        lqtk_QFileInfo_baseName_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFileInfo_baseName_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_birthTime_Args
{
    FromLua<QFileInfo*> arg_1_1;
    FromLua<QTimeZone::Initialization> arg_2_1;
    FromLua<QTimeZone*> arg_3_1;
    ToLua<QDateTime*> rslt_1;
};

extern "C" int lqtk_QFileInfo_birthTime(lua_State* L)
{
    lqtk_QFileInfo_birthTime_Args  argValues;
    lqtk_QFileInfo_birthTime_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::birthTime();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::birthTime(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::birthTime(*args->arg_3_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QFileInfo", "birthTime", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_bundleName_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QFileInfo_bundleName_doLua(lua_State* L)
{
    lqtk_QFileInfo_bundleName_Args* args = (lqtk_QFileInfo_bundleName_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::bundleName();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "bundleName", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFileInfo_bundleName(lua_State* L)
{
    try {
        lqtk_QFileInfo_bundleName_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFileInfo_bundleName_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_caching_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileInfo_caching(lua_State* L)
{
    lqtk_QFileInfo_caching_Args  argValues;
    lqtk_QFileInfo_caching_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::caching();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "caching", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_canonicalFilePath_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QFileInfo_canonicalFilePath_doLua(lua_State* L)
{
    lqtk_QFileInfo_canonicalFilePath_Args* args = (lqtk_QFileInfo_canonicalFilePath_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::canonicalFilePath();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "canonicalFilePath", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFileInfo_canonicalFilePath(lua_State* L)
{
    try {
        lqtk_QFileInfo_canonicalFilePath_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFileInfo_canonicalFilePath_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_canonicalPath_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QFileInfo_canonicalPath_doLua(lua_State* L)
{
    lqtk_QFileInfo_canonicalPath_Args* args = (lqtk_QFileInfo_canonicalPath_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::canonicalPath();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "canonicalPath", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFileInfo_canonicalPath(lua_State* L)
{
    try {
        lqtk_QFileInfo_canonicalPath_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFileInfo_canonicalPath_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_completeBaseName_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QFileInfo_completeBaseName_doLua(lua_State* L)
{
    lqtk_QFileInfo_completeBaseName_Args* args = (lqtk_QFileInfo_completeBaseName_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::completeBaseName();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "completeBaseName", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFileInfo_completeBaseName(lua_State* L)
{
    try {
        lqtk_QFileInfo_completeBaseName_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFileInfo_completeBaseName_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_completeSuffix_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QFileInfo_completeSuffix_doLua(lua_State* L)
{
    lqtk_QFileInfo_completeSuffix_Args* args = (lqtk_QFileInfo_completeSuffix_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::completeSuffix();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "completeSuffix", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFileInfo_completeSuffix(lua_State* L)
{
    try {
        lqtk_QFileInfo_completeSuffix_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFileInfo_completeSuffix_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_dir_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<QDir*> rslt_1;
};

extern "C" int lqtk_QFileInfo_dir(lua_State* L)
{
    lqtk_QFileInfo_dir_Args  argValues;
    lqtk_QFileInfo_dir_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::dir();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "dir", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_fileName_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QFileInfo_fileName_doLua(lua_State* L)
{
    lqtk_QFileInfo_fileName_Args* args = (lqtk_QFileInfo_fileName_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::fileName();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "fileName", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFileInfo_fileName(lua_State* L)
{
    try {
        lqtk_QFileInfo_fileName_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFileInfo_fileName_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_filePath_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QFileInfo_filePath_doLua(lua_State* L)
{
    lqtk_QFileInfo_filePath_Args* args = (lqtk_QFileInfo_filePath_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::filePath();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "filePath", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFileInfo_filePath(lua_State* L)
{
    try {
        lqtk_QFileInfo_filePath_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFileInfo_filePath_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_fileTime_Args
{
    FromLua<QFileInfo*> arg_1_1;
    FromLua<QFileDevice::FileTime> arg_2_1;
    FromLua<QTimeZone::Initialization> arg_3_1;
    FromLua<QTimeZone*> arg_4_1;
    ToLua<QDateTime*> rslt_1;
};

extern "C" int lqtk_QFileInfo_fileTime(lua_State* L)
{
    lqtk_QFileInfo_fileTime_Args  argValues;
    lqtk_QFileInfo_fileTime_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::fileTime(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::fileTime(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_4_1.test(L, argOffs+3)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::fileTime(args->arg_2_1.getValue(), *args->arg_4_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 3) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            assert(false);
        }
        return util::argCountError(L, "QFileInfo", "fileTime", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_group_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QFileInfo_group_doLua(lua_State* L)
{
    lqtk_QFileInfo_group_Args* args = (lqtk_QFileInfo_group_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::group();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "group", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFileInfo_group(lua_State* L)
{
    try {
        lqtk_QFileInfo_group_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFileInfo_group_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_groupId_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QFileInfo_groupId(lua_State* L)
{
    lqtk_QFileInfo_groupId_Args  argValues;
    lqtk_QFileInfo_groupId_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::groupId();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "groupId", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_isAbsolute_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileInfo_isAbsolute(lua_State* L)
{
    lqtk_QFileInfo_isAbsolute_Args  argValues;
    lqtk_QFileInfo_isAbsolute_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::isAbsolute();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "isAbsolute", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_isAlias_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileInfo_isAlias(lua_State* L)
{
    lqtk_QFileInfo_isAlias_Args  argValues;
    lqtk_QFileInfo_isAlias_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::isAlias();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "isAlias", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_isBundle_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileInfo_isBundle(lua_State* L)
{
    lqtk_QFileInfo_isBundle_Args  argValues;
    lqtk_QFileInfo_isBundle_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::isBundle();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "isBundle", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_isDir_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileInfo_isDir(lua_State* L)
{
    lqtk_QFileInfo_isDir_Args  argValues;
    lqtk_QFileInfo_isDir_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::isDir();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "isDir", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_isExecutable_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileInfo_isExecutable(lua_State* L)
{
    lqtk_QFileInfo_isExecutable_Args  argValues;
    lqtk_QFileInfo_isExecutable_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::isExecutable();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "isExecutable", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_isFile_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileInfo_isFile(lua_State* L)
{
    lqtk_QFileInfo_isFile_Args  argValues;
    lqtk_QFileInfo_isFile_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::isFile();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "isFile", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_isHidden_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileInfo_isHidden(lua_State* L)
{
    lqtk_QFileInfo_isHidden_Args  argValues;
    lqtk_QFileInfo_isHidden_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::isHidden();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "isHidden", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_isJunction_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileInfo_isJunction(lua_State* L)
{
    lqtk_QFileInfo_isJunction_Args  argValues;
    lqtk_QFileInfo_isJunction_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::isJunction();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "isJunction", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_isNativePath_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileInfo_isNativePath(lua_State* L)
{
    lqtk_QFileInfo_isNativePath_Args  argValues;
    lqtk_QFileInfo_isNativePath_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::isNativePath();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "isNativePath", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_isReadable_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileInfo_isReadable(lua_State* L)
{
    lqtk_QFileInfo_isReadable_Args  argValues;
    lqtk_QFileInfo_isReadable_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::isReadable();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "isReadable", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_isRelative_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileInfo_isRelative(lua_State* L)
{
    lqtk_QFileInfo_isRelative_Args  argValues;
    lqtk_QFileInfo_isRelative_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::isRelative();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "isRelative", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_isRoot_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileInfo_isRoot(lua_State* L)
{
    lqtk_QFileInfo_isRoot_Args  argValues;
    lqtk_QFileInfo_isRoot_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::isRoot();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "isRoot", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_isShortcut_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileInfo_isShortcut(lua_State* L)
{
    lqtk_QFileInfo_isShortcut_Args  argValues;
    lqtk_QFileInfo_isShortcut_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::isShortcut();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "isShortcut", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_isSymLink_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileInfo_isSymLink(lua_State* L)
{
    lqtk_QFileInfo_isSymLink_Args  argValues;
    lqtk_QFileInfo_isSymLink_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::isSymLink();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "isSymLink", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_isSymbolicLink_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileInfo_isSymbolicLink(lua_State* L)
{
    lqtk_QFileInfo_isSymbolicLink_Args  argValues;
    lqtk_QFileInfo_isSymbolicLink_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::isSymbolicLink();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "isSymbolicLink", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_isWritable_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileInfo_isWritable(lua_State* L)
{
    lqtk_QFileInfo_isWritable_Args  argValues;
    lqtk_QFileInfo_isWritable_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::isWritable();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "isWritable", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_junctionTarget_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QFileInfo_junctionTarget_doLua(lua_State* L)
{
    lqtk_QFileInfo_junctionTarget_Args* args = (lqtk_QFileInfo_junctionTarget_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::junctionTarget();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "junctionTarget", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFileInfo_junctionTarget(lua_State* L)
{
    try {
        lqtk_QFileInfo_junctionTarget_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFileInfo_junctionTarget_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_lastModified_Args
{
    FromLua<QFileInfo*> arg_1_1;
    FromLua<QTimeZone::Initialization> arg_2_1;
    FromLua<QTimeZone*> arg_3_1;
    ToLua<QDateTime*> rslt_1;
};

extern "C" int lqtk_QFileInfo_lastModified(lua_State* L)
{
    lqtk_QFileInfo_lastModified_Args  argValues;
    lqtk_QFileInfo_lastModified_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::lastModified();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::lastModified(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::lastModified(*args->arg_3_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QFileInfo", "lastModified", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_lastRead_Args
{
    FromLua<QFileInfo*> arg_1_1;
    FromLua<QTimeZone::Initialization> arg_2_1;
    FromLua<QTimeZone*> arg_3_1;
    ToLua<QDateTime*> rslt_1;
};

extern "C" int lqtk_QFileInfo_lastRead(lua_State* L)
{
    lqtk_QFileInfo_lastRead_Args  argValues;
    lqtk_QFileInfo_lastRead_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::lastRead();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::lastRead(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::lastRead(*args->arg_3_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QFileInfo", "lastRead", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_makeAbsolute_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileInfo_makeAbsolute(lua_State* L)
{
    lqtk_QFileInfo_makeAbsolute_Args  argValues;
    lqtk_QFileInfo_makeAbsolute_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::makeAbsolute();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "makeAbsolute", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_metadataChangeTime_Args
{
    FromLua<QFileInfo*> arg_1_1;
    FromLua<QTimeZone::Initialization> arg_2_1;
    FromLua<QTimeZone*> arg_3_1;
    ToLua<QDateTime*> rslt_1;
};

extern "C" int lqtk_QFileInfo_metadataChangeTime(lua_State* L)
{
    lqtk_QFileInfo_metadataChangeTime_Args  argValues;
    lqtk_QFileInfo_metadataChangeTime_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::metadataChangeTime();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::metadataChangeTime(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::metadataChangeTime(*args->arg_3_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QFileInfo", "metadataChangeTime", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_owner_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QFileInfo_owner_doLua(lua_State* L)
{
    lqtk_QFileInfo_owner_Args* args = (lqtk_QFileInfo_owner_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::owner();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "owner", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFileInfo_owner(lua_State* L)
{
    try {
        lqtk_QFileInfo_owner_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFileInfo_owner_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_ownerId_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QFileInfo_ownerId(lua_State* L)
{
    lqtk_QFileInfo_ownerId_Args  argValues;
    lqtk_QFileInfo_ownerId_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::ownerId();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "ownerId", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_path_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QFileInfo_path_doLua(lua_State* L)
{
    lqtk_QFileInfo_path_Args* args = (lqtk_QFileInfo_path_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::path();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "path", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFileInfo_path(lua_State* L)
{
    try {
        lqtk_QFileInfo_path_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFileInfo_path_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_permission_Args
{
    FromLua<QFileInfo*> arg_1_1;
    FromLua<QFileDevice::Permissions> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFileInfo_permission(lua_State* L)
{
    lqtk_QFileInfo_permission_Args  argValues;
    lqtk_QFileInfo_permission_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::permission(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "permission", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_permissions_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<QFileDevice::Permissions> rslt_1;
};

extern "C" int lqtk_QFileInfo_permissions(lua_State* L)
{
    lqtk_QFileInfo_permissions_Args  argValues;
    lqtk_QFileInfo_permissions_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::permissions();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "permissions", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_readSymLink_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QFileInfo_readSymLink_doLua(lua_State* L)
{
    lqtk_QFileInfo_readSymLink_Args* args = (lqtk_QFileInfo_readSymLink_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::readSymLink();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "readSymLink", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFileInfo_readSymLink(lua_State* L)
{
    try {
        lqtk_QFileInfo_readSymLink_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFileInfo_readSymLink_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_refresh_Args
{
    FromLua<QFileInfo*> arg_1_1;
};

extern "C" int lqtk_QFileInfo_refresh(lua_State* L)
{
    lqtk_QFileInfo_refresh_Args  argValues;
    lqtk_QFileInfo_refresh_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QFileInfo::refresh();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "refresh", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_setCaching_Args
{
    FromLua<QFileInfo*> arg_1_1;
    FromLua<bool> arg_2_1;
};

extern "C" int lqtk_QFileInfo_setCaching(lua_State* L)
{
    lqtk_QFileInfo_setCaching_Args  argValues;
    lqtk_QFileInfo_setCaching_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QFileInfo::setCaching(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "setCaching", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_setFile_Args
{
    FromLua<QFileInfo*> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<QFileDevice*> arg_3_1;
    FromLua<QDir*> arg_4_1;
};

static int lqtk_QFileInfo_setFile_doLua(lua_State* L)
{
    lqtk_QFileInfo_setFile_Args* args = (lqtk_QFileInfo_setFile_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                    args->arg_1_1.getValue()->QFileInfo::setFile(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                    args->arg_1_1.getValue()->QFileInfo::setFile(*args->arg_3_1.getValue());
                return 0;
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
            args->arg_2_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QFileInfo::setFile(*args->arg_4_1.getValue(), args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "setFile", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFileInfo_setFile(lua_State* L)
{
    try {
        lqtk_QFileInfo_setFile_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFileInfo_setFile_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_size_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<qint64> rslt_1;
};

extern "C" int lqtk_QFileInfo_size(lua_State* L)
{
    lqtk_QFileInfo_size_Args  argValues;
    lqtk_QFileInfo_size_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::size();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "size", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_stat_Args
{
    FromLua<QFileInfo*> arg_1_1;
};

extern "C" int lqtk_QFileInfo_stat(lua_State* L)
{
    lqtk_QFileInfo_stat_Args  argValues;
    lqtk_QFileInfo_stat_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QFileInfo::stat();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "stat", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_suffix_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QFileInfo_suffix_doLua(lua_State* L)
{
    lqtk_QFileInfo_suffix_Args* args = (lqtk_QFileInfo_suffix_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::suffix();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "suffix", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFileInfo_suffix(lua_State* L)
{
    try {
        lqtk_QFileInfo_suffix_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFileInfo_suffix_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFileInfo_symLinkTarget_Args
{
    FromLua<QFileInfo*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QFileInfo_symLinkTarget_doLua(lua_State* L)
{
    lqtk_QFileInfo_symLinkTarget_Args* args = (lqtk_QFileInfo_symLinkTarget_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFileInfo::symLinkTarget();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFileInfo", "symLinkTarget", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFileInfo_symLinkTarget(lua_State* L)
{
    try {
        lqtk_QFileInfo_symLinkTarget_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFileInfo_symLinkTarget_doLua, &args);
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
        QFileInfoBinding::QType* ptr = static_cast<QFileInfoBinding::QType*>(objectPtr);
        if (targetClassInfo == &QFileInfoBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QFileInfo* ptr = (QFileInfo*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

struct lqtk_QFileInfo_new_Args
{
    explicit lqtk_QFileInfo_new_Args(bool explicitNew)
        : explicitNew(explicitNew)
    {}
    bool explicitNew;
    FromLua<QFileDevice*> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<QDir*> arg_3_1;
    FromLua<QFileInfo*> arg_4_1;
    ToLua<QFileInfo*> rslt_1;
};

static int lqtk_QFileInfo_new_doLua(lua_State* L)
{
    lqtk_QFileInfo_new_Args* args = (lqtk_QFileInfo_new_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    bool explicitNew = args->explicitNew;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QFileInfoBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QFileInfo> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QFileInfo* rslt = 
                    new QFileInfo();
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
                QFileInfo* rslt = 
                    new QFileInfo(*args->arg_1_1.getValue());
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
                QFileInfo* rslt = 
                    new QFileInfo(args->arg_2_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_3_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QFileInfo* rslt = 
                    new QFileInfo(*args->arg_3_1.getValue(), args->arg_2_1.getValue());
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
                QFileInfo* rslt = 
                    new QFileInfo(*args->arg_4_1.getValue());
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
            return util::argCountError(L, "QFileInfo", "new", nargs, "1,2,3");
        } else {
            return util::argCountError(L, "QFileInfo", nullptr, nargs, "0,1,2");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFileInfo_constructor(lua_State* L, bool explicitNew)
{
    try {
        lqtk_QFileInfo_new_Args args(explicitNew);
        return BindingUtil::callMethodFromLua(L, lqtk_QFileInfo_new_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QFileInfo_new(lua_State* L)
{
    return lqtk_QFileInfo_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QFileInfoBinding::pushObject(lua_State* L, QFileInfo* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QFileInfo>(L, hasUserValue);     // -> uval?, udata
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
    { "absoluteDir",        Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_absoluteDir },
    { "absoluteFilePath",   Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_absoluteFilePath },
    { "absolutePath",       Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_absolutePath },
    { "baseName",           Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_baseName },
    { "birthTime",          Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_birthTime },
    { "bundleName",         Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_bundleName },
    { "caching",            Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_caching },
    { "canonicalFilePath",  Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_canonicalFilePath },
    { "canonicalPath",      Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_canonicalPath },
    { "completeBaseName",   Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_completeBaseName },
    { "completeSuffix",     Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_completeSuffix },
    { "dir",                Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_dir },
    { "exists",             Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_exists },
    { "fileName",           Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_fileName },
    { "filePath",           Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_filePath },
    { "fileTime",           Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_fileTime },
    { "group",              Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_group },
    { "groupId",            Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_groupId },
    { "isAbsolute",         Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_isAbsolute },
    { "isAlias",            Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_isAlias },
    { "isBundle",           Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_isBundle },
    { "isDir",              Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_isDir },
    { "isExecutable",       Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_isExecutable },
    { "isFile",             Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_isFile },
    { "isHidden",           Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_isHidden },
    { "isJunction",         Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_isJunction },
    { "isNativePath",       Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_isNativePath },
    { "isReadable",         Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_isReadable },
    { "isRelative",         Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_isRelative },
    { "isRoot",             Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_isRoot },
    { "isShortcut",         Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_isShortcut },
    { "isSymLink",          Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_isSymLink },
    { "isSymbolicLink",     Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_isSymbolicLink },
    { "isWritable",         Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_isWritable },
    { "junctionTarget",     Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_junctionTarget },
    { "lastModified",       Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_lastModified },
    { "lastRead",           Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_lastRead },
    { "makeAbsolute",       Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_makeAbsolute },
    { "metadataChangeTime", Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_metadataChangeTime },
    { "owner",              Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_owner },
    { "ownerId",            Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_ownerId },
    { "path",               Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_path },
    { "permission",         Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_permission },
    { "permissions",        Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_permissions },
    { "readSymLink",        Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_readSymLink },
    { "refresh",            Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_refresh },
    { "setCaching",         Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_setCaching },
    { "setFile",            Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_setFile },
    { "size",               Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_size },
    { "stat",               Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_stat },
    { "suffix",             Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_suffix },
    { "symLinkTarget",      Member::NORMAL_FUNCTION,      (void*) lqtk_QFileInfo_symLinkTarget },
    { NULL,                 Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QFileInfoBinding::classInfo = 
{
    "QFileInfo",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QFileInfo_constructor,
    lqtk_QFileInfo_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    52,
    members
};

/* ============================================================================================ */

int QFileInfoBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
