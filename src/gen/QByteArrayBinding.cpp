// Type: QByteArray
// Base: nil

/* ============================================================================================ */

#include <QByteArray>
#include <QObject>
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
#include "QObjectBinding.hpp"
#include "QtBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QByteArray_fromBase64_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<QByteArray::Base64Options> arg_2_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QByteArray_fromBase64_doLua(lua_State* L)
{
    lqtk_QByteArray_fromBase64_Args* args = (lqtk_QByteArray_fromBase64_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QByteArray::fromBase64(*args->arg_1_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QByteArray::fromBase64(*args->arg_1_1.getValue(), args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "fromBase64", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_fromBase64(lua_State* L)
{
    try {
        lqtk_QByteArray_fromBase64_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_fromBase64_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_fromBase64Encoding_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<QByteArray::Base64Options> arg_2_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QByteArray_fromBase64Encoding_doLua(lua_State* L)
{
    lqtk_QByteArray_fromBase64Encoding_Args* args = (lqtk_QByteArray_fromBase64Encoding_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QByteArrayBinding::delegate_fromBase64Encoding(*args->arg_1_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QByteArrayBinding::delegate_fromBase64Encoding(*args->arg_1_1.getValue(), args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "fromBase64Encoding", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_fromBase64Encoding(lua_State* L)
{
    try {
        lqtk_QByteArray_fromBase64Encoding_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_fromBase64Encoding_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_fromHex_Args
{
    FromLua<QByteArray*> arg_1_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QByteArray_fromHex_doLua(lua_State* L)
{
    lqtk_QByteArray_fromHex_Args* args = (lqtk_QByteArray_fromHex_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QByteArray::fromHex(*args->arg_1_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "fromHex", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_fromHex(lua_State* L)
{
    try {
        lqtk_QByteArray_fromHex_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_fromHex_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_fromPercentEncoding_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<char> arg_2_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QByteArray_fromPercentEncoding_doLua(lua_State* L)
{
    lqtk_QByteArray_fromPercentEncoding_Args* args = (lqtk_QByteArray_fromPercentEncoding_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QByteArray::fromPercentEncoding(*args->arg_1_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QByteArray::fromPercentEncoding(*args->arg_1_1.getValue(), args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "fromPercentEncoding", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_fromPercentEncoding(lua_State* L)
{
    try {
        lqtk_QByteArray_fromPercentEncoding_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_fromPercentEncoding_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_number_Args
{
    FromLua<int> arg_1_1;
    FromLua<int> arg_1_2;
    FromLua<double> arg_2_1;
    FromLua<char> arg_3_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QByteArray_number_doLua(lua_State* L)
{
    lqtk_QByteArray_number_Args* args = (lqtk_QByteArray_number_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QByteArray::number(args->arg_1_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_1_2.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    QByteArray::number(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QByteArray::number(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
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
                    QByteArray::number(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
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
                    QByteArray::number(args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_1_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "number", nargs, "1,2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_number(lua_State* L)
{
    try {
        lqtk_QByteArray_number_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_number_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_append_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<QByteArray*> arg_2_1;
};

static int lqtk_QByteArray_append_doLua(lua_State* L)
{
    lqtk_QByteArray_append_Args* args = (lqtk_QByteArray_append_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QByteArray::append(*args->arg_2_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "append", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_append(lua_State* L)
{
    try {
        lqtk_QByteArray_append_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_append_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_assign_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<QByteArray*> arg_2_1;
};

static int lqtk_QByteArray_assign_doLua(lua_State* L)
{
    lqtk_QByteArray_assign_Args* args = (lqtk_QByteArray_assign_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QByteArray::assign(*args->arg_2_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "assign", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_assign(lua_State* L)
{
    try {
        lqtk_QByteArray_assign_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_assign_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_at_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QByteArray_at(lua_State* L)
{
    lqtk_QByteArray_at_Args  argValues;
    lqtk_QByteArray_at_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::at(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "at", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_capacity_Args
{
    FromLua<QByteArray*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QByteArray_capacity(lua_State* L)
{
    lqtk_QByteArray_capacity_Args  argValues;
    lqtk_QByteArray_capacity_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::capacity();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "capacity", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_chop_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QByteArray_chop(lua_State* L)
{
    lqtk_QByteArray_chop_Args  argValues;
    lqtk_QByteArray_chop_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QByteArray::chop(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "chop", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_clear_Args
{
    FromLua<QByteArray*> arg_1_1;
};

extern "C" int lqtk_QByteArray_clear(lua_State* L)
{
    lqtk_QByteArray_clear_Args  argValues;
    lqtk_QByteArray_clear_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QByteArray::clear();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "clear", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_compare_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<QByteArray*> arg_2_1;
    FromLua<Qt::CaseSensitivity> arg_3_1;
    ToLua<int> rslt_1;
};

static int lqtk_QByteArray_compare_doLua(lua_State* L)
{
    lqtk_QByteArray_compare_Args* args = (lqtk_QByteArray_compare_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::compare(*args->arg_2_1.getValue());
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
                    args->arg_1_1.getValue()->QByteArray::compare(*args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "compare", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_compare(lua_State* L)
{
    try {
        lqtk_QByteArray_compare_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_compare_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_contains_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<QByteArray*> arg_2_1;
    FromLua<int> arg_3_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QByteArray_contains_doLua(lua_State* L)
{
    lqtk_QByteArray_contains_Args* args = (lqtk_QByteArray_contains_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::contains(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::contains(args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QByteArray", "contains", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_contains(lua_State* L)
{
    try {
        lqtk_QByteArray_contains_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_contains_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_count_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<QByteArray*> arg_2_1;
    FromLua<int> arg_3_1;
    ToLua<int> rslt_1;
};

static int lqtk_QByteArray_count_doLua(lua_State* L)
{
    lqtk_QByteArray_count_Args* args = (lqtk_QByteArray_count_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::count(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::count(args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QByteArray", "count", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_count(lua_State* L)
{
    try {
        lqtk_QByteArray_count_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_count_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_endsWith_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<QByteArray*> arg_2_1;
    FromLua<char> arg_3_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QByteArray_endsWith_doLua(lua_State* L)
{
    lqtk_QByteArray_endsWith_Args* args = (lqtk_QByteArray_endsWith_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::endsWith(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::endsWith(args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QByteArray", "endsWith", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_endsWith(lua_State* L)
{
    try {
        lqtk_QByteArray_endsWith_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_endsWith_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_equals_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<QByteArray*> arg_1_2;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QByteArray_equals(lua_State* L)
{
    lqtk_QByteArray_equals_Args  argValues;
    lqtk_QByteArray_equals_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QByteArrayBinding::delegate_equals(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "equals", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_fill_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<char> arg_2_1;
    FromLua<int> arg_3_1;
};

extern "C" int lqtk_QByteArray_fill(lua_State* L)
{
    lqtk_QByteArray_fill_Args  argValues;
    lqtk_QByteArray_fill_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QByteArray::fill(args->arg_2_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QByteArray::fill(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "fill", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_indexOf_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<QByteArray*> arg_2_1;
    FromLua<int> arg_3_1;
    FromLua<char> arg_4_1;
    ToLua<int> rslt_1;
};

static int lqtk_QByteArray_indexOf_doLua(lua_State* L)
{
    lqtk_QByteArray_indexOf_Args* args = (lqtk_QByteArray_indexOf_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::indexOf(*args->arg_2_1.getValue());
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
                    args->arg_1_1.getValue()->QByteArray::indexOf(*args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_4_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::indexOf(args->arg_4_1.getValue());
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
                    args->arg_1_1.getValue()->QByteArray::indexOf(args->arg_4_1.getValue(), args->arg_3_1.getValue());
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
        return util::argCountError(L, "QByteArray", "indexOf", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_indexOf(lua_State* L)
{
    try {
        lqtk_QByteArray_indexOf_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_indexOf_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_insert_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
    FromLua<QByteArray*> arg_3_1;
    FromLua<char> arg_4_1;
};

static int lqtk_QByteArray_insert_doLua(lua_State* L)
{
    lqtk_QByteArray_insert_Args* args = (lqtk_QByteArray_insert_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QByteArray::insert(args->arg_2_1.getValue(), *args->arg_3_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_4_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QByteArray::insert(args->arg_2_1.getValue(), args->arg_4_1.getValue());
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
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            args->arg_4_1.check(L, argOffs+4);
            {
                    args->arg_1_1.getValue()->QByteArray::insert(args->arg_2_1.getValue(), args->arg_2_2.getValue(), args->arg_4_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "insert", nargs, "3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_insert(lua_State* L)
{
    try {
        lqtk_QByteArray_insert_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_insert_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_isEmpty_Args
{
    FromLua<QByteArray*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QByteArray_isEmpty(lua_State* L)
{
    lqtk_QByteArray_isEmpty_Args  argValues;
    lqtk_QByteArray_isEmpty_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::isEmpty();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "isEmpty", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_isLower_Args
{
    FromLua<QByteArray*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QByteArray_isLower(lua_State* L)
{
    lqtk_QByteArray_isLower_Args  argValues;
    lqtk_QByteArray_isLower_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::isLower();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "isLower", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_isNull_Args
{
    FromLua<QByteArray*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QByteArray_isNull(lua_State* L)
{
    lqtk_QByteArray_isNull_Args  argValues;
    lqtk_QByteArray_isNull_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::isNull();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "isNull", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_isUpper_Args
{
    FromLua<QByteArray*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QByteArray_isUpper(lua_State* L)
{
    lqtk_QByteArray_isUpper_Args  argValues;
    lqtk_QByteArray_isUpper_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::isUpper();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "isUpper", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_isValidUtf8_Args
{
    FromLua<QByteArray*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QByteArray_isValidUtf8(lua_State* L)
{
    lqtk_QByteArray_isValidUtf8_Args  argValues;
    lqtk_QByteArray_isValidUtf8_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::isValidUtf8();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "isValidUtf8", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_lastIndexOf_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<QByteArray*> arg_2_1;
    FromLua<int> arg_3_1;
    FromLua<char> arg_4_1;
    ToLua<int> rslt_1;
};

static int lqtk_QByteArray_lastIndexOf_doLua(lua_State* L)
{
    lqtk_QByteArray_lastIndexOf_Args* args = (lqtk_QByteArray_lastIndexOf_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::lastIndexOf(*args->arg_2_1.getValue());
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
                    args->arg_1_1.getValue()->QByteArray::lastIndexOf(*args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_4_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::lastIndexOf(args->arg_4_1.getValue());
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
                    args->arg_1_1.getValue()->QByteArray::lastIndexOf(args->arg_4_1.getValue(), args->arg_3_1.getValue());
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
        return util::argCountError(L, "QByteArray", "lastIndexOf", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_lastIndexOf(lua_State* L)
{
    try {
        lqtk_QByteArray_lastIndexOf_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_lastIndexOf_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_leftJustified_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<char> arg_3_1;
    FromLua<bool> arg_4_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QByteArray_leftJustified_doLua(lua_State* L)
{
    lqtk_QByteArray_leftJustified_Args* args = (lqtk_QByteArray_leftJustified_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::leftJustified(args->arg_2_1.getValue());
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
                    args->arg_1_1.getValue()->QByteArray::leftJustified(args->arg_2_1.getValue(), args->arg_3_1.getValue());
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
                    args->arg_1_1.getValue()->QByteArray::leftJustified(args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_4_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "leftJustified", nargs, "2,3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_leftJustified(lua_State* L)
{
    try {
        lqtk_QByteArray_leftJustified_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_leftJustified_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_length_Args
{
    FromLua<QByteArray*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QByteArray_length(lua_State* L)
{
    lqtk_QByteArray_length_Args  argValues;
    lqtk_QByteArray_length_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::length();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "length", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_max_size_Args
{
    FromLua<QByteArray*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QByteArray_max_size(lua_State* L)
{
    lqtk_QByteArray_max_size_Args  argValues;
    lqtk_QByteArray_max_size_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::max_size();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "max_size", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_percentDecoded_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<char> arg_2_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QByteArray_percentDecoded_doLua(lua_State* L)
{
    lqtk_QByteArray_percentDecoded_Args* args = (lqtk_QByteArray_percentDecoded_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::percentDecoded();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::percentDecoded(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "percentDecoded", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_percentDecoded(lua_State* L)
{
    try {
        lqtk_QByteArray_percentDecoded_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_percentDecoded_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_prepend_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<QByteArray*> arg_2_1;
    FromLua<char> arg_3_1;
    FromLua<int> arg_4_1;
};

static int lqtk_QByteArray_prepend_doLua(lua_State* L)
{
    lqtk_QByteArray_prepend_Args* args = (lqtk_QByteArray_prepend_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                    args->arg_1_1.getValue()->QByteArray::prepend(*args->arg_2_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                    args->arg_1_1.getValue()->QByteArray::prepend(args->arg_3_1.getValue());
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
            args->arg_1_1.check(L, argOffs+1);
            args->arg_4_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QByteArray::prepend(args->arg_4_1.getValue(), args->arg_3_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "prepend", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_prepend(lua_State* L)
{
    try {
        lqtk_QByteArray_prepend_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_prepend_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_remove_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
};

extern "C" int lqtk_QByteArray_remove(lua_State* L)
{
    lqtk_QByteArray_remove_Args  argValues;
    lqtk_QByteArray_remove_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QByteArray::remove(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "remove", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_removeAt_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QByteArray_removeAt(lua_State* L)
{
    lqtk_QByteArray_removeAt_Args  argValues;
    lqtk_QByteArray_removeAt_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QByteArray::removeAt(args->arg_2_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "removeAt", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_removeFirst_Args
{
    FromLua<QByteArray*> arg_1_1;
};

extern "C" int lqtk_QByteArray_removeFirst(lua_State* L)
{
    lqtk_QByteArray_removeFirst_Args  argValues;
    lqtk_QByteArray_removeFirst_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QByteArray::removeFirst();
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "removeFirst", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_removeLast_Args
{
    FromLua<QByteArray*> arg_1_1;
};

extern "C" int lqtk_QByteArray_removeLast(lua_State* L)
{
    lqtk_QByteArray_removeLast_Args  argValues;
    lqtk_QByteArray_removeLast_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QByteArray::removeLast();
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "removeLast", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_repeated_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QByteArray_repeated_doLua(lua_State* L)
{
    lqtk_QByteArray_repeated_Args* args = (lqtk_QByteArray_repeated_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::repeated(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "repeated", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_repeated(lua_State* L)
{
    try {
        lqtk_QByteArray_repeated_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_repeated_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_replace_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
    FromLua<QByteArray*> arg_3_1;
    FromLua<QByteArray*> arg_3_2;
    FromLua<char> arg_4_1;
    FromLua<char> arg_4_2;
};

static int lqtk_QByteArray_replace_doLua(lua_State* L)
{
    lqtk_QByteArray_replace_Args* args = (lqtk_QByteArray_replace_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            args->arg_3_1.check(L, argOffs+4);
            {
                    args->arg_1_1.getValue()->QByteArray::replace(args->arg_2_1.getValue(), args->arg_2_2.getValue(), *args->arg_3_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            if (!args->arg_3_2.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QByteArray::replace(*args->arg_3_1.getValue(), *args->arg_3_2.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_4_1.test(L, argOffs+2)) break;
            if (!args->arg_3_1.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QByteArray::replace(args->arg_4_1.getValue(), *args->arg_3_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_4_1.test(L, argOffs+2)) break;
            if (!args->arg_4_2.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QByteArray::replace(args->arg_4_1.getValue(), args->arg_4_2.getValue());
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
        return util::argCountError(L, "QByteArray", "replace", nargs, "3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_replace(lua_State* L)
{
    try {
        lqtk_QByteArray_replace_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_replace_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_reserve_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QByteArray_reserve(lua_State* L)
{
    lqtk_QByteArray_reserve_Args  argValues;
    lqtk_QByteArray_reserve_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QByteArray::reserve(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "reserve", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_resize_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<char> arg_3_1;
};

extern "C" int lqtk_QByteArray_resize(lua_State* L)
{
    lqtk_QByteArray_resize_Args  argValues;
    lqtk_QByteArray_resize_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QByteArray::resize(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QByteArray::resize(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "resize", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_resizeForOverwrite_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QByteArray_resizeForOverwrite(lua_State* L)
{
    lqtk_QByteArray_resizeForOverwrite_Args  argValues;
    lqtk_QByteArray_resizeForOverwrite_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QByteArray::resizeForOverwrite(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "resizeForOverwrite", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_rightJustified_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<char> arg_3_1;
    FromLua<bool> arg_4_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QByteArray_rightJustified_doLua(lua_State* L)
{
    lqtk_QByteArray_rightJustified_Args* args = (lqtk_QByteArray_rightJustified_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::rightJustified(args->arg_2_1.getValue());
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
                    args->arg_1_1.getValue()->QByteArray::rightJustified(args->arg_2_1.getValue(), args->arg_3_1.getValue());
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
                    args->arg_1_1.getValue()->QByteArray::rightJustified(args->arg_2_1.getValue(), args->arg_3_1.getValue(), args->arg_4_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "rightJustified", nargs, "2,3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_rightJustified(lua_State* L)
{
    try {
        lqtk_QByteArray_rightJustified_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_rightJustified_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_setNum_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
    FromLua<double> arg_3_1;
    FromLua<char> arg_4_1;
};

extern "C" int lqtk_QByteArray_setNum(lua_State* L)
{
    lqtk_QByteArray_setNum_Args  argValues;
    lqtk_QByteArray_setNum_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                    args->arg_1_1.getValue()->QByteArray::setNum(args->arg_2_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            if (!args->arg_2_2.test(L, argOffs+3)) break;
            {
                    args->arg_1_1.getValue()->QByteArray::setNum(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                    args->arg_1_1.getValue()->QByteArray::setNum(args->arg_3_1.getValue());
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
                    args->arg_1_1.getValue()->QByteArray::setNum(args->arg_3_1.getValue(), args->arg_4_1.getValue());
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
                    args->arg_1_1.getValue()->QByteArray::setNum(args->arg_3_1.getValue(), args->arg_4_1.getValue(), args->arg_2_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "setNum", nargs, "2,3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_simplified_Args
{
    FromLua<QByteArray*> arg_1_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QByteArray_simplified_doLua(lua_State* L)
{
    lqtk_QByteArray_simplified_Args* args = (lqtk_QByteArray_simplified_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::simplified();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "simplified", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_simplified(lua_State* L)
{
    try {
        lqtk_QByteArray_simplified_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_simplified_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_size_Args
{
    FromLua<QByteArray*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QByteArray_size(lua_State* L)
{
    lqtk_QByteArray_size_Args  argValues;
    lqtk_QByteArray_size_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::size();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "size", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_slice_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
};

extern "C" int lqtk_QByteArray_slice(lua_State* L)
{
    lqtk_QByteArray_slice_Args  argValues;
    lqtk_QByteArray_slice_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QByteArray::slice(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QByteArray::slice(args->arg_2_1.getValue());
                lua_pushvalue(L, argOffs+1);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "slice", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_split_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<char> arg_2_1;
    ToLua<QList<QByteArray>> rslt_1;
};

static int lqtk_QByteArray_split_doLua(lua_State* L)
{
    lqtk_QByteArray_split_Args* args = (lqtk_QByteArray_split_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::split(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "split", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_split(lua_State* L)
{
    try {
        lqtk_QByteArray_split_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_split_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_squeeze_Args
{
    FromLua<QByteArray*> arg_1_1;
};

extern "C" int lqtk_QByteArray_squeeze(lua_State* L)
{
    lqtk_QByteArray_squeeze_Args  argValues;
    lqtk_QByteArray_squeeze_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QByteArray::squeeze();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "squeeze", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_startsWith_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<QByteArray*> arg_2_1;
    FromLua<char> arg_3_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QByteArray_startsWith_doLua(lua_State* L)
{
    lqtk_QByteArray_startsWith_Args* args = (lqtk_QByteArray_startsWith_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::startsWith(*args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::startsWith(args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QByteArray", "startsWith", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_startsWith(lua_State* L)
{
    try {
        lqtk_QByteArray_startsWith_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_startsWith_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_toBase64_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<QByteArray::Base64Options> arg_2_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QByteArray_toBase64_doLua(lua_State* L)
{
    lqtk_QByteArray_toBase64_Args* args = (lqtk_QByteArray_toBase64_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::toBase64();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::toBase64(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "toBase64", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_toBase64(lua_State* L)
{
    try {
        lqtk_QByteArray_toBase64_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_toBase64_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QByteArray_toDouble(lua_State* L);

/* ============================================================================================ */


struct lqtk_QByteArray_toHex_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<char> arg_2_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QByteArray_toHex_doLua(lua_State* L)
{
    lqtk_QByteArray_toHex_Args* args = (lqtk_QByteArray_toHex_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::toHex();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::toHex(args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "toHex", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_toHex(lua_State* L)
{
    try {
        lqtk_QByteArray_toHex_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_toHex_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QByteArray_toInt(lua_State* L);

/* ============================================================================================ */


struct lqtk_QByteArray_toLower_Args
{
    FromLua<QByteArray*> arg_1_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QByteArray_toLower_doLua(lua_State* L)
{
    lqtk_QByteArray_toLower_Args* args = (lqtk_QByteArray_toLower_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::toLower();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "toLower", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_toLower(lua_State* L)
{
    try {
        lqtk_QByteArray_toLower_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_toLower_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_toPercentEncoding_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<QByteArray*> arg_2_1;
    FromLua<QByteArray*> arg_2_2;
    FromLua<char> arg_3_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QByteArray_toPercentEncoding_doLua(lua_State* L)
{
    lqtk_QByteArray_toPercentEncoding_Args* args = (lqtk_QByteArray_toPercentEncoding_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::toPercentEncoding();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::toPercentEncoding(*args->arg_2_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::toPercentEncoding(*args->arg_2_1.getValue(), *args->arg_2_2.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 4) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            args->arg_3_1.check(L, argOffs+4);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::toPercentEncoding(*args->arg_2_1.getValue(), *args->arg_2_2.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "toPercentEncoding", nargs, "1,2,3,4");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_toPercentEncoding(lua_State* L)
{
    try {
        lqtk_QByteArray_toPercentEncoding_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_toPercentEncoding_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QByteArray_toString(lua_State* L);

/* ============================================================================================ */


struct lqtk_QByteArray_toUpper_Args
{
    FromLua<QByteArray*> arg_1_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QByteArray_toUpper_doLua(lua_State* L)
{
    lqtk_QByteArray_toUpper_Args* args = (lqtk_QByteArray_toUpper_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::toUpper();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "toUpper", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_toUpper(lua_State* L)
{
    try {
        lqtk_QByteArray_toUpper_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_toUpper_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_trimmed_Args
{
    FromLua<QByteArray*> arg_1_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QByteArray_trimmed_doLua(lua_State* L)
{
    lqtk_QByteArray_trimmed_Args* args = (lqtk_QByteArray_trimmed_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QByteArray::trimmed();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "trimmed", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_trimmed(lua_State* L)
{
    try {
        lqtk_QByteArray_trimmed_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_trimmed_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_truncate_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<int> arg_2_1;
};

extern "C" int lqtk_QByteArray_truncate(lua_State* L)
{
    lqtk_QByteArray_truncate_Args  argValues;
    lqtk_QByteArray_truncate_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QByteArray::truncate(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QByteArray", "truncate", nargs, "2");
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
        QByteArrayBinding::QType* ptr = static_cast<QByteArrayBinding::QType*>(objectPtr);
        if (targetClassInfo == &QByteArrayBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QByteArray* ptr = (QByteArray*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QByteArray_new_Args
{
    explicit lqtk_QByteArray_new_Args(bool explicitNew)
        : explicitNew(explicitNew)
    {}
    bool explicitNew;
    FromLua<QByteArray*> arg_1_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QByteArray_new_doLua(lua_State* L)
{
    lqtk_QByteArray_new_Args* args = (lqtk_QByteArray_new_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    bool explicitNew = args->explicitNew;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QByteArrayBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QByteArray> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QByteArray* rslt = 
                    new QByteArray();
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
                QByteArray* rslt = 
                    new QByteArray(*args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QByteArray", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QByteArray", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QByteArray_constructor(lua_State* L, bool explicitNew)
{
    try {
        lqtk_QByteArray_new_Args args(explicitNew);
        return BindingUtil::callMethodFromLua(L, lqtk_QByteArray_new_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QByteArray_new(lua_State* L)
{
    return lqtk_QByteArray_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QByteArrayBinding::pushObject(lua_State* L, QByteArray* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QByteArray>(L, hasUserValue);     // -> uval?, udata
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
    { "AbortOnBase64DecodingErrors", Member::INTEGER,              (void*) QByteArray::AbortOnBase64DecodingErrors },
    { "Base64Encoding",              Member::INTEGER,              (void*) QByteArray::Base64Encoding },
    { "Base64UrlEncoding",           Member::INTEGER,              (void*) QByteArray::Base64UrlEncoding },
    { "IgnoreBase64DecodingErrors",  Member::INTEGER,              (void*) QByteArray::IgnoreBase64DecodingErrors },
    { "KeepTrailingEquals",          Member::INTEGER,              (void*) QByteArray::KeepTrailingEquals },
    { "OmitTrailingEquals",          Member::INTEGER,              (void*) QByteArray::OmitTrailingEquals },
    { "append",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_append },
    { "assign",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_assign },
    { "at",                          Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_at },
    { "capacity",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_capacity },
    { "chop",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_chop },
    { "clear",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_clear },
    { "compare",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_compare },
    { "contains",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_contains },
    { "count",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_count },
    { "endsWith",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_endsWith },
    { "equals",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_equals },
    { "fill",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_fill },
    { "fromBase64",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_fromBase64 },
    { "fromBase64Encoding",          Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_fromBase64Encoding },
    { "fromHex",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_fromHex },
    { "fromPercentEncoding",         Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_fromPercentEncoding },
    { "indexOf",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_indexOf },
    { "insert",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_insert },
    { "isEmpty",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_isEmpty },
    { "isLower",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_isLower },
    { "isNull",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_isNull },
    { "isUpper",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_isUpper },
    { "isValidUtf8",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_isValidUtf8 },
    { "lastIndexOf",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_lastIndexOf },
    { "leftJustified",               Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_leftJustified },
    { "length",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_length },
    { "max_size",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_max_size },
    { "number",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_number },
    { "percentDecoded",              Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_percentDecoded },
    { "prepend",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_prepend },
    { "remove",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_remove },
    { "removeAt",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_removeAt },
    { "removeFirst",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_removeFirst },
    { "removeLast",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_removeLast },
    { "repeated",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_repeated },
    { "replace",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_replace },
    { "reserve",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_reserve },
    { "resize",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_resize },
    { "resizeForOverwrite",          Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_resizeForOverwrite },
    { "rightJustified",              Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_rightJustified },
    { "setNum",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_setNum },
    { "simplified",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_simplified },
    { "size",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_size },
    { "slice",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_slice },
    { "split",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_split },
    { "squeeze",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_squeeze },
    { "startsWith",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_startsWith },
    { "toBase64",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_toBase64 },
    { "toDouble",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_toDouble },
    { "toHex",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_toHex },
    { "toInt",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_toInt },
    { "toLower",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_toLower },
    { "toPercentEncoding",           Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_toPercentEncoding },
    { "toString",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_toString },
    { "toUpper",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_toUpper },
    { "trimmed",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_trimmed },
    { "truncate",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QByteArray_truncate },
    { NULL,                          Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QByteArrayBinding::classInfo = 
{
    "QByteArray",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QByteArray_constructor,
    lqtk_QByteArray_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    63,
    members
};

/* ============================================================================================ */

int QByteArrayBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
