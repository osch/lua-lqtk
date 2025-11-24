#ifndef LQTK_QStandardItemBinding_HPP
#define LQTK_QStandardItemBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"
#include "ObjectGuard.hpp"

namespace lqtk
{

class ObjectUdata;

struct QStandardItemBinding
{
    typedef QStandardItem QType;

    static bool hasOwner(QType* obj);

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QStandardItem> : public QStandardItemBinding
{};

} // namespace lqtk

#endif // LQTK_QStandardItemBinding_HPP
