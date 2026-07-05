#ifndef LQTK_QPainterBinding_HPP
#define LQTK_QPainterBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"
#include "QPainterWrapperBase.hpp"

namespace lqtk
{

class ObjectUdata;

struct QPainterBinding
{
    typedef QPainterWrapperBase QType;


    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QPainter> : public QPainterBinding
{};

} // namespace lqtk

#endif // LQTK_QPainterBinding_HPP
