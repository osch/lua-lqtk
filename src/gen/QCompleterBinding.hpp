#ifndef LQTK_QCompleterBinding_HPP
#define LQTK_QCompleterBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QCompleterBinding
{
    typedef QCompleter QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QCompleter> : public QCompleterBinding
{};

} // namespace lqtk

#endif // LQTK_QCompleterBinding_HPP
