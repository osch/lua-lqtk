#ifndef LQTK_QPaintEventBinding_HPP
#define LQTK_QPaintEventBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QPaintEventBinding
{
    typedef QPaintEvent QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QPaintEvent> : public QPaintEventBinding
{};

} // namespace lqtk

#endif // LQTK_QPaintEventBinding_HPP
