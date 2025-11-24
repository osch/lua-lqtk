#ifndef LQTK_QObjectBinding_HPP
#define LQTK_QObjectBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QObjectBinding
{
    typedef QObject QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QObject> : public QObjectBinding
{};

} // namespace lqtk

#endif // LQTK_QObjectBinding_HPP
