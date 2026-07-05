#ifndef LQTK_QWheelEvent_WRAPPER_HPP
#define LQTK_QWheelEvent_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QWheelEventWrapper : public QWheelEvent
{
public:

/* -------------------------------------------------------------------------------------------- */

    QWheelEventWrapper(
                   QPointF arg1, 
                   QPointF arg2, 
                   QPoint arg3, 
                   QPoint arg4, 
                   Qt::MouseButtons arg5, 
                   Qt::KeyboardModifiers arg6, 
                   Qt::ScrollPhase arg7, 
                   bool arg8); 
    QWheelEventWrapper(
                   QPointF arg1, 
                   QPointF arg2, 
                   QPoint arg3, 
                   QPoint arg4, 
                   Qt::MouseButtons arg5, 
                   Qt::KeyboardModifiers arg6, 
                   Qt::ScrollPhase arg7, 
                   bool arg8, 
                   Qt::MouseEventSource arg9); 

/* -------------------------------------------------------------------------------------------- */

private:
    static int lqtk_destruct(lua_State* L);
public:
    ~QWheelEventWrapper();

/* -------------------------------------------------------------------------------------------- */

public:
    struct isBeginEvent1CallArgs : BindingUtil::CallArgs {
        isBeginEvent1CallArgs(
                QWheelEvent* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<bool> rslt;
        ToLua<QWheelEvent*> arg1;
    };
    
    static int isBeginEvent1_doLua(lua_State* L);
public:
    bool isBeginEvent() const override;

/* -------------------------------------------------------------------------------------------- */

public:
    struct isEndEvent1CallArgs : BindingUtil::CallArgs {
        isEndEvent1CallArgs(
                QWheelEvent* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<bool> rslt;
        ToLua<QWheelEvent*> arg1;
    };
    
    static int isEndEvent1_doLua(lua_State* L);
public:
    bool isEndEvent() const override;

/* -------------------------------------------------------------------------------------------- */

public:
    struct isUpdateEvent1CallArgs : BindingUtil::CallArgs {
        isUpdateEvent1CallArgs(
                QWheelEvent* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<bool> rslt;
        ToLua<QWheelEvent*> arg1;
    };
    
    static int isUpdateEvent1_doLua(lua_State* L);
public:
    bool isUpdateEvent() const override;

/* -------------------------------------------------------------------------------------------- */

private:
    lua_State* getL() const {
        if (lqtk_stateGuard) {
            return lqtk_stateGuard->getL();
        } else {
            return nullptr;
        }
    }
public:
    StateGuard* lqtk_stateGuard;

/* -------------------------------------------------------------------------------------------- */

};

} // namespace lqtk

#endif // LQTK_QWheelEvent_WRAPPER_HPP
