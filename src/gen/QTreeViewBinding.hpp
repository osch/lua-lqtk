#ifndef LQTK_QTreeViewBinding_HPP
#define LQTK_QTreeViewBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QTreeViewBinding
{
    typedef QTreeView QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QTreeView> : public QTreeViewBinding
{};

} // namespace lqtk

#endif // LQTK_QTreeViewBinding_HPP
