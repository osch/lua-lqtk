#ifndef LQTK_QFrameBinding_HPP
#define LQTK_QFrameBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QFrameBinding
{
    typedef QFrame QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QFrame> : public QFrameBinding
{};

} // namespace lqtk

#endif // LQTK_QFrameBinding_HPP
