#ifndef LQTK_QWidgetItemBinding_HPP
#define LQTK_QWidgetItemBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"
#include "ObjectGuard.hpp"

namespace lqtk
{

class ObjectUdata;

struct QWidgetItemBinding
{
    typedef QWidgetItem QType;

    static bool hasOwner(QType* obj);

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QWidgetItem> : public QWidgetItemBinding
{};

} // namespace lqtk

#endif // LQTK_QWidgetItemBinding_HPP
