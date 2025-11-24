#ifndef LQTK_QGuiApplicationBinding_HPP
#define LQTK_QGuiApplicationBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QGuiApplicationBinding
{
    typedef QGuiApplication QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QGuiApplication> : public QGuiApplicationBinding
{};

} // namespace lqtk

#endif // LQTK_QGuiApplicationBinding_HPP
