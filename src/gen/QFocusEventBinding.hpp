#ifndef LQTK_QFocusEventBinding_HPP
#define LQTK_QFocusEventBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QFocusEventBinding
{
    typedef QFocusEvent QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QFocusEvent> : public QFocusEventBinding
{};

} // namespace lqtk

#endif // LQTK_QFocusEventBinding_HPP
