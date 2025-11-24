#ifndef LQTK_QKeySequenceBinding_HPP
#define LQTK_QKeySequenceBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QKeySequenceBinding
{
    typedef QKeySequence QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QKeySequence> : public QKeySequenceBinding
{};

} // namespace lqtk

#endif // LQTK_QKeySequenceBinding_HPP
