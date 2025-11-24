// Type: QString
// Base: nil

/* ============================================================================================ */

#include <QByteArray>
#include <QChar>
#include <QObject>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
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
#include "QByteArrayBinding.hpp"
#include "QCharBinding.hpp"
#include "QObjectBinding.hpp"
#include "QRegularExpressionBinding.hpp"
#include "QRegularExpressionMatchBinding.hpp"
#include "QStringBinding.hpp"
#include "QtBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QString_compare_Args
{
    FromLua<QString> arg_1_1;
    FromLua<QString> arg_1_2;
    FromLua<Qt::CaseSensitivity> arg_2_1;
    ToLua<int> rslt_1;
};

static int lqtk_QString_compare_doLua(lua_State* L)
{
    lqtk_QString_compare_Args* args = (lqtk_QString_compare_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QString::compare(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            args->arg_2_1.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    QString::compare(args->arg_1_1.getValue(), args->arg_1_2.getValue(), args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "compare", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_compare(lua_State* L)
{
    try {
        lqtk_QString_compare_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_compare_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_fromLatin1_Args
{
    FromLua<QByteArray*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QString_fromLatin1_doLua(lua_State* L)
{
    lqtk_QString_fromLatin1_Args* args = (lqtk_QString_fromLatin1_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QString::fromLatin1(*args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "fromLatin1", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_fromLatin1(lua_State* L)
{
    try {
        lqtk_QString_fromLatin1_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_fromLatin1_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_fromLocal8Bit_Args
{
    FromLua<QByteArray*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QString_fromLocal8Bit_doLua(lua_State* L)
{
    lqtk_QString_fromLocal8Bit_Args* args = (lqtk_QString_fromLocal8Bit_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QString::fromLocal8Bit(*args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "fromLocal8Bit", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_fromLocal8Bit(lua_State* L)
{
    try {
        lqtk_QString_fromLocal8Bit_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_fromLocal8Bit_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_fromUtf8_Args
{
    FromLua<QByteArray*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QString_fromUtf8_doLua(lua_State* L)
{
    lqtk_QString_fromUtf8_Args* args = (lqtk_QString_fromUtf8_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QString::fromUtf8(*args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "fromUtf8", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_fromUtf8(lua_State* L)
{
    try {
        lqtk_QString_fromUtf8_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_fromUtf8_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_localeAwareCompare_Args
{
    FromLua<QString> arg_1_1;
    FromLua<QString> arg_1_2;
    ToLua<int> rslt_1;
};

static int lqtk_QString_localeAwareCompare_doLua(lua_State* L)
{
    lqtk_QString_localeAwareCompare_Args* args = (lqtk_QString_localeAwareCompare_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QString::localeAwareCompare(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "localeAwareCompare", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_localeAwareCompare(lua_State* L)
{
    try {
        lqtk_QString_localeAwareCompare_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_localeAwareCompare_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_number_Args
{
    FromLua<int> arg_1_1;
    FromLua<int> arg_1_2;
    FromLua<double> arg_2_1;
    FromLua<char> arg_3_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QString_number_doLua(lua_State* L)
{
    lqtk_QString_number_Args* args = (lqtk_QString_number_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QString::number(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_1_2.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    QString::number(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QString::number(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        if (nargs == 2) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    QString::number(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            assert(false);
        }
        if (nargs == 3) { do {
            args->arg_2_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            args->arg_1_1.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    QString::number(args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "number", nargs, "1,2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_number(lua_State* L)
{
    try {
        lqtk_QString_number_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_number_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_append_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<QByteArray*> arg_2_1;
};

static int lqtk_QString_append_doLua(lua_State* L)
{
    lqtk_QString_append_Args* args = (lqtk_QString_append_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QString::append(*args->arg_2_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "append", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_append(lua_State* L)
{
    try {
        lqtk_QString_append_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_append_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_assign_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<QString> arg_2_1;
};

static int lqtk_QString_assign_doLua(lua_State* L)
{
    lqtk_QString_assign_Args* args = (lqtk_QString_assign_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QString::assign(args->arg_2_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "assign", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_assign(lua_State* L)
{
    try {
        lqtk_QString_assign_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_assign_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QString_at(lua_State* L);

/* ============================================================================================ */


struct lqtk_QString_back_Args
{
    FromLua<QString*> arg_1_1;
    ToLua<QChar*> rslt_1;
};

extern "C" int lqtk_QString_back(lua_State* L)
{
    lqtk_QString_back_Args  argValues;
    lqtk_QString_back_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::back();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "back", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_capacity_Args
{
    FromLua<QString*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QString_capacity(lua_State* L)
{
    lqtk_QString_capacity_Args  argValues;
    lqtk_QString_capacity_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::capacity();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "capacity", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_chop_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QString_chop(lua_State* L)
{
    lqtk_QString_chop_Args  argValues;
    lqtk_QString_chop_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QString::chop(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QString", "chop", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_clear_Args
{
    FromLua<QString*> arg_1_1;
};

extern "C" int lqtk_QString_clear(lua_State* L)
{
    lqtk_QString_clear_Args  argValues;
    lqtk_QString_clear_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QString::clear();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QString", "clear", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_contains_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<Qt::CaseSensitivity> arg_3_1;
    FromLua<QRegularExpression*> arg_4_1;
    FromLua<QRegularExpressionMatch*> arg_5_1;
    FromLua<QChar*> arg_6_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QString_contains_doLua(lua_State* L)
{
    lqtk_QString_contains_Args* args = (lqtk_QString_contains_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::contains(args->arg_2_1.getValue());
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
                    args->arg_1_1.getValue()->QString::contains(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_4_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::contains(*args->arg_4_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_4_1.test(L, argOffs+2)) break;
          if (!lua_isnil(L, argOffs+3)) {
            if (!args->arg_5_1.test(L, argOffs+3)) break;
          }
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::contains(*args->arg_4_1.getValue(), args->arg_5_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_6_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::contains(*args->arg_6_1.getValue());
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
            if (!args->arg_6_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::contains(*args->arg_6_1.getValue(), args->arg_3_1.getValue());
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
        return util::argCountError(L, "QString", "contains", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_contains(lua_State* L)
{
    try {
        lqtk_QString_contains_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_contains_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_count_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<Qt::CaseSensitivity> arg_3_1;
    FromLua<QRegularExpression*> arg_4_1;
    FromLua<QChar*> arg_5_1;
    ToLua<int> rslt_1;
};

static int lqtk_QString_count_doLua(lua_State* L)
{
    lqtk_QString_count_Args* args = (lqtk_QString_count_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::count(args->arg_2_1.getValue());
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
                    args->arg_1_1.getValue()->QString::count(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_4_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::count(*args->arg_4_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_5_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::count(*args->arg_5_1.getValue());
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
            if (!args->arg_5_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::count(*args->arg_5_1.getValue(), args->arg_3_1.getValue());
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
        return util::argCountError(L, "QString", "count", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_count(lua_State* L)
{
    try {
        lqtk_QString_count_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_count_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_endsWith_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<Qt::CaseSensitivity> arg_3_1;
    FromLua<QChar*> arg_4_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QString_endsWith_doLua(lua_State* L)
{
    lqtk_QString_endsWith_Args* args = (lqtk_QString_endsWith_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::endsWith(args->arg_2_1.getValue());
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
                    args->arg_1_1.getValue()->QString::endsWith(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_4_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::endsWith(*args->arg_4_1.getValue());
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
                    args->arg_1_1.getValue()->QString::endsWith(*args->arg_4_1.getValue(), args->arg_3_1.getValue());
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
        return util::argCountError(L, "QString", "endsWith", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_endsWith(lua_State* L)
{
    try {
        lqtk_QString_endsWith_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_endsWith_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_equals_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<QString*> arg_1_2;
    FromLua<QString> arg_2_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QString_equals_doLua(lua_State* L)
{
    lqtk_QString_equals_Args* args = (lqtk_QString_equals_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_1_2.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    QStringBinding::delegate_equals(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    QStringBinding::delegate_equals(args->arg_1_1.getValue(), args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QString", "equals", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_equals(lua_State* L)
{
    try {
        lqtk_QString_equals_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_equals_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_fill_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<QChar*> arg_2_1;
    FromLua<int> arg_3_1;
};

extern "C" int lqtk_QString_fill(lua_State* L)
{
    lqtk_QString_fill_Args  argValues;
    lqtk_QString_fill_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QString::fill(*args->arg_2_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QString::fill(*args->arg_2_1.getValue(), args->arg_3_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "fill", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_indexOf_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<int> arg_3_1;
    FromLua<Qt::CaseSensitivity> arg_4_1;
    FromLua<QRegularExpression*> arg_5_1;
    FromLua<QRegularExpressionMatch*> arg_6_1;
    FromLua<QChar*> arg_7_1;
    ToLua<int> rslt_1;
};

static int lqtk_QString_indexOf_doLua(lua_State* L)
{
    lqtk_QString_indexOf_Args* args = (lqtk_QString_indexOf_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::indexOf(args->arg_2_1.getValue());
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
                    args->arg_1_1.getValue()->QString::indexOf(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 4) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            if (!args->arg_4_1.test(L, argOffs+4)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::indexOf(args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_4_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_5_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::indexOf(*args->arg_5_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_5_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::indexOf(*args->arg_5_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 4) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_5_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
          if (!lua_isnil(L, argOffs+4)) {
            if (!args->arg_6_1.test(L, argOffs+4)) break;
          }
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::indexOf(*args->arg_5_1.getValue(), args->arg_3_1.getValue(), args->arg_6_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_7_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::indexOf(*args->arg_7_1.getValue());
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
            if (!args->arg_7_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::indexOf(*args->arg_7_1.getValue(), args->arg_3_1.getValue());
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
        if (nargs == 4) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_7_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            if (!args->arg_4_1.test(L, argOffs+4)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::indexOf(*args->arg_7_1.getValue(), args->arg_3_1.getValue(), args->arg_4_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 4) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_4_1.check(L, argOffs+4);
            assert(false);
        }
        return util::argCountError(L, "QString", "indexOf", nargs, "2,3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_indexOf(lua_State* L)
{
    try {
        lqtk_QString_indexOf_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_indexOf_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_insert_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<QString> arg_3_1;
    FromLua<QChar*> arg_4_1;
    FromLua<QByteArray*> arg_5_1;
};

static int lqtk_QString_insert_doLua(lua_State* L)
{
    lqtk_QString_insert_Args* args = (lqtk_QString_insert_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QString::insert(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_4_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QString::insert(args->arg_2_1.getValue(), *args->arg_4_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_5_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QString::insert(args->arg_2_1.getValue(), *args->arg_5_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 3) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            assert(false);
        }
        return util::argCountError(L, "QString", "insert", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_insert(lua_State* L)
{
    try {
        lqtk_QString_insert_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_insert_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_isEmpty_Args
{
    FromLua<QString*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QString_isEmpty(lua_State* L)
{
    lqtk_QString_isEmpty_Args  argValues;
    lqtk_QString_isEmpty_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::isEmpty();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "isEmpty", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_isLower_Args
{
    FromLua<QString*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QString_isLower(lua_State* L)
{
    lqtk_QString_isLower_Args  argValues;
    lqtk_QString_isLower_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::isLower();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "isLower", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_isNull_Args
{
    FromLua<QString*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QString_isNull(lua_State* L)
{
    lqtk_QString_isNull_Args  argValues;
    lqtk_QString_isNull_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::isNull();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "isNull", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_isRightToLeft_Args
{
    FromLua<QString*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QString_isRightToLeft(lua_State* L)
{
    lqtk_QString_isRightToLeft_Args  argValues;
    lqtk_QString_isRightToLeft_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::isRightToLeft();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "isRightToLeft", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_isUpper_Args
{
    FromLua<QString*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QString_isUpper(lua_State* L)
{
    lqtk_QString_isUpper_Args  argValues;
    lqtk_QString_isUpper_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::isUpper();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "isUpper", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_isValidUtf16_Args
{
    FromLua<QString*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QString_isValidUtf16(lua_State* L)
{
    lqtk_QString_isValidUtf16_Args  argValues;
    lqtk_QString_isValidUtf16_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::isValidUtf16();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "isValidUtf16", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_lastIndexOf_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<Qt::CaseSensitivity> arg_3_1;
    FromLua<int> arg_4_1;
    FromLua<QRegularExpression*> arg_5_1;
    FromLua<QRegularExpressionMatch*> arg_6_1;
    FromLua<QChar*> arg_7_1;
    ToLua<int> rslt_1;
};

static int lqtk_QString_lastIndexOf_doLua(lua_State* L)
{
    lqtk_QString_lastIndexOf_Args* args = (lqtk_QString_lastIndexOf_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::lastIndexOf(args->arg_2_1.getValue());
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
                    args->arg_1_1.getValue()->QString::lastIndexOf(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_4_1.test(L, argOffs+3)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::lastIndexOf(args->arg_2_1.getValue(), args->arg_4_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 4) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_4_1.test(L, argOffs+3)) break;
            if (!args->arg_3_1.test(L, argOffs+4)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::lastIndexOf(args->arg_2_1.getValue(), args->arg_4_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_5_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::lastIndexOf(*args->arg_5_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_5_1.test(L, argOffs+2)) break;
          if (!lua_isnil(L, argOffs+3)) {
            if (!args->arg_6_1.test(L, argOffs+3)) break;
          }
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::lastIndexOf(*args->arg_5_1.getValue(), args->arg_6_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_5_1.test(L, argOffs+2)) break;
            if (!args->arg_4_1.test(L, argOffs+3)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::lastIndexOf(*args->arg_5_1.getValue(), args->arg_4_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 4) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_5_1.test(L, argOffs+2)) break;
            if (!args->arg_4_1.test(L, argOffs+3)) break;
          if (!lua_isnil(L, argOffs+4)) {
            if (!args->arg_6_1.test(L, argOffs+4)) break;
          }
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::lastIndexOf(*args->arg_5_1.getValue(), args->arg_4_1.getValue(), args->arg_6_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_7_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::lastIndexOf(*args->arg_7_1.getValue());
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
            if (!args->arg_7_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::lastIndexOf(*args->arg_7_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_7_1.test(L, argOffs+2)) break;
            if (!args->arg_4_1.test(L, argOffs+3)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::lastIndexOf(*args->arg_7_1.getValue(), args->arg_4_1.getValue());
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
        if (nargs == 4) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_7_1.test(L, argOffs+2)) break;
            if (!args->arg_4_1.test(L, argOffs+3)) break;
            if (!args->arg_3_1.test(L, argOffs+4)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::lastIndexOf(*args->arg_7_1.getValue(), args->arg_4_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 4) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_4_1.check(L, argOffs+3);
            args->arg_3_1.check(L, argOffs+4);
            assert(false);
        }
        return util::argCountError(L, "QString", "lastIndexOf", nargs, "2,3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_lastIndexOf(lua_State* L)
{
    try {
        lqtk_QString_lastIndexOf_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_lastIndexOf_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_leftJustified_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<QChar*> arg_3_1;
    FromLua<bool> arg_4_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QString_leftJustified_doLua(lua_State* L)
{
    lqtk_QString_leftJustified_Args* args = (lqtk_QString_leftJustified_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::leftJustified(args->arg_2_1.getValue());
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
                    args->arg_1_1.getValue()->QString::leftJustified(args->arg_2_1.getValue(), *args->arg_3_1.getValue());
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
                    args->arg_1_1.getValue()->QString::leftJustified(args->arg_2_1.getValue(), *args->arg_3_1.getValue(), args->arg_4_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "leftJustified", nargs, "2,3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_leftJustified(lua_State* L)
{
    try {
        lqtk_QString_leftJustified_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_leftJustified_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_length_Args
{
    FromLua<QString*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QString_length(lua_State* L)
{
    lqtk_QString_length_Args  argValues;
    lqtk_QString_length_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::length();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "length", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_normalized_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<QString::NormalizationForm> arg_2_1;
    FromLua<QChar::UnicodeVersion> arg_3_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QString_normalized_doLua(lua_State* L)
{
    lqtk_QString_normalized_Args* args = (lqtk_QString_normalized_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::normalized(args->arg_2_1.getValue());
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
                    args->arg_1_1.getValue()->QString::normalized(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "normalized", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_normalized(lua_State* L)
{
    try {
        lqtk_QString_normalized_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_normalized_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_prepend_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<QChar*> arg_3_1;
    FromLua<QByteArray*> arg_4_1;
};

static int lqtk_QString_prepend_doLua(lua_State* L)
{
    lqtk_QString_prepend_Args* args = (lqtk_QString_prepend_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                    args->arg_1_1.getValue()->QString::prepend(args->arg_2_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                    args->arg_1_1.getValue()->QString::prepend(*args->arg_3_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_4_1.test(L, argOffs+2)) break;
            {
                    args->arg_1_1.getValue()->QString::prepend(*args->arg_4_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QString", "prepend", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_prepend(lua_State* L)
{
    try {
        lqtk_QString_prepend_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_prepend_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_remove_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
    FromLua<QString> arg_3_1;
    FromLua<Qt::CaseSensitivity> arg_4_1;
    FromLua<QRegularExpression*> arg_5_1;
    FromLua<QChar*> arg_6_1;
};

static int lqtk_QString_remove_doLua(lua_State* L)
{
    lqtk_QString_remove_Args* args = (lqtk_QString_remove_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_2_2.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QString::remove(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                    args->arg_1_1.getValue()->QString::remove(args->arg_3_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            if (!args->arg_4_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QString::remove(args->arg_3_1.getValue(), args->arg_4_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_5_1.test(L, argOffs+2)) break;
            {
                    args->arg_1_1.getValue()->QString::remove(*args->arg_5_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_6_1.test(L, argOffs+2)) break;
            {
                    args->arg_1_1.getValue()->QString::remove(*args->arg_6_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            assert(false);
        }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_6_1.test(L, argOffs+2)) break;
            if (!args->arg_4_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QString::remove(*args->arg_6_1.getValue(), args->arg_4_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 3) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            assert(false);
        }
        return util::argCountError(L, "QString", "remove", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_remove(lua_State* L)
{
    try {
        lqtk_QString_remove_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_remove_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_removeAt_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QString_removeAt(lua_State* L)
{
    lqtk_QString_removeAt_Args  argValues;
    lqtk_QString_removeAt_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QString::removeAt(args->arg_2_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "removeAt", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_removeFirst_Args
{
    FromLua<QString*> arg_1_1;
};

extern "C" int lqtk_QString_removeFirst(lua_State* L)
{
    lqtk_QString_removeFirst_Args  argValues;
    lqtk_QString_removeFirst_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QString::removeFirst();
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "removeFirst", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_removeLast_Args
{
    FromLua<QString*> arg_1_1;
};

extern "C" int lqtk_QString_removeLast(lua_State* L)
{
    lqtk_QString_removeLast_Args  argValues;
    lqtk_QString_removeLast_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QString::removeLast();
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "removeLast", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_repeated_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QString_repeated_doLua(lua_State* L)
{
    lqtk_QString_repeated_Args* args = (lqtk_QString_repeated_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::repeated(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "repeated", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_repeated(lua_State* L)
{
    try {
        lqtk_QString_repeated_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_repeated_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_replace_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
    FromLua<QString> arg_3_1;
    FromLua<QString> arg_3_2;
    FromLua<Qt::CaseSensitivity> arg_4_1;
    FromLua<QRegularExpression*> arg_5_1;
    FromLua<QChar*> arg_6_1;
    FromLua<QChar*> arg_6_2;
};

static int lqtk_QString_replace_doLua(lua_State* L)
{
    lqtk_QString_replace_Args* args = (lqtk_QString_replace_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 4) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_2_2.test(L, argOffs+3)) break;
            if (!args->arg_3_1.test(L, argOffs+4)) break;
            {
                    args->arg_1_1.getValue()->QString::replace(args->arg_2_1.getValue(), args->arg_2_2.getValue(), args->arg_3_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            if (!args->arg_3_2.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QString::replace(args->arg_3_1.getValue(), args->arg_3_2.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 4) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            if (!args->arg_3_2.test(L, argOffs+3)) break;
            if (!args->arg_4_1.test(L, argOffs+4)) break;
            {
                    args->arg_1_1.getValue()->QString::replace(args->arg_3_1.getValue(), args->arg_3_2.getValue(), args->arg_4_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_5_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QString::replace(*args->arg_5_1.getValue(), args->arg_3_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_6_1.test(L, argOffs+2)) break;
            if (!args->arg_6_2.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QString::replace(*args->arg_6_1.getValue(), *args->arg_6_2.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 4) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_6_1.test(L, argOffs+2)) break;
            if (!args->arg_6_2.test(L, argOffs+3)) break;
            if (!args->arg_4_1.test(L, argOffs+4)) break;
            {
                    args->arg_1_1.getValue()->QString::replace(*args->arg_6_1.getValue(), *args->arg_6_2.getValue(), args->arg_4_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_6_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QString::replace(*args->arg_6_1.getValue(), args->arg_3_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 3) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            args->arg_3_2.check(L, argOffs+3);
            assert(false);
        }
        if (nargs == 4) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_6_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            if (!args->arg_4_1.test(L, argOffs+4)) break;
            {
                    args->arg_1_1.getValue()->QString::replace(*args->arg_6_1.getValue(), args->arg_3_1.getValue(), args->arg_4_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 4) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_2_2.test(L, argOffs+3)) break;
            if (!args->arg_6_1.test(L, argOffs+4)) break;
            {
                    args->arg_1_1.getValue()->QString::replace(args->arg_2_1.getValue(), args->arg_2_2.getValue(), *args->arg_6_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 4) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            args->arg_3_1.check(L, argOffs+4);
            assert(false);
        }
        return util::argCountError(L, "QString", "replace", nargs, "3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_replace(lua_State* L)
{
    try {
        lqtk_QString_replace_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_replace_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_reserve_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QString_reserve(lua_State* L)
{
    lqtk_QString_reserve_Args  argValues;
    lqtk_QString_reserve_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QString::reserve(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QString", "reserve", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_resize_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<QChar*> arg_3_1;
};

extern "C" int lqtk_QString_resize(lua_State* L)
{
    lqtk_QString_resize_Args  argValues;
    lqtk_QString_resize_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QString::resize(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QString::resize(args->arg_2_1.getValue(), *args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QString", "resize", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_resizeForOverwrite_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QString_resizeForOverwrite(lua_State* L)
{
    lqtk_QString_resizeForOverwrite_Args  argValues;
    lqtk_QString_resizeForOverwrite_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QString::resizeForOverwrite(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QString", "resizeForOverwrite", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_rightJustified_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<QChar*> arg_3_1;
    FromLua<bool> arg_4_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QString_rightJustified_doLua(lua_State* L)
{
    lqtk_QString_rightJustified_Args* args = (lqtk_QString_rightJustified_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::rightJustified(args->arg_2_1.getValue());
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
                    args->arg_1_1.getValue()->QString::rightJustified(args->arg_2_1.getValue(), *args->arg_3_1.getValue());
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
                    args->arg_1_1.getValue()->QString::rightJustified(args->arg_2_1.getValue(), *args->arg_3_1.getValue(), args->arg_4_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "rightJustified", nargs, "2,3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_rightJustified(lua_State* L)
{
    try {
        lqtk_QString_rightJustified_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_rightJustified_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_section_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<int> arg_3_1;
    FromLua<int> arg_3_2;
    FromLua<QString::SectionFlags> arg_4_1;
    FromLua<QRegularExpression*> arg_5_1;
    FromLua<QChar*> arg_6_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QString_section_doLua(lua_State* L)
{
    lqtk_QString_section_Args* args = (lqtk_QString_section_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::section(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 4) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            if (!args->arg_3_2.test(L, argOffs+4)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::section(args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_3_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 5) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            if (!args->arg_3_2.test(L, argOffs+4)) break;
            if (!args->arg_4_1.test(L, argOffs+5)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::section(args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_3_2.getValue(), args->arg_4_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_5_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::section(*args->arg_5_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 4) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_5_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            if (!args->arg_3_2.test(L, argOffs+4)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::section(*args->arg_5_1.getValue(), args->arg_3_1.getValue(), args->arg_3_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 5) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_5_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            if (!args->arg_3_2.test(L, argOffs+4)) break;
            if (!args->arg_4_1.test(L, argOffs+5)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::section(*args->arg_5_1.getValue(), args->arg_3_1.getValue(), args->arg_3_2.getValue(), args->arg_4_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_6_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::section(*args->arg_6_1.getValue(), args->arg_3_1.getValue());
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
        if (nargs == 4) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_6_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            if (!args->arg_3_2.test(L, argOffs+4)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::section(*args->arg_6_1.getValue(), args->arg_3_1.getValue(), args->arg_3_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 4) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_3_2.check(L, argOffs+4);
            assert(false);
        }
        if (nargs == 5) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_6_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            if (!args->arg_3_2.test(L, argOffs+4)) break;
            if (!args->arg_4_1.test(L, argOffs+5)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::section(*args->arg_6_1.getValue(), args->arg_3_1.getValue(), args->arg_3_2.getValue(), args->arg_4_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 5) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_3_2.check(L, argOffs+4);
            args->arg_4_1.check(L, argOffs+5);
            assert(false);
        }
        return util::argCountError(L, "QString", "section", nargs, "3,4,5");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_section(lua_State* L)
{
    try {
        lqtk_QString_section_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_section_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_setNum_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
    FromLua<double> arg_3_1;
    FromLua<char> arg_4_1;
};

extern "C" int lqtk_QString_setNum(lua_State* L)
{
    lqtk_QString_setNum_Args  argValues;
    lqtk_QString_setNum_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                    args->arg_1_1.getValue()->QString::setNum(args->arg_2_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_2_2.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QString::setNum(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                    args->arg_1_1.getValue()->QString::setNum(args->arg_3_1.getValue());
                lua_pushvalue(L, argOffs+1);
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
                    args->arg_1_1.getValue()->QString::setNum(args->arg_3_1.getValue(), args->arg_4_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 3) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            assert(false);
        }
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            args->arg_4_1.check(L, argOffs+3);
            args->arg_2_1.check(L, argOffs+4);
            {
                    args->arg_1_1.getValue()->QString::setNum(args->arg_3_1.getValue(), args->arg_4_1.getValue(), args->arg_2_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "setNum", nargs, "2,3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_simplified_Args
{
    FromLua<QString*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QString_simplified_doLua(lua_State* L)
{
    lqtk_QString_simplified_Args* args = (lqtk_QString_simplified_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::simplified();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "simplified", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_simplified(lua_State* L)
{
    try {
        lqtk_QString_simplified_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_simplified_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_size_Args
{
    FromLua<QString*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QString_size(lua_State* L)
{
    lqtk_QString_size_Args  argValues;
    lqtk_QString_size_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::size();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "size", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_slice_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
};

extern "C" int lqtk_QString_slice(lua_State* L)
{
    lqtk_QString_slice_Args  argValues;
    lqtk_QString_slice_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QString::slice(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QString::slice(args->arg_2_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "slice", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_split_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<Qt::SplitBehavior> arg_3_1;
    FromLua<Qt::CaseSensitivity> arg_4_1;
    FromLua<QRegularExpression*> arg_5_1;
    FromLua<QChar*> arg_6_1;
    ToLua<QStringList> rslt_1;
};

static int lqtk_QString_split_doLua(lua_State* L)
{
    lqtk_QString_split_Args* args = (lqtk_QString_split_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::split(args->arg_2_1.getValue());
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
                    args->arg_1_1.getValue()->QString::split(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 4) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            if (!args->arg_4_1.test(L, argOffs+4)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::split(args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_4_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_5_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::split(*args->arg_5_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_5_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::split(*args->arg_5_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_6_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::split(*args->arg_6_1.getValue());
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
            if (!args->arg_6_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::split(*args->arg_6_1.getValue(), args->arg_3_1.getValue());
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
        if (nargs == 4) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_6_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            if (!args->arg_4_1.test(L, argOffs+4)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::split(*args->arg_6_1.getValue(), args->arg_3_1.getValue(), args->arg_4_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 4) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            args->arg_4_1.check(L, argOffs+4);
            assert(false);
        }
        return util::argCountError(L, "QString", "split", nargs, "2,3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_split(lua_State* L)
{
    try {
        lqtk_QString_split_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_split_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_squeeze_Args
{
    FromLua<QString*> arg_1_1;
};

extern "C" int lqtk_QString_squeeze(lua_State* L)
{
    lqtk_QString_squeeze_Args  argValues;
    lqtk_QString_squeeze_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QString::squeeze();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QString", "squeeze", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_startsWith_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<Qt::CaseSensitivity> arg_3_1;
    FromLua<QChar*> arg_4_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QString_startsWith_doLua(lua_State* L)
{
    lqtk_QString_startsWith_Args* args = (lqtk_QString_startsWith_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::startsWith(args->arg_2_1.getValue());
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
                    args->arg_1_1.getValue()->QString::startsWith(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_4_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::startsWith(*args->arg_4_1.getValue());
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
                    args->arg_1_1.getValue()->QString::startsWith(*args->arg_4_1.getValue(), args->arg_3_1.getValue());
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
        return util::argCountError(L, "QString", "startsWith", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_startsWith(lua_State* L)
{
    try {
        lqtk_QString_startsWith_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_startsWith_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_toCaseFolded_Args
{
    FromLua<QString*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QString_toCaseFolded_doLua(lua_State* L)
{
    lqtk_QString_toCaseFolded_Args* args = (lqtk_QString_toCaseFolded_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::toCaseFolded();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "toCaseFolded", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_toCaseFolded(lua_State* L)
{
    try {
        lqtk_QString_toCaseFolded_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_toCaseFolded_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_toDouble_Args
{
    FromLua<QString*> arg_1_1;
    ToLua<double> rslt_1;
};

extern "C" int lqtk_QString_toDouble(lua_State* L)
{
    lqtk_QString_toDouble_Args  argValues;
    lqtk_QString_toDouble_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::toDouble();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "toDouble", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_toHtmlEscaped_Args
{
    FromLua<QString*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QString_toHtmlEscaped_doLua(lua_State* L)
{
    lqtk_QString_toHtmlEscaped_Args* args = (lqtk_QString_toHtmlEscaped_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::toHtmlEscaped();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "toHtmlEscaped", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_toHtmlEscaped(lua_State* L)
{
    try {
        lqtk_QString_toHtmlEscaped_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_toHtmlEscaped_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_toInt_Args
{
    FromLua<QString*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QString_toInt(lua_State* L)
{
    lqtk_QString_toInt_Args  argValues;
    lqtk_QString_toInt_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::toInt();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "toInt", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_toLatin1_Args
{
    FromLua<QString*> arg_1_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QString_toLatin1_doLua(lua_State* L)
{
    lqtk_QString_toLatin1_Args* args = (lqtk_QString_toLatin1_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::toLatin1();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "toLatin1", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_toLatin1(lua_State* L)
{
    try {
        lqtk_QString_toLatin1_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_toLatin1_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_toLocal8Bit_Args
{
    FromLua<QString*> arg_1_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QString_toLocal8Bit_doLua(lua_State* L)
{
    lqtk_QString_toLocal8Bit_Args* args = (lqtk_QString_toLocal8Bit_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::toLocal8Bit();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "toLocal8Bit", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_toLocal8Bit(lua_State* L)
{
    try {
        lqtk_QString_toLocal8Bit_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_toLocal8Bit_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_toLong_Args
{
    FromLua<QString*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QString_toLong(lua_State* L)
{
    lqtk_QString_toLong_Args  argValues;
    lqtk_QString_toLong_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::toLong();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "toLong", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_toLongLong_Args
{
    FromLua<QString*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QString_toLongLong(lua_State* L)
{
    lqtk_QString_toLongLong_Args  argValues;
    lqtk_QString_toLongLong_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::toLongLong();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "toLongLong", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_toLower_Args
{
    FromLua<QString*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QString_toLower_doLua(lua_State* L)
{
    lqtk_QString_toLower_Args* args = (lqtk_QString_toLower_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::toLower();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "toLower", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_toLower(lua_State* L)
{
    try {
        lqtk_QString_toLower_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_toLower_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_toString_Args
{
    FromLua<QString*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QString_toString_doLua(lua_State* L)
{
    lqtk_QString_toString_Args* args = (lqtk_QString_toString_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QStringBinding::delegate_toString(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "toString", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_toString(lua_State* L)
{
    try {
        lqtk_QString_toString_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_toString_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_toUpper_Args
{
    FromLua<QString*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QString_toUpper_doLua(lua_State* L)
{
    lqtk_QString_toUpper_Args* args = (lqtk_QString_toUpper_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::toUpper();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "toUpper", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_toUpper(lua_State* L)
{
    try {
        lqtk_QString_toUpper_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_toUpper_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_toUtf8_Args
{
    FromLua<QString*> arg_1_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QString_toUtf8_doLua(lua_State* L)
{
    lqtk_QString_toUtf8_Args* args = (lqtk_QString_toUtf8_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::toUtf8();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "toUtf8", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_toUtf8(lua_State* L)
{
    try {
        lqtk_QString_toUtf8_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_toUtf8_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_trimmed_Args
{
    FromLua<QString*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QString_trimmed_doLua(lua_State* L)
{
    lqtk_QString_trimmed_Args* args = (lqtk_QString_trimmed_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QString::trimmed();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QString", "trimmed", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_trimmed(lua_State* L)
{
    try {
        lqtk_QString_trimmed_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QString_trimmed_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QString_truncate_Args
{
    FromLua<QString*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QString_truncate(lua_State* L)
{
    lqtk_QString_truncate_Args  argValues;
    lqtk_QString_truncate_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QString::truncate(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QString", "truncate", nargs, "2");
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
        QStringBinding::QType* ptr = static_cast<QStringBinding::QType*>(objectPtr);
        if (targetClassInfo == &QStringBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QString* ptr = (QString*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QString_new_Args
{
    explicit lqtk_QString_new_Args(bool explicitNew)
        : explicitNew(explicitNew)
    {}
    bool explicitNew;
    FromLua<QString> arg_1_1;
    FromLua<QByteArray*> arg_2_1;
    ToLua<QString*> rslt_1;
};

static int lqtk_QString_new_doLua(lua_State* L)
{
    lqtk_QString_new_Args* args = (lqtk_QString_new_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    bool explicitNew = args->explicitNew;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QStringBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QString> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QString* rslt = 
                    new QString();
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
                QString* rslt = 
                    new QString(args->arg_1_1.getValue());
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
                QString* rslt = 
                    new QString(*args->arg_2_1.getValue());
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
            return util::argCountError(L, "QString", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QString", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QString_constructor(lua_State* L, bool explicitNew)
{
    try {
        lqtk_QString_new_Args args(explicitNew);
        return BindingUtil::callMethodFromLua(L, lqtk_QString_new_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QString_new(lua_State* L)
{
    return lqtk_QString_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QStringBinding::pushObject(lua_State* L, QString* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QString>(L, hasUserValue);     // -> uval?, udata
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
    { "NormalizationForm_C",        Member::INTEGER,              (void*) QString::NormalizationForm_C },
    { "NormalizationForm_D",        Member::INTEGER,              (void*) QString::NormalizationForm_D },
    { "NormalizationForm_KC",       Member::INTEGER,              (void*) QString::NormalizationForm_KC },
    { "NormalizationForm_KD",       Member::INTEGER,              (void*) QString::NormalizationForm_KD },
    { "SectionCaseInsensitiveSeps", Member::INTEGER,              (void*) QString::SectionCaseInsensitiveSeps },
    { "SectionDefault",             Member::INTEGER,              (void*) QString::SectionDefault },
    { "SectionIncludeLeadingSep",   Member::INTEGER,              (void*) QString::SectionIncludeLeadingSep },
    { "SectionIncludeTrailingSep",  Member::INTEGER,              (void*) QString::SectionIncludeTrailingSep },
    { "SectionSkipEmpty",           Member::INTEGER,              (void*) QString::SectionSkipEmpty },
    { "append",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QString_append },
    { "assign",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QString_assign },
    { "at",                         Member::NORMAL_FUNCTION,      (void*) lqtk_QString_at },
    { "back",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QString_back },
    { "capacity",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QString_capacity },
    { "chop",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QString_chop },
    { "clear",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QString_clear },
    { "compare",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QString_compare },
    { "contains",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QString_contains },
    { "count",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QString_count },
    { "endsWith",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QString_endsWith },
    { "equals",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QString_equals },
    { "fill",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QString_fill },
    { "fromLatin1",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QString_fromLatin1 },
    { "fromLocal8Bit",              Member::NORMAL_FUNCTION,      (void*) lqtk_QString_fromLocal8Bit },
    { "fromUtf8",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QString_fromUtf8 },
    { "indexOf",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QString_indexOf },
    { "insert",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QString_insert },
    { "isEmpty",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QString_isEmpty },
    { "isLower",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QString_isLower },
    { "isNull",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QString_isNull },
    { "isRightToLeft",              Member::NORMAL_FUNCTION,      (void*) lqtk_QString_isRightToLeft },
    { "isUpper",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QString_isUpper },
    { "isValidUtf16",               Member::NORMAL_FUNCTION,      (void*) lqtk_QString_isValidUtf16 },
    { "lastIndexOf",                Member::NORMAL_FUNCTION,      (void*) lqtk_QString_lastIndexOf },
    { "leftJustified",              Member::NORMAL_FUNCTION,      (void*) lqtk_QString_leftJustified },
    { "length",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QString_length },
    { "localeAwareCompare",         Member::NORMAL_FUNCTION,      (void*) lqtk_QString_localeAwareCompare },
    { "normalized",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QString_normalized },
    { "number",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QString_number },
    { "prepend",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QString_prepend },
    { "remove",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QString_remove },
    { "removeAt",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QString_removeAt },
    { "removeFirst",                Member::NORMAL_FUNCTION,      (void*) lqtk_QString_removeFirst },
    { "removeLast",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QString_removeLast },
    { "repeated",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QString_repeated },
    { "replace",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QString_replace },
    { "reserve",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QString_reserve },
    { "resize",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QString_resize },
    { "resizeForOverwrite",         Member::NORMAL_FUNCTION,      (void*) lqtk_QString_resizeForOverwrite },
    { "rightJustified",             Member::NORMAL_FUNCTION,      (void*) lqtk_QString_rightJustified },
    { "section",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QString_section },
    { "setNum",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QString_setNum },
    { "simplified",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QString_simplified },
    { "size",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QString_size },
    { "slice",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QString_slice },
    { "split",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QString_split },
    { "squeeze",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QString_squeeze },
    { "startsWith",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QString_startsWith },
    { "toCaseFolded",               Member::NORMAL_FUNCTION,      (void*) lqtk_QString_toCaseFolded },
    { "toDouble",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QString_toDouble },
    { "toHtmlEscaped",              Member::NORMAL_FUNCTION,      (void*) lqtk_QString_toHtmlEscaped },
    { "toInt",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QString_toInt },
    { "toLatin1",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QString_toLatin1 },
    { "toLocal8Bit",                Member::NORMAL_FUNCTION,      (void*) lqtk_QString_toLocal8Bit },
    { "toLong",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QString_toLong },
    { "toLongLong",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QString_toLongLong },
    { "toLower",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QString_toLower },
    { "toString",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QString_toString },
    { "toUpper",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QString_toUpper },
    { "toUtf8",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QString_toUtf8 },
    { "trimmed",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QString_trimmed },
    { "truncate",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QString_truncate },
    { NULL,                         Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QStringBinding::classInfo = 
{
    "QString",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QString_constructor,
    lqtk_QString_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    72,
    members
};

/* ============================================================================================ */

int QStringBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
