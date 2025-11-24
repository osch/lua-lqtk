#ifndef LQTK_QColorBinding_HPP
#define LQTK_QColorBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QColorBinding
{
    typedef QColor QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QColor> : public QColorBinding
{};

} // namespace lqtk

#endif // LQTK_QColorBinding_HPP
