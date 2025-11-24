// Type: QChar
// Base: nil

/* ============================================================================================ */

#include <QChar>
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
#include "QObjectBinding.hpp"
#include "QStringBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QChar_category_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QChar::Category> rslt_1;
};

extern "C" int lqtk_QChar_category(lua_State* L)
{
    lqtk_QChar_category_Args  argValues;
    lqtk_QChar_category_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QChar::category();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 =
                    QChar::category(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "category", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_combiningClass_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QChar_combiningClass(lua_State* L)
{
    lqtk_QChar_combiningClass_Args  argValues;
    lqtk_QChar_combiningClass_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::combiningClass();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QChar::combiningClass(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "combiningClass", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_currentUnicodeVersion_Args
{
    ToLua<QChar::UnicodeVersion> rslt_1;
};

extern "C" int lqtk_QChar_currentUnicodeVersion(lua_State* L)
{
    lqtk_QChar_currentUnicodeVersion_Args  argValues;
    lqtk_QChar_currentUnicodeVersion_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 =
                    QChar::currentUnicodeVersion();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QChar", "currentUnicodeVersion", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_decomposition_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QChar_decomposition_doLua(lua_State* L)
{
    lqtk_QChar_decomposition_Args* args = (lqtk_QChar_decomposition_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::decomposition();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QChar::decomposition(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "decomposition", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QChar_decomposition(lua_State* L)
{
    try {
        lqtk_QChar_decomposition_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QChar_decomposition_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_decompositionTag_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QChar::Decomposition> rslt_1;
};

extern "C" int lqtk_QChar_decompositionTag(lua_State* L)
{
    lqtk_QChar_decompositionTag_Args  argValues;
    lqtk_QChar_decompositionTag_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QChar::decompositionTag();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 =
                    QChar::decompositionTag(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "decompositionTag", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_digitValue_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QChar_digitValue(lua_State* L)
{
    lqtk_QChar_digitValue_Args  argValues;
    lqtk_QChar_digitValue_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::digitValue();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QChar::digitValue(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "digitValue", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_direction_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QChar::Direction> rslt_1;
};

extern "C" int lqtk_QChar_direction(lua_State* L)
{
    lqtk_QChar_direction_Args  argValues;
    lqtk_QChar_direction_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QChar::direction();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 =
                    QChar::direction(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "direction", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_fromLatin1_Args
{
    FromLua<int> arg_1_1;
    ToLua<QChar*> rslt_1;
};

extern "C" int lqtk_QChar_fromLatin1(lua_State* L)
{
    lqtk_QChar_fromLatin1_Args  argValues;
    lqtk_QChar_fromLatin1_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QChar::fromLatin1(args->arg_1_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QChar", "fromLatin1", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_fromUcs2_Args
{
    FromLua<int> arg_1_1;
    ToLua<QChar*> rslt_1;
};

extern "C" int lqtk_QChar_fromUcs2(lua_State* L)
{
    lqtk_QChar_fromUcs2_Args  argValues;
    lqtk_QChar_fromUcs2_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QChar::fromUcs2(args->arg_1_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QChar", "fromUcs2", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QChar_fromUcs4(lua_State* L);

/* ============================================================================================ */


struct lqtk_QChar_hasMirrored_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QChar_hasMirrored(lua_State* L)
{
    lqtk_QChar_hasMirrored_Args  argValues;
    lqtk_QChar_hasMirrored_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::hasMirrored();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QChar::hasMirrored(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "hasMirrored", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_highSurrogate_Args
{
    FromLua<int> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QChar_highSurrogate(lua_State* L)
{
    lqtk_QChar_highSurrogate_Args  argValues;
    lqtk_QChar_highSurrogate_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QChar::highSurrogate(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QChar", "highSurrogate", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_isDigit_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QChar_isDigit(lua_State* L)
{
    lqtk_QChar_isDigit_Args  argValues;
    lqtk_QChar_isDigit_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::isDigit();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QChar::isDigit(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "isDigit", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_isHighSurrogate_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QChar_isHighSurrogate(lua_State* L)
{
    lqtk_QChar_isHighSurrogate_Args  argValues;
    lqtk_QChar_isHighSurrogate_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::isHighSurrogate();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QChar::isHighSurrogate(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "isHighSurrogate", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_isLetter_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QChar_isLetter(lua_State* L)
{
    lqtk_QChar_isLetter_Args  argValues;
    lqtk_QChar_isLetter_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::isLetter();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QChar::isLetter(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "isLetter", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_isLetterOrNumber_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QChar_isLetterOrNumber(lua_State* L)
{
    lqtk_QChar_isLetterOrNumber_Args  argValues;
    lqtk_QChar_isLetterOrNumber_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::isLetterOrNumber();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QChar::isLetterOrNumber(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "isLetterOrNumber", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_isLowSurrogate_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QChar_isLowSurrogate(lua_State* L)
{
    lqtk_QChar_isLowSurrogate_Args  argValues;
    lqtk_QChar_isLowSurrogate_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::isLowSurrogate();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QChar::isLowSurrogate(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "isLowSurrogate", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_isLower_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QChar_isLower(lua_State* L)
{
    lqtk_QChar_isLower_Args  argValues;
    lqtk_QChar_isLower_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::isLower();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QChar::isLower(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "isLower", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_isMark_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QChar_isMark(lua_State* L)
{
    lqtk_QChar_isMark_Args  argValues;
    lqtk_QChar_isMark_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::isMark();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QChar::isMark(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "isMark", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_isNonCharacter_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QChar_isNonCharacter(lua_State* L)
{
    lqtk_QChar_isNonCharacter_Args  argValues;
    lqtk_QChar_isNonCharacter_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::isNonCharacter();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QChar::isNonCharacter(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "isNonCharacter", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_isNumber_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QChar_isNumber(lua_State* L)
{
    lqtk_QChar_isNumber_Args  argValues;
    lqtk_QChar_isNumber_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::isNumber();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QChar::isNumber(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "isNumber", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_isPrint_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QChar_isPrint(lua_State* L)
{
    lqtk_QChar_isPrint_Args  argValues;
    lqtk_QChar_isPrint_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::isPrint();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QChar::isPrint(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "isPrint", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_isPunct_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QChar_isPunct(lua_State* L)
{
    lqtk_QChar_isPunct_Args  argValues;
    lqtk_QChar_isPunct_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::isPunct();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QChar::isPunct(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "isPunct", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_isSpace_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QChar_isSpace(lua_State* L)
{
    lqtk_QChar_isSpace_Args  argValues;
    lqtk_QChar_isSpace_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::isSpace();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QChar::isSpace(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "isSpace", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_isSurrogate_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QChar_isSurrogate(lua_State* L)
{
    lqtk_QChar_isSurrogate_Args  argValues;
    lqtk_QChar_isSurrogate_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::isSurrogate();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QChar::isSurrogate(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "isSurrogate", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_isSymbol_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QChar_isSymbol(lua_State* L)
{
    lqtk_QChar_isSymbol_Args  argValues;
    lqtk_QChar_isSymbol_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::isSymbol();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QChar::isSymbol(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "isSymbol", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_isTitleCase_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QChar_isTitleCase(lua_State* L)
{
    lqtk_QChar_isTitleCase_Args  argValues;
    lqtk_QChar_isTitleCase_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::isTitleCase();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QChar::isTitleCase(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "isTitleCase", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_isUpper_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QChar_isUpper(lua_State* L)
{
    lqtk_QChar_isUpper_Args  argValues;
    lqtk_QChar_isUpper_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::isUpper();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QChar::isUpper(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "isUpper", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_joiningType_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QChar::JoiningType> rslt_1;
};

extern "C" int lqtk_QChar_joiningType(lua_State* L)
{
    lqtk_QChar_joiningType_Args  argValues;
    lqtk_QChar_joiningType_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QChar::joiningType();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 =
                    QChar::joiningType(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "joiningType", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_lowSurrogate_Args
{
    FromLua<int> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QChar_lowSurrogate(lua_State* L)
{
    lqtk_QChar_lowSurrogate_Args  argValues;
    lqtk_QChar_lowSurrogate_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QChar::lowSurrogate(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QChar", "lowSurrogate", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_mirroredChar_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QChar*> rslt_1;
    ToLua<int> rslt_2;
};

extern "C" int lqtk_QChar_mirroredChar(lua_State* L)
{
    lqtk_QChar_mirroredChar_Args  argValues;
    lqtk_QChar_mirroredChar_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::mirroredChar();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_2 = 
                    QChar::mirroredChar(args->arg_2_1.getValue());
                args->rslt_2.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "mirroredChar", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_requiresSurrogates_Args
{
    FromLua<int> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QChar_requiresSurrogates(lua_State* L)
{
    lqtk_QChar_requiresSurrogates_Args  argValues;
    lqtk_QChar_requiresSurrogates_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QChar::requiresSurrogates(args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QChar", "requiresSurrogates", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_script_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QChar::Script> rslt_1;
};

extern "C" int lqtk_QChar_script(lua_State* L)
{
    lqtk_QChar_script_Args  argValues;
    lqtk_QChar_script_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QChar::script();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 =
                    QChar::script(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "script", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_surrogateToUcs4_Args
{
    FromLua<int> arg_1_1;
    FromLua<int> arg_1_2;
    FromLua<QChar*> arg_2_1;
    FromLua<QChar*> arg_2_2;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QChar_surrogateToUcs4(lua_State* L)
{
    lqtk_QChar_surrogateToUcs4_Args  argValues;
    lqtk_QChar_surrogateToUcs4_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_1_2.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    QChar::surrogateToUcs4(args->arg_1_1.getValue(), args->arg_1_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            if (!args->arg_2_2.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    QChar::surrogateToUcs4(*args->arg_2_1.getValue(), *args->arg_2_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QChar", "surrogateToUcs4", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_toCaseFolded_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QChar*> rslt_1;
    ToLua<int> rslt_2;
};

extern "C" int lqtk_QChar_toCaseFolded(lua_State* L)
{
    lqtk_QChar_toCaseFolded_Args  argValues;
    lqtk_QChar_toCaseFolded_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::toCaseFolded();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_2 = 
                    QChar::toCaseFolded(args->arg_2_1.getValue());
                args->rslt_2.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "toCaseFolded", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_toLower_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QChar*> rslt_1;
    ToLua<int> rslt_2;
};

extern "C" int lqtk_QChar_toLower(lua_State* L)
{
    lqtk_QChar_toLower_Args  argValues;
    lqtk_QChar_toLower_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::toLower();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_2 = 
                    QChar::toLower(args->arg_2_1.getValue());
                args->rslt_2.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "toLower", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_toTitleCase_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QChar*> rslt_1;
    ToLua<int> rslt_2;
};

extern "C" int lqtk_QChar_toTitleCase(lua_State* L)
{
    lqtk_QChar_toTitleCase_Args  argValues;
    lqtk_QChar_toTitleCase_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::toTitleCase();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_2 = 
                    QChar::toTitleCase(args->arg_2_1.getValue());
                args->rslt_2.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "toTitleCase", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_toUpper_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QChar*> rslt_1;
    ToLua<int> rslt_2;
};

extern "C" int lqtk_QChar_toUpper(lua_State* L)
{
    lqtk_QChar_toUpper_Args  argValues;
    lqtk_QChar_toUpper_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::toUpper();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_2 = 
                    QChar::toUpper(args->arg_2_1.getValue());
                args->rslt_2.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "toUpper", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_unicodeVersion_Args
{
    FromLua<QChar*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<QChar::UnicodeVersion> rslt_1;
};

extern "C" int lqtk_QChar_unicodeVersion(lua_State* L)
{
    lqtk_QChar_unicodeVersion_Args  argValues;
    lqtk_QChar_unicodeVersion_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QChar::unicodeVersion();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 =
                    QChar::unicodeVersion(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QChar", "unicodeVersion", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_cell_Args
{
    FromLua<QChar*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QChar_cell(lua_State* L)
{
    lqtk_QChar_cell_Args  argValues;
    lqtk_QChar_cell_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::cell();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QChar", "cell", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_isNull_Args
{
    FromLua<QChar*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QChar_isNull(lua_State* L)
{
    lqtk_QChar_isNull_Args  argValues;
    lqtk_QChar_isNull_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::isNull();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QChar", "isNull", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_row_Args
{
    FromLua<QChar*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QChar_row(lua_State* L)
{
    lqtk_QChar_row_Args  argValues;
    lqtk_QChar_row_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::row();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QChar", "row", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_toLatin1_Args
{
    FromLua<QChar*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QChar_toLatin1(lua_State* L)
{
    lqtk_QChar_toLatin1_Args  argValues;
    lqtk_QChar_toLatin1_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::toLatin1();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QChar", "toLatin1", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QChar_unicode_Args
{
    FromLua<QChar*> arg_1_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QChar_unicode(lua_State* L)
{
    lqtk_QChar_unicode_Args  argValues;
    lqtk_QChar_unicode_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QChar::unicode();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QChar", "unicode", nargs, "1");
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
        QCharBinding::QType* ptr = static_cast<QCharBinding::QType*>(objectPtr);
        if (targetClassInfo == &QCharBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QChar* ptr = (QChar*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QChar_new_Args
{
    FromLua<int> arg_1_1;
    FromLua<char> arg_2_1;
    ToLua<QChar*> rslt_1;
};

extern "C" int lqtk_QChar_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QChar_new_Args  argValues;
    lqtk_QChar_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QCharBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QChar> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QChar* rslt = 
                    new QChar();
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
                QChar* rslt = 
                    new QChar(args->arg_1_1.getValue());
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
                QChar* rslt = 
                    new QChar(args->arg_2_1.getValue());
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
            return util::argCountError(L, "QChar", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QChar", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QChar_new(lua_State* L)
{
    return lqtk_QChar_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QCharBinding::pushObject(lua_State* L, QChar* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QChar>(L, hasUserValue);     // -> uval?, udata
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
    { "ByteOrderMark",                Member::INTEGER,              (void*) QChar::ByteOrderMark },
    { "ByteOrderSwapped",             Member::INTEGER,              (void*) QChar::ByteOrderSwapped },
    { "Canonical",                    Member::INTEGER,              (void*) QChar::Canonical },
    { "CarriageReturn",               Member::INTEGER,              (void*) QChar::CarriageReturn },
    { "Circle",                       Member::INTEGER,              (void*) QChar::Circle },
    { "Compat",                       Member::INTEGER,              (void*) QChar::Compat },
    { "DirAL",                        Member::INTEGER,              (void*) QChar::DirAL },
    { "DirAN",                        Member::INTEGER,              (void*) QChar::DirAN },
    { "DirB",                         Member::INTEGER,              (void*) QChar::DirB },
    { "DirBN",                        Member::INTEGER,              (void*) QChar::DirBN },
    { "DirCS",                        Member::INTEGER,              (void*) QChar::DirCS },
    { "DirEN",                        Member::INTEGER,              (void*) QChar::DirEN },
    { "DirES",                        Member::INTEGER,              (void*) QChar::DirES },
    { "DirET",                        Member::INTEGER,              (void*) QChar::DirET },
    { "DirFSI",                       Member::INTEGER,              (void*) QChar::DirFSI },
    { "DirL",                         Member::INTEGER,              (void*) QChar::DirL },
    { "DirLRE",                       Member::INTEGER,              (void*) QChar::DirLRE },
    { "DirLRI",                       Member::INTEGER,              (void*) QChar::DirLRI },
    { "DirLRO",                       Member::INTEGER,              (void*) QChar::DirLRO },
    { "DirNSM",                       Member::INTEGER,              (void*) QChar::DirNSM },
    { "DirON",                        Member::INTEGER,              (void*) QChar::DirON },
    { "DirPDF",                       Member::INTEGER,              (void*) QChar::DirPDF },
    { "DirPDI",                       Member::INTEGER,              (void*) QChar::DirPDI },
    { "DirR",                         Member::INTEGER,              (void*) QChar::DirR },
    { "DirRLE",                       Member::INTEGER,              (void*) QChar::DirRLE },
    { "DirRLI",                       Member::INTEGER,              (void*) QChar::DirRLI },
    { "DirRLO",                       Member::INTEGER,              (void*) QChar::DirRLO },
    { "DirS",                         Member::INTEGER,              (void*) QChar::DirS },
    { "DirWS",                        Member::INTEGER,              (void*) QChar::DirWS },
    { "Final",                        Member::INTEGER,              (void*) QChar::Final },
    { "Font",                         Member::INTEGER,              (void*) QChar::Font },
    { "FormFeed",                     Member::INTEGER,              (void*) QChar::FormFeed },
    { "Fraction",                     Member::INTEGER,              (void*) QChar::Fraction },
    { "Initial",                      Member::INTEGER,              (void*) QChar::Initial },
    { "Isolated",                     Member::INTEGER,              (void*) QChar::Isolated },
    { "Joining_Causing",              Member::INTEGER,              (void*) QChar::Joining_Causing },
    { "Joining_Dual",                 Member::INTEGER,              (void*) QChar::Joining_Dual },
    { "Joining_Left",                 Member::INTEGER,              (void*) QChar::Joining_Left },
    { "Joining_None",                 Member::INTEGER,              (void*) QChar::Joining_None },
    { "Joining_Right",                Member::INTEGER,              (void*) QChar::Joining_Right },
    { "Joining_Transparent",          Member::INTEGER,              (void*) QChar::Joining_Transparent },
    { "LastValidCodePoint",           Member::INTEGER,              (void*) QChar::LastValidCodePoint },
    { "Letter_Lowercase",             Member::INTEGER,              (void*) QChar::Letter_Lowercase },
    { "Letter_Modifier",              Member::INTEGER,              (void*) QChar::Letter_Modifier },
    { "Letter_Other",                 Member::INTEGER,              (void*) QChar::Letter_Other },
    { "Letter_Titlecase",             Member::INTEGER,              (void*) QChar::Letter_Titlecase },
    { "Letter_Uppercase",             Member::INTEGER,              (void*) QChar::Letter_Uppercase },
    { "LineFeed",                     Member::INTEGER,              (void*) QChar::LineFeed },
    { "LineSeparator",                Member::INTEGER,              (void*) QChar::LineSeparator },
    { "Mark_Enclosing",               Member::INTEGER,              (void*) QChar::Mark_Enclosing },
    { "Mark_NonSpacing",              Member::INTEGER,              (void*) QChar::Mark_NonSpacing },
    { "Mark_SpacingCombining",        Member::INTEGER,              (void*) QChar::Mark_SpacingCombining },
    { "Medial",                       Member::INTEGER,              (void*) QChar::Medial },
    { "Narrow",                       Member::INTEGER,              (void*) QChar::Narrow },
    { "Nbsp",                         Member::INTEGER,              (void*) QChar::Nbsp },
    { "NoBreak",                      Member::INTEGER,              (void*) QChar::NoBreak },
    { "NoDecomposition",              Member::INTEGER,              (void*) QChar::NoDecomposition },
    { "Null",                         Member::INTEGER,              (void*) QChar::Null },
    { "Number_DecimalDigit",          Member::INTEGER,              (void*) QChar::Number_DecimalDigit },
    { "Number_Letter",                Member::INTEGER,              (void*) QChar::Number_Letter },
    { "Number_Other",                 Member::INTEGER,              (void*) QChar::Number_Other },
    { "ObjectReplacementCharacter",   Member::INTEGER,              (void*) QChar::ObjectReplacementCharacter },
    { "Other_Control",                Member::INTEGER,              (void*) QChar::Other_Control },
    { "Other_Format",                 Member::INTEGER,              (void*) QChar::Other_Format },
    { "Other_NotAssigned",            Member::INTEGER,              (void*) QChar::Other_NotAssigned },
    { "Other_PrivateUse",             Member::INTEGER,              (void*) QChar::Other_PrivateUse },
    { "Other_Surrogate",              Member::INTEGER,              (void*) QChar::Other_Surrogate },
    { "ParagraphSeparator",           Member::INTEGER,              (void*) QChar::ParagraphSeparator },
    { "Punctuation_Close",            Member::INTEGER,              (void*) QChar::Punctuation_Close },
    { "Punctuation_Connector",        Member::INTEGER,              (void*) QChar::Punctuation_Connector },
    { "Punctuation_Dash",             Member::INTEGER,              (void*) QChar::Punctuation_Dash },
    { "Punctuation_FinalQuote",       Member::INTEGER,              (void*) QChar::Punctuation_FinalQuote },
    { "Punctuation_InitialQuote",     Member::INTEGER,              (void*) QChar::Punctuation_InitialQuote },
    { "Punctuation_Open",             Member::INTEGER,              (void*) QChar::Punctuation_Open },
    { "Punctuation_Other",            Member::INTEGER,              (void*) QChar::Punctuation_Other },
    { "ReplacementCharacter",         Member::INTEGER,              (void*) QChar::ReplacementCharacter },
    { "Script_Adlam",                 Member::INTEGER,              (void*) QChar::Script_Adlam },
    { "Script_Ahom",                  Member::INTEGER,              (void*) QChar::Script_Ahom },
    { "Script_AnatolianHieroglyphs",  Member::INTEGER,              (void*) QChar::Script_AnatolianHieroglyphs },
    { "Script_Arabic",                Member::INTEGER,              (void*) QChar::Script_Arabic },
    { "Script_Armenian",              Member::INTEGER,              (void*) QChar::Script_Armenian },
    { "Script_Avestan",               Member::INTEGER,              (void*) QChar::Script_Avestan },
    { "Script_Balinese",              Member::INTEGER,              (void*) QChar::Script_Balinese },
    { "Script_Bamum",                 Member::INTEGER,              (void*) QChar::Script_Bamum },
    { "Script_BassaVah",              Member::INTEGER,              (void*) QChar::Script_BassaVah },
    { "Script_Batak",                 Member::INTEGER,              (void*) QChar::Script_Batak },
    { "Script_Bengali",               Member::INTEGER,              (void*) QChar::Script_Bengali },
    { "Script_Bhaiksuki",             Member::INTEGER,              (void*) QChar::Script_Bhaiksuki },
    { "Script_Bopomofo",              Member::INTEGER,              (void*) QChar::Script_Bopomofo },
    { "Script_Brahmi",                Member::INTEGER,              (void*) QChar::Script_Brahmi },
    { "Script_Braille",               Member::INTEGER,              (void*) QChar::Script_Braille },
    { "Script_Buginese",              Member::INTEGER,              (void*) QChar::Script_Buginese },
    { "Script_Buhid",                 Member::INTEGER,              (void*) QChar::Script_Buhid },
    { "Script_CanadianAboriginal",    Member::INTEGER,              (void*) QChar::Script_CanadianAboriginal },
    { "Script_Carian",                Member::INTEGER,              (void*) QChar::Script_Carian },
    { "Script_CaucasianAlbanian",     Member::INTEGER,              (void*) QChar::Script_CaucasianAlbanian },
    { "Script_Chakma",                Member::INTEGER,              (void*) QChar::Script_Chakma },
    { "Script_Cham",                  Member::INTEGER,              (void*) QChar::Script_Cham },
    { "Script_Cherokee",              Member::INTEGER,              (void*) QChar::Script_Cherokee },
    { "Script_Chorasmian",            Member::INTEGER,              (void*) QChar::Script_Chorasmian },
    { "Script_Common",                Member::INTEGER,              (void*) QChar::Script_Common },
    { "Script_Coptic",                Member::INTEGER,              (void*) QChar::Script_Coptic },
    { "Script_Cuneiform",             Member::INTEGER,              (void*) QChar::Script_Cuneiform },
    { "Script_Cypriot",               Member::INTEGER,              (void*) QChar::Script_Cypriot },
    { "Script_CyproMinoan",           Member::INTEGER,              (void*) QChar::Script_CyproMinoan },
    { "Script_Cyrillic",              Member::INTEGER,              (void*) QChar::Script_Cyrillic },
    { "Script_Deseret",               Member::INTEGER,              (void*) QChar::Script_Deseret },
    { "Script_Devanagari",            Member::INTEGER,              (void*) QChar::Script_Devanagari },
    { "Script_DivesAkuru",            Member::INTEGER,              (void*) QChar::Script_DivesAkuru },
    { "Script_Dogra",                 Member::INTEGER,              (void*) QChar::Script_Dogra },
    { "Script_Duployan",              Member::INTEGER,              (void*) QChar::Script_Duployan },
    { "Script_EgyptianHieroglyphs",   Member::INTEGER,              (void*) QChar::Script_EgyptianHieroglyphs },
    { "Script_Elbasan",               Member::INTEGER,              (void*) QChar::Script_Elbasan },
    { "Script_Elymaic",               Member::INTEGER,              (void*) QChar::Script_Elymaic },
    { "Script_Ethiopic",              Member::INTEGER,              (void*) QChar::Script_Ethiopic },
    { "Script_Garay",                 Member::INTEGER,              (void*) QChar::Script_Garay },
    { "Script_Georgian",              Member::INTEGER,              (void*) QChar::Script_Georgian },
    { "Script_Glagolitic",            Member::INTEGER,              (void*) QChar::Script_Glagolitic },
    { "Script_Gothic",                Member::INTEGER,              (void*) QChar::Script_Gothic },
    { "Script_Grantha",               Member::INTEGER,              (void*) QChar::Script_Grantha },
    { "Script_Greek",                 Member::INTEGER,              (void*) QChar::Script_Greek },
    { "Script_Gujarati",              Member::INTEGER,              (void*) QChar::Script_Gujarati },
    { "Script_GunjalaGondi",          Member::INTEGER,              (void*) QChar::Script_GunjalaGondi },
    { "Script_Gurmukhi",              Member::INTEGER,              (void*) QChar::Script_Gurmukhi },
    { "Script_GurungKhema",           Member::INTEGER,              (void*) QChar::Script_GurungKhema },
    { "Script_Han",                   Member::INTEGER,              (void*) QChar::Script_Han },
    { "Script_Hangul",                Member::INTEGER,              (void*) QChar::Script_Hangul },
    { "Script_HanifiRohingya",        Member::INTEGER,              (void*) QChar::Script_HanifiRohingya },
    { "Script_Hanunoo",               Member::INTEGER,              (void*) QChar::Script_Hanunoo },
    { "Script_Hatran",                Member::INTEGER,              (void*) QChar::Script_Hatran },
    { "Script_Hebrew",                Member::INTEGER,              (void*) QChar::Script_Hebrew },
    { "Script_Hiragana",              Member::INTEGER,              (void*) QChar::Script_Hiragana },
    { "Script_ImperialAramaic",       Member::INTEGER,              (void*) QChar::Script_ImperialAramaic },
    { "Script_Inherited",             Member::INTEGER,              (void*) QChar::Script_Inherited },
    { "Script_InscriptionalPahlavi",  Member::INTEGER,              (void*) QChar::Script_InscriptionalPahlavi },
    { "Script_InscriptionalParthian", Member::INTEGER,              (void*) QChar::Script_InscriptionalParthian },
    { "Script_Javanese",              Member::INTEGER,              (void*) QChar::Script_Javanese },
    { "Script_Kaithi",                Member::INTEGER,              (void*) QChar::Script_Kaithi },
    { "Script_Kannada",               Member::INTEGER,              (void*) QChar::Script_Kannada },
    { "Script_Katakana",              Member::INTEGER,              (void*) QChar::Script_Katakana },
    { "Script_Kawi",                  Member::INTEGER,              (void*) QChar::Script_Kawi },
    { "Script_KayahLi",               Member::INTEGER,              (void*) QChar::Script_KayahLi },
    { "Script_Kharoshthi",            Member::INTEGER,              (void*) QChar::Script_Kharoshthi },
    { "Script_KhitanSmallScript",     Member::INTEGER,              (void*) QChar::Script_KhitanSmallScript },
    { "Script_Khmer",                 Member::INTEGER,              (void*) QChar::Script_Khmer },
    { "Script_Khojki",                Member::INTEGER,              (void*) QChar::Script_Khojki },
    { "Script_Khudawadi",             Member::INTEGER,              (void*) QChar::Script_Khudawadi },
    { "Script_KiratRai",              Member::INTEGER,              (void*) QChar::Script_KiratRai },
    { "Script_Lao",                   Member::INTEGER,              (void*) QChar::Script_Lao },
    { "Script_Latin",                 Member::INTEGER,              (void*) QChar::Script_Latin },
    { "Script_Lepcha",                Member::INTEGER,              (void*) QChar::Script_Lepcha },
    { "Script_Limbu",                 Member::INTEGER,              (void*) QChar::Script_Limbu },
    { "Script_LinearA",               Member::INTEGER,              (void*) QChar::Script_LinearA },
    { "Script_LinearB",               Member::INTEGER,              (void*) QChar::Script_LinearB },
    { "Script_Lisu",                  Member::INTEGER,              (void*) QChar::Script_Lisu },
    { "Script_Lycian",                Member::INTEGER,              (void*) QChar::Script_Lycian },
    { "Script_Lydian",                Member::INTEGER,              (void*) QChar::Script_Lydian },
    { "Script_Mahajani",              Member::INTEGER,              (void*) QChar::Script_Mahajani },
    { "Script_Makasar",               Member::INTEGER,              (void*) QChar::Script_Makasar },
    { "Script_Malayalam",             Member::INTEGER,              (void*) QChar::Script_Malayalam },
    { "Script_Mandaic",               Member::INTEGER,              (void*) QChar::Script_Mandaic },
    { "Script_Manichaean",            Member::INTEGER,              (void*) QChar::Script_Manichaean },
    { "Script_Marchen",               Member::INTEGER,              (void*) QChar::Script_Marchen },
    { "Script_MasaramGondi",          Member::INTEGER,              (void*) QChar::Script_MasaramGondi },
    { "Script_Medefaidrin",           Member::INTEGER,              (void*) QChar::Script_Medefaidrin },
    { "Script_MeeteiMayek",           Member::INTEGER,              (void*) QChar::Script_MeeteiMayek },
    { "Script_MendeKikakui",          Member::INTEGER,              (void*) QChar::Script_MendeKikakui },
    { "Script_MeroiticCursive",       Member::INTEGER,              (void*) QChar::Script_MeroiticCursive },
    { "Script_MeroiticHieroglyphs",   Member::INTEGER,              (void*) QChar::Script_MeroiticHieroglyphs },
    { "Script_Miao",                  Member::INTEGER,              (void*) QChar::Script_Miao },
    { "Script_Modi",                  Member::INTEGER,              (void*) QChar::Script_Modi },
    { "Script_Mongolian",             Member::INTEGER,              (void*) QChar::Script_Mongolian },
    { "Script_Mro",                   Member::INTEGER,              (void*) QChar::Script_Mro },
    { "Script_Multani",               Member::INTEGER,              (void*) QChar::Script_Multani },
    { "Script_Myanmar",               Member::INTEGER,              (void*) QChar::Script_Myanmar },
    { "Script_Nabataean",             Member::INTEGER,              (void*) QChar::Script_Nabataean },
    { "Script_NagMundari",            Member::INTEGER,              (void*) QChar::Script_NagMundari },
    { "Script_Nandinagari",           Member::INTEGER,              (void*) QChar::Script_Nandinagari },
    { "Script_NewTaiLue",             Member::INTEGER,              (void*) QChar::Script_NewTaiLue },
    { "Script_Newa",                  Member::INTEGER,              (void*) QChar::Script_Newa },
    { "Script_Nko",                   Member::INTEGER,              (void*) QChar::Script_Nko },
    { "Script_Nushu",                 Member::INTEGER,              (void*) QChar::Script_Nushu },
    { "Script_NyiakengPuachueHmong",  Member::INTEGER,              (void*) QChar::Script_NyiakengPuachueHmong },
    { "Script_Ogham",                 Member::INTEGER,              (void*) QChar::Script_Ogham },
    { "Script_OlChiki",               Member::INTEGER,              (void*) QChar::Script_OlChiki },
    { "Script_OlOnal",                Member::INTEGER,              (void*) QChar::Script_OlOnal },
    { "Script_OldHungarian",          Member::INTEGER,              (void*) QChar::Script_OldHungarian },
    { "Script_OldItalic",             Member::INTEGER,              (void*) QChar::Script_OldItalic },
    { "Script_OldNorthArabian",       Member::INTEGER,              (void*) QChar::Script_OldNorthArabian },
    { "Script_OldPermic",             Member::INTEGER,              (void*) QChar::Script_OldPermic },
    { "Script_OldPersian",            Member::INTEGER,              (void*) QChar::Script_OldPersian },
    { "Script_OldSogdian",            Member::INTEGER,              (void*) QChar::Script_OldSogdian },
    { "Script_OldSouthArabian",       Member::INTEGER,              (void*) QChar::Script_OldSouthArabian },
    { "Script_OldTurkic",             Member::INTEGER,              (void*) QChar::Script_OldTurkic },
    { "Script_OldUyghur",             Member::INTEGER,              (void*) QChar::Script_OldUyghur },
    { "Script_Oriya",                 Member::INTEGER,              (void*) QChar::Script_Oriya },
    { "Script_Osage",                 Member::INTEGER,              (void*) QChar::Script_Osage },
    { "Script_Osmanya",               Member::INTEGER,              (void*) QChar::Script_Osmanya },
    { "Script_PahawhHmong",           Member::INTEGER,              (void*) QChar::Script_PahawhHmong },
    { "Script_Palmyrene",             Member::INTEGER,              (void*) QChar::Script_Palmyrene },
    { "Script_PauCinHau",             Member::INTEGER,              (void*) QChar::Script_PauCinHau },
    { "Script_PhagsPa",               Member::INTEGER,              (void*) QChar::Script_PhagsPa },
    { "Script_Phoenician",            Member::INTEGER,              (void*) QChar::Script_Phoenician },
    { "Script_PsalterPahlavi",        Member::INTEGER,              (void*) QChar::Script_PsalterPahlavi },
    { "Script_Rejang",                Member::INTEGER,              (void*) QChar::Script_Rejang },
    { "Script_Runic",                 Member::INTEGER,              (void*) QChar::Script_Runic },
    { "Script_Samaritan",             Member::INTEGER,              (void*) QChar::Script_Samaritan },
    { "Script_Saurashtra",            Member::INTEGER,              (void*) QChar::Script_Saurashtra },
    { "Script_Sharada",               Member::INTEGER,              (void*) QChar::Script_Sharada },
    { "Script_Shavian",               Member::INTEGER,              (void*) QChar::Script_Shavian },
    { "Script_Siddham",               Member::INTEGER,              (void*) QChar::Script_Siddham },
    { "Script_SignWriting",           Member::INTEGER,              (void*) QChar::Script_SignWriting },
    { "Script_Sinhala",               Member::INTEGER,              (void*) QChar::Script_Sinhala },
    { "Script_Sogdian",               Member::INTEGER,              (void*) QChar::Script_Sogdian },
    { "Script_SoraSompeng",           Member::INTEGER,              (void*) QChar::Script_SoraSompeng },
    { "Script_Soyombo",               Member::INTEGER,              (void*) QChar::Script_Soyombo },
    { "Script_Sundanese",             Member::INTEGER,              (void*) QChar::Script_Sundanese },
    { "Script_Sunuwar",               Member::INTEGER,              (void*) QChar::Script_Sunuwar },
    { "Script_SylotiNagri",           Member::INTEGER,              (void*) QChar::Script_SylotiNagri },
    { "Script_Syriac",                Member::INTEGER,              (void*) QChar::Script_Syriac },
    { "Script_Tagalog",               Member::INTEGER,              (void*) QChar::Script_Tagalog },
    { "Script_Tagbanwa",              Member::INTEGER,              (void*) QChar::Script_Tagbanwa },
    { "Script_TaiLe",                 Member::INTEGER,              (void*) QChar::Script_TaiLe },
    { "Script_TaiTham",               Member::INTEGER,              (void*) QChar::Script_TaiTham },
    { "Script_TaiViet",               Member::INTEGER,              (void*) QChar::Script_TaiViet },
    { "Script_Takri",                 Member::INTEGER,              (void*) QChar::Script_Takri },
    { "Script_Tamil",                 Member::INTEGER,              (void*) QChar::Script_Tamil },
    { "Script_Tangsa",                Member::INTEGER,              (void*) QChar::Script_Tangsa },
    { "Script_Tangut",                Member::INTEGER,              (void*) QChar::Script_Tangut },
    { "Script_Telugu",                Member::INTEGER,              (void*) QChar::Script_Telugu },
    { "Script_Thaana",                Member::INTEGER,              (void*) QChar::Script_Thaana },
    { "Script_Thai",                  Member::INTEGER,              (void*) QChar::Script_Thai },
    { "Script_Tibetan",               Member::INTEGER,              (void*) QChar::Script_Tibetan },
    { "Script_Tifinagh",              Member::INTEGER,              (void*) QChar::Script_Tifinagh },
    { "Script_Tirhuta",               Member::INTEGER,              (void*) QChar::Script_Tirhuta },
    { "Script_Todhri",                Member::INTEGER,              (void*) QChar::Script_Todhri },
    { "Script_Toto",                  Member::INTEGER,              (void*) QChar::Script_Toto },
    { "Script_TuluTigalari",          Member::INTEGER,              (void*) QChar::Script_TuluTigalari },
    { "Script_Ugaritic",              Member::INTEGER,              (void*) QChar::Script_Ugaritic },
    { "Script_Unknown",               Member::INTEGER,              (void*) QChar::Script_Unknown },
    { "Script_Vai",                   Member::INTEGER,              (void*) QChar::Script_Vai },
    { "Script_Vithkuqi",              Member::INTEGER,              (void*) QChar::Script_Vithkuqi },
    { "Script_Wancho",                Member::INTEGER,              (void*) QChar::Script_Wancho },
    { "Script_WarangCiti",            Member::INTEGER,              (void*) QChar::Script_WarangCiti },
    { "Script_Yezidi",                Member::INTEGER,              (void*) QChar::Script_Yezidi },
    { "Script_Yi",                    Member::INTEGER,              (void*) QChar::Script_Yi },
    { "Script_ZanabazarSquare",       Member::INTEGER,              (void*) QChar::Script_ZanabazarSquare },
    { "Separator_Line",               Member::INTEGER,              (void*) QChar::Separator_Line },
    { "Separator_Paragraph",          Member::INTEGER,              (void*) QChar::Separator_Paragraph },
    { "Separator_Space",              Member::INTEGER,              (void*) QChar::Separator_Space },
    { "Small",                        Member::INTEGER,              (void*) QChar::Small },
    { "SoftHyphen",                   Member::INTEGER,              (void*) QChar::SoftHyphen },
    { "Space",                        Member::INTEGER,              (void*) QChar::Space },
    { "Square",                       Member::INTEGER,              (void*) QChar::Square },
    { "Sub",                          Member::INTEGER,              (void*) QChar::Sub },
    { "Super",                        Member::INTEGER,              (void*) QChar::Super },
    { "Symbol_Currency",              Member::INTEGER,              (void*) QChar::Symbol_Currency },
    { "Symbol_Math",                  Member::INTEGER,              (void*) QChar::Symbol_Math },
    { "Symbol_Modifier",              Member::INTEGER,              (void*) QChar::Symbol_Modifier },
    { "Symbol_Other",                 Member::INTEGER,              (void*) QChar::Symbol_Other },
    { "Tabulation",                   Member::INTEGER,              (void*) QChar::Tabulation },
    { "Unicode_10_0",                 Member::INTEGER,              (void*) QChar::Unicode_10_0 },
    { "Unicode_11_0",                 Member::INTEGER,              (void*) QChar::Unicode_11_0 },
    { "Unicode_12_0",                 Member::INTEGER,              (void*) QChar::Unicode_12_0 },
    { "Unicode_12_1",                 Member::INTEGER,              (void*) QChar::Unicode_12_1 },
    { "Unicode_13_0",                 Member::INTEGER,              (void*) QChar::Unicode_13_0 },
    { "Unicode_14_0",                 Member::INTEGER,              (void*) QChar::Unicode_14_0 },
    { "Unicode_15_0",                 Member::INTEGER,              (void*) QChar::Unicode_15_0 },
    { "Unicode_15_1",                 Member::INTEGER,              (void*) QChar::Unicode_15_1 },
    { "Unicode_16_0",                 Member::INTEGER,              (void*) QChar::Unicode_16_0 },
    { "Unicode_1_1",                  Member::INTEGER,              (void*) QChar::Unicode_1_1 },
    { "Unicode_2_0",                  Member::INTEGER,              (void*) QChar::Unicode_2_0 },
    { "Unicode_2_1_2",                Member::INTEGER,              (void*) QChar::Unicode_2_1_2 },
    { "Unicode_3_0",                  Member::INTEGER,              (void*) QChar::Unicode_3_0 },
    { "Unicode_3_1",                  Member::INTEGER,              (void*) QChar::Unicode_3_1 },
    { "Unicode_3_2",                  Member::INTEGER,              (void*) QChar::Unicode_3_2 },
    { "Unicode_4_0",                  Member::INTEGER,              (void*) QChar::Unicode_4_0 },
    { "Unicode_4_1",                  Member::INTEGER,              (void*) QChar::Unicode_4_1 },
    { "Unicode_5_0",                  Member::INTEGER,              (void*) QChar::Unicode_5_0 },
    { "Unicode_5_1",                  Member::INTEGER,              (void*) QChar::Unicode_5_1 },
    { "Unicode_5_2",                  Member::INTEGER,              (void*) QChar::Unicode_5_2 },
    { "Unicode_6_0",                  Member::INTEGER,              (void*) QChar::Unicode_6_0 },
    { "Unicode_6_1",                  Member::INTEGER,              (void*) QChar::Unicode_6_1 },
    { "Unicode_6_2",                  Member::INTEGER,              (void*) QChar::Unicode_6_2 },
    { "Unicode_6_3",                  Member::INTEGER,              (void*) QChar::Unicode_6_3 },
    { "Unicode_7_0",                  Member::INTEGER,              (void*) QChar::Unicode_7_0 },
    { "Unicode_8_0",                  Member::INTEGER,              (void*) QChar::Unicode_8_0 },
    { "Unicode_9_0",                  Member::INTEGER,              (void*) QChar::Unicode_9_0 },
    { "Unicode_Unassigned",           Member::INTEGER,              (void*) QChar::Unicode_Unassigned },
    { "Vertical",                     Member::INTEGER,              (void*) QChar::Vertical },
    { "VisualTabCharacter",           Member::INTEGER,              (void*) QChar::VisualTabCharacter },
    { "Wide",                         Member::INTEGER,              (void*) QChar::Wide },
    { "category",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_category },
    { "cell",                         Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_cell },
    { "combiningClass",               Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_combiningClass },
    { "currentUnicodeVersion",        Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_currentUnicodeVersion },
    { "decomposition",                Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_decomposition },
    { "decompositionTag",             Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_decompositionTag },
    { "digitValue",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_digitValue },
    { "direction",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_direction },
    { "fromLatin1",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_fromLatin1 },
    { "fromUcs2",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_fromUcs2 },
    { "fromUcs4",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_fromUcs4 },
    { "hasMirrored",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_hasMirrored },
    { "highSurrogate",                Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_highSurrogate },
    { "isDigit",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_isDigit },
    { "isHighSurrogate",              Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_isHighSurrogate },
    { "isLetter",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_isLetter },
    { "isLetterOrNumber",             Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_isLetterOrNumber },
    { "isLowSurrogate",               Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_isLowSurrogate },
    { "isLower",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_isLower },
    { "isMark",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_isMark },
    { "isNonCharacter",               Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_isNonCharacter },
    { "isNull",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_isNull },
    { "isNumber",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_isNumber },
    { "isPrint",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_isPrint },
    { "isPunct",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_isPunct },
    { "isSpace",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_isSpace },
    { "isSurrogate",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_isSurrogate },
    { "isSymbol",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_isSymbol },
    { "isTitleCase",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_isTitleCase },
    { "isUpper",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_isUpper },
    { "joiningType",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_joiningType },
    { "lowSurrogate",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_lowSurrogate },
    { "mirroredChar",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_mirroredChar },
    { "requiresSurrogates",           Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_requiresSurrogates },
    { "row",                          Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_row },
    { "script",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_script },
    { "surrogateToUcs4",              Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_surrogateToUcs4 },
    { "toCaseFolded",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_toCaseFolded },
    { "toLatin1",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_toLatin1 },
    { "toLower",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_toLower },
    { "toTitleCase",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_toTitleCase },
    { "toUpper",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_toUpper },
    { "unicode",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_unicode },
    { "unicodeVersion",               Member::NORMAL_FUNCTION,      (void*) lqtk_QChar_unicodeVersion },
    { NULL,                           Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QCharBinding::classInfo = 
{
    "QChar",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QChar_constructor,
    lqtk_QChar_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    336,
    members
};

/* ============================================================================================ */

int QCharBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
