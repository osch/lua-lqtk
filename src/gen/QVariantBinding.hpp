#ifndef LQTK_QVariantBinding_HPP
#define LQTK_QVariantBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QVariantBinding
{
    typedef QVariant QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QVariant> : public QVariantBinding
{};

} // namespace lqtk

#endif // LQTK_QVariantBinding_HPP
