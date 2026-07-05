// Type: QDate
// Base: nil

/* ============================================================================================ */

#include <QDate>
#include <QDateTime>
#include <QObject>
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
#include "QDateBinding.hpp"
#include "QDateTimeBinding.hpp"
#include "QObjectBinding.hpp"
#include "QStringBinding.hpp"
#include "QtBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QDate_currentDate_Args
{
    ToLua<QDate*> rslt_1;
};

extern "C" int lqtk_QDate_currentDate(lua_State* L)
{
    lqtk_QDate_currentDate_Args  argValues;
    lqtk_QDate_currentDate_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QDate::currentDate();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDate", "currentDate", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDate_fromJulianDay_Args
{
    FromLua<qint64> arg_1_1;
    ToLua<QDate*> rslt_1;
};

extern "C" int lqtk_QDate_fromJulianDay(lua_State* L)
{
    lqtk_QDate_fromJulianDay_Args  argValues;
    lqtk_QDate_fromJulianDay_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QDate::fromJulianDay(args->arg_1_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDate", "fromJulianDay", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDate_fromString_Args
{
    FromLua<QString> arg_1_1;
    FromLua<Qt::DateFormat> arg_2_1;
    ToLua<QDate*> rslt_1;
};

static int lqtk_QDate_fromString_doLua(lua_State* L)
{
    lqtk_QDate_fromString_Args* args = (lqtk_QDate_fromString_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QDate::fromString(args->arg_1_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QDate::fromString(args->arg_1_1.getValue(), args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDate", "fromString", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDate_fromString(lua_State* L)
{
    try {
        lqtk_QDate_fromString_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDate_fromString_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDate_isLeapYear_Args
{
    FromLua<int> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QDate_isLeapYear(lua_State* L)
{
    lqtk_QDate_isLeapYear_Args  argValues;
    lqtk_QDate_isLeapYear_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QDate::isLeapYear(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDate", "isLeapYear", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDate_isValid_Args
{
    FromLua<QDate*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
    FromLua<int> arg_2_3;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QDate_isValid(lua_State* L)
{
    lqtk_QDate_isValid_Args  argValues;
    lqtk_QDate_isValid_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDate::isValid();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_2_1.check(L, argOffs+1);
            args->arg_2_2.check(L, argOffs+2);
            args->arg_2_3.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    QDate::isValid(args->arg_2_1.getValue(), args->arg_2_2.getValue(), args->arg_2_3.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDate", "isValid", nargs, "1,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDate_addDays_Args
{
    FromLua<QDate*> arg_1_1;
    FromLua<qint64> arg_2_1;
    ToLua<QDate*> rslt_1;
};

extern "C" int lqtk_QDate_addDays(lua_State* L)
{
    lqtk_QDate_addDays_Args  argValues;
    lqtk_QDate_addDays_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDate::addDays(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDate", "addDays", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDate_addMonths_Args
{
    FromLua<QDate*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QDate*> rslt_1;
};

extern "C" int lqtk_QDate_addMonths(lua_State* L)
{
    lqtk_QDate_addMonths_Args  argValues;
    lqtk_QDate_addMonths_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDate::addMonths(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDate", "addMonths", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDate_addYears_Args
{
    FromLua<QDate*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QDate*> rslt_1;
};

extern "C" int lqtk_QDate_addYears(lua_State* L)
{
    lqtk_QDate_addYears_Args  argValues;
    lqtk_QDate_addYears_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDate::addYears(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDate", "addYears", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDate_day_Args
{
    FromLua<QDate*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QDate_day(lua_State* L)
{
    lqtk_QDate_day_Args  argValues;
    lqtk_QDate_day_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDate::day();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDate", "day", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDate_dayOfWeek_Args
{
    FromLua<QDate*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QDate_dayOfWeek(lua_State* L)
{
    lqtk_QDate_dayOfWeek_Args  argValues;
    lqtk_QDate_dayOfWeek_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDate::dayOfWeek();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDate", "dayOfWeek", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDate_dayOfYear_Args
{
    FromLua<QDate*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QDate_dayOfYear(lua_State* L)
{
    lqtk_QDate_dayOfYear_Args  argValues;
    lqtk_QDate_dayOfYear_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDate::dayOfYear();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDate", "dayOfYear", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDate_daysInMonth_Args
{
    FromLua<QDate*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QDate_daysInMonth(lua_State* L)
{
    lqtk_QDate_daysInMonth_Args  argValues;
    lqtk_QDate_daysInMonth_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDate::daysInMonth();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDate", "daysInMonth", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDate_daysInYear_Args
{
    FromLua<QDate*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QDate_daysInYear(lua_State* L)
{
    lqtk_QDate_daysInYear_Args  argValues;
    lqtk_QDate_daysInYear_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDate::daysInYear();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDate", "daysInYear", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDate_daysTo_Args
{
    FromLua<QDate*> arg_1_1;
    FromLua<QDate*> arg_2_1;
    ToLua<qint64> rslt_1;
};

extern "C" int lqtk_QDate_daysTo(lua_State* L)
{
    lqtk_QDate_daysTo_Args  argValues;
    lqtk_QDate_daysTo_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDate::daysTo(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDate", "daysTo", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDate_endOfDay_Args
{
    FromLua<QDate*> arg_1_1;
    ToLua<QDateTime*> rslt_1;
};

extern "C" int lqtk_QDate_endOfDay(lua_State* L)
{
    lqtk_QDate_endOfDay_Args  argValues;
    lqtk_QDate_endOfDay_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDate::endOfDay();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDate", "endOfDay", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDate_isNull_Args
{
    FromLua<QDate*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QDate_isNull(lua_State* L)
{
    lqtk_QDate_isNull_Args  argValues;
    lqtk_QDate_isNull_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDate::isNull();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDate", "isNull", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDate_month_Args
{
    FromLua<QDate*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QDate_month(lua_State* L)
{
    lqtk_QDate_month_Args  argValues;
    lqtk_QDate_month_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDate::month();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDate", "month", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDate_setDate_Args
{
    FromLua<QDate*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
    FromLua<int> arg_2_3;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QDate_setDate(lua_State* L)
{
    lqtk_QDate_setDate_Args  argValues;
    lqtk_QDate_setDate_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            args->arg_2_3.check(L, argOffs+4);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDate::setDate(args->arg_2_1.getValue(), args->arg_2_2.getValue(), args->arg_2_3.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDate", "setDate", nargs, "4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDate_startOfDay_Args
{
    FromLua<QDate*> arg_1_1;
    ToLua<QDateTime*> rslt_1;
};

extern "C" int lqtk_QDate_startOfDay(lua_State* L)
{
    lqtk_QDate_startOfDay_Args  argValues;
    lqtk_QDate_startOfDay_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDate::startOfDay();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDate", "startOfDay", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDate_toJulianDay_Args
{
    FromLua<QDate*> arg_1_1;
    ToLua<qint64> rslt_1;
};

extern "C" int lqtk_QDate_toJulianDay(lua_State* L)
{
    lqtk_QDate_toJulianDay_Args  argValues;
    lqtk_QDate_toJulianDay_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDate::toJulianDay();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QDate", "toJulianDay", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QDate_toString_Args
{
    FromLua<QDate*> arg_1_1;
    FromLua<Qt::DateFormat> arg_2_1;
    FromLua<QString> arg_3_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QDate_toString_doLua(lua_State* L)
{
    lqtk_QDate_toString_Args* args = (lqtk_QDate_toString_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDate::toString();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDate::toString(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QDate::toString(args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QDate", "toString", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QDate_toString(lua_State* L)
{
    try {
        lqtk_QDate_toString_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QDate_toString_doLua, &args);
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
        QDateBinding::QType* ptr = static_cast<QDateBinding::QType*>(objectPtr);
        if (targetClassInfo == &QDateBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QDate* ptr = (QDate*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

struct lqtk_QDate_new_Args
{
    FromLua<QDate*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
    FromLua<int> arg_2_3;
    ToLua<QDate*> rslt_1;
};

extern "C" int lqtk_QDate_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QDate_new_Args  argValues;
    lqtk_QDate_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QDateBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QDate> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QDate* rslt = 
                    new QDate();
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
                QDate* rslt = 
                    new QDate(*args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_2_1.check(L, argOffs+1);
            args->arg_2_2.check(L, argOffs+2);
            args->arg_2_3.check(L, argOffs+3);
            {
                QDate* rslt = 
                    new QDate(args->arg_2_1.getValue(), args->arg_2_2.getValue(), args->arg_2_3.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QDate", "new", nargs, "1,2,4");
        } else {
            return util::argCountError(L, "QDate", nullptr, nargs, "0,1,3");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QDate_new(lua_State* L)
{
    return lqtk_QDate_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QDateBinding::pushObject(lua_State* L, QDate* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QDate>(L, hasUserValue);     // -> uval?, udata
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
    { "addDays",       Member::NORMAL_FUNCTION,      (void*) lqtk_QDate_addDays },
    { "addMonths",     Member::NORMAL_FUNCTION,      (void*) lqtk_QDate_addMonths },
    { "addYears",      Member::NORMAL_FUNCTION,      (void*) lqtk_QDate_addYears },
    { "currentDate",   Member::NORMAL_FUNCTION,      (void*) lqtk_QDate_currentDate },
    { "day",           Member::NORMAL_FUNCTION,      (void*) lqtk_QDate_day },
    { "dayOfWeek",     Member::NORMAL_FUNCTION,      (void*) lqtk_QDate_dayOfWeek },
    { "dayOfYear",     Member::NORMAL_FUNCTION,      (void*) lqtk_QDate_dayOfYear },
    { "daysInMonth",   Member::NORMAL_FUNCTION,      (void*) lqtk_QDate_daysInMonth },
    { "daysInYear",    Member::NORMAL_FUNCTION,      (void*) lqtk_QDate_daysInYear },
    { "daysTo",        Member::NORMAL_FUNCTION,      (void*) lqtk_QDate_daysTo },
    { "endOfDay",      Member::NORMAL_FUNCTION,      (void*) lqtk_QDate_endOfDay },
    { "fromJulianDay", Member::NORMAL_FUNCTION,      (void*) lqtk_QDate_fromJulianDay },
    { "fromString",    Member::NORMAL_FUNCTION,      (void*) lqtk_QDate_fromString },
    { "isLeapYear",    Member::NORMAL_FUNCTION,      (void*) lqtk_QDate_isLeapYear },
    { "isNull",        Member::NORMAL_FUNCTION,      (void*) lqtk_QDate_isNull },
    { "isValid",       Member::NORMAL_FUNCTION,      (void*) lqtk_QDate_isValid },
    { "month",         Member::NORMAL_FUNCTION,      (void*) lqtk_QDate_month },
    { "setDate",       Member::NORMAL_FUNCTION,      (void*) lqtk_QDate_setDate },
    { "startOfDay",    Member::NORMAL_FUNCTION,      (void*) lqtk_QDate_startOfDay },
    { "toJulianDay",   Member::NORMAL_FUNCTION,      (void*) lqtk_QDate_toJulianDay },
    { "toString",      Member::NORMAL_FUNCTION,      (void*) lqtk_QDate_toString },
    { NULL,            Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QDateBinding::classInfo = 
{
    "QDate",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QDate_constructor,
    lqtk_QDate_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    21,
    members
};

/* ============================================================================================ */

int QDateBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
