#ifndef LQTK_QTimerEventBinding_HPP
#define LQTK_QTimerEventBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QTimerEventBinding
{
    typedef QTimerEvent QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QTimerEvent> : public QTimerEventBinding
{};

} // namespace lqtk

#endif // LQTK_QTimerEventBinding_HPP
