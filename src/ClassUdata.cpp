/* ============================================================================================ */

#include <QPointer>

/* ============================================================================================ */

#include "init.h"
#include "util.hpp"

#include "ClassInfo.hpp"
#include "ClassUdata.hpp"
#include "ObjectUdata.hpp"
#include "registry.hpp"

/* ============================================================================================ */

using namespace lqtk;
using namespace lqtk::util;

const char* const LQTK_CLASS_TYPE_NAME = "lqtk.Class";

static const int CTABLE_UVIDX  = ClassUdata::CTABLE_UVIDX;
static const int OMETA_UVIDX   = ClassUdata::OMETA_UVIDX;
static const int NEWFUNC_UVIDX = ClassUdata::NEWFUNC_UVIDX;

static const int CLASS_MIDX = 1;

namespace lqtk {
    extern int debugIdCounter;
}

ClassUdata::ClassUdata(const ClassInfo* classInfo)
    : classInfo(classInfo),
      destructed(false),
      isDerived(false),
      hasName(false),
      debugId(++debugIdCounter)
{}

const char* ClassUdata::pushClassName(lua_State* L, int udataIdx)
{
    int top = lua_gettop(L);
    if (udataIdx < 0) {
        udataIdx = top + 1 + udataIdx;
    }
    if (isDerived) {
        lua_getiuservalue(L, udataIdx, CTABLE_UVIDX);            // -> uval
        lua_getmetatable(L, -1);                                 // -> uval, meta
        if (!hasName) {
            // trying locals
            lua_Debug ar;
            for (int level = 1; lua_getstack(L, level, &ar); ++level) {
                int i = 1;
                while (true) {
                    const char* name = lua_getlocal(L, &ar, i);
                    if (name)  {                                 // -> uval, meta, value
                        if (name[0] && name[0] != '(' && lua_rawequal(L, udataIdx, -1)) {
                            hasName = true;               // -> uval, meta, value
                            lua_pop(L, 1);                       // -> uval, meta
                            lua_pushstring(L, name);             // -> uval, meta, name
                            lua_setfield(L, -2, "className");    // -> uval, meta
                            goto end1;
                        }
                        lua_pop(L, 1);                           // -> uval, meta
                    } else {                                     // -> uval, meta
                        break;
                    }
                    i += 1;
                }
            }
        end1: ;                                                  // -> uval, meta
        }
        if (!hasName) {
            // trying _ENV upvalues
            lua_Debug ar;
            for (int level = 0; lua_getstack(L, level, &ar); ++level) {
                lua_getinfo(L, "f", &ar);                                   // -> uval, meta, func
                int i = 1;
                while (true) {
                    const char* name = lua_getupvalue(L, -1, i);            // -> uval, meta, func, env?
                    if (name) {                                             // -> uval, meta, func, env?
                        if (strcmp(name, "_ENV") == 0) {                    // -> uval, meta, func, env
                            lua_pushnil(L);                                 // -> uval, meta, func, env, nil
                            while (lua_next(L, -2)) {                       // -> uval, meta, func, env, key, value
                                if (lua_type(L, -2) == LUA_TSTRING
                                    && lua_rawequal(L, udataIdx, -1)) 
                                {
                                    hasName = true;                         // -> uval, meta, func, env, key, value
                                    lua_pop(L, 1);                          // -> uval, meta, func, env, key
                                    lua_setfield(L, -4, "className");       // -> uval, meta, func, env
                                    lua_pop(L, 2);                          // -> uval, meta
                                    goto end2;
                                }
                                else {                                      // -> uval, meta, func, env, key, value
                                    lua_pop(L, 1);                          // -> uval, meta, func, env, key
                                }                                           // -> uval, meta, func, env, key
                            }                                               // -> uval, meta, func, env
                            lua_pop(L, 2);                                  // -> uval, meta
                            goto end2;
                        }                                                   // -> uval, meta, func, env
                        lua_pop(L, 1);                                      // -> uval, meta, func
                    } else {                                                // -> uval, meta, func
                        break;                                              // -> uval, meta, func
                    }                                                       // -> uval, meta, func
                    i += 1;                                                 // -> uval, meta, func
                }                                                           // -> uval, meta, func
                lua_pop(L, 1);                                              // -> uval, meta
            }
        end2: ;                                                             // -> uval, meta
        }
        if (!hasName) {
            // Trying globals
            lua_rawgeti(L, LUA_REGISTRYINDEX, LUA_RIDX_GLOBALS);            // -> uval, meta, G
            lua_pushnil(L);                                                 // -> uval, meta, G, nil
            while (lua_next(L, -2)) {                                       // -> uval, meta, G, key, value
                if (lua_type(L, -2) == LUA_TSTRING 
                    && lua_rawequal(L, udataIdx, -1))     
                {
                    hasName = true;                                         // -> uval, meta, G, key, value
                    lua_pop(L, 1);                                          // -> uval, meta, G, key
                    lua_setfield(L, -3, "className");                       // -> uval, meta, G
                    lua_pop(L, 1);                                          // -> uval, meta
                    goto end3;
                }                                                           // -> uval, meta, G, key, value
                lua_pop(L, 1);                                              // -> uval, meta, G, key
            }                                                               // -> uval, meta, G
            lua_pop(L, 1);                                                  // -> uval, meta
        end3: ;                                                             // -> uval, meta
        }
        if (!hasName) {
            // Give up, generate unique name
            lua_pushfstring(L, "%s#%d", 
                                classInfo->className, 
                                debugId);                        // -> uval, meta, name
            
            lua_setfield(L, -2, "className");                    // -> uval, meta
            hasName = true;
        }
        lua_getfield(L, -1, "className");                        // -> uval, meta, name
        lua_rotate(L, -3, 1);                                    // -> name, uval, meta
        lua_pop(L, 2);                                           // -> name
        return lua_tostring(L, -1);
    } else {
        return lua_pushstring(L, classInfo->className);          // -> name
    }
}
    
