#ifndef LQTK_QTimerBinding_HPP
#define LQTK_QTimerBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QTimerBinding
{
    typedef QTimer QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QTimer> : public QTimerBinding
{};

} // namespace lqtk

#endif // LQTK_QTimerBinding_HPP
