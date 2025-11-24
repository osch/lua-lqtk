#ifndef LQTK_QResizeEventBinding_HPP
#define LQTK_QResizeEventBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QResizeEventBinding
{
    typedef QResizeEvent QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QResizeEvent> : public QResizeEventBinding
{};

} // namespace lqtk

#endif // LQTK_QResizeEventBinding_HPP
