#ifndef LQTK_LISTENER_HPP
#define LQTK_LISTENER_HPP

/* ============================================================================================ */

#include <QObject>
#include <QPointer>
#include <QByteArray>

/* ============================================================================================ */

#include "init.h"

/* ============================================================================================ */

namespace lqtk 
{
class StateGuard;

class Listener : public QObject
{
    Q_OBJECT;
public:
    Listener(StateGuard* guard);
    ~Listener(); 
    
    lua_State* getL();   
    
    bool isLuaReceiver;
    bool isLuaFunction;

    QPointer<QObject> qReceiver;

    QByteArray slotName;
    int        funcRef;
    int        connRef;
    
    void unrefAll(lua_State* L);

public:
    Q_SLOT void listen(QObject* obj);
    Q_SLOT void listen(bool b);
    Q_SLOT void listen();
    
    Q_SLOT void senderDestroyed();
    Q_SLOT void receiverDestroyed();

private:
    static int prepareCall(lua_State* L);
    int prepareCall2(lua_State* L);
    
    virtual void disconnectNotify(const QMetaMethod& signal);

    StateGuard* guard;
};

} // namespace lqtk

#endif // LQTK_LISTENER_HPP
