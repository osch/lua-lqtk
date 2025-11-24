#ifndef LQTK_QHeaderViewBinding_HPP
#define LQTK_QHeaderViewBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QHeaderViewBinding
{
    typedef QHeaderView QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QHeaderView> : public QHeaderViewBinding
{};

} // namespace lqtk

#endif // LQTK_QHeaderViewBinding_HPP
