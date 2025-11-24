#ifndef LQTK_QKeyEventBinding_HPP
#define LQTK_QKeyEventBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QKeyEventBinding
{
    typedef QKeyEvent QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QKeyEvent> : public QKeyEventBinding
{};

} // namespace lqtk

#endif // LQTK_QKeyEventBinding_HPP
