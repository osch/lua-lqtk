// Type: QTime
// Base: nil

/* ============================================================================================ */

#include <QObject>
#include <QString>
#include <QTime>
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
#include "QStringBinding.hpp"
#include "QTimeBinding.hpp"
#include "QtBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QTime_currentTime_Args
{
    ToLua<QTime*> rslt_1;
};

extern "C" int lqtk_QTime_currentTime(lua_State* L)
{
    lqtk_QTime_currentTime_Args  argValues;
    lqtk_QTime_currentTime_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QTime::currentTime();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTime", "currentTime", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTime_fromMSecsSinceStartOfDay_Args
{
    FromLua<int> arg_1_1;
    ToLua<QTime*> rslt_1;
};

extern "C" int lqtk_QTime_fromMSecsSinceStartOfDay(lua_State* L)
{
    lqtk_QTime_fromMSecsSinceStartOfDay_Args  argValues;
    lqtk_QTime_fromMSecsSinceStartOfDay_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QTime::fromMSecsSinceStartOfDay(args->arg_1_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTime", "fromMSecsSinceStartOfDay", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTime_fromString_Args
{
    FromLua<QString> arg_1_1;
    FromLua<QString> arg_1_2;
    FromLua<Qt::DateFormat> arg_2_1;
    ToLua<QTime*> rslt_1;
};

static int lqtk_QTime_fromString_doLua(lua_State* L)
{
    lqtk_QTime_fromString_Args* args = (lqtk_QTime_fromString_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QTime::fromString(args->arg_1_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    QTime::fromString(args->arg_1_1.getValue(), args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_1_2.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    QTime::fromString(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QTime", "fromString", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QTime_fromString(lua_State* L)
{
    try {
        lqtk_QTime_fromString_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QTime_fromString_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTime_isValid_Args
{
    FromLua<QTime*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
    FromLua<int> arg_2_3;
    FromLua<int> arg_2_4;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QTime_isValid(lua_State* L)
{
    lqtk_QTime_isValid_Args  argValues;
    lqtk_QTime_isValid_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTime::isValid();
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
                    QTime::isValid(args->arg_2_1.getValue(), args->arg_2_2.getValue(), args->arg_2_3.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 4) { do {
            args->arg_2_1.check(L, argOffs+1);
            args->arg_2_2.check(L, argOffs+2);
            args->arg_2_3.check(L, argOffs+3);
            args->arg_2_4.check(L, argOffs+4);
            {
                args->rslt_1 = 
                    QTime::isValid(args->arg_2_1.getValue(), args->arg_2_2.getValue(), args->arg_2_3.getValue(), args->arg_2_4.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTime", "isValid", nargs, "1,3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTime_addMSecs_Args
{
    FromLua<QTime*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QTime*> rslt_1;
};

extern "C" int lqtk_QTime_addMSecs(lua_State* L)
{
    lqtk_QTime_addMSecs_Args  argValues;
    lqtk_QTime_addMSecs_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTime::addMSecs(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTime", "addMSecs", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTime_addSecs_Args
{
    FromLua<QTime*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QTime*> rslt_1;
};

extern "C" int lqtk_QTime_addSecs(lua_State* L)
{
    lqtk_QTime_addSecs_Args  argValues;
    lqtk_QTime_addSecs_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTime::addSecs(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTime", "addSecs", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTime_hour_Args
{
    FromLua<QTime*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QTime_hour(lua_State* L)
{
    lqtk_QTime_hour_Args  argValues;
    lqtk_QTime_hour_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTime::hour();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTime", "hour", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTime_isNull_Args
{
    FromLua<QTime*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QTime_isNull(lua_State* L)
{
    lqtk_QTime_isNull_Args  argValues;
    lqtk_QTime_isNull_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTime::isNull();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTime", "isNull", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTime_minute_Args
{
    FromLua<QTime*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QTime_minute(lua_State* L)
{
    lqtk_QTime_minute_Args  argValues;
    lqtk_QTime_minute_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTime::minute();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTime", "minute", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTime_msec_Args
{
    FromLua<QTime*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QTime_msec(lua_State* L)
{
    lqtk_QTime_msec_Args  argValues;
    lqtk_QTime_msec_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTime::msec();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTime", "msec", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTime_msecsSinceStartOfDay_Args
{
    FromLua<QTime*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QTime_msecsSinceStartOfDay(lua_State* L)
{
    lqtk_QTime_msecsSinceStartOfDay_Args  argValues;
    lqtk_QTime_msecsSinceStartOfDay_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTime::msecsSinceStartOfDay();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTime", "msecsSinceStartOfDay", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTime_msecsTo_Args
{
    FromLua<QTime*> arg_1_1;
    FromLua<QTime*> arg_2_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QTime_msecsTo(lua_State* L)
{
    lqtk_QTime_msecsTo_Args  argValues;
    lqtk_QTime_msecsTo_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTime::msecsTo(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTime", "msecsTo", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTime_second_Args
{
    FromLua<QTime*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QTime_second(lua_State* L)
{
    lqtk_QTime_second_Args  argValues;
    lqtk_QTime_second_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTime::second();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTime", "second", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTime_secsTo_Args
{
    FromLua<QTime*> arg_1_1;
    FromLua<QTime*> arg_2_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QTime_secsTo(lua_State* L)
{
    lqtk_QTime_secsTo_Args  argValues;
    lqtk_QTime_secsTo_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTime::secsTo(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTime", "secsTo", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTime_setHMS_Args
{
    FromLua<QTime*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
    FromLua<int> arg_2_3;
    FromLua<int> arg_2_4;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QTime_setHMS(lua_State* L)
{
    lqtk_QTime_setHMS_Args  argValues;
    lqtk_QTime_setHMS_Args* args = &argValues;
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
                    args->arg_1_1.getValue()->QTime::setHMS(args->arg_2_1.getValue(), args->arg_2_2.getValue(), args->arg_2_3.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 5) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            args->arg_2_3.check(L, argOffs+4);
            args->arg_2_4.check(L, argOffs+5);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTime::setHMS(args->arg_2_1.getValue(), args->arg_2_2.getValue(), args->arg_2_3.getValue(), args->arg_2_4.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QTime", "setHMS", nargs, "4,5");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QTime_toString_Args
{
    FromLua<QTime*> arg_1_1;
    FromLua<Qt::DateFormat> arg_2_1;
    FromLua<QString> arg_3_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QTime_toString_doLua(lua_State* L)
{
    lqtk_QTime_toString_Args* args = (lqtk_QTime_toString_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTime::toString();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTime::toString(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QTime::toString(args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QTime", "toString", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QTime_toString(lua_State* L)
{
    try {
        lqtk_QTime_toString_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QTime_toString_doLua, &args);
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
        QTimeBinding::QType* ptr = static_cast<QTimeBinding::QType*>(objectPtr);
        if (targetClassInfo == &QTimeBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QTime* ptr = (QTime*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QTime_new_Args
{
    FromLua<int> arg_1_1;
    FromLua<int> arg_1_2;
    FromLua<int> arg_1_3;
    FromLua<int> arg_1_4;
    ToLua<QTime*> rslt_1;
};

extern "C" int lqtk_QTime_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QTime_new_Args  argValues;
    lqtk_QTime_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QTimeBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QTime> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                QTime* rslt = 
                    new QTime(args->arg_1_1.getValue(), args->arg_1_2.getValue());
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
            args->arg_1_3.check(L, argOffs+3);
            {
                QTime* rslt = 
                    new QTime(args->arg_1_1.getValue(), args->arg_1_2.getValue(), args->arg_1_3.getValue());
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
            args->arg_1_3.check(L, argOffs+3);
            args->arg_1_4.check(L, argOffs+4);
            {
                QTime* rslt = 
                    new QTime(args->arg_1_1.getValue(), args->arg_1_2.getValue(), args->arg_1_3.getValue(), args->arg_1_4.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QTime", "new", nargs, "3,4,5");
        } else {
            return util::argCountError(L, "QTime", nullptr, nargs, "2,3,4");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QTime_new(lua_State* L)
{
    return lqtk_QTime_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QTimeBinding::pushObject(lua_State* L, QTime* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QTime>(L, hasUserValue);     // -> uval?, udata
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
    { "addMSecs",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QTime_addMSecs },
    { "addSecs",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QTime_addSecs },
    { "currentTime",              Member::NORMAL_FUNCTION,      (void*) lqtk_QTime_currentTime },
    { "fromMSecsSinceStartOfDay", Member::NORMAL_FUNCTION,      (void*) lqtk_QTime_fromMSecsSinceStartOfDay },
    { "fromString",               Member::NORMAL_FUNCTION,      (void*) lqtk_QTime_fromString },
    { "hour",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QTime_hour },
    { "isNull",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QTime_isNull },
    { "isValid",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QTime_isValid },
    { "minute",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QTime_minute },
    { "msec",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QTime_msec },
    { "msecsSinceStartOfDay",     Member::NORMAL_FUNCTION,      (void*) lqtk_QTime_msecsSinceStartOfDay },
    { "msecsTo",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QTime_msecsTo },
    { "second",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QTime_second },
    { "secsTo",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QTime_secsTo },
    { "setHMS",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QTime_setHMS },
    { "toString",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QTime_toString },
    { NULL,                       Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QTimeBinding::classInfo = 
{
    "QTime",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QTime_constructor,
    lqtk_QTime_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    16,
    members
};

/* ============================================================================================ */

int QTimeBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
