#ifndef LQTK_QIODeviceBaseBinding_HPP
#define LQTK_QIODeviceBaseBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QIODeviceBaseBinding
{
    typedef QIODeviceBase QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QIODeviceBase> : public QIODeviceBaseBinding
{};

} // namespace lqtk

#endif // LQTK_QIODeviceBaseBinding_HPP
