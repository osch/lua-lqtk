#ifndef LQTK_QSizeFBinding_HPP
#define LQTK_QSizeFBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QSizeFBinding
{
    typedef QSizeF QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QSizeF> : public QSizeFBinding
{};

} // namespace lqtk

#endif // LQTK_QSizeFBinding_HPP
