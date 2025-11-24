#ifndef LQTK_QHBoxLayoutBinding_HPP
#define LQTK_QHBoxLayoutBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QHBoxLayoutBinding
{
    typedef QHBoxLayout QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QHBoxLayout> : public QHBoxLayoutBinding
{};

} // namespace lqtk

#endif // LQTK_QHBoxLayoutBinding_HPP
