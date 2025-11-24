#ifndef LQTK_QPainterBinding_HPP
#define LQTK_QPainterBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"
#include "QPainterWrapperBase.hpp"

namespace lqtk
{

class ObjectUdata;

struct QPainterBinding
{
    typedef QPainterWrapperBase QType;

    static bool delegate_begin(
                    QPainterWrapperBase* arg1,
                    QWidget* arg2);

    static bool delegate_begin(
                    QPainterWrapperBase* arg1,
                    QPixmapWrapperBase* arg2);

    static void delegate_drawConvexPolygon(
                    QPainterWrapperBase* arg1,
                    QList<QPoint> arg2);

    static bool delegate_finish(
                    QPainterWrapperBase* arg1);


    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QPainter> : public QPainterBinding
{};

} // namespace lqtk

#endif // LQTK_QPainterBinding_HPP
