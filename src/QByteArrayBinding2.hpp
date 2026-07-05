#ifndef LQTK_Q_BYTE_ARRAY_BINDING_2_HPP
#define LQTK_Q_BYTE_ARRAY_BINDING_2_HPP

namespace lqtk
{

class QByteArrayBinding2
{
public:
    static void delegate_fromBase64Encoding(lua_State* L, int argOffs, 
                                                          int nargs, 
                                                          ToLua<QByteArray*>* rslt, QByteArray b, QByteArray::Base64Options o = QByteArray::Base64Encoding);
    
    static void delegate_equals(lua_State* L, int argOffs, 
                                              int nargs, 
                                              ToLua<bool>* rslt, QByteArray* arg1, QByteArray* arg2);
    
};

} // namespace lqtk

#endif // LQTK_Q_BYTE_ARRAY_BINDING_2_HPP
