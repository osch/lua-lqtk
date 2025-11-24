#ifndef LQTK_QRectFBinding_HPP
#define LQTK_QRectFBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QRectFBinding
{
    typedef QRectF QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QRectF> : public QRectFBinding
{};

} // namespace lqtk

#endif // LQTK_QRectFBinding_HPP
