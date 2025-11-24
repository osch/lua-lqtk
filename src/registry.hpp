#ifndef LQTK_REGISTRY_HPP
#define LQTK_REGISTRY_HPP

class QMetaObject;

namespace lqtk {
    class ClassUdata;
}

namespace lqtk::registry
{

int pushBinding(lua_State* L, const char* name);

void pushEntryKeyValue(lua_State* L, int i);

int getEntryCount();

} // namespace lqtk::registry

#endif // LQTK_REGISTRY_HPP
