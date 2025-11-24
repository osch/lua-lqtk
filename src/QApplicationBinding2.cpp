/* ============================================================================================ */

#include <QApplication>
#include <QPointer>

/* ============================================================================================ */

#include "init.h"
#include "util.hpp"
#include "trace.hpp"
#include "ClassInfo.hpp"
#include "ObjectUdata.hpp"
#include "ClassUdata.hpp"
#include "StateGuard.hpp"
#include "registry.hpp"
#include "QApplicationWrapperBase.hpp"
#include "QApplicationBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;

/* ============================================================================================ */

extern "C" int lqtk_QApplication_constructor(lua_State* L, bool explicitNew)
{
    char** argPtrs = NULL;
    
    try {
        int argCount = lua_gettop(L);
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);
        if (udata->classInfo != &QApplicationBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QApplication> expected");
        }
        lua_pushvalue(L, 1); // -> objUdata

        int argOffs = 0;
        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
            argCount -= 1;
        }
        
        if (argCount != 1) {
            if (explicitNew) {
                return util::argCountError(L, "QApplication", "new", argCount, "2");
            } else {
                return util::argCountError(L, "QApplication", nullptr, argCount, "1");
            }
        }
        util::checkType(L, argOffs+1, LUA_TTABLE);
        
        StateGuard* guard = StateGuard::push(L);                           // -> app, guard
        lua_insert(L, -2);                                                 // -> guard, app

        if (QCoreApplication::instance() || guard->qapp) {
            return luaL_error(L, "QApplication already constructed");
        }
        int nargs = lua_rawlen(L, argOffs+1);
        nargs += 1; // arg[0] must contain script name
        size_t dataLen = 0;
        for (int i = 0; i < nargs; ++i) {
            lua_rawgeti(L, argOffs+1, i); // -> arg[i]
            size_t len = 0;
            const char* arg = lua_tolstring(L, -1, &len);
            if (!arg) {
                lua_pushfstring(L, "table entry %d: string expected", i);
                return util::argError(L, argOffs+1, lua_tostring(L, -1));
            }
            lua_pop(L, 1); // ->
            dataLen += len + 1;
        }
        
        size_t memLen = (nargs + 1) * sizeof(char*) + dataLen + 1024;
        argPtrs = (char**) malloc(memLen);
        if (!argPtrs) {
            return luaL_error(L, "memory error");
        }
        memset(argPtrs, 0, memLen);

        char* argData  = (char*)(argPtrs + nargs + 1);
        {
            char*  dataPtr = argData;
            for (int i = 0; i < nargs; ++i) {
                lua_rawgeti(L, 1, i); // -> arg[i]
                size_t len = 0;
                const char* arg = lua_tolstring(L, -1, &len);
                memcpy(dataPtr, arg, len+1);
                argPtrs[i] = dataPtr;
                trace::printf("arg %d: %s\n", i, dataPtr);
                dataPtr += len+1;
                lua_pop(L, 1); // -> 
            }
        }
        QApplicationWrapperBase* app = QApplicationBinding::createWrappedObject(nargs, argPtrs);

        if (!app) {
            free(argPtrs);
            return luaL_error(L, "memory error");
        }
        {                                                                           // -> app
            udata->setQObjectPtr(L, -1, app, NOT_OWNER);                            // -> app
            guard->qapp = app;
        }
        // argc and argv might be changed as Qt removes  
        // command line arguments that it recognizes.
        int nargs2 = app->argc;
        for (int i = 0; i < nargs; ++i) {
            if (i < nargs2) {
                lua_pushstring(L, argPtrs[i]);
            } else {
                lua_pushnil(L);
            }
            lua_rawseti(L, 1, i);
        }
        return 1;
    }
    catch (...) {
        if (argPtrs) {
            free(argPtrs);
        }
        return util::handleException(L);
    }
}

