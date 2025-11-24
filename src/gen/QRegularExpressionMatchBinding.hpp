#ifndef LQTK_QRegularExpressionMatchBinding_HPP
#define LQTK_QRegularExpressionMatchBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QRegularExpressionMatchBinding
{
    typedef QRegularExpressionMatch QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QRegularExpressionMatch> : public QRegularExpressionMatchBinding
{};

} // namespace lqtk

#endif // LQTK_QRegularExpressionMatchBinding_HPP
