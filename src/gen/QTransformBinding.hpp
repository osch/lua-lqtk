#ifndef LQTK_QTransformBinding_HPP
#define LQTK_QTransformBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QTransformBinding
{
    typedef QTransform QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QTransform> : public QTransformBinding
{};

} // namespace lqtk

#endif // LQTK_QTransformBinding_HPP
