// Type: QRegularExpression
// Base: nil

/* ============================================================================================ */

#include <QObject>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QRegularExpressionMatchIterator>
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
#include "QObjectBinding.hpp"
#include "QRegularExpressionBinding.hpp"
#include "QRegularExpressionMatchBinding.hpp"
#include "QRegularExpressionMatchIteratorBinding.hpp"
#include "QStringBinding.hpp"
#include "QtBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QRegularExpression_anchoredPattern_Args
{
    FromLua<QString> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QRegularExpression_anchoredPattern_doLua(lua_State* L)
{
    lqtk_QRegularExpression_anchoredPattern_Args* args = (lqtk_QRegularExpression_anchoredPattern_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QRegularExpression::anchoredPattern(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpression", "anchoredPattern", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QRegularExpression_anchoredPattern(lua_State* L)
{
    try {
        lqtk_QRegularExpression_anchoredPattern_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QRegularExpression_anchoredPattern_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpression_escape_Args
{
    FromLua<QString> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QRegularExpression_escape_doLua(lua_State* L)
{
    lqtk_QRegularExpression_escape_Args* args = (lqtk_QRegularExpression_escape_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QRegularExpression::escape(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpression", "escape", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QRegularExpression_escape(lua_State* L)
{
    try {
        lqtk_QRegularExpression_escape_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QRegularExpression_escape_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpression_fromWildcard_Args
{
    FromLua<QString> arg_1_1;
    FromLua<Qt::CaseSensitivity> arg_2_1;
    FromLua<QRegularExpression::WildcardConversionOptions> arg_3_1;
    ToLua<QRegularExpression*> rslt_1;
};

static int lqtk_QRegularExpression_fromWildcard_doLua(lua_State* L)
{
    lqtk_QRegularExpression_fromWildcard_Args* args = (lqtk_QRegularExpression_fromWildcard_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QRegularExpression::fromWildcard(args->arg_1_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QRegularExpression::fromWildcard(args->arg_1_1.getValue(), args->arg_2_1.getValue());
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
                    QRegularExpression::fromWildcard(args->arg_1_1.getValue(), args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpression", "fromWildcard", nargs, "1,2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QRegularExpression_fromWildcard(lua_State* L)
{
    try {
        lqtk_QRegularExpression_fromWildcard_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QRegularExpression_fromWildcard_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpression_wildcardToRegularExpression_Args
{
    FromLua<QString> arg_1_1;
    FromLua<QRegularExpression::WildcardConversionOptions> arg_2_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QRegularExpression_wildcardToRegularExpression_doLua(lua_State* L)
{
    lqtk_QRegularExpression_wildcardToRegularExpression_Args* args = (lqtk_QRegularExpression_wildcardToRegularExpression_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QRegularExpression::wildcardToRegularExpression(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QRegularExpression::wildcardToRegularExpression(args->arg_1_1.getValue(), args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpression", "wildcardToRegularExpression", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QRegularExpression_wildcardToRegularExpression(lua_State* L)
{
    try {
        lqtk_QRegularExpression_wildcardToRegularExpression_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QRegularExpression_wildcardToRegularExpression_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpression_captureCount_Args
{
    FromLua<QRegularExpression*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QRegularExpression_captureCount(lua_State* L)
{
    lqtk_QRegularExpression_captureCount_Args  argValues;
    lqtk_QRegularExpression_captureCount_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpression::captureCount();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpression", "captureCount", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpression_errorString_Args
{
    FromLua<QRegularExpression*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QRegularExpression_errorString_doLua(lua_State* L)
{
    lqtk_QRegularExpression_errorString_Args* args = (lqtk_QRegularExpression_errorString_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpression::errorString();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpression", "errorString", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QRegularExpression_errorString(lua_State* L)
{
    try {
        lqtk_QRegularExpression_errorString_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QRegularExpression_errorString_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpression_globalMatch_Args
{
    FromLua<QRegularExpression*> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<int> arg_3_1;
    FromLua<QRegularExpression::MatchType> arg_4_1;
    FromLua<QRegularExpression::MatchOptions> arg_5_1;
    ToLua<QRegularExpressionMatchIterator*> rslt_1;
};

static int lqtk_QRegularExpression_globalMatch_doLua(lua_State* L)
{
    lqtk_QRegularExpression_globalMatch_Args* args = (lqtk_QRegularExpression_globalMatch_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpression::globalMatch(args->arg_2_1.getValue());
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
                    args->arg_1_1.getValue()->QRegularExpression::globalMatch(args->arg_2_1.getValue(), args->arg_3_1.getValue());
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
                    args->arg_1_1.getValue()->QRegularExpression::globalMatch(args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_4_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 5) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_4_1.check(L, argOffs+4);
            args->arg_5_1.check(L, argOffs+5);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpression::globalMatch(args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_4_1.getValue(), args->arg_5_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpression", "globalMatch", nargs, "2,3,4,5");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QRegularExpression_globalMatch(lua_State* L)
{
    try {
        lqtk_QRegularExpression_globalMatch_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QRegularExpression_globalMatch_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpression_isValid_Args
{
    FromLua<QRegularExpression*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QRegularExpression_isValid(lua_State* L)
{
    lqtk_QRegularExpression_isValid_Args  argValues;
    lqtk_QRegularExpression_isValid_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpression::isValid();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpression", "isValid", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpression_match_Args
{
    FromLua<QRegularExpression*> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<int> arg_3_1;
    FromLua<QRegularExpression::MatchType> arg_4_1;
    FromLua<QRegularExpression::MatchOptions> arg_5_1;
    ToLua<QRegularExpressionMatch*> rslt_1;
};

static int lqtk_QRegularExpression_match_doLua(lua_State* L)
{
    lqtk_QRegularExpression_match_Args* args = (lqtk_QRegularExpression_match_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpression::match(args->arg_2_1.getValue());
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
                    args->arg_1_1.getValue()->QRegularExpression::match(args->arg_2_1.getValue(), args->arg_3_1.getValue());
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
                    args->arg_1_1.getValue()->QRegularExpression::match(args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_4_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 5) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_4_1.check(L, argOffs+4);
            args->arg_5_1.check(L, argOffs+5);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpression::match(args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_4_1.getValue(), args->arg_5_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpression", "match", nargs, "2,3,4,5");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QRegularExpression_match(lua_State* L)
{
    try {
        lqtk_QRegularExpression_match_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QRegularExpression_match_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpression_namedCaptureGroups_Args
{
    FromLua<QRegularExpression*> arg_1_1;
    ToLua<QStringList> rslt_1;
};

static int lqtk_QRegularExpression_namedCaptureGroups_doLua(lua_State* L)
{
    lqtk_QRegularExpression_namedCaptureGroups_Args* args = (lqtk_QRegularExpression_namedCaptureGroups_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpression::namedCaptureGroups();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpression", "namedCaptureGroups", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QRegularExpression_namedCaptureGroups(lua_State* L)
{
    try {
        lqtk_QRegularExpression_namedCaptureGroups_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QRegularExpression_namedCaptureGroups_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpression_optimize_Args
{
    FromLua<QRegularExpression*> arg_1_1;
};

extern "C" int lqtk_QRegularExpression_optimize(lua_State* L)
{
    lqtk_QRegularExpression_optimize_Args  argValues;
    lqtk_QRegularExpression_optimize_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QRegularExpression::optimize();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpression", "optimize", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpression_pattern_Args
{
    FromLua<QRegularExpression*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QRegularExpression_pattern_doLua(lua_State* L)
{
    lqtk_QRegularExpression_pattern_Args* args = (lqtk_QRegularExpression_pattern_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpression::pattern();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpression", "pattern", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QRegularExpression_pattern(lua_State* L)
{
    try {
        lqtk_QRegularExpression_pattern_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QRegularExpression_pattern_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpression_patternErrorOffset_Args
{
    FromLua<QRegularExpression*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QRegularExpression_patternErrorOffset(lua_State* L)
{
    lqtk_QRegularExpression_patternErrorOffset_Args  argValues;
    lqtk_QRegularExpression_patternErrorOffset_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpression::patternErrorOffset();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpression", "patternErrorOffset", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpression_patternOptions_Args
{
    FromLua<QRegularExpression*> arg_1_1;
    ToLua<QRegularExpression::PatternOptions> rslt_1;
};

extern "C" int lqtk_QRegularExpression_patternOptions(lua_State* L)
{
    lqtk_QRegularExpression_patternOptions_Args  argValues;
    lqtk_QRegularExpression_patternOptions_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpression::patternOptions();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpression", "patternOptions", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpression_setPattern_Args
{
    FromLua<QRegularExpression*> arg_1_1;
    FromLua<QString> arg_2_1;
};

static int lqtk_QRegularExpression_setPattern_doLua(lua_State* L)
{
    lqtk_QRegularExpression_setPattern_Args* args = (lqtk_QRegularExpression_setPattern_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRegularExpression::setPattern(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpression", "setPattern", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QRegularExpression_setPattern(lua_State* L)
{
    try {
        lqtk_QRegularExpression_setPattern_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QRegularExpression_setPattern_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpression_setPatternOptions_Args
{
    FromLua<QRegularExpression*> arg_1_1;
    FromLua<QRegularExpression::PatternOptions> arg_2_1;
};

extern "C" int lqtk_QRegularExpression_setPatternOptions(lua_State* L)
{
    lqtk_QRegularExpression_setPatternOptions_Args  argValues;
    lqtk_QRegularExpression_setPatternOptions_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QRegularExpression::setPatternOptions(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpression", "setPatternOptions", nargs, "2");
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
        QRegularExpressionBinding::QType* ptr = static_cast<QRegularExpressionBinding::QType*>(objectPtr);
        if (targetClassInfo == &QRegularExpressionBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QRegularExpression* ptr = (QRegularExpression*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpression_new_Args
{
    explicit lqtk_QRegularExpression_new_Args(bool explicitNew)
        : explicitNew(explicitNew)
    {}
    bool explicitNew;
    FromLua<QString> arg_1_1;
    FromLua<QRegularExpression::PatternOptions> arg_2_1;
    FromLua<QRegularExpression*> arg_3_1;
    ToLua<QRegularExpression*> rslt_1;
};

static int lqtk_QRegularExpression_new_doLua(lua_State* L)
{
    lqtk_QRegularExpression_new_Args* args = (lqtk_QRegularExpression_new_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    bool explicitNew = args->explicitNew;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QRegularExpressionBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QRegularExpression> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QRegularExpression* rslt = 
                    new QRegularExpression();
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
                QRegularExpression* rslt = 
                    new QRegularExpression(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QRegularExpression* rslt = 
                    new QRegularExpression(args->arg_1_1.getValue(), args->arg_2_1.getValue());
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
                QRegularExpression* rslt = 
                    new QRegularExpression(*args->arg_3_1.getValue());
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
            return util::argCountError(L, "QRegularExpression", "new", nargs, "1,2,3");
        } else {
            return util::argCountError(L, "QRegularExpression", nullptr, nargs, "0,1,2");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QRegularExpression_constructor(lua_State* L, bool explicitNew)
{
    try {
        lqtk_QRegularExpression_new_Args args(explicitNew);
        return BindingUtil::callMethodFromLua(L, lqtk_QRegularExpression_new_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QRegularExpression_new(lua_State* L)
{
    return lqtk_QRegularExpression_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QRegularExpressionBinding::pushObject(lua_State* L, QRegularExpression* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QRegularExpression>(L, hasUserValue);     // -> uval?, udata
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
    { "AnchorAtOffsetMatchOption",    Member::INTEGER,              (void*) QRegularExpression::AnchorAtOffsetMatchOption },
    { "CaseInsensitiveOption",        Member::INTEGER,              (void*) QRegularExpression::CaseInsensitiveOption },
    { "DefaultWildcardConversion",    Member::INTEGER,              (void*) QRegularExpression::DefaultWildcardConversion },
    { "DontCaptureOption",            Member::INTEGER,              (void*) QRegularExpression::DontCaptureOption },
    { "DotMatchesEverythingOption",   Member::INTEGER,              (void*) QRegularExpression::DotMatchesEverythingOption },
    { "ExtendedPatternSyntaxOption",  Member::INTEGER,              (void*) QRegularExpression::ExtendedPatternSyntaxOption },
    { "InvertedGreedinessOption",     Member::INTEGER,              (void*) QRegularExpression::InvertedGreedinessOption },
    { "MultilineOption",              Member::INTEGER,              (void*) QRegularExpression::MultilineOption },
    { "NoMatch",                      Member::INTEGER,              (void*) QRegularExpression::NoMatch },
    { "NoMatchOption",                Member::INTEGER,              (void*) QRegularExpression::NoMatchOption },
    { "NoPatternOption",              Member::INTEGER,              (void*) QRegularExpression::NoPatternOption },
    { "NonPathWildcardConversion",    Member::INTEGER,              (void*) QRegularExpression::NonPathWildcardConversion },
    { "NormalMatch",                  Member::INTEGER,              (void*) QRegularExpression::NormalMatch },
    { "PartialPreferCompleteMatch",   Member::INTEGER,              (void*) QRegularExpression::PartialPreferCompleteMatch },
    { "PartialPreferFirstMatch",      Member::INTEGER,              (void*) QRegularExpression::PartialPreferFirstMatch },
    { "UnanchoredWildcardConversion", Member::INTEGER,              (void*) QRegularExpression::UnanchoredWildcardConversion },
    { "UseUnicodePropertiesOption",   Member::INTEGER,              (void*) QRegularExpression::UseUnicodePropertiesOption },
    { "anchoredPattern",              Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpression_anchoredPattern },
    { "captureCount",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpression_captureCount },
    { "errorString",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpression_errorString },
    { "escape",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpression_escape },
    { "fromWildcard",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpression_fromWildcard },
    { "globalMatch",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpression_globalMatch },
    { "isValid",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpression_isValid },
    { "match",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpression_match },
    { "namedCaptureGroups",           Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpression_namedCaptureGroups },
    { "optimize",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpression_optimize },
    { "pattern",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpression_pattern },
    { "patternErrorOffset",           Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpression_patternErrorOffset },
    { "patternOptions",               Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpression_patternOptions },
    { "setPattern",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpression_setPattern },
    { "setPatternOptions",            Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpression_setPatternOptions },
    { "wildcardToRegularExpression",  Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpression_wildcardToRegularExpression },
    { NULL,                           Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QRegularExpressionBinding::classInfo = 
{
    "QRegularExpression",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QRegularExpression_constructor,
    lqtk_QRegularExpression_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    33,
    members
};

/* ============================================================================================ */

int QRegularExpressionBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
