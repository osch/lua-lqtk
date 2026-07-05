#ifndef LQTK_QAbstractTableModelBinding_HPP
#define LQTK_QAbstractTableModelBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QAbstractTableModelBinding
{
    typedef QAbstractTableModel QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QAbstractTableModel> : public QAbstractTableModelBinding
{};

} // namespace lqtk

#endif // LQTK_QAbstractTableModelBinding_HPP
