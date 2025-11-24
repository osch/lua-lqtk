#ifndef LQTK_QCoreApplicationBinding_HPP
#define LQTK_QCoreApplicationBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QCoreApplicationBinding
{
    typedef QCoreApplication QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QCoreApplication> : public QCoreApplicationBinding
{};

} // namespace lqtk

#endif // LQTK_QCoreApplicationBinding_HPP
