#ifndef LQTK_QAbstractItemViewBinding_HPP
#define LQTK_QAbstractItemViewBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QAbstractItemViewBinding
{
    typedef QAbstractItemView QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QAbstractItemView> : public QAbstractItemViewBinding
{};

} // namespace lqtk

#endif // LQTK_QAbstractItemViewBinding_HPP
