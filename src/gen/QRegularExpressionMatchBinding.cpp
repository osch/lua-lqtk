// Type: QRegularExpressionMatch
// Base: nil

/* ============================================================================================ */

#include <QObject>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
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
#include "QObjectBinding.hpp"
#include "QRegularExpressionBinding.hpp"
#include "QRegularExpressionMatchBinding.hpp"
#include "QStringBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QRegularExpressionMatch_captured_Args
{
    FromLua<QRegularExpressionMatch*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<QString> arg_3_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QRegularExpressionMatch_captured_doLua(lua_State* L)
{
    lqtk_QRegularExpressionMatch_captured_Args* args = (lqtk_QRegularExpressionMatch_captured_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatch::captured();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatch::captured(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatch::captured(args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QRegularExpressionMatch", "captured", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QRegularExpressionMatch_captured(lua_State* L)
{
    try {
        lqtk_QRegularExpressionMatch_captured_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QRegularExpressionMatch_captured_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpressionMatch_capturedEnd_Args
{
    FromLua<QRegularExpressionMatch*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<QString> arg_3_1;
    ToLua<int> rslt_1;
};

static int lqtk_QRegularExpressionMatch_capturedEnd_doLua(lua_State* L)
{
    lqtk_QRegularExpressionMatch_capturedEnd_Args* args = (lqtk_QRegularExpressionMatch_capturedEnd_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatch::capturedEnd();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatch::capturedEnd(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatch::capturedEnd(args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QRegularExpressionMatch", "capturedEnd", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QRegularExpressionMatch_capturedEnd(lua_State* L)
{
    try {
        lqtk_QRegularExpressionMatch_capturedEnd_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QRegularExpressionMatch_capturedEnd_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpressionMatch_capturedLength_Args
{
    FromLua<QRegularExpressionMatch*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<QString> arg_3_1;
    ToLua<int> rslt_1;
};

static int lqtk_QRegularExpressionMatch_capturedLength_doLua(lua_State* L)
{
    lqtk_QRegularExpressionMatch_capturedLength_Args* args = (lqtk_QRegularExpressionMatch_capturedLength_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatch::capturedLength();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatch::capturedLength(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatch::capturedLength(args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QRegularExpressionMatch", "capturedLength", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QRegularExpressionMatch_capturedLength(lua_State* L)
{
    try {
        lqtk_QRegularExpressionMatch_capturedLength_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QRegularExpressionMatch_capturedLength_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpressionMatch_capturedStart_Args
{
    FromLua<QRegularExpressionMatch*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<QString> arg_3_1;
    ToLua<int> rslt_1;
};

static int lqtk_QRegularExpressionMatch_capturedStart_doLua(lua_State* L)
{
    lqtk_QRegularExpressionMatch_capturedStart_Args* args = (lqtk_QRegularExpressionMatch_capturedStart_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatch::capturedStart();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatch::capturedStart(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatch::capturedStart(args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QRegularExpressionMatch", "capturedStart", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QRegularExpressionMatch_capturedStart(lua_State* L)
{
    try {
        lqtk_QRegularExpressionMatch_capturedStart_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QRegularExpressionMatch_capturedStart_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpressionMatch_capturedTexts_Args
{
    FromLua<QRegularExpressionMatch*> arg_1_1;
    ToLua<QStringList> rslt_1;
};

static int lqtk_QRegularExpressionMatch_capturedTexts_doLua(lua_State* L)
{
    lqtk_QRegularExpressionMatch_capturedTexts_Args* args = (lqtk_QRegularExpressionMatch_capturedTexts_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatch::capturedTexts();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpressionMatch", "capturedTexts", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QRegularExpressionMatch_capturedTexts(lua_State* L)
{
    try {
        lqtk_QRegularExpressionMatch_capturedTexts_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QRegularExpressionMatch_capturedTexts_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpressionMatch_capturedView_Args
{
    FromLua<QRegularExpressionMatch*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<QString> arg_3_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QRegularExpressionMatch_capturedView_doLua(lua_State* L)
{
    lqtk_QRegularExpressionMatch_capturedView_Args* args = (lqtk_QRegularExpressionMatch_capturedView_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatch::capturedView();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatch::capturedView(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatch::capturedView(args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QRegularExpressionMatch", "capturedView", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QRegularExpressionMatch_capturedView(lua_State* L)
{
    try {
        lqtk_QRegularExpressionMatch_capturedView_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QRegularExpressionMatch_capturedView_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpressionMatch_hasCaptured_Args
{
    FromLua<QRegularExpressionMatch*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<QString> arg_3_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QRegularExpressionMatch_hasCaptured_doLua(lua_State* L)
{
    lqtk_QRegularExpressionMatch_hasCaptured_Args* args = (lqtk_QRegularExpressionMatch_hasCaptured_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatch::hasCaptured(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_3_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatch::hasCaptured(args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QRegularExpressionMatch", "hasCaptured", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QRegularExpressionMatch_hasCaptured(lua_State* L)
{
    try {
        lqtk_QRegularExpressionMatch_hasCaptured_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QRegularExpressionMatch_hasCaptured_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpressionMatch_hasMatch_Args
{
    FromLua<QRegularExpressionMatch*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QRegularExpressionMatch_hasMatch(lua_State* L)
{
    lqtk_QRegularExpressionMatch_hasMatch_Args  argValues;
    lqtk_QRegularExpressionMatch_hasMatch_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatch::hasMatch();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpressionMatch", "hasMatch", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpressionMatch_hasPartialMatch_Args
{
    FromLua<QRegularExpressionMatch*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QRegularExpressionMatch_hasPartialMatch(lua_State* L)
{
    lqtk_QRegularExpressionMatch_hasPartialMatch_Args  argValues;
    lqtk_QRegularExpressionMatch_hasPartialMatch_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatch::hasPartialMatch();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpressionMatch", "hasPartialMatch", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpressionMatch_isValid_Args
{
    FromLua<QRegularExpressionMatch*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QRegularExpressionMatch_isValid(lua_State* L)
{
    lqtk_QRegularExpressionMatch_isValid_Args  argValues;
    lqtk_QRegularExpressionMatch_isValid_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatch::isValid();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpressionMatch", "isValid", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpressionMatch_lastCapturedIndex_Args
{
    FromLua<QRegularExpressionMatch*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QRegularExpressionMatch_lastCapturedIndex(lua_State* L)
{
    lqtk_QRegularExpressionMatch_lastCapturedIndex_Args  argValues;
    lqtk_QRegularExpressionMatch_lastCapturedIndex_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatch::lastCapturedIndex();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpressionMatch", "lastCapturedIndex", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpressionMatch_matchOptions_Args
{
    FromLua<QRegularExpressionMatch*> arg_1_1;
    ToLua<QRegularExpression::MatchOptions> rslt_1;
};

extern "C" int lqtk_QRegularExpressionMatch_matchOptions(lua_State* L)
{
    lqtk_QRegularExpressionMatch_matchOptions_Args  argValues;
    lqtk_QRegularExpressionMatch_matchOptions_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatch::matchOptions();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpressionMatch", "matchOptions", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpressionMatch_matchType_Args
{
    FromLua<QRegularExpressionMatch*> arg_1_1;
    ToLua<QRegularExpression::MatchType> rslt_1;
};

extern "C" int lqtk_QRegularExpressionMatch_matchType(lua_State* L)
{
    lqtk_QRegularExpressionMatch_matchType_Args  argValues;
    lqtk_QRegularExpressionMatch_matchType_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QRegularExpressionMatch::matchType();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpressionMatch", "matchType", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpressionMatch_regularExpression_Args
{
    FromLua<QRegularExpressionMatch*> arg_1_1;
    ToLua<QRegularExpression*> rslt_1;
};

extern "C" int lqtk_QRegularExpressionMatch_regularExpression(lua_State* L)
{
    lqtk_QRegularExpressionMatch_regularExpression_Args  argValues;
    lqtk_QRegularExpressionMatch_regularExpression_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QRegularExpressionMatch::regularExpression();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QRegularExpressionMatch", "regularExpression", nargs, "1");
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
        QRegularExpressionMatchBinding::QType* ptr = static_cast<QRegularExpressionMatchBinding::QType*>(objectPtr);
        if (targetClassInfo == &QRegularExpressionMatchBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QRegularExpressionMatch* ptr = (QRegularExpressionMatch*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QRegularExpressionMatch_new_Args
{
    FromLua<QRegularExpressionMatch*> arg_1_1;
    ToLua<QRegularExpressionMatch*> rslt_1;
};

extern "C" int lqtk_QRegularExpressionMatch_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QRegularExpressionMatch_new_Args  argValues;
    lqtk_QRegularExpressionMatch_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QRegularExpressionMatchBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QRegularExpressionMatch> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QRegularExpressionMatch* rslt = 
                    new QRegularExpressionMatch();
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
                QRegularExpressionMatch* rslt = 
                    new QRegularExpressionMatch(*args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QRegularExpressionMatch", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QRegularExpressionMatch", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QRegularExpressionMatch_new(lua_State* L)
{
    return lqtk_QRegularExpressionMatch_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QRegularExpressionMatchBinding::pushObject(lua_State* L, QRegularExpressionMatch* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QRegularExpressionMatch>(L, hasUserValue);     // -> uval?, udata
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
    { "captured",          Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpressionMatch_captured },
    { "capturedEnd",       Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpressionMatch_capturedEnd },
    { "capturedLength",    Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpressionMatch_capturedLength },
    { "capturedStart",     Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpressionMatch_capturedStart },
    { "capturedTexts",     Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpressionMatch_capturedTexts },
    { "capturedView",      Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpressionMatch_capturedView },
    { "hasCaptured",       Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpressionMatch_hasCaptured },
    { "hasMatch",          Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpressionMatch_hasMatch },
    { "hasPartialMatch",   Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpressionMatch_hasPartialMatch },
    { "isValid",           Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpressionMatch_isValid },
    { "lastCapturedIndex", Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpressionMatch_lastCapturedIndex },
    { "matchOptions",      Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpressionMatch_matchOptions },
    { "matchType",         Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpressionMatch_matchType },
    { "regularExpression", Member::NORMAL_FUNCTION,      (void*) lqtk_QRegularExpressionMatch_regularExpression },
    { NULL,                Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QRegularExpressionMatchBinding::classInfo = 
{
    "QRegularExpressionMatch",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QRegularExpressionMatch_constructor,
    lqtk_QRegularExpressionMatch_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    14,
    members
};

/* ============================================================================================ */

int QRegularExpressionMatchBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
