#include <QPointer>
#include <QFlags>
#include <QString>
#include <QStringList>

#include "init.h"

#include "ClassInfo.hpp"
#include "ObjectUdata.hpp"
#include "ToLua.hpp"
#include "QByteArrayBinding.hpp"

using namespace lqtk;


void ToLua<QStringList>::push(lua_State* L) 
{
    lua_newtable(L);                                                             // -> list
    for (int i = 0; i < value.count(); ++i) {
        temp = value.at(i);
        temp.push(L);                                                            // -> list, el
        lua_rawseti(L, -2, i + 1);                                               // -> list
    }
}
