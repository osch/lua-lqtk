#ifndef LQTK_CLASS_INFO_HPP
#define LQTK_CLASS_INFO_HPP

#include "Member.hpp"

namespace lqtk
{

class StateGuard;

struct ClassInfo
{
    typedef int         ConstructFunc(lua_State* L, bool explicitNew);
    typedef void*       CastFunction(const ClassInfo* targetClassInfo, void* objectPtr);
    typedef void        DeleteFunction(void* objectPtr);
    typedef bool        HasParentFunction(void* objectPtr);
    typedef const char* ValidityErrorFunction(void* objectPtr);
    typedef bool        SetUserValueFunction(void* objectPtr, StateGuard* guard);

    const Member* findMember(const char* name) const;

    const char*            className;
    const ClassInfo*       baseClass;
    bool                   isQObject;
    bool                   isGuarded;
    ConstructFunc*         constructFunc;
    lua_CFunction          newFunc;
    CastFunction*          castFunction;
    DeleteFunction*        deleteFunction;
    HasParentFunction*     hasParentFunction;
    ValidityErrorFunction* validityErrorFunction;
    SetUserValueFunction*  setUserValueFunction;
    int                    memberCount;
    const Member*          members;
};

} // namespace lqtk

#endif // LQTK_CLASS_INFO_HPP
