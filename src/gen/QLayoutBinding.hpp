#ifndef LQTK_QLayoutBinding_HPP
#define LQTK_QLayoutBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QLayoutBinding
{
    typedef QLayout QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QLayout> : public QLayoutBinding
{};

} // namespace lqtk

#endif // LQTK_QLayoutBinding_HPP
