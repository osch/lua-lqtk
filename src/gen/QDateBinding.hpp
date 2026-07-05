#ifndef LQTK_QDateBinding_HPP
#define LQTK_QDateBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QDateBinding
{
    typedef QDate QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QDate> : public QDateBinding
{};

} // namespace lqtk

#endif // LQTK_QDateBinding_HPP
