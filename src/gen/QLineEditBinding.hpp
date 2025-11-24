#ifndef LQTK_QLineEditBinding_HPP
#define LQTK_QLineEditBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QLineEditBinding
{
    typedef QLineEdit QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QLineEdit> : public QLineEditBinding
{};

} // namespace lqtk

#endif // LQTK_QLineEditBinding_HPP
