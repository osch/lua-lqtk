#ifndef LQTK_BINDING_UTIL_HPP
#define LQTK_BINDING_UTIL_HPP

namespace lqtk {

class BindingUtil
{
public:
    struct CallArgs {
        CallArgs(void* obj) : obj(obj), wasImplFound(false), wasCalled(false), callReturned(false) {}
        void* obj;
        bool wasImplFound;
        bool wasCalled;
        bool callReturned;
    };
    static void callLuaDestructor(lua_State* L, lua_CFunction impl, void* obj, const char* className);
    
    static void callLuaMethodImpl(lua_State* L, lua_CFunction impl, CallArgs* args, const char* className, const char* methodName);
    
    static void throwMethodImplRsltError(lua_State* L, void* obj, const char* className, const char* methodName, const char* rsltError);

    static int callMethodFromLua(lua_State* L, lua_CFunction impl, void* args);
};

} // namespace lqtk

#endif // LQTK_BINDING_UTIL_HPP
