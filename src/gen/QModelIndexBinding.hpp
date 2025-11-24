#ifndef LQTK_QModelIndexBinding_HPP
#define LQTK_QModelIndexBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QModelIndexBinding
{
    typedef QModelIndex QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QModelIndex> : public QModelIndexBinding
{};

} // namespace lqtk

#endif // LQTK_QModelIndexBinding_HPP
