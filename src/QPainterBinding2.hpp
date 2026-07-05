#ifndef LQTK_Q_PAINTER_BINDING_2_HPP
#define LQTK_Q_PAINTER_BINDING_2_HPP

namespace lqtk
{

class QPainterBinding2
{
public:
    static void delegate_begin(lua_State* L, int argOffs, 
                                             int nargs, 
                                             ToLua<bool>* rslt, QPainterWrapperBase* painter, QWidget* widget);
    
    static void delegate_begin(lua_State* L, int argOffs, 
                                             int nargs, 
                                             ToLua<bool>* rslt, QPainterWrapperBase* painter, QPixmapWrapperBase* widget);
    
    static void delegate_finish(lua_State* L, int argOffs, 
                                              int nargs, 
                                              ToLua<bool>* rslt, QPainterWrapperBase* painter);
    
    static void delegate_drawConvexPolygon(lua_State* L, int argOffs, 
                                                         int nargs, 
                                                         QPainterWrapperBase* painter,
                                                         QList<QPoint>        list);
};

} // namespace lqtk

#endif // LQTK_Q_PAINTER_BINDING_2_HPP
