#ifndef LQTK_QInputMethodEventBinding_HPP
#define LQTK_QInputMethodEventBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QInputMethodEventBinding
{
    typedef QInputMethodEvent QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QInputMethodEvent> : public QInputMethodEventBinding
{};

} // namespace lqtk

#endif // LQTK_QInputMethodEventBinding_HPP
