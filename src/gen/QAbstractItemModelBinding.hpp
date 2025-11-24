#ifndef LQTK_QAbstractItemModelBinding_HPP
#define LQTK_QAbstractItemModelBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QAbstractItemModelBinding
{
    typedef QAbstractItemModel QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QAbstractItemModel> : public QAbstractItemModelBinding
{};

} // namespace lqtk

#endif // LQTK_QAbstractItemModelBinding_HPP
