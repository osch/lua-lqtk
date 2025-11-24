#ifndef LQTK_QOpenGLWidgetBinding_HPP
#define LQTK_QOpenGLWidgetBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ObjectUdata;

struct QOpenGLWidgetBinding
{
    typedef QOpenGLWidget QType;

    static ObjectUdata* pushObject(lua_State* L, QType* obj, OwnerType ownerType);

    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QOpenGLWidget> : public QOpenGLWidgetBinding
{};

} // namespace lqtk

#endif // LQTK_QOpenGLWidgetBinding_HPP
