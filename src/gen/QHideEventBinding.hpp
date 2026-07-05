#ifndef LQTK_QHideEventBinding_HPP
#define LQTK_QHideEventBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QHideEventBinding
{
    typedef QHideEvent QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QHideEvent> : public QHideEventBinding
{};

} // namespace lqtk

#endif // LQTK_QHideEventBinding_HPP
