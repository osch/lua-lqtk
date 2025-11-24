#ifndef LQTK_QGridLayoutBinding_HPP
#define LQTK_QGridLayoutBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QGridLayoutBinding
{
    typedef QGridLayout QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QGridLayout> : public QGridLayoutBinding
{};

} // namespace lqtk

#endif // LQTK_QGridLayoutBinding_HPP
