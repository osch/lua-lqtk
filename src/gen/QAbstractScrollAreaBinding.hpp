#ifndef LQTK_QAbstractScrollAreaBinding_HPP
#define LQTK_QAbstractScrollAreaBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QAbstractScrollAreaBinding
{
    typedef QAbstractScrollArea QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QAbstractScrollArea> : public QAbstractScrollAreaBinding
{};

} // namespace lqtk

#endif // LQTK_QAbstractScrollAreaBinding_HPP
