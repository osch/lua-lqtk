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

    static QByteArray* delegate_fromBase64Encoding(
                    QByteArray arg1);

    static QByteArray* delegate_fromBase64Encoding(
                    QByteArray arg1,
                    QByteArray::Base64Options arg2);

    static bool delegate_equals(
                    QByteArray* arg1,
                    QByteArray* arg2);

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QByteArray> : public QByteArrayBinding
{};

} // namespace lqtk

#endif // LQTK_QByteArrayBinding_HPP
