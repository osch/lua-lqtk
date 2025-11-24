#ifndef LQTK_QFontBinding_HPP
#define LQTK_QFontBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QFontBinding
{
    typedef QFont QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QFont> : public QFontBinding
{};

} // namespace lqtk

#endif // LQTK_QFontBinding_HPP
