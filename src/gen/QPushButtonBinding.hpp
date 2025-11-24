#ifndef LQTK_QPushButtonBinding_HPP
#define LQTK_QPushButtonBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QPushButtonBinding
{
    typedef QPushButton QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QPushButton> : public QPushButtonBinding
{};

} // namespace lqtk

#endif // LQTK_QPushButtonBinding_HPP
