#ifndef LQTK_QMainWindowBinding_HPP
#define LQTK_QMainWindowBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QMainWindowBinding
{
    typedef QMainWindow QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QMainWindow> : public QMainWindowBinding
{};

} // namespace lqtk

#endif // LQTK_QMainWindowBinding_HPP
