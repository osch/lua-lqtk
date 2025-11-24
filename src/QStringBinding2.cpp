/* ============================================================================================ */

#include <QObject>
#include <QPointer>
#include <QString>

/* ============================================================================================ */

#include "init.h"
#include "util.hpp"

#include "ClassInfo.hpp"
#include "QStringBinding.hpp"
#include "FromLua.hpp"

/* ============================================================================================ */

using namespace lqtk;

/* ============================================================================================ */

bool QStringBinding::delegate_equals(QString* arg1, QString* arg2)
{
    if (arg1 && arg2) {
        return *arg1 == *arg2;
    }
    else {
        return arg1 == arg2;
    }
}

bool QStringBinding::delegate_equals(QString* arg1, QString arg2)
{
    if (arg1) {
        return *arg1 == arg2;
    }
    else {
        return false;
    }
}

QString QStringBinding::delegate_toString(QString* s)
{
    return *s;
}

extern "C" int lqtk_QString_at(lua_State* L)
{
    FromLua<QString*> sobj;
    sobj.check(L, 1);
    QString* s = sobj.getValue();
    lua_Integer i = util::checkInteger(L, 2);
    
    if (0 <= i && i < s->length()) {
        lua_pushinteger(L, s->at(i).unicode());
        return 1;
    } else {
        return util::argError(L, 2, "invalid index");
    }
}
