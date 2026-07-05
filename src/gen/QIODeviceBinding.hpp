#ifndef LQTK_QIODeviceBinding_HPP
#define LQTK_QIODeviceBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QIODeviceBinding
{
    typedef QIODevice QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QIODevice> : public QIODeviceBinding
{};

} // namespace lqtk

#endif // LQTK_QIODeviceBinding_HPP
