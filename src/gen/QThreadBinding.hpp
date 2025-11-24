#ifndef LQTK_QThreadBinding_HPP
#define LQTK_QThreadBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QThreadBinding
{
    typedef QThread QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QThread> : public QThreadBinding
{};

} // namespace lqtk

#endif // LQTK_QThreadBinding_HPP
