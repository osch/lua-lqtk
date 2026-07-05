#ifndef LQTK_QWheelEventBinding_HPP
#define LQTK_QWheelEventBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QWheelEventBinding
{
    typedef QWheelEvent QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QWheelEvent> : public QWheelEventBinding
{};

} // namespace lqtk

#endif // LQTK_QWheelEventBinding_HPP
