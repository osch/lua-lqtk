#ifndef LQTK_QTimeZoneBinding_HPP
#define LQTK_QTimeZoneBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QTimeZoneBinding
{
    typedef QTimeZone QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QTimeZone> : public QTimeZoneBinding
{};

} // namespace lqtk

#endif // LQTK_QTimeZoneBinding_HPP