ClassUdata* ClassUdata::pushBaseClass(lua_State* L, int udataIdx)
{
    if (isDerived) {
        lua_getiuservalue(L, udataIdx, CTABLE_UVIDX);          // -> uval
        lua_getmetatable(L, -1);                               // -> uval, meta
        lua_getfield(L, -1, "baseClass");                      // -> uval, meta, base
        lua_rotate(L, -3, 1);                                  // -> base, uval, meta
        lua_pop(L, 2);                                         // -> base
    } else {
        if (classInfo->baseClass) {
            registry::pushBinding(L, classInfo->baseClass->className); // -> base
        } else {
            lua_pushnil(L);                                            // -> nil
            return nullptr;
        }
    }
    return (ClassUdata*) lua_touserdata(L, -1);
}

static const void* toPointer(lua_State* L, int udataIdx, ClassUdata* udata)
{
    if (udata->isDerived) {
        lua_getiuservalue(L, udataIdx, CTABLE_UVIDX);  // -> uval
        const void* rslt = lua_topointer(L, -1);
        lua_pop(L, -1);
        return rslt;
    } else {
        return udata->classInfo;
    }
}

static int Lqtk_ClassToString(lua_State* L)
{
    ClassUdata* udata = (ClassUdata*) util::checkUdata(L, 1, LQTK_CLASS_TYPE_NAME);
    const char* className = udata->pushClassName(L, 1);
    const void* ptr = toPointer(L, 1, udata);
    lua_pushfstring(L, "lqtk.Class<%s>: %p", className, ptr);
    return 1;
}

static int Lqtk_ClassDestruct(lua_State* L)
{
    ClassUdata* udata = (ClassUdata*) util::checkUdata(L, 1, LQTK_CLASS_TYPE_NAME);
    if (!udata->destructed) {
        udata->~ClassUdata();
    }
    return 0;
}

