#ifndef LQTK_QTableViewBinding_HPP
#define LQTK_QTableViewBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QTableViewBinding
{
    typedef QTableView QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QTableView> : public QTableViewBinding
{};

} // namespace lqtk

#endif // LQTK_QTableViewBinding_HPP
