#ifndef LQTK_QPaletteBinding_HPP
#define LQTK_QPaletteBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QPaletteBinding
{
    typedef QPalette QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QPalette> : public QPaletteBinding
{};

} // namespace lqtk

#endif // LQTK_QPaletteBinding_HPP
