#ifndef LQTK_STATE_GUARD_HPP
#define LQTK_STATE_GUARD_HPP

class QApplication;

namespace lqtk 
{

class StateGuard
{
public:
    static void init(lua_State* L);
    
    static StateGuard* push(lua_State* L);
    
    static int pushEphemeronRefMap(lua_State* L);
    
    static void clearEphemeronRef(lua_State* L, int keyIndex);
    static void setEphemeronRef  (lua_State* L, int keyIndex, int valueIndex);
    static int  pushEphemeronRef (lua_State* L, int keyIndex);

    static int pushWeakReceiverRefMap(lua_State* L);
    static int pushWeakUdataRefMap(lua_State* L);
    static int pushWeakUserValueMap(lua_State* L);
    static int pushStrongUserValueMap(lua_State* L);
    
    static void clearWeakReceiverRef(lua_State* L, const void* obj);
    static void setWeakReceiverRef  (lua_State* L, const void*  obj, int valueIndex);
    static int  pushWeakReceiverRef (lua_State* L, const void*  obj);

    static void clearWeakUdataRef(lua_State* L, const void* obj);
    static void setWeakUdataRef  (lua_State* L, const void*  obj, int valueIndex);
    static int  pushWeakUdataRef (lua_State* L, const void*  obj);

    static void clearWeakUserValue(lua_State* L, const void*  obj);
    static void setWeakUserValue  (lua_State* L, const void*  obj, int valueIndex);
    static int  pushWeakUserValue (lua_State* L, const void*  obj);
    static void setWeakUserValue  (lua_State* L, int keyIndex, int valueIndex);
    static int  pushWeakUserValue (lua_State* L, int keyIndex);

    static void clearStrongUserValue(lua_State* L, const void*  obj);
    static void setStrongUserValue  (lua_State* L, const void*  obj, int valueIndex);
    static int  pushStrongUserValue (lua_State* L, const void*  obj);

    StateGuard()
        : L(nullptr),
          stateRef(LUA_NOREF),
          qtObjectCount(0),
          listenerCount(0),
          qapp(nullptr),
          refCount(0)
          
    {}
    ~StateGuard();
    
    bool isValid() const {
        return L != nullptr;
    }
    
    enum RefType {
        FOR_LUA_STATE,
        FOR_QT_OBJECT,
        FOR_LISTENER
    };

    static StateGuard* acquireRef(StateGuard* guard, RefType refType) {
        guard->refCount += 1;
        switch (refType) {
            case FOR_QT_OBJECT: guard->qtObjectCount += 1; break;
            case FOR_LISTENER:  guard->listenerCount += 1; break;
        }
        return guard;
    }
    
    static void releaseRef(StateGuard** guardp, RefType refType) {
        if (guardp) {
            StateGuard* guard = *guardp;
            if (guard) {
                switch (refType) {
                    case FOR_QT_OBJECT: guard->qtObjectCount -= 1; break;
                    case FOR_LISTENER:  guard->listenerCount -= 1; break;
                }
                guard->refCount -= 1;
                if (guard->refCount <= 0) {
                    delete guard;
                }
                *guardp = nullptr;
            }
        }
    }
    
    int getRefCount() const {
        return refCount;
    }

public:
    lua_State* L;
    int stateRef;
    
    int qtObjectCount;
    int listenerCount;
    
    QApplication* qapp;
    
private:
    int refCount;
};



} // namespace lqtk

#endif // LQTK_STATE_GUARD_HPP
