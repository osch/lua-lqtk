#ifndef LQTK_QObject_WRAPPER_HPP
#define LQTK_QObject_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QObjectWrapper : public QObject
{
public:

/* -------------------------------------------------------------------------------------------- */

    QObjectWrapper();
    QObjectWrapper(
                   QObject* arg1); 

/* -------------------------------------------------------------------------------------------- */

private:
    static int lqtk_destruct(lua_State* L);
public:
    ~QObjectWrapper();



/* -------------------------------------------------------------------------------------------- */
public:
    struct event1CallArgs : BindingUtil::CallArgs {
        event1CallArgs(
                QObject* thiz,
                    QEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2) 
        {}

        bool hasValidResult;
        FromLua<bool> rslt;
        ToLua<QObject*> arg1;
        ToLua<QEvent*> arg2;
    };
    
    static int event1_doLua(lua_State* L);
public:
    bool event(
                   QEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */

private:
    lua_State* getL() const {
        if (lqtk_stateGuard) {
            return lqtk_stateGuard->L;
        } else {
            return nullptr;
        }
    }
public:
    StateGuard* lqtk_stateGuard;
};

} // namespace lqtk

#endif // LQTK_QObject_WRAPPER_HPP
