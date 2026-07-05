#ifndef LQTK_QApplicationBinding_HPP
#define LQTK_QApplicationBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QApplicationBinding
{
    typedef QApplication QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QApplication> : public QApplicationBinding
{};

} // namespace lqtk

#endif // LQTK_QApplicationBinding_HPP
