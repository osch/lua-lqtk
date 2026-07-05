#ifndef LQTK_QComboBoxBinding_HPP
#define LQTK_QComboBoxBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QComboBoxBinding
{
    typedef QComboBox QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QComboBox> : public QComboBoxBinding
{};

} // namespace lqtk

#endif // LQTK_QComboBoxBinding_HPP
