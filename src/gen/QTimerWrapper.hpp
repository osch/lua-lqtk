#ifndef LQTK_QTimer_WRAPPER_HPP
#define LQTK_QTimer_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QTimerExportWrapper
{
public:
    virtual void lqtk_QTimer_timerEvent(
                   QTimerEvent* arg2) = 0; 
};

class QTimerWrapper : public QTimer
                      , public QTimerExportWrapper
{
public:

/* -------------------------------------------------------------------------------------------- */

    QTimerWrapper();
    QTimerWrapper(
                   QObject* arg1); 

/* -------------------------------------------------------------------------------------------- */

private:
    static int lqtk_destruct(lua_State* L);
public:
    ~QTimerWrapper();


    void lqtk_QTimer_timerEvent(
                   QTimerEvent* arg1) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct timerEvent1CallArgs : BindingUtil::CallArgs {
        timerEvent1CallArgs(
                QTimer* thiz,
                    QTimerEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QTimer*> arg1;
        ToLua<QTimerEvent*> arg2;
    };
    
    static int timerEvent1_doLua(lua_State* L);
public:
    void timerEvent(
                   QTimerEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */
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

#endif // LQTK_QTimer_WRAPPER_HPP
