#ifndef LQTK_QAction_WRAPPER_HPP
#define LQTK_QAction_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QActionExportWrapper
{
public:
    virtual bool lqtk_QAction_event(
                   QEvent* arg2) = 0; 
};

class QActionWrapper : public QAction
                      , public QActionExportWrapper
{
public:

/* -------------------------------------------------------------------------------------------- */

    QActionWrapper();
    QActionWrapper(
                   QObject* arg1); 
    QActionWrapper(
                   QString arg1); 
    QActionWrapper(
                   QString arg1, 
                   QObject* arg2); 

/* -------------------------------------------------------------------------------------------- */

private:
    static int lqtk_destruct(lua_State* L);
public:
    ~QActionWrapper();


    bool lqtk_QAction_event(
                   QEvent* arg1) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct event1CallArgs : BindingUtil::CallArgs {
        event1CallArgs(
                QAction* thiz,
                    QEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2) 
        {}

        bool hasValidResult;
        FromLua<bool> rslt;
        ToLua<QAction*> arg1;
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

#endif // LQTK_QAction_WRAPPER_HPP
