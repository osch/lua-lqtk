#ifndef LQTK_QRegularExpressionBinding_HPP
#define LQTK_QRegularExpressionBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QRegularExpressionBinding
{
    typedef QRegularExpression QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QRegularExpression> : public QRegularExpressionBinding
{};

} // namespace lqtk

#endif // LQTK_QRegularExpressionBinding_HPP
