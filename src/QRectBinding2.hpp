#ifndef LQTK_Q_RECT_BINDING_2_HPP
#define LQTK_Q_RECT_BINDING_2_HPP

namespace lqtk
{

class QRectBinding2
{
public:
    static void delegate_equals(lua_State* L, int argOffs, 
                                              int nargs, 
                                              ToLua<bool>* rslt, QRect* arg1, QRect* arg2);

    static void delegate_toString(lua_State* L, int argOffs, 
                                                int nargs, 
                                                ToLua<QString>* rslt, QRect* rect);
};

} // namespace lqtk

#endif // LQTK_Q_RECT_BINDING_2_HPP
