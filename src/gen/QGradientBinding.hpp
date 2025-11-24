#ifndef LQTK_QGradientBinding_HPP
#define LQTK_QGradientBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QGradientBinding
{
    typedef QGradient QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QGradient> : public QGradientBinding
{};

} // namespace lqtk

#endif // LQTK_QGradientBinding_HPP
