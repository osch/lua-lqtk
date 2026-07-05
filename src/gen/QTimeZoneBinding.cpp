// Type: QTimeZone
// Base: nil

/* ============================================================================================ */

#include <QByteArray>
#include <QDateTime>
#include <QObject>
#include <QString>
#include <QTimeZone>
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
#include "QByteArrayBinding.hpp"
#include "QDateTimeBinding.hpp"
#include "QObjectBinding.hpp"
#include "QStringBinding.hpp"
#include "QTimeZoneBinding.hpp"
#include "QtBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QTimeZone_availableTimeZoneIds_Args
{
    ToLua<QList<QByteArray>> rslt_1;
};

static int lqtk_QTimeZone_availableTimeZoneIds_doLua(lua_State* L)
{
    lqtk_QTimeZone_availableTimeZoneIds_Args* args = (lqtk_QTimeZone_availableTimeZoneIds_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QTimeZone::availableTimeZoneIds();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimeZone", "availableTimeZoneIds", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QTimeZone_availableTimeZoneIds(lua_State* L)
{
    try {
        lqtk_QTimeZone_availableTimeZoneIds_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QTimeZone_availableTimeZoneIds_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimeZone_fromSecondsAheadOfUtc_Args
{
    FromLua<int> arg_1_1;
    ToLua<QTimeZone*> rslt_1;
};

extern "C" int lqtk_QTimeZone_fromSecondsAheadOfUtc(lua_State* L)
{
    lqtk_QTimeZone_fromSecondsAheadOfUtc_Args  argValues;
    lqtk_QTimeZone_fromSecondsAheadOfUtc_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QTimeZone::fromSecondsAheadOfUtc(args->arg_1_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimeZone", "fromSecondsAheadOfUtc", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimeZone_ianaIdToWindowsId_Args
{
    FromLua<QByteArray*> arg_1_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QTimeZone_ianaIdToWindowsId_doLua(lua_State* L)
{
    lqtk_QTimeZone_ianaIdToWindowsId_Args* args = (lqtk_QTimeZone_ianaIdToWindowsId_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QTimeZone::ianaIdToWindowsId(*args->arg_1_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimeZone", "ianaIdToWindowsId", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QTimeZone_ianaIdToWindowsId(lua_State* L)
{
    try {
        lqtk_QTimeZone_ianaIdToWindowsId_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QTimeZone_ianaIdToWindowsId_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimeZone_isTimeZoneIdAvailable_Args
{
    FromLua<QByteArray*> arg_1_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QTimeZone_isTimeZoneIdAvailable_doLua(lua_State* L)
{
    lqtk_QTimeZone_isTimeZoneIdAvailable_Args* args = (lqtk_QTimeZone_isTimeZoneIdAvailable_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QTimeZone::isTimeZoneIdAvailable(*args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimeZone", "isTimeZoneIdAvailable", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QTimeZone_isTimeZoneIdAvailable(lua_State* L)
{
    try {
        lqtk_QTimeZone_isTimeZoneIdAvailable_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QTimeZone_isTimeZoneIdAvailable_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimeZone_systemTimeZone_Args
{
    ToLua<QTimeZone*> rslt_1;
};

extern "C" int lqtk_QTimeZone_systemTimeZone(lua_State* L)
{
    lqtk_QTimeZone_systemTimeZone_Args  argValues;
    lqtk_QTimeZone_systemTimeZone_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QTimeZone::systemTimeZone();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimeZone", "systemTimeZone", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimeZone_systemTimeZoneId_Args
{
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QTimeZone_systemTimeZoneId_doLua(lua_State* L)
{
    lqtk_QTimeZone_systemTimeZoneId_Args* args = (lqtk_QTimeZone_systemTimeZoneId_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QTimeZone::systemTimeZoneId();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimeZone", "systemTimeZoneId", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QTimeZone_systemTimeZoneId(lua_State* L)
{
    try {
        lqtk_QTimeZone_systemTimeZoneId_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QTimeZone_systemTimeZoneId_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimeZone_utc_Args
{
    ToLua<QTimeZone*> rslt_1;
};

extern "C" int lqtk_QTimeZone_utc(lua_State* L)
{
    lqtk_QTimeZone_utc_Args  argValues;
    lqtk_QTimeZone_utc_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QTimeZone::utc();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimeZone", "utc", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimeZone_abbreviation_Args
{
    FromLua<QTimeZone*> arg_1_1;
    FromLua<QDateTime*> arg_2_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QTimeZone_abbreviation_doLua(lua_State* L)
{
    lqtk_QTimeZone_abbreviation_Args* args = (lqtk_QTimeZone_abbreviation_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTimeZone::abbreviation(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimeZone", "abbreviation", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QTimeZone_abbreviation(lua_State* L)
{
    try {
        lqtk_QTimeZone_abbreviation_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QTimeZone_abbreviation_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimeZone_asBackendZone_Args
{
    FromLua<QTimeZone*> arg_1_1;
    ToLua<QTimeZone*> rslt_1;
};

extern "C" int lqtk_QTimeZone_asBackendZone(lua_State* L)
{
    lqtk_QTimeZone_asBackendZone_Args  argValues;
    lqtk_QTimeZone_asBackendZone_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTimeZone::asBackendZone();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimeZone", "asBackendZone", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimeZone_comment_Args
{
    FromLua<QTimeZone*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QTimeZone_comment_doLua(lua_State* L)
{
    lqtk_QTimeZone_comment_Args* args = (lqtk_QTimeZone_comment_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTimeZone::comment();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimeZone", "comment", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QTimeZone_comment(lua_State* L)
{
    try {
        lqtk_QTimeZone_comment_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QTimeZone_comment_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimeZone_daylightTimeOffset_Args
{
    FromLua<QTimeZone*> arg_1_1;
    FromLua<QDateTime*> arg_2_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QTimeZone_daylightTimeOffset(lua_State* L)
{
    lqtk_QTimeZone_daylightTimeOffset_Args  argValues;
    lqtk_QTimeZone_daylightTimeOffset_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTimeZone::daylightTimeOffset(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimeZone", "daylightTimeOffset", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimeZone_displayName_Args
{
    FromLua<QTimeZone*> arg_1_1;
    FromLua<QTimeZone::TimeType> arg_2_1;
    FromLua<QTimeZone::NameType> arg_3_1;
    FromLua<QDateTime*> arg_4_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QTimeZone_displayName_doLua(lua_State* L)
{
    lqtk_QTimeZone_displayName_Args* args = (lqtk_QTimeZone_displayName_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTimeZone::displayName(args->arg_2_1.getValue());
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
                    args->arg_1_1.getValue()->QTimeZone::displayName(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_4_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTimeZone::displayName(*args->arg_4_1.getValue());
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
            if (!args->arg_4_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTimeZone::displayName(*args->arg_4_1.getValue(), args->arg_3_1.getValue());
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
        return util::argCountError(L, "QTimeZone", "displayName", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QTimeZone_displayName(lua_State* L)
{
    try {
        lqtk_QTimeZone_displayName_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QTimeZone_displayName_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimeZone_fixedSecondsAheadOfUtc_Args
{
    FromLua<QTimeZone*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QTimeZone_fixedSecondsAheadOfUtc(lua_State* L)
{
    lqtk_QTimeZone_fixedSecondsAheadOfUtc_Args  argValues;
    lqtk_QTimeZone_fixedSecondsAheadOfUtc_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTimeZone::fixedSecondsAheadOfUtc();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimeZone", "fixedSecondsAheadOfUtc", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimeZone_hasAlternativeName_Args
{
    FromLua<QTimeZone*> arg_1_1;
    FromLua<QByteArray*> arg_2_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QTimeZone_hasAlternativeName_doLua(lua_State* L)
{
    lqtk_QTimeZone_hasAlternativeName_Args* args = (lqtk_QTimeZone_hasAlternativeName_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTimeZone::hasAlternativeName(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimeZone", "hasAlternativeName", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QTimeZone_hasAlternativeName(lua_State* L)
{
    try {
        lqtk_QTimeZone_hasAlternativeName_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QTimeZone_hasAlternativeName_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimeZone_hasDaylightTime_Args
{
    FromLua<QTimeZone*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QTimeZone_hasDaylightTime(lua_State* L)
{
    lqtk_QTimeZone_hasDaylightTime_Args  argValues;
    lqtk_QTimeZone_hasDaylightTime_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTimeZone::hasDaylightTime();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimeZone", "hasDaylightTime", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimeZone_hasTransitions_Args
{
    FromLua<QTimeZone*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QTimeZone_hasTransitions(lua_State* L)
{
    lqtk_QTimeZone_hasTransitions_Args  argValues;
    lqtk_QTimeZone_hasTransitions_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTimeZone::hasTransitions();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimeZone", "hasTransitions", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimeZone_id_Args
{
    FromLua<QTimeZone*> arg_1_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QTimeZone_id_doLua(lua_State* L)
{
    lqtk_QTimeZone_id_Args* args = (lqtk_QTimeZone_id_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTimeZone::id();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimeZone", "id", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QTimeZone_id(lua_State* L)
{
    try {
        lqtk_QTimeZone_id_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QTimeZone_id_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimeZone_isDaylightTime_Args
{
    FromLua<QTimeZone*> arg_1_1;
    FromLua<QDateTime*> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QTimeZone_isDaylightTime(lua_State* L)
{
    lqtk_QTimeZone_isDaylightTime_Args  argValues;
    lqtk_QTimeZone_isDaylightTime_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTimeZone::isDaylightTime(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimeZone", "isDaylightTime", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimeZone_isUtcOrFixedOffset_Args
{
    FromLua<QTimeZone*> arg_1_1;
    FromLua<Qt::TimeSpec> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QTimeZone_isUtcOrFixedOffset(lua_State* L)
{
    lqtk_QTimeZone_isUtcOrFixedOffset_Args  argValues;
    lqtk_QTimeZone_isUtcOrFixedOffset_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTimeZone::isUtcOrFixedOffset();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTimeZone::isUtcOrFixedOffset(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimeZone", "isUtcOrFixedOffset", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimeZone_isValid_Args
{
    FromLua<QTimeZone*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QTimeZone_isValid(lua_State* L)
{
    lqtk_QTimeZone_isValid_Args  argValues;
    lqtk_QTimeZone_isValid_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTimeZone::isValid();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimeZone", "isValid", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimeZone_offsetFromUtc_Args
{
    FromLua<QTimeZone*> arg_1_1;
    FromLua<QDateTime*> arg_2_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QTimeZone_offsetFromUtc(lua_State* L)
{
    lqtk_QTimeZone_offsetFromUtc_Args  argValues;
    lqtk_QTimeZone_offsetFromUtc_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTimeZone::offsetFromUtc(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimeZone", "offsetFromUtc", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimeZone_standardTimeOffset_Args
{
    FromLua<QTimeZone*> arg_1_1;
    FromLua<QDateTime*> arg_2_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QTimeZone_standardTimeOffset(lua_State* L)
{
    lqtk_QTimeZone_standardTimeOffset_Args  argValues;
    lqtk_QTimeZone_standardTimeOffset_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTimeZone::standardTimeOffset(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimeZone", "standardTimeOffset", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTimeZone_timeSpec_Args
{
    FromLua<QTimeZone*> arg_1_1;
    ToLua<Qt::TimeSpec> rslt_1;
};

extern "C" int lqtk_QTimeZone_timeSpec(lua_State* L)
{
    lqtk_QTimeZone_timeSpec_Args  argValues;
    lqtk_QTimeZone_timeSpec_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTimeZone::timeSpec();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTimeZone", "timeSpec", nargs, "1");
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
        QTimeZoneBinding::QType* ptr = static_cast<QTimeZoneBinding::QType*>(objectPtr);
        if (targetClassInfo == &QTimeZoneBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QTimeZone* ptr = (QTimeZone*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

struct lqtk_QTimeZone_new_Args
{
    explicit lqtk_QTimeZone_new_Args(bool explicitNew)
        : explicitNew(explicitNew)
    {}
    bool explicitNew;
    FromLua<QTimeZone::Initialization> arg_1_1;
    FromLua<QByteArray*> arg_2_1;
    FromLua<int> arg_3_1;
    FromLua<QTimeZone*> arg_4_1;
    ToLua<QTimeZone*> rslt_1;
};

static int lqtk_QTimeZone_new_doLua(lua_State* L)
{
    lqtk_QTimeZone_new_Args* args = (lqtk_QTimeZone_new_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    bool explicitNew = args->explicitNew;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QTimeZoneBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QTimeZone> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QTimeZone* rslt = 
                    new QTimeZone();
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
                QTimeZone* rslt = 
                    new QTimeZone(args->arg_1_1.getValue());
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
                QTimeZone* rslt = 
                    new QTimeZone(*args->arg_2_1.getValue());
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
                QTimeZone* rslt = 
                    new QTimeZone(args->arg_3_1.getValue());
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
                QTimeZone* rslt = 
                    new QTimeZone(*args->arg_4_1.getValue());
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
            return util::argCountError(L, "QTimeZone", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QTimeZone", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QTimeZone_constructor(lua_State* L, bool explicitNew)
{
    try {
        lqtk_QTimeZone_new_Args args(explicitNew);
        return BindingUtil::callMethodFromLua(L, lqtk_QTimeZone_new_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QTimeZone_new(lua_State* L)
{
    return lqtk_QTimeZone_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QTimeZoneBinding::pushObject(lua_State* L, QTimeZone* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QTimeZone>(L, hasUserValue);     // -> uval?, udata
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
    { "DaylightTime",           Member::INTEGER,              (void*) QTimeZone::DaylightTime },
    { "DefaultName",            Member::INTEGER,              (void*) QTimeZone::DefaultName },
    { "GenericTime",            Member::INTEGER,              (void*) QTimeZone::GenericTime },
    { "LocalTime",              Member::INTEGER,              (void*) QTimeZone::LocalTime },
    { "LongName",               Member::INTEGER,              (void*) QTimeZone::LongName },
    { "OffsetName",             Member::INTEGER,              (void*) QTimeZone::OffsetName },
    { "ShortName",              Member::INTEGER,              (void*) QTimeZone::ShortName },
    { "StandardTime",           Member::INTEGER,              (void*) QTimeZone::StandardTime },
    { "UTC",                    Member::INTEGER,              (void*) QTimeZone::UTC },
    { "abbreviation",           Member::NORMAL_FUNCTION,      (void*) lqtk_QTimeZone_abbreviation },
    { "asBackendZone",          Member::NORMAL_FUNCTION,      (void*) lqtk_QTimeZone_asBackendZone },
    { "availableTimeZoneIds",   Member::NORMAL_FUNCTION,      (void*) lqtk_QTimeZone_availableTimeZoneIds },
    { "comment",                Member::NORMAL_FUNCTION,      (void*) lqtk_QTimeZone_comment },
    { "daylightTimeOffset",     Member::NORMAL_FUNCTION,      (void*) lqtk_QTimeZone_daylightTimeOffset },
    { "displayName",            Member::NORMAL_FUNCTION,      (void*) lqtk_QTimeZone_displayName },
    { "fixedSecondsAheadOfUtc", Member::NORMAL_FUNCTION,      (void*) lqtk_QTimeZone_fixedSecondsAheadOfUtc },
    { "fromSecondsAheadOfUtc",  Member::NORMAL_FUNCTION,      (void*) lqtk_QTimeZone_fromSecondsAheadOfUtc },
    { "hasAlternativeName",     Member::NORMAL_FUNCTION,      (void*) lqtk_QTimeZone_hasAlternativeName },
    { "hasDaylightTime",        Member::NORMAL_FUNCTION,      (void*) lqtk_QTimeZone_hasDaylightTime },
    { "hasTransitions",         Member::NORMAL_FUNCTION,      (void*) lqtk_QTimeZone_hasTransitions },
    { "ianaIdToWindowsId",      Member::NORMAL_FUNCTION,      (void*) lqtk_QTimeZone_ianaIdToWindowsId },
    { "id",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QTimeZone_id },
    { "isDaylightTime",         Member::NORMAL_FUNCTION,      (void*) lqtk_QTimeZone_isDaylightTime },
    { "isTimeZoneIdAvailable",  Member::NORMAL_FUNCTION,      (void*) lqtk_QTimeZone_isTimeZoneIdAvailable },
    { "isUtcOrFixedOffset",     Member::NORMAL_FUNCTION,      (void*) lqtk_QTimeZone_isUtcOrFixedOffset },
    { "isValid",                Member::NORMAL_FUNCTION,      (void*) lqtk_QTimeZone_isValid },
    { "offsetFromUtc",          Member::NORMAL_FUNCTION,      (void*) lqtk_QTimeZone_offsetFromUtc },
    { "standardTimeOffset",     Member::NORMAL_FUNCTION,      (void*) lqtk_QTimeZone_standardTimeOffset },
    { "systemTimeZone",         Member::NORMAL_FUNCTION,      (void*) lqtk_QTimeZone_systemTimeZone },
    { "systemTimeZoneId",       Member::NORMAL_FUNCTION,      (void*) lqtk_QTimeZone_systemTimeZoneId },
    { "timeSpec",               Member::NORMAL_FUNCTION,      (void*) lqtk_QTimeZone_timeSpec },
    { "utc",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QTimeZone_utc },
    { NULL,                     Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QTimeZoneBinding::classInfo = 
{
    "QTimeZone",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QTimeZone_constructor,
    lqtk_QTimeZone_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    32,
    members
};

/* ============================================================================================ */

int QTimeZoneBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
