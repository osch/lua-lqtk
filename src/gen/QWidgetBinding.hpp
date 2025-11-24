#ifndef LQTK_QWidgetBinding_HPP
#define LQTK_QWidgetBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QWidgetBinding
{
    typedef QWidget QType;

    static void intercept_new();

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QWidget> : public QWidgetBinding
{};

} // namespace lqtk

#endif // LQTK_QWidgetBinding_HPP
