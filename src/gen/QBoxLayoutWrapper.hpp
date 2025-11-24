#ifndef LQTK_QBoxLayout_WRAPPER_HPP
#define LQTK_QBoxLayout_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QBoxLayoutWrapper : public QBoxLayout
{
public:

/* -------------------------------------------------------------------------------------------- */

    QBoxLayoutWrapper(
                   QBoxLayout::Direction arg1); 
    QBoxLayoutWrapper(
                   QBoxLayout::Direction arg1, 
                   QWidget* arg2); 

/* -------------------------------------------------------------------------------------------- */

private:
    static int lqtk_destruct(lua_State* L);
public:
    ~QBoxLayoutWrapper();



/* -------------------------------------------------------------------------------------------- */
public:
    struct addItem1CallArgs : BindingUtil::CallArgs {
        addItem1CallArgs(
                QBoxLayout* thiz,
                    QLayoutItem* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QBoxLayout*> arg1;
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
                QBoxLayout* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<int> rslt;
        ToLua<QBoxLayout*> arg1;
    };
    
    static int count1_doLua(lua_State* L);
public:
    int count() const override;

/* -------------------------------------------------------------------------------------------- */
public:
    struct hasHeightForWidth1CallArgs : BindingUtil::CallArgs {
        hasHeightForWidth1CallArgs(
                QBoxLayout* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<bool> rslt;
        ToLua<QBoxLayout*> arg1;
    };
    
    static int hasHeightForWidth1_doLua(lua_State* L);
public:
    bool hasHeightForWidth() const override;

/* -------------------------------------------------------------------------------------------- */
public:
    struct heightForWidth1CallArgs : BindingUtil::CallArgs {
        heightForWidth1CallArgs(
                QBoxLayout* thiz,
                    int arg2) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2) 
        {}

        bool hasValidResult;
        FromLua<int> rslt;
        ToLua<QBoxLayout*> arg1;
        ToLua<int> arg2;
    };
    
    static int heightForWidth1_doLua(lua_State* L);
public:
    int heightForWidth(
                   int arg2) const override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct itemAt1CallArgs : BindingUtil::CallArgs {
        itemAt1CallArgs(
                QBoxLayout* thiz,
                    int arg2) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2) 
        {}

        bool hasValidResult;
        FromLua<QLayoutItem*> rslt;
        ToLua<QBoxLayout*> arg1;
        ToLua<int> arg2;
    };
    
    static int itemAt1_doLua(lua_State* L);
public:
    QLayoutItem* itemAt(
                   int arg2) const override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct sizeHint1CallArgs : BindingUtil::CallArgs {
        sizeHint1CallArgs(
                QBoxLayout* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<QSize*> rsltPtr;
        QSize rslt;
        ToLua<QBoxLayout*> arg1;
    };
    
    static int sizeHint1_doLua(lua_State* L);
public:
    QSize sizeHint() const override;

/* -------------------------------------------------------------------------------------------- */
public:
    struct takeAt1CallArgs : BindingUtil::CallArgs {
        takeAt1CallArgs(
                QBoxLayout* thiz,
                    int arg2) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2) 
        {}

        bool hasValidResult;
        FromLua<QLayoutItem*> rslt;
        ToLua<QBoxLayout*> arg1;
        ToLua<int> arg2;
    };
    
    static int takeAt1_doLua(lua_State* L);
public:
    QLayoutItem* takeAt(
                   int arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    QRect geometry() const override;

/* -------------------------------------------------------------------------------------------- */
public:
    void setGeometry(
                   const QRect& arg2) override; 

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

#endif // LQTK_QBoxLayout_WRAPPER_HPP
