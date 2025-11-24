#ifndef LQTK_QMenuBinding_HPP
#define LQTK_QMenuBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QMenuBinding
{
    typedef QMenu QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QMenu> : public QMenuBinding
{};

} // namespace lqtk

#endif // LQTK_QMenuBinding_HPP
