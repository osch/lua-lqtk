#ifndef LQTK_QApplication_WRAPPER_HPP
#define LQTK_QApplication_WRAPPER_HPP

#include "BindingUtil.hpp"
#include "QApplicationWrapperBase.hpp"

namespace lqtk
{

class QApplicationExportWrapper
{
public:
    virtual bool lqtk_QApplication_event(
                   QEvent* arg2) = 0; 
};

class QApplicationWrapper : public QApplicationWrapperBase
                      , public QApplicationExportWrapper
{
public:

/* -------------------------------------------------------------------------------------------- */

    QApplicationWrapper(
                   int arg1, 
                   char** arg2); 

/* -------------------------------------------------------------------------------------------- */

private:
    static int lqtk_destruct(lua_State* L);
public:
    ~QApplicationWrapper();


    bool lqtk_QApplication_event(
                   QEvent* arg1) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct event1CallArgs : BindingUtil::CallArgs {
        event1CallArgs(
                QApplication* thiz,
                    QEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2) 
        {}

        bool hasValidResult;
        FromLua<bool> rslt;
        ToLua<QApplication*> arg1;
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

#endif // LQTK_QApplication_WRAPPER_HPP
