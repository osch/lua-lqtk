#ifndef LQTK_QTabWidgetBinding_HPP
#define LQTK_QTabWidgetBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QTabWidgetBinding
{
    typedef QTabWidget QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QTabWidget> : public QTabWidgetBinding
{};

} // namespace lqtk

#endif // LQTK_QTabWidgetBinding_HPP
