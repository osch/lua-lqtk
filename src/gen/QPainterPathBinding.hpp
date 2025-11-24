#ifndef LQTK_QPainterPathBinding_HPP
#define LQTK_QPainterPathBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QPainterPathBinding
{
    typedef QPainterPath QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QPainterPath> : public QPainterPathBinding
{};

} // namespace lqtk

#endif // LQTK_QPainterPathBinding_HPP
