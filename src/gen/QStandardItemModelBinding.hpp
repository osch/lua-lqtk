#ifndef LQTK_QStandardItemModelBinding_HPP
#define LQTK_QStandardItemModelBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QStandardItemModelBinding
{
    typedef QStandardItemModel QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QStandardItemModel> : public QStandardItemModelBinding
{};

} // namespace lqtk

#endif // LQTK_QStandardItemModelBinding_HPP
