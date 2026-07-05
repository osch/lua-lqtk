#ifndef LQTK_Q_POINT_BINDING_2_HPP
#define LQTK_Q_POINT_BINDING_2_HPP

namespace lqtk
{

class QPointBinding2
{
public:
    static void delegate_equals(lua_State* L, int argOffs, 
                                              int nargs, 
                                              ToLua<bool>* rslt, QPoint* arg1, QPoint* arg2);

    static void delegate_toString(lua_State* L, int argOffs, 
                                                int nargs, 
                                                ToLua<QString>* rslt, QPoint* point);
};

} // namespace lqtk

#endif // LQTK_Q_POINT_BINDING_2_HPP
