#ifndef LQTK_QFontDatabaseBinding_HPP
#define LQTK_QFontDatabaseBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QFontDatabaseBinding
{
    typedef QFontDatabase QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QFontDatabase> : public QFontDatabaseBinding
{};

} // namespace lqtk

#endif // LQTK_QFontDatabaseBinding_HPP
