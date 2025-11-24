#ifndef LQTK_QLayout_WRAPPER_HPP
#define LQTK_QLayout_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QLayoutWrapper : public QLayout
{
public:

/* -------------------------------------------------------------------------------------------- */

    QLayoutWrapper();
    QLayoutWrapper(
                   QWidget* arg1); 

/* -------------------------------------------------------------------------------------------- */

private:
    static int lqtk_destruct(lua_State* L);
public:
    ~QLayoutWrapper();



/* -------------------------------------------------------------------------------------------- */
public:
    struct addItem1CallArgs : BindingUtil::CallArgs {
        addItem1CallArgs(
                QLayout* thiz,
                    QLayoutItem* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QLayout*> arg1;
        ToLua<QLayoutItem*> arg2;
    };
    
    static int addItem1_doLua(lua_State* L);
public:
    void addItem(
                   QLayoutItem* arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct count1CallArgs : BindingUtil::CallArgs {
        count1CallArgs(
                QLayout* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<int> rslt;
        ToLua<QLayout*> arg1;
    };
    
    static int count1_doLua(lua_State* L);
public:
    int count() const override;

/* -------------------------------------------------------------------------------------------- */
public:
    struct geometry1CallArgs : BindingUtil::CallArgs {
        geometry1CallArgs(
                QLayout* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<QRect*> rsltPtr;
        QRect rslt;
        ToLua<QLayout*> arg1;
    };
    
    static int geometry1_doLua(lua_State* L);
public:
    QRect geometry() const override;

/* -------------------------------------------------------------------------------------------- */
public:
    struct itemAt1CallArgs : BindingUtil::CallArgs {
        itemAt1CallArgs(
                QLayout* thiz,
                    int arg2) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2) 
        {}

        bool hasValidResult;
        FromLua<QLayoutItem*> rslt;
        ToLua<QLayout*> arg1;
        ToLua<int> arg2;
    };
    
    static int itemAt1_doLua(lua_State* L);
public:
    QLayoutItem* itemAt(
                   int arg2) const override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct setGeometry1CallArgs : BindingUtil::CallArgs {
        setGeometry1CallArgs(
                QLayout* thiz,
                    QRect arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QLayout*> arg1;
        ToLua<QRect*> arg2;
    };
    
    static int setGeometry1_doLua(lua_State* L);
public:
    void setGeometry(
                   const QRect& arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct sizeHint1CallArgs : BindingUtil::CallArgs {
        sizeHint1CallArgs(
                QLayout* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<QSize*> rsltPtr;
        QSize rslt;
        ToLua<QLayout*> arg1;
    };
    
    static int sizeHint1_doLua(lua_State* L);
public:
    QSize sizeHint() const override;

/* -------------------------------------------------------------------------------------------- */
public:
    struct takeAt1CallArgs : BindingUtil::CallArgs {
        takeAt1CallArgs(
                QLayout* thiz,
                    int arg2) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2) 
        {}

        bool hasValidResult;
        FromLua<QLayoutItem*> rslt;
        ToLua<QLayout*> arg1;
        ToLua<int> arg2;
    };
    
    static int takeAt1_doLua(lua_State* L);
public:
    QLayoutItem* takeAt(
                   int arg2) override; 

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

#endif // LQTK_QLayout_WRAPPER_HPP
