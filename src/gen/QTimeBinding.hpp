#ifndef LQTK_QTimeBinding_HPP
#define LQTK_QTimeBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QTimeBinding
{
    typedef QTime QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QTime> : public QTimeBinding
{};

} // namespace lqtk

#endif // LQTK_QTimeBinding_HPP
