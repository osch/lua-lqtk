#ifndef LQTK_QItemSelectionBinding_HPP
#define LQTK_QItemSelectionBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QItemSelectionBinding
{
    typedef QItemSelection QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QItemSelection> : public QItemSelectionBinding
{};

} // namespace lqtk

#endif // LQTK_QItemSelectionBinding_HPP
