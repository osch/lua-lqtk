#ifndef LQTK_QIODevice_WRAPPER_HPP
#define LQTK_QIODevice_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QIODeviceWrapper
{

/* -------------------------------------------------------------------------------------------- */

public:
    struct close1CallArgs : BindingUtil::CallArgs {
        close1CallArgs(
                QIODevice* thiz)
              : BindingUtil::CallArgs(thiz),
                arg1(thiz)
        {}

        ToLua<QIODevice*> arg1;
    };
    
    static int close1_doLua(lua_State* L);

/* -------------------------------------------------------------------------------------------- */

public:
    struct open1CallArgs : BindingUtil::CallArgs {
        open1CallArgs(
                QIODevice* thiz,
                    QIODeviceBase::OpenMode arg2) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2) 
        {}

        bool hasValidResult;
        FromLua<bool> rslt;
        ToLua<QIODevice*> arg1;
        ToLua<QIODeviceBase::OpenMode> arg2;
    };
    
    static int open1_doLua(lua_State* L);

/* -------------------------------------------------------------------------------------------- */

};

} // namespace lqtk

#endif // LQTK_QIODevice_WRAPPER_HPP
