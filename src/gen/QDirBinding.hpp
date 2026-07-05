#ifndef LQTK_QDirBinding_HPP
#define LQTK_QDirBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QDirBinding
{
    typedef QDir QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QDir> : public QDirBinding
{};

} // namespace lqtk

#endif // LQTK_QDirBinding_HPP
