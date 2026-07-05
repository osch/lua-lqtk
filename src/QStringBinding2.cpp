/* ============================================================================================ */

#include <QObject>
#include <QPointer>
#include <QString>

/* ============================================================================================ */

#include "init.h"
#include "util.hpp"

#include "ClassInfo.hpp"
#include "ObjectUdata.hpp"
#include "ToLua.hpp"
#include "QStringBinding.hpp"
#include "QStringBinding2.hpp"
#include "FromLua.hpp"

/* ============================================================================================ */

using namespace lqtk;

/* ============================================================================================ */

void QStringBinding2::delegate_equals(lua_State* L, int argOffs, 
                                                    int nargs, 
                                                    ToLua<bool>* rslt, QString* arg1, QString* arg2)
{
    if (arg1 && arg2) {
        *rslt = (*arg1 == *arg2);
    }
    else {
        *rslt = (arg1 == arg2);
    }
    rslt->push(L);
}

void QStringBinding2::delegate_equals(lua_State* L, int argOffs, 
                                                    int nargs, 
                                                    ToLua<bool>* rslt, QString* arg1, QString arg2)
{
    if (arg1) {
        *rslt = (*arg1 == arg2);
    }
    else {
        *rslt = false;
    }
    rslt->push(L);
}

void QStringBinding2::delegate_toString(lua_State* L, int argOffs, 
                                                      int nargs, 
                                                      ToLua<QString>* rslt, QString* s)
{
    *rslt = *s;
    rslt->push(L);
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
