#ifndef LQTK_UTIL_HPP
#define LQTK_UTIL_HPP

#include <exception>

namespace lqtk::util
{

#if LUA_VERSION_NUM >= 504

    template<typename T>
    static inline T* newuserdatauv(lua_State* L, int nuvalue) {
        return (T*) lua_newuserdatauv(L, sizeof(T), nuvalue);
    }

#else
    template<typename T>
    static inline T* newuserdatauv(lua_State* L, int nuvalue) {
        T* ud = (T*)lua_newuserdata(L, sizeof(T)); // -> ud
        if (nuvalue > 0) {
            lua_newtable(L); // -> ud, uvt
            lua_setuservalue(L, -2); // -> ud
        }
        return ud;
    }

#endif

const char* quoteLString(lua_State* L, const char* s, size_t len);

const char* quoteString(lua_State* L, const char* s);

int handleException(lua_State* L);

int handleException(lua_State* L);

int handleError(lua_State* L);

int argCountError(lua_State* L, const char* className,
                                const char* funcName, 
                                int         given, 
                                const char* expectedArgCounts);

int argError(lua_State* L, int arg, const char* message);

void* checkUdata(lua_State* L, int arg, const char* tname);
void  checkType(lua_State* L, int arg, int t);

lua_Integer checkInteger(lua_State* L, int arg);
const char* checkString(lua_State* L, int arg);

} // namespace lqtk::util

#endif // LQTK_UTIL_HPP
