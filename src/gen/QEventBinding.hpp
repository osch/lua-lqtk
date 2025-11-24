#ifndef LQTK_QEventBinding_HPP
#define LQTK_QEventBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QEventBinding
{
    typedef QEvent QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QEvent> : public QEventBinding
{};

} // namespace lqtk

#endif // LQTK_QEventBinding_HPP
