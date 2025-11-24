#ifndef LQTK_QBoxLayoutBinding_HPP
#define LQTK_QBoxLayoutBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QBoxLayoutBinding
{
    typedef QBoxLayout QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QBoxLayout> : public QBoxLayoutBinding
{};

} // namespace lqtk

#endif // LQTK_QBoxLayoutBinding_HPP