bool ClassUdata::isEqual(lua_State* L, int udataIdx1, const ClassUdata* udata1, 
                                       int udataIdx2, const ClassUdata* udata2)
{
    int top = lua_gettop(L);
    if (udataIdx1 < 0) {
        udataIdx1 = top + 1 + udataIdx1;
    }
    if (udataIdx2 < 0) {
        udataIdx2 = top + 1 + udataIdx2;
    }
    if (!udata1->destructed && !udata2->destructed) {
        if (udata1->isDerived && udata2->isDerived) {
            lua_getiuservalue(L, udataIdx1, CTABLE_UVIDX);   // -> uv1
            lua_getiuservalue(L, udataIdx2, CTABLE_UVIDX);   // -> uv1, uv2
            if (!lua_rawequal(L, -1, -2)) {
                lua_pop(L, 2);                               // -> 
                return false;
            }
        }
        return    udata1->classInfo == udata2->classInfo
               && udata1->isDerived == udata2->isDerived;
    } else {
        return false;
    }
}

static int Lqtk_ClassEqual(lua_State* L)
{
    ClassUdata* udata1 = (ClassUdata*) util::checkUdata(L, 1, LQTK_CLASS_TYPE_NAME);
    ClassUdata* udata2 = (ClassUdata*) util::checkUdata(L, 2, LQTK_CLASS_TYPE_NAME);
    
    lua_pushboolean(L, ClassUdata::isEqual(L, 1, udata1, 2, udata2));
    return 1;
}

static int pushNewFunc(lua_State* L, int udataIdx, ClassUdata* udata, bool onlyUserDefined = false)
{
    int top = lua_gettop(L);
    if (udataIdx < 0) {
        udataIdx = top + 1 + udataIdx;
    }
    if (udata->isDerived) {
        if (lua_getiuservalue(L, udataIdx, NEWFUNC_UVIDX) != LUA_TNIL) {       // -> newFunc
            return 1;
        }
        else {                                                                 // -> newFunc?
            lua_pop(L, 1);                                                     // -> 
            ClassUdata* base = udata->pushBaseClass(L, udataIdx);              // -> base
            if (pushNewFunc(L, -1, base, onlyUserDefined)) 
            {                                                                  // -> base, newFunc
                lua_remove(L, -2);                                             // -> newFunc
                return 1;
            } else {                                                           // -> base
                lua_pop(L, 1);                                                 // -> 
                return 0;
            }
       }
    }
    else {
        if (onlyUserDefined) {
            return 0;
        }
        else {
            if (udata->classInfo->newFunc) {
                lua_pushcfunction(L, udata->classInfo->newFunc);
            } else {
                lua_pushnil(L);
            }
            return 1;
        }
    }
}

const char* pushNewFuncClassName(lua_State* L, int udataIdx, ClassUdata* udata, bool onlyUserDefined = false)
{
    int top = lua_gettop(L);
    if (udataIdx < 0) {
        udataIdx = top + 1 + udataIdx;
    }
    if (udata->isDerived) {
        if (lua_getiuservalue(L, udataIdx, NEWFUNC_UVIDX) != LUA_TNIL) {       // -> newFunc
            lua_pop(L, 1);                                                     // ->
            return udata->pushClassName(L, udataIdx);
        }
        else {                                                                 // -> newFunc?
            lua_pop(L, 1);                                                     // -> 
            ClassUdata* base = udata->pushBaseClass(L, udataIdx);              // -> base
            const char* name = pushNewFuncClassName(L, -1, base,
                                                       onlyUserDefined);
            if (name) {                                                        // -> base, name
                lua_remove(L, -2);                                             // -> name
                return name;
            } else {                                                           // -> base
                lua_pop(L, 1);                                                 // -> 
                return nullptr;
            }
       }
    }
    else {
        if (onlyUserDefined) {
            return nullptr;
        }
        else {
            return udata->pushClassName(L, udataIdx);
        }
    }
}

