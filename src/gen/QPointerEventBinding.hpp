#ifndef LQTK_QPointerEventBinding_HPP
#define LQTK_QPointerEventBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QPointerEventBinding
{
    typedef QPointerEvent QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QPointerEvent> : public QPointerEventBinding
{};

} // namespace lqtk

#endif // LQTK_QPointerEventBinding_HPP
