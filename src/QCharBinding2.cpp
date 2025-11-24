/* ============================================================================================ */

#include <QObject>
#include <QPointer>
#include <QMetaMethod>
#include <QChar>

/* ============================================================================================ */

#include "init.h"
#include "util.hpp"

#include "ClassInfo.hpp"
#include "QCharBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;

/* ============================================================================================ */


extern "C" int lqtk_QChar_fromUcs4(lua_State* L)
{
    lua_Integer i = util::checkInteger(L, 1);
    
    auto rslt = QChar::fromUcs4(i);
    lua_pushinteger(L, rslt.chars[0]);
    if (rslt.chars[1]) {
        lua_pushinteger(L, rslt.chars[1]);
        return 2;
    } else {
        return 1;
    }
}

