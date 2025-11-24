#ifndef LQTK_QMouseEventBinding_HPP
#define LQTK_QMouseEventBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QMouseEventBinding
{
    typedef QMouseEvent QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QMouseEvent> : public QMouseEventBinding
{};

} // namespace lqtk

#endif // LQTK_QMouseEventBinding_HPP
