#ifndef LQTK_QVBoxLayoutBinding_HPP
#define LQTK_QVBoxLayoutBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QVBoxLayoutBinding
{
    typedef QVBoxLayout QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QVBoxLayout> : public QVBoxLayoutBinding
{};

} // namespace lqtk

#endif // LQTK_QVBoxLayoutBinding_HPP
