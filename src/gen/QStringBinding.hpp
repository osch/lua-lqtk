#ifndef LQTK_QStringBinding_HPP
#define LQTK_QStringBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QStringBinding
{
    typedef QString QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QString> : public QStringBinding
{};

} // namespace lqtk

#endif // LQTK_QStringBinding_HPP
