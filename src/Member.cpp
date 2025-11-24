#include "init.h"
#include "Member.hpp"

using namespace lqtk;

void Member::push(lua_State* L) const
{
    if (type == Member::NORMAL_FUNCTION || type == Member::VIRTUAL_FUNCTION) {
        if (value) {
            lua_pushcfunction(L, (lua_CFunction) value);
        } else {
            lua_pushboolean(L, false);
        }
    } else if (type == Member::INTEGER) {
        lua_pushinteger(L, (lua_Integer) value);
    } else {
        lua_pushnil(L);
    }                                                          // -> value
}

