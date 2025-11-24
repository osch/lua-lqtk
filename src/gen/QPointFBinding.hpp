#ifndef LQTK_QPointFBinding_HPP
#define LQTK_QPointFBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QPointFBinding
{
    typedef QPointF QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QPointF> : public QPointFBinding
{};

} // namespace lqtk

#endif // LQTK_QPointFBinding_HPP
