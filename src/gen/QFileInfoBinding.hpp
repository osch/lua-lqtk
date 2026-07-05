#ifndef LQTK_QFileInfoBinding_HPP
#define LQTK_QFileInfoBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QFileInfoBinding
{
    typedef QFileInfo QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QFileInfo> : public QFileInfoBinding
{};

} // namespace lqtk

#endif // LQTK_QFileInfoBinding_HPP
