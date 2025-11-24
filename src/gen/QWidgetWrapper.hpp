#ifndef LQTK_QWidget_WRAPPER_HPP
#define LQTK_QWidget_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QWidgetExportWrapper
{
public:
    virtual void lqtk_QWidget_closeEvent(
                   QCloseEvent* arg2) = 0; 
    virtual bool lqtk_QWidget_event(
                   QEvent* arg2) = 0; 
    virtual void lqtk_QWidget_mouseDoubleClickEvent(
                   QMouseEvent* arg2) = 0; 
    virtual void lqtk_QWidget_mouseMoveEvent(
                   QMouseEvent* arg2) = 0; 
    virtual void lqtk_QWidget_mousePressEvent(
                   QMouseEvent* arg2) = 0; 
    virtual void lqtk_QWidget_mouseReleaseEvent(
                   QMouseEvent* arg2) = 0; 
    virtual void lqtk_QWidget_paintEvent(
                   QPaintEvent* arg2) = 0; 
    virtual void lqtk_QWidget_resizeEvent(
                   QResizeEvent* arg2) = 0; 
};

class QWidgetWrapper : public QWidget
                      , public QWidgetExportWrapper
{
public:

/* -------------------------------------------------------------------------------------------- */

    QWidgetWrapper();
    QWidgetWrapper(
                   QWidget* arg1); 
    QWidgetWrapper(
                   QWidget* arg1, 
                   Qt::WindowFlags arg2); 

/* -------------------------------------------------------------------------------------------- */

private:
    static int lqtk_destruct(lua_State* L);
public:
    ~QWidgetWrapper();


    void lqtk_QWidget_closeEvent(
                   QCloseEvent* arg1) override; 
    bool lqtk_QWidget_event(
                   QEvent* arg1) override; 
    void lqtk_QWidget_mouseDoubleClickEvent(
                   QMouseEvent* arg1) override; 
    void lqtk_QWidget_mouseMoveEvent(
                   QMouseEvent* arg1) override; 
    void lqtk_QWidget_mousePressEvent(
                   QMouseEvent* arg1) override; 
    void lqtk_QWidget_mouseReleaseEvent(
                   QMouseEvent* arg1) override; 
    void lqtk_QWidget_paintEvent(
                   QPaintEvent* arg1) override; 
    void lqtk_QWidget_resizeEvent(
                   QResizeEvent* arg1) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct closeEvent1CallArgs : BindingUtil::CallArgs {
        closeEvent1CallArgs(
                QWidget* thiz,
                    QCloseEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QWidget*> arg1;
        ToLua<QCloseEvent*> arg2;
    };
    
    static int closeEvent1_doLua(lua_State* L);
public:
    void closeEvent(
                   QCloseEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct event1CallArgs : BindingUtil::CallArgs {
        event1CallArgs(
                QWidget* thiz,
                    QEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2) 
        {}

        bool hasValidResult;
        FromLua<bool> rslt;
        ToLua<QWidget*> arg1;
        ToLua<QEvent*> arg2;
    };
    
    static int event1_doLua(lua_State* L);
public:
    bool event(
                   QEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct hasHeightForWidth1CallArgs : BindingUtil::CallArgs {
        hasHeightForWidth1CallArgs(
                QWidget* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<bool> rslt;
        ToLua<QWidget*> arg1;
    };
    
    static int hasHeightForWidth1_doLua(lua_State* L);
public:
    bool hasHeightForWidth() const override;

/* -------------------------------------------------------------------------------------------- */
public:
    struct heightForWidth1CallArgs : BindingUtil::CallArgs {
        heightForWidth1CallArgs(
                QWidget* thiz,
                    int arg2) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2) 
        {}

        bool hasValidResult;
        FromLua<int> rslt;
        ToLua<QWidget*> arg1;
        ToLua<int> arg2;
    };
    
    static int heightForWidth1_doLua(lua_State* L);
public:
    int heightForWidth(
                   int arg2) const override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct mouseDoubleClickEvent1CallArgs : BindingUtil::CallArgs {
        mouseDoubleClickEvent1CallArgs(
                QWidget* thiz,
                    QMouseEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QWidget*> arg1;
        ToLua<QMouseEvent*> arg2;
    };
    
    static int mouseDoubleClickEvent1_doLua(lua_State* L);
public:
    void mouseDoubleClickEvent(
                   QMouseEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct mouseMoveEvent1CallArgs : BindingUtil::CallArgs {
        mouseMoveEvent1CallArgs(
                QWidget* thiz,
                    QMouseEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QWidget*> arg1;
        ToLua<QMouseEvent*> arg2;
    };
    
    static int mouseMoveEvent1_doLua(lua_State* L);
public:
    void mouseMoveEvent(
                   QMouseEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct mousePressEvent1CallArgs : BindingUtil::CallArgs {
        mousePressEvent1CallArgs(
                QWidget* thiz,
                    QMouseEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QWidget*> arg1;
        ToLua<QMouseEvent*> arg2;
    };
    
    static int mousePressEvent1_doLua(lua_State* L);
public:
    void mousePressEvent(
                   QMouseEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct mouseReleaseEvent1CallArgs : BindingUtil::CallArgs {
        mouseReleaseEvent1CallArgs(
                QWidget* thiz,
                    QMouseEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QWidget*> arg1;
        ToLua<QMouseEvent*> arg2;
    };
    
    static int mouseReleaseEvent1_doLua(lua_State* L);
public:
    void mouseReleaseEvent(
                   QMouseEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct paintEvent1CallArgs : BindingUtil::CallArgs {
        paintEvent1CallArgs(
                QWidget* thiz,
                    QPaintEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QWidget*> arg1;
        ToLua<QPaintEvent*> arg2;
    };
    
    static int paintEvent1_doLua(lua_State* L);
public:
    void paintEvent(
                   QPaintEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct resizeEvent1CallArgs : BindingUtil::CallArgs {
        resizeEvent1CallArgs(
                QWidget* thiz,
                    QResizeEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QWidget*> arg1;
        ToLua<QResizeEvent*> arg2;
    };
    
    static int resizeEvent1_doLua(lua_State* L);
public:
    void resizeEvent(
                   QResizeEvent* arg2) override; 

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

#endif // LQTK_QWidget_WRAPPER_HPP
