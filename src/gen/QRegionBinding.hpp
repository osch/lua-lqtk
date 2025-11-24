#ifndef LQTK_QRegionBinding_HPP
#define LQTK_QRegionBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QRegionBinding
{
    typedef QRegion QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QRegion> : public QRegionBinding
{};

} // namespace lqtk

#endif // LQTK_QRegionBinding_HPP
