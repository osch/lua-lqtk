#ifndef LQTK_QInputEventBinding_HPP
#define LQTK_QInputEventBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QInputEventBinding
{
    typedef QInputEvent QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QInputEvent> : public QInputEventBinding
{};

} // namespace lqtk

#endif // LQTK_QInputEventBinding_HPP
