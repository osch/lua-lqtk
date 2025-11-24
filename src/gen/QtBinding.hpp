#ifndef LQTK_QtBinding_HPP
#define LQTK_QtBinding_HPP

#include "util.hpp"
#include "NamespaceInfo.hpp"

namespace lqtk
{

struct QtBinding
{
    static int pushBinding(lua_State* L);
    
    static const NamespaceInfo namespaceInfo;
};


} // namespace lqtk

#endif // LQTK_QtBinding_HPP