static int Lqtk_ClassCall(lua_State* L)  // -> classUdata, arg1..n
{
    int nargs = lua_gettop(L);
    
    ClassUdata* udata = (ClassUdata*) util::checkUdata(L, 1, LQTK_CLASS_TYPE_NAME); // -> udata, arg1..n
    if (!udata->hasName) {
        udata->pushClassName(L, 1);
        lua_pop(L, 1);
    }
    if (udata->isDerived) {
        ObjectUdata* objUdata = ObjectUdata::pushNew(L, udata->classInfo, true);// -> udata, arg1..n, obj 
        lua_newtable(L);                                                        // -> udata, arg1..n, obj, otable
        lua_getiuservalue(L, 1, OMETA_UVIDX);                                   // -> udata, arg1..n, obj, otable, ometa
        lua_setmetatable(L, -2);                                                // -> udata, arg1..n, obj, otable
        objUdata->setUserValue(L, -2, -1);                                      // -> udata, arg1..n, obj, otable
        lua_pop(L, 1);                                                          // -> udata, arg1..n, obj
        lua_insert (L, 2);                                                      // -> udata, obj, arg1..n
        if (pushNewFunc(L, 1, udata, true /*onlyUserDefined*/))
        {                                                                       // -> udata, obj, arg1..n, new
            lua_insert(L, 2);                                                   // -> udata, new, obj, arg1..n
            lua_pushvalue(L, 3);                                                // -> udata, new, obj, arg1..n, obj
            lua_insert(L, 2);                                                   // -> udata, obj, new, obj, arg1..n
            objUdata->setStateInitial();
            lua_call(L, nargs, 0);                                              // -> udata, obj
            if (objUdata->getState() == ObjectUdata::INITIAL) {                 // -> udata, obj
                pushNewFunc(L, 1, udata, true /*onlyUserDefined*/);             // -> udata, obj, new
                if (lua_type(L, -1) == LUA_TFUNCTION) {                         // -> udata, obj, new
                    lua_Debug ar;                                               // -> udata, obj, new
                    // ">S" fills in the fields source, short_src, linedefined, lastlinedefined, and what
                    lua_getinfo(L, ">S", &ar);                                  // -> udata, obj
                    const char* name = pushNewFuncClassName(L, 1, udata);       // -> udata, obj, name
                    return luaL_error(L, "implementation <%s:%d> of method %s:new() did not call %s.new()", ar.short_src, ar.linedefined, name, udata->classInfo->className);
                } else {                                                        // -> udata, obj, new
                    lua_pop(L, 1);                                              // -> udata, obj
                    const char* name = pushNewFuncClassName(L, 1, udata);       // -> udata, obj, name
                    return luaL_error(L, "implementation of method %s:new() did not call %s.new()", name, udata->classInfo->className);
                }
            }                                                                   // -> udata, obj
            return 1;
        }                                                                 
        else {                                                                  // -> udata, obj, arg1..n
            lua_remove(L, 1);                                                   // -> obj, arg1..n
            objUdata->setStateInitial();
            return udata->classInfo->constructFunc(L, false /*explicitNew*/);
        }
    } 
    else if (udata->classInfo->constructFunc) {                                    // -> udata, arg1..n
        ObjectUdata* objUdata = ObjectUdata::pushNew(L, udata->classInfo, false);  // -> udata, arg1..n, obj 
        lua_replace(L, 1);                                                         // -> obj, arg1..n
        objUdata->setStateInitial();
        return udata->classInfo->constructFunc(L, false /*explicitNew*/);
    }
    else {
        const char* className = udata->pushClassName(L, 1);
        lua_pushfstring(L, "lqtk.Class<%s> is not callable", className);
        return lua_error(L);
    }
}

static int Lqtk_ClassIndex(lua_State* L)
{
    ClassUdata* udata = (ClassUdata*) util::checkUdata(L, 1, LQTK_CLASS_TYPE_NAME);

    const char* name = (lua_type(L, 2) == LUA_TSTRING) ? lua_tostring(L, 2) : nullptr;

    if (name) {
        if (strcmp("new",      name) == 0) return pushNewFunc(L, 1, udata);
    }    
    if (udata->isDerived) {
        lua_getiuservalue(L, 1, CTABLE_UVIDX);         // -> ctable
        lua_pushvalue(L, 2);                           // -> ctable, key
        if (lua_gettable(L, -2) != LUA_TNIL) {         // -> ctable, value
            return 1;
        }                                              // -> ctable, value
        lua_pop(L, 2);                                 // -> 
    }
    if (name) {
        const Member* member = udata->classInfo->findMember(name);
        if (member) {
            member->push(L);
            return 1;
        }
    }
    return 0;
}

