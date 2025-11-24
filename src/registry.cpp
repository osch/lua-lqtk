/* ============================================================================================ */

#include <QObject>
#include <QMetaObject>
#include <QPointer>

/* ============================================================================================ */

#include "init.h"

#include "util.hpp"
#include "ClassInfo.hpp"
#include "registry.hpp"
#include "ClassUdata.hpp"
#include "ObjectUdata.hpp"
#include "StateGuard.hpp"

/* ============================================================================================ */

using namespace lqtk;

namespace lqtk::registry
{
    extern const luaL_Reg entries[];
}

int registry::pushBinding(lua_State* L, const char* name)
{
    const luaL_Reg* entry = entries;
    
    while (entry->name) {
        if (strcmp(name, entry->name) == 0) {
            return entry->func(L);
        }
        ++entry;
    }
    return 0;
}

