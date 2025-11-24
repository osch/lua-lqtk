#ifndef LQTK_QDeadlineTimerBinding_HPP
#define LQTK_QDeadlineTimerBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QDeadlineTimerBinding
{
    typedef QDeadlineTimer QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QDeadlineTimer> : public QDeadlineTimerBinding
{};

} // namespace lqtk

#endif // LQTK_QDeadlineTimerBinding_HPP
