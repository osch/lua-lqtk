
/* ============================================================================================ */

#include "init.h"
#include "util.hpp"
#include "NamespaceInfo.hpp"
#include "NamespaceUdata.hpp"

/* ============================================================================================ */

using namespace lqtk;

static const char* const LQTK_NAMESPACE_TYPE_NAME = "lqtk.Namespace";

/* ============================================================================================ */

NamespaceUdata::NamespaceUdata(const NamespaceInfo* namespaceInfo)
  : namespaceInfo(namespaceInfo)
{}

/* ============================================================================================ */

struct NamespaceUdata::Impl
{
    static int toString(lua_State* L)
    {
        NamespaceUdata* udata = NamespaceUdata::checkArg(L, 1);
        const char* name = udata->namespaceInfo->namespaceName;
        const void* ptr  = udata->namespaceInfo;
        lua_pushfstring(L, "lqtk.Namespace<%s>: %p", name, ptr);
        return 1;
    }

    static int equal(lua_State* L)
    {
        NamespaceUdata* udata1 = checkArg(L, 1);
        NamespaceUdata* udata2 = checkArg(L, 2);
    
        lua_pushboolean(L, (udata1->namespaceInfo == udata2->namespaceInfo));
        return 1;
    }
    
    static int index(lua_State* L)
    {
        NamespaceUdata* udata = NamespaceUdata::checkArg(L, 1);
    
        const char* name = util::checkString(L, 2);
    
        int i0 = 0;
        int i1 = udata->namespaceInfo->memberCount;
        const Member* members = udata->namespaceInfo->members;
        while (i1 > i0) {
            int i = i0 + ((i1 - i0) / 2);
            const Member* member = members + i;
            int cmp = strcmp(name, member->name);
            if (cmp == 0) {
                member->push(L);
                return 1;
            }
            else if (cmp < 0) {
                i1 = i;
            }
            else {
                i0 = i + 1;
            }
        }
        return 0;
    }

    static int next(lua_State* L) // arg1: state, arg2: key
    {                                // -> state, key, ...
        lua_settop(L, 2);            // -> state, key
        if (lua_next(L, -2)) {        
            return 2;                // -> state, nextkey, nextvalue
        }
        return 0;
    }
    
    static int pairs(lua_State* L)
    {
        NamespaceUdata* udata = checkArg(L, 1);                       // -> udata, ...
        lua_settop(L, 1);                                             // -> udata
        lua_pushcfunction(L, next);                                   // -> udata, next
        lua_newtable(L);                                              // -> udata, next, state
        for (int i = 0; i < udata->namespaceInfo->memberCount; ++i) {
            const Member* member = udata->namespaceInfo->members + i;
            lua_pushstring(L, member->name);                          // -> udata, next, state, key
            member->push(L);                                          // -> udata, next, state, key, value
            lua_rawset(L, -3);                                        // -> udata, next, state
        }
        lua_pushnil(L);                                               // -> udata, next, state, initKey
        return 3;
    }

    static const luaL_Reg meta_Functions[];

    static int setupNamespaceMeta(lua_State* L)
    {                                                     // -> meta
        lua_pushstring(L, LQTK_NAMESPACE_TYPE_NAME);      // -> meta, typeName 
        lua_setfield(L, -2, "__metatable");               // -> meta
        
        luaL_setfuncs(L, meta_Functions, 0);
        
        return 1;
    }
    
    static int pushNamespaceMeta(lua_State* L)
    {
        if (luaL_newmetatable(L, LQTK_NAMESPACE_TYPE_NAME)) { // -> meta
            setupNamespaceMeta(L);
        }
        return 1;
    }

    static NamespaceUdata* pushNew(lua_State* L, const NamespaceInfo* namespaceInfo)
    {
        NamespaceUdata* udata = util::newuserdatauv<NamespaceUdata>(L, 0); // -> obj
        new(udata) NamespaceUdata(namespaceInfo);
        pushNamespaceMeta(L);                                              // -> obj, meta
        lua_setmetatable(L, -2);                                           // -> obj
        return udata;
    }
    
};

/* ============================================================================================ */

const luaL_Reg NamespaceUdata::Impl::meta_Functions[] = 
{
    { "__tostring",        NamespaceUdata::Impl::toString },
    { "__eq",              NamespaceUdata::Impl::equal    },
    { "__index",           NamespaceUdata::Impl::index    },
    { "__pairs",           NamespaceUdata::Impl::pairs    },
    
    { NULL,                NULL } /* sentinel */
};
    
/* ============================================================================================ */

int NamespaceUdata::pushBinding(lua_State* L, const NamespaceInfo* namespaceInfo)
{
    if (lua_rawgetp(L, LUA_REGISTRYINDEX, namespaceInfo) == LUA_TUSERDATA) { // -> namespace?
        return 1;
    }
    else {
        lua_pop(L, 1);                                               // -> 
        
        NamespaceUdata* udata = Impl::pushNew(L, namespaceInfo);     // -> namespace
        lua_pushvalue(L, -1);                                        // -> namespace, namespace
        lua_rawsetp(L, LUA_REGISTRYINDEX, namespaceInfo);            // -> namespace
        return 1;
    }

}

/* ============================================================================================ */

NamespaceUdata* NamespaceUdata::testArg(lua_State* L, int arg)
{
    NamespaceUdata* udata = (NamespaceUdata*) luaL_testudata(L, arg, LQTK_NAMESPACE_TYPE_NAME);
    return udata;
}

/* ============================================================================================ */

NamespaceUdata* NamespaceUdata::checkArg(lua_State* L, int arg)
{
    NamespaceUdata* udata = (NamespaceUdata*) util::checkUdata(L, arg, LQTK_NAMESPACE_TYPE_NAME);
    return udata;
}

/* ============================================================================================ */
