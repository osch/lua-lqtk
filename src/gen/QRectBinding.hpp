#ifndef LQTK_QRectBinding_HPP
#define LQTK_QRectBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QRectBinding
{
    typedef QRect QType;

    static bool delegate_equals(
                    QRect* arg1,
                    QRect* arg2);

    static QString delegate_toString(
                    QRect* arg1);

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QRect> : public QRectBinding
{};

} // namespace lqtk

#endif // LQTK_QRectBinding_HPP
