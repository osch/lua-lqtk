#ifndef LQTK_QItemSelectionModelBinding_HPP
#define LQTK_QItemSelectionModelBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QItemSelectionModelBinding
{
    typedef QItemSelectionModel QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QItemSelectionModel> : public QItemSelectionModelBinding
{};

} // namespace lqtk

#endif // LQTK_QItemSelectionModelBinding_HPP
