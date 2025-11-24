#ifndef LQTK_QRegularExpressionMatchIteratorBinding_HPP
#define LQTK_QRegularExpressionMatchIteratorBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QRegularExpressionMatchIteratorBinding
{
    typedef QRegularExpressionMatchIterator QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QRegularExpressionMatchIterator> : public QRegularExpressionMatchIteratorBinding
{};

} // namespace lqtk

#endif // LQTK_QRegularExpressionMatchIteratorBinding_HPP
