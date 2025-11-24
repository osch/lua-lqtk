#ifndef LQTK_QLabelBinding_HPP
#define LQTK_QLabelBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QLabelBinding
{
    typedef QLabel QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QLabel> : public QLabelBinding
{};

} // namespace lqtk

#endif // LQTK_QLabelBinding_HPP
