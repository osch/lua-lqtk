#ifndef LQTK_QPolygonFBinding_HPP
#define LQTK_QPolygonFBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QPolygonFBinding
{
    typedef QPolygonF QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QPolygonF> : public QPolygonFBinding
{};

} // namespace lqtk

#endif // LQTK_QPolygonFBinding_HPP
