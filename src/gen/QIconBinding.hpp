#ifndef LQTK_QIconBinding_HPP
#define LQTK_QIconBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QIconBinding
{
    typedef QIcon QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QIcon> : public QIconBinding
{};

} // namespace lqtk

#endif // LQTK_QIconBinding_HPP
