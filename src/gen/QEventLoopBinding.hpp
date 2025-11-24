#ifndef LQTK_QEventLoopBinding_HPP
#define LQTK_QEventLoopBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QEventLoopBinding
{
    typedef QEventLoop QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QEventLoop> : public QEventLoopBinding
{};

} // namespace lqtk

#endif // LQTK_QEventLoopBinding_HPP
