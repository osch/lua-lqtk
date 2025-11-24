#ifndef LQTK_QLinearGradientBinding_HPP
#define LQTK_QLinearGradientBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QLinearGradientBinding
{
    typedef QLinearGradient QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QLinearGradient> : public QLinearGradientBinding
{};

} // namespace lqtk

#endif // LQTK_QLinearGradientBinding_HPP
