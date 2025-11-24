#ifndef LQTK_QSinglePointEventBinding_HPP
#define LQTK_QSinglePointEventBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QSinglePointEventBinding
{
    typedef QSinglePointEvent QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QSinglePointEvent> : public QSinglePointEventBinding
{};

} // namespace lqtk

#endif // LQTK_QSinglePointEventBinding_HPP
