#ifndef LQTK_QFileDevice_WRAPPER_HPP
#define LQTK_QFileDevice_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QFileDeviceWrapper
{

/* -------------------------------------------------------------------------------------------- */

public:
    struct atEnd1CallArgs : BindingUtil::CallArgs {
        atEnd1CallArgs(
                QFileDevice* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<bool> rslt;
        ToLua<QFileDevice*> arg1;
    };
    
    static int atEnd1_doLua(lua_State* L);

/* -------------------------------------------------------------------------------------------- */

public:
    struct fileName1CallArgs : BindingUtil::CallArgs {
        fileName1CallArgs(
                QFileDevice* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<QString*> rsltPtr;
        QString rslt;
        ToLua<QFileDevice*> arg1;
    };
    
    static int fileName1_doLua(lua_State* L);

/* -------------------------------------------------------------------------------------------- */

public:
    struct isSequential1CallArgs : BindingUtil::CallArgs {
        isSequential1CallArgs(
                QFileDevice* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<bool> rslt;
        ToLua<QFileDevice*> arg1;
    };
    
    static int isSequential1_doLua(lua_State* L);

/* -------------------------------------------------------------------------------------------- */

public:
    struct permissions1CallArgs : BindingUtil::CallArgs {
        permissions1CallArgs(
                QFileDevice* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<QFileDevice::Permissions> rslt;
        ToLua<QFileDevice*> arg1;
    };
    
    static int permissions1_doLua(lua_State* L);

/* -------------------------------------------------------------------------------------------- */

public:
    struct pos1CallArgs : BindingUtil::CallArgs {
        pos1CallArgs(
                QFileDevice* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<qint64> rslt;
        ToLua<QFileDevice*> arg1;
    };
    
    static int pos1_doLua(lua_State* L);

/* -------------------------------------------------------------------------------------------- */

public:
    struct resize1CallArgs : BindingUtil::CallArgs {
        resize1CallArgs(
                QFileDevice* thiz,
                    qint64 arg2) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2) 
        {}

        bool hasValidResult;
        FromLua<bool> rslt;
        ToLua<QFileDevice*> arg1;
        ToLua<qint64> arg2;
    };
    
    static int resize1_doLua(lua_State* L);

/* -------------------------------------------------------------------------------------------- */

public:
    struct seek1CallArgs : BindingUtil::CallArgs {
        seek1CallArgs(
                QFileDevice* thiz,
                    qint64 arg2) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2) 
        {}

        bool hasValidResult;
        FromLua<bool> rslt;
        ToLua<QFileDevice*> arg1;
        ToLua<qint64> arg2;
    };
    
    static int seek1_doLua(lua_State* L);

/* -------------------------------------------------------------------------------------------- */

public:
    struct setPermissions1CallArgs : BindingUtil::CallArgs {
        setPermissions1CallArgs(
                QFileDevice* thiz,
                    QFileDevice::Permissions arg2) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2) 
        {}

        bool hasValidResult;
        FromLua<bool> rslt;
        ToLua<QFileDevice*> arg1;
        ToLua<QFileDevice::Permissions> arg2;
    };
    
    static int setPermissions1_doLua(lua_State* L);

/* -------------------------------------------------------------------------------------------- */

public:
    struct size1CallArgs : BindingUtil::CallArgs {
        size1CallArgs(
                QFileDevice* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<qint64> rslt;
        ToLua<QFileDevice*> arg1;
    };
    
    static int size1_doLua(lua_State* L);

/* -------------------------------------------------------------------------------------------- */

};

} // namespace lqtk

#endif // LQTK_QFileDevice_WRAPPER_HPP
