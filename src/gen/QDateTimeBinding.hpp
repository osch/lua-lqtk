#ifndef LQTK_QDateTimeBinding_HPP
#define LQTK_QDateTimeBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QDateTimeBinding
{
    typedef QDateTime QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QDateTime> : public QDateTimeBinding
{};

} // namespace lqtk

#endif // LQTK_QDateTimeBinding_HPP
