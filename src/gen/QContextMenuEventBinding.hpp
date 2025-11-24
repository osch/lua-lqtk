#ifndef LQTK_QContextMenuEventBinding_HPP
#define LQTK_QContextMenuEventBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QContextMenuEventBinding
{
    typedef QContextMenuEvent QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QContextMenuEvent> : public QContextMenuEventBinding
{};

} // namespace lqtk

#endif // LQTK_QContextMenuEventBinding_HPP
