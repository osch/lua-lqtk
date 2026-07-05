#ifndef LQTK_QProgressBarBinding_HPP
#define LQTK_QProgressBarBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QProgressBarBinding
{
    typedef QProgressBar QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QProgressBar> : public QProgressBarBinding
{};

} // namespace lqtk

#endif // LQTK_QProgressBarBinding_HPP
