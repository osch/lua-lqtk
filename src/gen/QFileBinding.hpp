#ifndef LQTK_QFileBinding_HPP
#define LQTK_QFileBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QFileBinding
{
    typedef QFile QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QFile> : public QFileBinding
{};

} // namespace lqtk

#endif // LQTK_QFileBinding_HPP
