#ifndef LQTK_QShowEventBinding_HPP
#define LQTK_QShowEventBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QShowEventBinding
{
    typedef QShowEvent QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QShowEvent> : public QShowEventBinding
{};

} // namespace lqtk

#endif // LQTK_QShowEventBinding_HPP
