#ifndef LQTK_QCharBinding_HPP
#define LQTK_QCharBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QCharBinding
{
    typedef QChar QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QChar> : public QCharBinding
{};

} // namespace lqtk

#endif // LQTK_QCharBinding_HPP
