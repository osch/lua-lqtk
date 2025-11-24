#ifndef LQTK_QDialogButtonBoxBinding_HPP
#define LQTK_QDialogButtonBoxBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QDialogButtonBoxBinding
{
    typedef QDialogButtonBox QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QDialogButtonBox> : public QDialogButtonBoxBinding
{};

} // namespace lqtk

#endif // LQTK_QDialogButtonBoxBinding_HPP
