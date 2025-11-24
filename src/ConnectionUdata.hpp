#ifndef LQTK_CONNECTION_UDATA_HPP
#define LQTK_CONNECTION_UDATA_HPP

extern const char* const LQTK_CONNECTION_TYPE_NAME;

namespace lqtk
{

class Listener;

class ConnectionUdata
{
public:
    static ConnectionUdata* pushNew(lua_State* L);

    ConnectionUdata()
        : isValid(true),
          listener(nullptr)
    {}
    
    ~ConnectionUdata();

    bool isValid;
    Listener* listener;
    QMetaObject::Connection qConnection;
};


} // namespace lqtk

#endif // LQTK_CONNECTION_UDATA_HPP
