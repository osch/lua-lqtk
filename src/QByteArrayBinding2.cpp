/* ============================================================================================ */

#include <QObject>
#include <QPointer>
#include <QString>

/* ============================================================================================ */

#include "init.h"
#include "util.hpp"

#include "ClassInfo.hpp"
#include "FromLua.hpp"
#include "ToLua.hpp"
#include "QByteArrayBinding.hpp"
#include "QByteArrayBinding2.hpp"

/* ============================================================================================ */

using namespace lqtk;

/* ============================================================================================ */

void QByteArrayBinding2::delegate_fromBase64Encoding(lua_State* L, int argOffs, 
                                                                   int nargs, 
                                                                   ToLua<QByteArray*>* rslt, QByteArray b, QByteArray::Base64Options o)
{
    QByteArray::FromBase64Result base64Rslt = QByteArray::fromBase64Encoding(b, o);
    if (base64Rslt) {
        *rslt = *base64Rslt;
        rslt->push(L, IS_OWNER);
    } else {
        lua_pushnil(L);
    }
}

extern "C" int lqtk_QByteArray_toDouble(lua_State* L)
{
    FromLua<QByteArray*> arg1;
    arg1.check(L, 1);
    bool ok = false;
    double rslt = arg1.getValue()->toDouble(&ok);
    if (ok) {
        lua_pushnumber(L, rslt);
    } else {
        lua_pushnil(L);
    }
    return 1;
}

extern "C" int lqtk_QByteArray_toInt(lua_State* L)
{
    FromLua<QByteArray*> arg1;
    FromLua<int> arg2;
    arg1.check(L, 1);
    int base = 10;
    if (arg2.test(L, 2)) {
        base = arg2.getValue();
    }
    bool ok = false;
    int rslt = arg1.getValue()->toInt(&ok, base);
    if (ok) {
        lua_pushinteger(L, rslt);
    } else {
        lua_pushnil(L);
    }
    return 1;
}

extern "C" int lqtk_QByteArray_toString(lua_State* L)
{
    FromLua<QByteArray*> arg1;
    arg1.check(L, 1);
    lua_pushlstring(L, arg1.getValue()->constData(), arg1.getValue()->length());
    return 1;
}

void QByteArrayBinding2::delegate_equals(lua_State* L, int argOffs, 
                                                       int nargs, 
                                                       ToLua<bool>* rslt, QByteArray* arg1, QByteArray* arg2)
{
    if (arg1 && arg2) {
        *rslt = (*arg1 == *arg2);
    }
    else {
        *rslt = (arg1 == arg2);
    }
    rslt->push(L);
}
