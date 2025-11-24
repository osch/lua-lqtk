/* ============================================================================================ */

#include <QObject>
#include <QPointer>
#include <QString>

/* ============================================================================================ */

#include "init.h"
#include "util.hpp"

#include "ClassInfo.hpp"
#include "QByteArrayBinding.hpp"
#include "FromLua.hpp"

/* ============================================================================================ */

using namespace lqtk;

/* ============================================================================================ */

QByteArray* QByteArrayBinding::delegate_fromBase64Encoding(QByteArray b)
{
    QByteArray* rsltP = nullptr;
    QByteArray::FromBase64Result rslt = QByteArray::fromBase64Encoding(b);
    if (rslt) {
        rsltP = new QByteArray(*rslt);
    }
    return rsltP;
}

QByteArray* QByteArrayBinding::delegate_fromBase64Encoding(QByteArray b, QByteArray::Base64Options o)
{
    QByteArray* rsltP = nullptr;
    QByteArray::FromBase64Result rslt = QByteArray::fromBase64Encoding(b, o);
    if (rslt) {
        rsltP = new QByteArray(*rslt);
    }
    return rsltP;
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

bool QByteArrayBinding::delegate_equals(QByteArray* arg1, QByteArray* arg2)
{
    if (arg1 && arg2) {
        return *arg1 == *arg2;
    }
    else {
        return arg1 == arg2;
    }
}
