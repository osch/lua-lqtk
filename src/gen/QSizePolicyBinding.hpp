#ifndef LQTK_QSizePolicyBinding_HPP
#define LQTK_QSizePolicyBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QSizePolicyBinding
{
    typedef QSizePolicy QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QSizePolicy> : public QSizePolicyBinding
{};

} // namespace lqtk

#endif // LQTK_QSizePolicyBinding_HPP
