#ifndef LQTK_Q_STRING_BINDING_2_HPP
#define LQTK_Q_STRING_BINDING_2_HPP

namespace lqtk
{

class QStringBinding2
{
public:
    static void delegate_equals(lua_State* L, int argOffs, 
                                              int nargs, 
                                              ToLua<bool>* rslt, QString* arg1, QString* arg2);
                                              
    static void delegate_equals(lua_State* L, int argOffs, 
                                              int nargs,
                                              ToLua<bool>* rslt, QString* arg1, QString arg2);

    static void delegate_toString(lua_State* L, int argOffs, 
                                                int nargs, 
                                                ToLua<QString>* rslt, QString* s);
};

} // namespace lqtk

#endif // LQTK_Q_STRING_BINDING_2_HPP
