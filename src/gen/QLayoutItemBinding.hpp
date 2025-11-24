#ifndef LQTK_QLayoutItemBinding_HPP
#define LQTK_QLayoutItemBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"
#include "ObjectGuard.hpp"

namespace lqtk
{

class ObjectUdata;

struct QLayoutItemBinding
{
    typedef QLayoutItem QType;

    static bool hasOwner(QType* obj);

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QLayoutItem> : public QLayoutItemBinding
{};

} // namespace lqtk

#endif // LQTK_QLayoutItemBinding_HPP
