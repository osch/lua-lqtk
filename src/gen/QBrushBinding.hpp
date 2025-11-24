#ifndef LQTK_QBrushBinding_HPP
#define LQTK_QBrushBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QBrushBinding
{
    typedef QBrush QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QBrush> : public QBrushBinding
{};

} // namespace lqtk

#endif // LQTK_QBrushBinding_HPP
