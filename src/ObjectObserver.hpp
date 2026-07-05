#ifndef LQTK_OBJECT_OBSERVER_HPP
#define LQTK_OBJECT_OBSERVER_HPP

/* ============================================================================================ */

#pragma GCC visibility push (default) 

#include <QObject>
#include <QPointer>
#include <QByteArray>
#include <QHash>
#include <QtCore/qmetatype.h>
#include <QtCore/qtmochelpers.h>
#include <memory>

#include "init.h" // sets visibility hidden

/* ============================================================================================ */

namespace lqtk 
{
class StateGuard;
class ObjectUdata;

class ObjectObserver : public QObject
{
    Q_OBJECT;
public:
    ObjectObserver(StateGuard* guard);
    ~ObjectObserver(); 
    
    static ObjectObserver* getObserver(QObject* objPtr);
    
    static ObjectObserver* assureObserver(lua_State* L, QObject* objPtr);
    
    void listenTo(QObject* objPtr);
    
    typedef void (InvalidationHandler)(lua_State* L, int guardedIdx);
    
    void startGuarding(lua_State* L, int udataIdx, InvalidationHandler* handler = nullptr);
    void stopGuarding(lua_State* L, ObjectUdata* udata);
    
    lua_State* getL();
    
public:
    Q_SLOT void objectDestroyed();

private:
    class Impl;
    
    virtual void disconnectNotify(const QMetaMethod& signal);

    void unrefAll(lua_State* L);

    void pushWeakMap(lua_State* L);
    
    void handleInvalidation();

private:
    StateGuard* guard;
    int         weakMapRef;
    
    QPointer<QObject> guardedObjPtr;
    QObject*          objPtr;
    
    QHash<void*, InvalidationHandler*> invalidationHandlers;
};

} // namespace lqtk

#endif // LQTK_OBJECT_OBSERVER_HPP
