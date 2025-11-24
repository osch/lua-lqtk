#ifndef LQTK_QPointBinding_HPP
#define LQTK_QPointBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QPointBinding
{
    typedef QPoint QType;

    static bool delegate_equals(
                    QPoint* arg1,
                    QPoint* arg2);

    static QString delegate_toString(
                    QPoint* arg1);

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QPoint> : public QPointBinding
{};

} // namespace lqtk

#endif // LQTK_QPointBinding_HPP
