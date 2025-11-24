#ifndef LQTK_QSizeBinding_HPP
#define LQTK_QSizeBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QSizeBinding
{
    typedef QSize QType;

    static bool delegate_equals(
                    QSize* arg1,
                    QSize* arg2);

    static QString delegate_toString(
                    QSize* arg1);

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QSize> : public QSizeBinding
{};

} // namespace lqtk

#endif // LQTK_QSizeBinding_HPP
