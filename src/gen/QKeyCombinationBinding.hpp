#ifndef LQTK_QKeyCombinationBinding_HPP
#define LQTK_QKeyCombinationBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QKeyCombinationBinding
{
    typedef QKeyCombination QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QKeyCombination> : public QKeyCombinationBinding
{};

} // namespace lqtk

#endif // LQTK_QKeyCombinationBinding_HPP
