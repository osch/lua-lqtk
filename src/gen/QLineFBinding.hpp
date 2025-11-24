#ifndef LQTK_QLineFBinding_HPP
#define LQTK_QLineFBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QLineFBinding
{
    typedef QLineF QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QLineF> : public QLineFBinding
{};

} // namespace lqtk

#endif // LQTK_QLineFBinding_HPP
