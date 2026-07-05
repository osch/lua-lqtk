#ifndef LQTK_QByteArrayBinding_HPP
#define LQTK_QByteArrayBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QByteArrayBinding
{
    typedef QByteArray QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QByteArray> : public QByteArrayBinding
{};

} // namespace lqtk

#endif // LQTK_QByteArrayBinding_HPP
