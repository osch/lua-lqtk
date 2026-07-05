// Type: QDateTime
// Base: nil

/* ============================================================================================ */

#include <QDate>
#include <QDateTime>
#include <QObject>
#include <QString>
#include <QTime>
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
#include "QDateBinding.hpp"
#include "QDateTimeBinding.hpp"
#include "QObjectBinding.hpp"
#include "QStringBinding.hpp"
#include "QTimeBinding.hpp"
#include "QTimeZoneBinding.hpp"
#include "QtBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QDateTime_currentDateTime_Args
{
    FromLua<QTimeZone::Initialization> arg_1_1;
    FromLua<QTimeZone*> arg_2_1;
    ToLua<QDateTime*> rslt_1;
};

extern "C" int lqtk_QDateTime_currentDateTime(lua_State* L)
{
    lqtk_QDateTime_currentDateTime_Args  argValues;
    lqtk_QDateTime_currentDateTime_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QDateTime::currentDateTime();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QDateTime::currentDateTime(args->arg_1_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QDateTime::currentDateTime(*args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QDateTime", "currentDateTime", nargs, "0,1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_currentDateTimeUtc_Args
{
    ToLua<QDateTime*> rslt_1;
};

extern "C" int lqtk_QDateTime_currentDateTimeUtc(lua_State* L)
{
    lqtk_QDateTime_currentDateTimeUtc_Args  argValues;
    lqtk_QDateTime_currentDateTimeUtc_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QDateTime::currentDateTimeUtc();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "currentDateTimeUtc", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_currentMSecsSinceEpoch_Args
{
    ToLua<qint64> rslt_1;
};

extern "C" int lqtk_QDateTime_currentMSecsSinceEpoch(lua_State* L)
{
    lqtk_QDateTime_currentMSecsSinceEpoch_Args  argValues;
    lqtk_QDateTime_currentMSecsSinceEpoch_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QDateTime::currentMSecsSinceEpoch();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "currentMSecsSinceEpoch", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_currentSecsSinceEpoch_Args
{
    ToLua<qint64> rslt_1;
};

extern "C" int lqtk_QDateTime_currentSecsSinceEpoch(lua_State* L)
{
    lqtk_QDateTime_currentSecsSinceEpoch_Args  argValues;
    lqtk_QDateTime_currentSecsSinceEpoch_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QDateTime::currentSecsSinceEpoch();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "currentSecsSinceEpoch", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_fromMSecsSinceEpoch_Args
{
    FromLua<qint64> arg_1_1;
    FromLua<QTimeZone*> arg_2_1;
    FromLua<QTimeZone::Initialization> arg_3_1;
    ToLua<QDateTime*> rslt_1;
};

extern "C" int lqtk_QDateTime_fromMSecsSinceEpoch(lua_State* L)
{
    lqtk_QDateTime_fromMSecsSinceEpoch_Args  argValues;
    lqtk_QDateTime_fromMSecsSinceEpoch_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QDateTime::fromMSecsSinceEpoch(args->arg_1_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    QDateTime::fromMSecsSinceEpoch(args->arg_1_1.getValue(), *args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    QDateTime::fromMSecsSinceEpoch(args->arg_1_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QDateTime", "fromMSecsSinceEpoch", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_fromSecsSinceEpoch_Args
{
    FromLua<qint64> arg_1_1;
    FromLua<QTimeZone*> arg_2_1;
    FromLua<QTimeZone::Initialization> arg_3_1;
    ToLua<QDateTime*> rslt_1;
};

extern "C" int lqtk_QDateTime_fromSecsSinceEpoch(lua_State* L)
{
    lqtk_QDateTime_fromSecsSinceEpoch_Args  argValues;
    lqtk_QDateTime_fromSecsSinceEpoch_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QDateTime::fromSecsSinceEpoch(args->arg_1_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    QDateTime::fromSecsSinceEpoch(args->arg_1_1.getValue(), *args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    QDateTime::fromSecsSinceEpoch(args->arg_1_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QDateTime", "fromSecsSinceEpoch", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_fromString_Args
{
    FromLua<QString> arg_1_1;
    FromLua<Qt::DateFormat> arg_2_1;
    ToLua<QDateTime*> rslt_1;
};

static int lqtk_QDateTime_fromString_doLua(lua_State* L)
{
    lqtk_QDateTime_fromString_Args* args = (lqtk_QDateTime_fromString_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QDateTime::fromString(args->arg_1_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QDateTime::fromString(args->arg_1_1.getValue(), args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "fromString", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDateTime_fromString(lua_State* L)
{
    try {
        lqtk_QDateTime_fromString_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDateTime_fromString_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_addDays_Args
{
    FromLua<QDateTime*> arg_1_1;
    FromLua<qint64> arg_2_1;
    ToLua<QDateTime*> rslt_1;
};

extern "C" int lqtk_QDateTime_addDays(lua_State* L)
{
    lqtk_QDateTime_addDays_Args  argValues;
    lqtk_QDateTime_addDays_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDateTime::addDays(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "addDays", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_addMSecs_Args
{
    FromLua<QDateTime*> arg_1_1;
    FromLua<qint64> arg_2_1;
    ToLua<QDateTime*> rslt_1;
};

extern "C" int lqtk_QDateTime_addMSecs(lua_State* L)
{
    lqtk_QDateTime_addMSecs_Args  argValues;
    lqtk_QDateTime_addMSecs_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDateTime::addMSecs(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "addMSecs", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_addMonths_Args
{
    FromLua<QDateTime*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QDateTime*> rslt_1;
};

extern "C" int lqtk_QDateTime_addMonths(lua_State* L)
{
    lqtk_QDateTime_addMonths_Args  argValues;
    lqtk_QDateTime_addMonths_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDateTime::addMonths(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "addMonths", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_addSecs_Args
{
    FromLua<QDateTime*> arg_1_1;
    FromLua<qint64> arg_2_1;
    ToLua<QDateTime*> rslt_1;
};

extern "C" int lqtk_QDateTime_addSecs(lua_State* L)
{
    lqtk_QDateTime_addSecs_Args  argValues;
    lqtk_QDateTime_addSecs_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDateTime::addSecs(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "addSecs", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_addYears_Args
{
    FromLua<QDateTime*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QDateTime*> rslt_1;
};

extern "C" int lqtk_QDateTime_addYears(lua_State* L)
{
    lqtk_QDateTime_addYears_Args  argValues;
    lqtk_QDateTime_addYears_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDateTime::addYears(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "addYears", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_date_Args
{
    FromLua<QDateTime*> arg_1_1;
    ToLua<QDate*> rslt_1;
};

extern "C" int lqtk_QDateTime_date(lua_State* L)
{
    lqtk_QDateTime_date_Args  argValues;
    lqtk_QDateTime_date_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDateTime::date();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "date", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_daysTo_Args
{
    FromLua<QDateTime*> arg_1_1;
    FromLua<QDateTime*> arg_2_1;
    ToLua<qint64> rslt_1;
};

extern "C" int lqtk_QDateTime_daysTo(lua_State* L)
{
    lqtk_QDateTime_daysTo_Args  argValues;
    lqtk_QDateTime_daysTo_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDateTime::daysTo(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "daysTo", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_isDaylightTime_Args
{
    FromLua<QDateTime*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QDateTime_isDaylightTime(lua_State* L)
{
    lqtk_QDateTime_isDaylightTime_Args  argValues;
    lqtk_QDateTime_isDaylightTime_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDateTime::isDaylightTime();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "isDaylightTime", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_isNull_Args
{
    FromLua<QDateTime*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QDateTime_isNull(lua_State* L)
{
    lqtk_QDateTime_isNull_Args  argValues;
    lqtk_QDateTime_isNull_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDateTime::isNull();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "isNull", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_isValid_Args
{
    FromLua<QDateTime*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QDateTime_isValid(lua_State* L)
{
    lqtk_QDateTime_isValid_Args  argValues;
    lqtk_QDateTime_isValid_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDateTime::isValid();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "isValid", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_msecsTo_Args
{
    FromLua<QDateTime*> arg_1_1;
    FromLua<QDateTime*> arg_2_1;
    ToLua<qint64> rslt_1;
};

extern "C" int lqtk_QDateTime_msecsTo(lua_State* L)
{
    lqtk_QDateTime_msecsTo_Args  argValues;
    lqtk_QDateTime_msecsTo_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDateTime::msecsTo(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "msecsTo", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_offsetFromUtc_Args
{
    FromLua<QDateTime*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QDateTime_offsetFromUtc(lua_State* L)
{
    lqtk_QDateTime_offsetFromUtc_Args  argValues;
    lqtk_QDateTime_offsetFromUtc_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDateTime::offsetFromUtc();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "offsetFromUtc", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_secsTo_Args
{
    FromLua<QDateTime*> arg_1_1;
    FromLua<QDateTime*> arg_2_1;
    ToLua<qint64> rslt_1;
};

extern "C" int lqtk_QDateTime_secsTo(lua_State* L)
{
    lqtk_QDateTime_secsTo_Args  argValues;
    lqtk_QDateTime_secsTo_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDateTime::secsTo(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "secsTo", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_setDate_Args
{
    FromLua<QDateTime*> arg_1_1;
    FromLua<QDate*> arg_2_1;
};

extern "C" int lqtk_QDateTime_setDate(lua_State* L)
{
    lqtk_QDateTime_setDate_Args  argValues;
    lqtk_QDateTime_setDate_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QDateTime::setDate(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "setDate", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_setMSecsSinceEpoch_Args
{
    FromLua<QDateTime*> arg_1_1;
    FromLua<qint64> arg_2_1;
};

extern "C" int lqtk_QDateTime_setMSecsSinceEpoch(lua_State* L)
{
    lqtk_QDateTime_setMSecsSinceEpoch_Args  argValues;
    lqtk_QDateTime_setMSecsSinceEpoch_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QDateTime::setMSecsSinceEpoch(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "setMSecsSinceEpoch", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_setSecsSinceEpoch_Args
{
    FromLua<QDateTime*> arg_1_1;
    FromLua<qint64> arg_2_1;
};

extern "C" int lqtk_QDateTime_setSecsSinceEpoch(lua_State* L)
{
    lqtk_QDateTime_setSecsSinceEpoch_Args  argValues;
    lqtk_QDateTime_setSecsSinceEpoch_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QDateTime::setSecsSinceEpoch(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "setSecsSinceEpoch", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_setTime_Args
{
    FromLua<QDateTime*> arg_1_1;
    FromLua<QTime*> arg_2_1;
};

extern "C" int lqtk_QDateTime_setTime(lua_State* L)
{
    lqtk_QDateTime_setTime_Args  argValues;
    lqtk_QDateTime_setTime_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QDateTime::setTime(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "setTime", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_setTimeZone_Args
{
    FromLua<QDateTime*> arg_1_1;
    FromLua<QTimeZone::Initialization> arg_2_1;
    FromLua<QTimeZone*> arg_3_1;
};

extern "C" int lqtk_QDateTime_setTimeZone(lua_State* L)
{
    lqtk_QDateTime_setTimeZone_Args  argValues;
    lqtk_QDateTime_setTimeZone_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                    args->arg_1_1.getValue()->QDateTime::setTimeZone(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                    args->arg_1_1.getValue()->QDateTime::setTimeZone(*args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QDateTime", "setTimeZone", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_time_Args
{
    FromLua<QDateTime*> arg_1_1;
    ToLua<QTime*> rslt_1;
};

extern "C" int lqtk_QDateTime_time(lua_State* L)
{
    lqtk_QDateTime_time_Args  argValues;
    lqtk_QDateTime_time_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDateTime::time();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "time", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_timeRepresentation_Args
{
    FromLua<QDateTime*> arg_1_1;
    ToLua<QTimeZone*> rslt_1;
};

extern "C" int lqtk_QDateTime_timeRepresentation(lua_State* L)
{
    lqtk_QDateTime_timeRepresentation_Args  argValues;
    lqtk_QDateTime_timeRepresentation_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDateTime::timeRepresentation();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "timeRepresentation", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_timeZone_Args
{
    FromLua<QDateTime*> arg_1_1;
    ToLua<QTimeZone*> rslt_1;
};

extern "C" int lqtk_QDateTime_timeZone(lua_State* L)
{
    lqtk_QDateTime_timeZone_Args  argValues;
    lqtk_QDateTime_timeZone_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDateTime::timeZone();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "timeZone", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_timeZoneAbbreviation_Args
{
    FromLua<QDateTime*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QDateTime_timeZoneAbbreviation_doLua(lua_State* L)
{
    lqtk_QDateTime_timeZoneAbbreviation_Args* args = (lqtk_QDateTime_timeZoneAbbreviation_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDateTime::timeZoneAbbreviation();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "timeZoneAbbreviation", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDateTime_timeZoneAbbreviation(lua_State* L)
{
    try {
        lqtk_QDateTime_timeZoneAbbreviation_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDateTime_timeZoneAbbreviation_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_toMSecsSinceEpoch_Args
{
    FromLua<QDateTime*> arg_1_1;
    ToLua<qint64> rslt_1;
};

extern "C" int lqtk_QDateTime_toMSecsSinceEpoch(lua_State* L)
{
    lqtk_QDateTime_toMSecsSinceEpoch_Args  argValues;
    lqtk_QDateTime_toMSecsSinceEpoch_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDateTime::toMSecsSinceEpoch();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "toMSecsSinceEpoch", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_toOffsetFromUtc_Args
{
    FromLua<QDateTime*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QDateTime*> rslt_1;
};

extern "C" int lqtk_QDateTime_toOffsetFromUtc(lua_State* L)
{
    lqtk_QDateTime_toOffsetFromUtc_Args  argValues;
    lqtk_QDateTime_toOffsetFromUtc_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDateTime::toOffsetFromUtc(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "toOffsetFromUtc", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_toSecsSinceEpoch_Args
{
    FromLua<QDateTime*> arg_1_1;
    ToLua<qint64> rslt_1;
};

extern "C" int lqtk_QDateTime_toSecsSinceEpoch(lua_State* L)
{
    lqtk_QDateTime_toSecsSinceEpoch_Args  argValues;
    lqtk_QDateTime_toSecsSinceEpoch_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDateTime::toSecsSinceEpoch();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "toSecsSinceEpoch", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_toString_Args
{
    FromLua<QDateTime*> arg_1_1;
    FromLua<Qt::DateFormat> arg_2_1;
    FromLua<QString> arg_3_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QDateTime_toString_doLua(lua_State* L)
{
    lqtk_QDateTime_toString_Args* args = (lqtk_QDateTime_toString_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDateTime::toString();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDateTime::toString(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDateTime::toString(args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QDateTime", "toString", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDateTime_toString(lua_State* L)
{
    try {
        lqtk_QDateTime_toString_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDateTime_toString_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDateTime_toUTC_Args
{
    FromLua<QDateTime*> arg_1_1;
    ToLua<QDateTime*> rslt_1;
};

extern "C" int lqtk_QDateTime_toUTC(lua_State* L)
{
    lqtk_QDateTime_toUTC_Args  argValues;
    lqtk_QDateTime_toUTC_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDateTime::toUTC();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDateTime", "toUTC", nargs, "1");
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
        QDateTimeBinding::QType* ptr = static_cast<QDateTimeBinding::QType*>(objectPtr);
        if (targetClassInfo == &QDateTimeBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QDateTime* ptr = (QDateTime*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

struct lqtk_QDateTime_new_Args
{
    FromLua<QDateTime*> arg_1_1;
    ToLua<QDateTime*> rslt_1;
};

extern "C" int lqtk_QDateTime_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QDateTime_new_Args  argValues;
    lqtk_QDateTime_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QDateTimeBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QDateTime> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QDateTime* rslt = 
                    new QDateTime();
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
                QDateTime* rslt = 
                    new QDateTime(*args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QDateTime", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QDateTime", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QDateTime_new(lua_State* L)
{
    return lqtk_QDateTime_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QDateTimeBinding::pushObject(lua_State* L, QDateTime* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QDateTime>(L, hasUserValue);     // -> uval?, udata
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
    { "addDays",                Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_addDays },
    { "addMSecs",               Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_addMSecs },
    { "addMonths",              Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_addMonths },
    { "addSecs",                Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_addSecs },
    { "addYears",               Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_addYears },
    { "currentDateTime",        Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_currentDateTime },
    { "currentDateTimeUtc",     Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_currentDateTimeUtc },
    { "currentMSecsSinceEpoch", Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_currentMSecsSinceEpoch },
    { "currentSecsSinceEpoch",  Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_currentSecsSinceEpoch },
    { "date",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_date },
    { "daysTo",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_daysTo },
    { "fromMSecsSinceEpoch",    Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_fromMSecsSinceEpoch },
    { "fromSecsSinceEpoch",     Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_fromSecsSinceEpoch },
    { "fromString",             Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_fromString },
    { "isDaylightTime",         Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_isDaylightTime },
    { "isNull",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_isNull },
    { "isValid",                Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_isValid },
    { "msecsTo",                Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_msecsTo },
    { "offsetFromUtc",          Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_offsetFromUtc },
    { "secsTo",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_secsTo },
    { "setDate",                Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_setDate },
    { "setMSecsSinceEpoch",     Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_setMSecsSinceEpoch },
    { "setSecsSinceEpoch",      Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_setSecsSinceEpoch },
    { "setTime",                Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_setTime },
    { "setTimeZone",            Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_setTimeZone },
    { "time",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_time },
    { "timeRepresentation",     Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_timeRepresentation },
    { "timeZone",               Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_timeZone },
    { "timeZoneAbbreviation",   Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_timeZoneAbbreviation },
    { "toMSecsSinceEpoch",      Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_toMSecsSinceEpoch },
    { "toOffsetFromUtc",        Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_toOffsetFromUtc },
    { "toSecsSinceEpoch",       Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_toSecsSinceEpoch },
    { "toString",               Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_toString },
    { "toUTC",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QDateTime_toUTC },
    { NULL,                     Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QDateTimeBinding::classInfo = 
{
    "QDateTime",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QDateTime_constructor,
    lqtk_QDateTime_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    34,
    members
};

/* ============================================================================================ */

int QDateTimeBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