static int Lqtk_ClassNewIndex(lua_State* L)
{
    ClassUdata* udata = (ClassUdata*) util::checkUdata(L, 1, LQTK_CLASS_TYPE_NAME);
    
    const char* name = (lua_type(L, 2) == LUA_TSTRING) ? lua_tostring(L, 2) : nullptr;
    
    if (udata->isDerived) {
        if (name && strcmp("new", name) == 0)
        {
            lua_pushvalue(L, 3);                                            // -> newFunc
            lua_setiuservalue(L, 1, NEWFUNC_UVIDX);                         // -> 
            return 0;
        }
        lua_getiuservalue(L, 1, CTABLE_UVIDX);                              // -> ctable
        lua_pushvalue(L, 2);                                                // -> ctable, key
        lua_pushvalue(L, 3);                                                // -> ctable, key, value
        lua_rawset(L, -3);                                                  // -> ctable
        return 0;
    } else {
        const char* cn = udata->pushClassName(L, 1);
        return luaL_error(L, "class '%s' is not mutable", cn);
    }
}

static int Lqtk_ClassNext(lua_State* L) // arg1: state, arg2: key
{
    lua_settop(L, 2);            // -> state, key
    if (lua_next(L, -2)) {        
        return 2;                // -> state, nextkey, nextvalue
    }
    return 0;
}

static int fillIteratorTable(lua_State* L, int tableIdx, int udataIdx, ClassUdata* udata)
{
    int top = lua_gettop(L);
    if (tableIdx < 0) {
        tableIdx = top + 1 + tableIdx;
    }
    if (udataIdx < 0) {
        udataIdx = top + 1 + udataIdx;
    }
    if (udata->isDerived) {
        ClassUdata* baseUdata = udata->pushBaseClass(L, udataIdx);                 // -> base
        fillIteratorTable(L, tableIdx, -1, baseUdata);                             // -> base
        lua_pop(L, 1);                                                             // -> 
        lua_getiuservalue(L, udataIdx, CTABLE_UVIDX);                              // -> ctable
        lua_pushnil(L);                                                            // -> ctable, key
        while (lua_next(L, -2)) {                                                  // -> ctable, key, value
            lua_pushvalue(L, -2);                                                  // -> ctable, key, value, key
            lua_insert(L, -2);                                                     // -> ctable, key, key, value, 
            lua_rawset(L, tableIdx);                                               // -> ctable, key
        }                                                                          // -> ctable
        lua_pop(L, 1);                                                             // ->
    }
    else {
        for (int i = 0; i < udata->classInfo->memberCount; ++i) {
            const Member* member = udata->classInfo->members + i;
            lua_pushstring(L, member->name);                                       // -> key
            member->push(L);                                                       // -> key, value
            lua_rawset(L, tableIdx);                                               // -> 
        }
    }
    return 0;
}

static int Lqtk_ClassPairs(lua_State* L)
{
    int udataIdx = 1;
    ClassUdata* udata = (ClassUdata*) util::checkUdata(L, udataIdx, 
                                                          LQTK_CLASS_TYPE_NAME);   // -> udata, ...
    lua_settop(L, 1);                                                              // -> udata
    lua_pushcfunction(L, Lqtk_ClassNext);                                          // -> udata, next
    lua_newtable(L);                                                               // -> udata, next, state
    fillIteratorTable(L, -1, udataIdx, udata);                                     // -> udata, next, state
    lua_pushnil(L);                                                                // -> udata, next, state, initKey
    return 3;
}

static const luaL_Reg Lqtk_ClassMeta_Functions[] = 
{
    { "__tostring",        Lqtk_ClassToString },
    { "__gc",              Lqtk_ClassDestruct },
    { "__eq",              Lqtk_ClassEqual    },
    { "__call",            Lqtk_ClassCall     },
    { "__index",           Lqtk_ClassIndex    },
    { "__newindex",        Lqtk_ClassNewIndex },
    { "__pairs",           Lqtk_ClassPairs    },
    
    { NULL,                NULL } /* sentinel */
};


static int setupClassMeta(lua_State* L)
{                                                     // -> meta
    lua_pushstring(L, LQTK_CLASS_TYPE_NAME);          // -> meta, typeName 
    lua_setfield(L, -2, "__metatable");               // -> meta
    
    luaL_setfuncs(L, Lqtk_ClassMeta_Functions, 0);

    return 1;
}

