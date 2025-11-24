/* ============================================================================================ */

#include <QObject>
#include <QPointer>
#include <QAbstractButton>
#include <QMetaMethod>

/* ============================================================================================ */

#include "init.h"
#include "util.hpp"

#include "ClassInfo.hpp"
#include "ObjectUdata.hpp"
#include "ClassUdata.hpp"
#include "ConnectionUdata.hpp"
#include "StateGuard.hpp"
#include "Listener.hpp"
#include "QObjectBinding.hpp"
#include "FromLua.hpp"

/* ============================================================================================ */

using namespace lqtk;

/* ============================================================================================ */

#define ARG1 1
#define ARG2 2
#define ARG3 3
#define ARG4 4

extern "C" int lqtk_QObject_connect(lua_State* L)
{
    try {
        // invocation variants:
        // --- sender ------------- receiver --------------|--
        // 1.) qobject, signalname, qobject,   slotname    | isQReceiver
        // 2.) qobject, signalname, luaobject, slotname    | isLuadReceiver
        // 3.) qobject, signalname, luaobject, function    | isLuadReceiver
        // 4.) qobject, signalname, function               | isLuaFunction
        
        FromLua<QObject*> qSender;
        qSender.check(L, ARG1);
        
        const char* sigName  = util::checkString(L, ARG2);
        int         arg3Type = lua_type(L, ARG3);
        int         arg4Type = lua_type(L, ARG4);
    
        FromLua<QObject*> qReceiver;
        qReceiver.test(L, ARG3);
        
        const char* slotName         = NULL;
        bool        isQReceiver      = false;
        bool        isLuaReceiver    = false;
        bool        isLuaFunction    = false;
        int         luaReceiverIndex = -1;
        int         luaFuncIndex     = -1;
        
        if (qReceiver.getValue()) {
            // *** variant 1 ***
            isQReceiver = true;
            slotName = util::checkString(L, ARG4);
        }
        else if (arg3Type == LUA_TTABLE || arg3Type == LUA_TUSERDATA) {
            isLuaReceiver    = true;
            luaReceiverIndex = ARG3;
            if (arg4Type == LUA_TSTRING) {
                // *** variant 2 ***
                slotName = lua_tostring(L, ARG4);
            }
            else if (arg4Type == LUA_TFUNCTION) {
                // *** variant 3 ***
                luaFuncIndex = ARG4;
            }
            else {
                return util::argError(L, ARG4, "method or method name expected");
            }
        }
        else if (arg3Type == LUA_TFUNCTION) {
            // *** variant 4 ***
            isLuaFunction = true;
            luaFuncIndex = ARG3;
        }
        else {
            return util::argError(L, ARG3, "receiver object or function expected");
        }
            
        ConnectionUdata* connectionUdata = ConnectionUdata::pushNew(L);    // -> conn
        
        Listener* listener = NULL;
        {
            StateGuard* guard = StateGuard::push(L);                       // -> conn, guard  
            if (!guard->isValid()) {
                return luaL_error(L, "internal error");
            }
            listener = new Listener(guard);
            if (!listener) {
                return luaL_error(L, "memory error");
            }
            connectionUdata->listener = listener;
            listener->isLuaReceiver   = isLuaReceiver;
            listener->isLuaFunction   = isLuaFunction;
            listener->qReceiver       = qReceiver;
            if (slotName) {
                listener->slotName = QByteArray(slotName);
            } else {
                lua_pushvalue(L, luaFuncIndex);                            // -> conn, guard, func
                listener->funcRef = luaL_ref(L, LUA_REGISTRYINDEX);        // -> conn, guard
            }
    
            if (isLuaReceiver) 
            {
                // --------------------------------------------------------
                
                // Weak reference to receiver for Listener:  
                //
                // wvalue_map[listener] -> receiver
    
                StateGuard::setWeakReceiverRef(L, listener, luaReceiverIndex); // -> conn, guard
                
                // --------------------------------------------------------
                
                // Connection stays alive as long as receiver is not garbage collected
                //
                // wkey_map[receiver] -> connection
    
                StateGuard::setEphemeronRef(L, luaReceiverIndex, -2);          // -> conn, guard
    
                // --------------------------------------------------------
            }
            else {
                // No Lua receiver object -> Connection stays alive until sender or qreceiver is destroyed
                lua_pushvalue(L, -2);                                      // -> conn, guard, conn
                listener->connRef = luaL_ref(L, LUA_REGISTRYINDEX);        // -> conn, guard
            }
            lua_pop(L, 1);                                                 // -> conn
        }
    
        const QMetaObject* senderMeta = qSender.getValue()->metaObject();
        int sigIndex = -1;
        {
            QString qSigName = sigName;
            if (!qSigName.endsWith(")")) {
                qSigName.append("()");
            }
            sigIndex = senderMeta->indexOfSignal(QMetaObject::normalizedSignature(qSigName.toUtf8().data()));
        }
        if (sigIndex == -1) {
            return luaL_error(L, "connect error: signal '%s' not found in sender", sigName);
        }
        QMetaMethod signal = senderMeta->method(sigIndex);
        
        const QMetaObject* listenerMeta = listener->metaObject();
        int slotIndex = -1;
        {        
            QByteArray qSlotName;
            {
                qSlotName.append("listen(");
                for (int i = 0; i < signal.parameterCount(); ++i) {
                    if (i > 0) {
                        qSlotName.append(",");
                    }
                    qSlotName.append(signal.parameterTypeName(i));
                }
                qSlotName.append(")");
            }
            slotIndex = listenerMeta->indexOfSlot(QMetaObject::normalizedSignature(qSlotName));
        }
        if (slotIndex == -1) {
            return luaL_error(L, "connect error: signal '%s' is not supported by lqtk", sigName);
        }
        QMetaMethod slot = listenerMeta->method(slotIndex);
        
        QMetaObject::Connection qConnection = QObject::connect(qSender, signal, listener, slot); 
        if (!qConnection) {
            return luaL_error(L, "unexpected connect error");
        }
        connectionUdata->qConnection = qConnection;
        
        if (isLuaReceiver) {
            QObject::connect(qSender, SIGNAL(destroyed()), listener, SLOT(senderDestroyed()));
        }
        else if (isQReceiver) {
            QObject::connect(qReceiver, SIGNAL(destroyed()), listener, SLOT(receiverDestroyed()));
        }
        return 1;
    }    
    catch (...) {
        return util::handleException(L);
    }
}
