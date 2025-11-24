#ifndef LQTK_OBJECT_UDATA_HPP
#define LQTK_OBJECT_UDATA_HPP

#include "ObjectGuard.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"

namespace lqtk
{

class ClassUdata;

class ObjectUdata
{
public:
    static const int OTABLE_UVIDX   = 1;
    
    enum State {
        NEW     = 0x01,
        INITIAL = 0x02,
        VALID   = 0x04,
        INVALID = 0x08,
        ANY     =  (NEW | INITIAL | VALID | INVALID)
    };
    Q_DECLARE_FLAGS(States, State);

    void invalidate(lua_State* L, int udataIndex);
    
    static ObjectUdata* pushNew(lua_State* L, const ClassInfo* classInfo, bool withUserValue);
    
    template<class QType
            > 
    static ObjectUdata* pushNew(lua_State* L, bool withUserValue)
    {
        return pushNew(L, &Binding<QType>::classInfo, withUserValue);
    }
    
    template<class QType
            > 
    static ObjectUdata* pushObject(lua_State* L, typename Binding<QType>::QType* obj, OwnerType ownerType)
    {
        return Binding<QType>::pushObject(L, obj, ownerType);
    }
    
    void* castTo(const ClassInfo* classInfo) const;
    
    const char* pushClassName(lua_State* L, int udataIdx);

    bool isQObject() const {
        return classInfo->isQObject;
    }
    bool isGuarded() const {
        return classInfo->isGuarded;
    }
    bool isOwner();

    bool hasUserValue() const {
        return userValueFlag;
    }
    int getDebugId() const {
        return debugId;
    }
    void* getObjectPtr() const;
    QObject* getQObjectPtr() const;
    
    void setQObjectPtr(lua_State* L, int udataIdx, QObject* qptr, OwnerType ownerType);
    void setUserValue(lua_State* L, int udataIdx, int userValIdx);

    void setObjectGuard(lua_State* L, int udataIdx, ObjectGuard* guard, OwnerType ownerType);
    void setRawPtr(lua_State* L, int udataIdx, void* ptr, OwnerType ownerType);
    
    void unsetOwnership() {
        ownerFlag = false;
    }
    
    bool isEqual(const ObjectUdata* other) const;
    
    void* getTestedObjectPtr() const;

    void setStateInitial();
        
    State getState(const char** errmsg = nullptr);
    
    static ObjectUdata* testArg(lua_State* L, int arg, States states = VALID);
    static ObjectUdata* checkArg(lua_State* L, int arg, States states = VALID);

    ClassUdata* pushClass(lua_State* L, int udataIdx);
    ClassUdata* pushBaseClass(lua_State* L, int udataIdx);

public:
    const ClassInfo* const classInfo;

private:
    ObjectUdata(const ClassInfo* classInfo);

    ~ObjectUdata();

    struct Impl;
    
    bool destructed:1;
    bool ownerFlag:1;
    bool userValueFlag:1;
    bool isDerived:1;
    
    int debugId;
    
    union ObjRef {
        ObjRef()
            : rawPtr(nullptr)
        {} 
        ~ObjRef() {}
        void*             rawPtr;
        QPointer<QObject> qobject;
        ObjectGuard*      guard;
    } obj;
    
    State lastKnownState;
    const char* invalidityReason;
};

Q_DECLARE_OPERATORS_FOR_FLAGS(ObjectUdata::States)



} // namespace lqtk

#endif // LQTK_OBJECT_UDATA_HPP