static int pushClassMeta(lua_State* L)
{
    if (luaL_newmetatable(L, LQTK_CLASS_TYPE_NAME)) { // -> meta
        setupClassMeta(L);
    }
    return 1;
}

int ClassUdata::pushBinding(lua_State* L, const ClassInfo* classInfo)
{

    if (lua_rawgetp(L, LUA_REGISTRYINDEX, classInfo) == LUA_TUSERDATA) { // -> class?
        return 1;
    }
    else
    {
        lua_pop(L, 1);                                               // -> 
        
        ClassUdata* udata = util::newuserdatauv<ClassUdata>(L, 0);   // -> class
        new(udata) ClassUdata(classInfo);
        pushClassMeta(L);                                            // -> class, meta
        lua_setmetatable(L, -2);                                     // -> class
        lua_pushvalue(L, -1);                                        // -> class, class
        lua_rawsetp(L, LUA_REGISTRYINDEX, classInfo);                // -> class
        return 1;
    }
}

int ClassUdata::newClass(lua_State* L)
{
    int nameIdx = 0;

    if (lua_type(L, 1) == LUA_TSTRING) {
        nameIdx = 1;
    }
    int baseIdx = nameIdx + 1;
    ClassUdata* baseUdata = (ClassUdata*) util::checkUdata(L, baseIdx, LQTK_CLASS_TYPE_NAME);
    
    if (!baseUdata->classInfo->constructFunc
     || !baseUdata->classInfo->newFunc)
    {
        return util::argError(L, baseIdx, "cannot be used as base class");
    }

    ClassUdata* udata = util::newuserdatauv<ClassUdata>(L, 3);   // -> newClass
    new(udata) ClassUdata(baseUdata->classInfo);

    udata->isDerived      = true;    
    udata->hasName        = (nameIdx != 0);
    pushClassMeta(L);                                            // -> newClass, meta
    lua_setmetatable(L, -2);                                     // -> newClass

    lua_newtable(L);                                             // -> newClass, ctable
    lua_newtable(L);                                             // -> newClass, ctable, cmeta
    {
        if (nameIdx) {
            lua_pushvalue(L, nameIdx);                           // -> newClass, ctable, cmeta, name
        } else {
            baseUdata->pushClassName(L, baseIdx);                // -> newClass, ctable, cmeta, name
        }
        lua_setfield(L, -2, "className");                        // -> newClass, ctable, cmeta
    
        lua_pushvalue(L, baseIdx);                               // -> newClass, ctable, cmeta, base
        lua_setfield(L, -2, "baseClass");                        // -> newClass, ctable, cmeta
        
        lua_pushstring(L, "lqtk.ClassValues");
        lua_setfield(L, -2, "__name");

        lua_pushvalue(L, -3);                                    // -> newClass, ctable, cmeta, newClass
        lua_rawseti(L, -2, CLASS_MIDX);                          // -> newClass, ctable, cmeta
        
        if (baseUdata->isDerived) {
            lua_getiuservalue(L, baseIdx, CTABLE_UVIDX);         // -> newClass, ctable, cmeta, ctable
            lua_setfield(L, -2, "__index");                      // -> newClass, ctable, cmeta
        }
        lua_setmetatable(L, -2);                                 // -> newClass, ctable
    }

    lua_newtable(L);                                             // -> newClass, ctable, ometa
    {
        lua_pushvalue(L, -3);                                    // -> newClass, ctable, ometa, newClass
        lua_setfield(L, -2, "class");                            // -> newClass, ctable, ometa
        
        lua_pushvalue(L, -2);                                    // -> newClass, ctable, ometa, ctable
        lua_setfield(L, -2, "__index");                          // -> newClass, ctable, ometa
        
        lua_pushstring(L, "lqtk.ObjectValues");
        lua_setfield(L, -2, "__name");
    }
    lua_setiuservalue(L, -3, OMETA_UVIDX);                       // -> newClass, ctable
    lua_setiuservalue(L, -2, CTABLE_UVIDX);                      // -> newClass
    return 1;    
}
