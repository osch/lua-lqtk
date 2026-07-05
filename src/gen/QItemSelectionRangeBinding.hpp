#ifndef LQTK_QItemSelectionRangeBinding_HPP
#define LQTK_QItemSelectionRangeBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QItemSelectionRangeBinding
{
    typedef QItemSelectionRange QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QItemSelectionRange> : public QItemSelectionRangeBinding
{};

} // namespace lqtk

#endif // LQTK_QItemSelectionRangeBinding_HPP
