#ifndef LQTK_QDialogBinding_HPP
#define LQTK_QDialogBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QDialogBinding
{
    typedef QDialog QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QDialog> : public QDialogBinding
{};

} // namespace lqtk

#endif // LQTK_QDialogBinding_HPP
