#ifndef LQTK_QMenuBarBinding_HPP
#define LQTK_QMenuBarBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QMenuBarBinding
{
    typedef QMenuBar QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QMenuBar> : public QMenuBarBinding
{};

} // namespace lqtk

#endif // LQTK_QMenuBarBinding_HPP
