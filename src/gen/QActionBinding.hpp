#ifndef LQTK_QActionBinding_HPP
#define LQTK_QActionBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QActionBinding
{
    typedef QAction QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QAction> : public QActionBinding
{};

} // namespace lqtk

#endif // LQTK_QActionBinding_HPP
