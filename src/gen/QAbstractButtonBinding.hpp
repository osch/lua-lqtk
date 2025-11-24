#ifndef LQTK_QAbstractButtonBinding_HPP
#define LQTK_QAbstractButtonBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QAbstractButtonBinding
{
    typedef QAbstractButton QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QAbstractButton> : public QAbstractButtonBinding
{};

} // namespace lqtk

#endif // LQTK_QAbstractButtonBinding_HPP
