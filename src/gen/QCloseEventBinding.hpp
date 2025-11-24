#ifndef LQTK_QCloseEventBinding_HPP
#define LQTK_QCloseEventBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QCloseEventBinding
{
    typedef QCloseEvent QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QCloseEvent> : public QCloseEventBinding
{};

} // namespace lqtk

#endif // LQTK_QCloseEventBinding_HPP
