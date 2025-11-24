/* ============================================================================================ */

#include <QMetaObject>
#include <QObject>
#include <QPointer>

/* ============================================================================================ */

#include "init.h"

#include "util.hpp"
#include "trace.hpp"
#include "Listener.hpp"
#include "ConnectionUdata.hpp"


/* ============================================================================================ */

using namespace lqtk;

const char* const LQTK_CONNECTION_TYPE_NAME = "lqtk.Connection";

ConnectionUdata::~ConnectionUdata()
{
    trace::printf("~ConnectionUdata()\n");
    if (isValid) {
        if (listener) {
            if (listener->isLuaReceiver && qConnection) {
                QObject::disconnect(qConnection);
                qConnection = QMetaObject::Connection();
            }
            delete listener;
            listener = nullptr;
        }
    }
    isValid = false;
}

static int Lqtk_ConnectionDestruct(lua_State* L)
{
    ConnectionUdata* udata = (ConnectionUdata*) util::checkUdata(L, 1, LQTK_CONNECTION_TYPE_NAME);
    if (udata->isValid) {
        if (udata->listener) {
            udata->listener->unrefAll(L);
        }
        udata->~ConnectionUdata();
    }
    return 0;
}

static const luaL_Reg Lqtk_ConnectionMeta_Functions[] = 
{
    { "__gc",              Lqtk_ConnectionDestruct },
    
    { NULL,                NULL } /* sentinel */
};


static int setupConnectionMeta(lua_State* L)
{                                                     // -> meta
    lua_pushstring(L, LQTK_CONNECTION_TYPE_NAME);     // -> meta, typeName 
    lua_setfield(L, -2, "__metatable");               // -> meta
    
    luaL_setfuncs(L, Lqtk_ConnectionMeta_Functions, 0);
    
    return 1;
}


static int pushConnectionMeta(lua_State* L)
{
    if (luaL_newmetatable(L, LQTK_CONNECTION_TYPE_NAME)) { // -> meta
        setupConnectionMeta(L);
    }
    return 1;
}

ConnectionUdata* lqtk::ConnectionUdata::pushNew(lua_State* L)
{
    ConnectionUdata* udata = util::newuserdatauv<ConnectionUdata>(L, 0); // -> obj
    new(udata) ConnectionUdata();
    pushConnectionMeta(L); // -> obj, meta
    lua_setmetatable(L, -2); // -> obj
    return udata;
}

