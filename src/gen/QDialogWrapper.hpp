#ifndef LQTK_QDialog_WRAPPER_HPP
#define LQTK_QDialog_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QDialogExportWrapper
{
public:
    virtual void lqtk_QDialog_closeEvent(
                   QCloseEvent* arg2) = 0; 
    virtual void lqtk_QDialog_contextMenuEvent(
                   QContextMenuEvent* arg2) = 0; 
    virtual void lqtk_QDialog_keyPressEvent(
                   QKeyEvent* arg2) = 0; 
    virtual void lqtk_QDialog_resizeEvent(
                   QResizeEvent* arg2) = 0; 
    virtual void lqtk_QDialog_showEvent(
                   QShowEvent* arg2) = 0; 
};

class QDialogWrapper : public QDialog
                      , public QDialogExportWrapper
                      , public QWidgetExportWrapper
{
public:

/* -------------------------------------------------------------------------------------------- */

    QDialogWrapper();
    QDialogWrapper(
                   QWidget* arg1); 
    QDialogWrapper(
                   QWidget* arg1, 
                   Qt::WindowFlags arg2); 

/* -------------------------------------------------------------------------------------------- */

private:
    static int lqtk_destruct(lua_State* L);
public:
    ~QDialogWrapper();


    void lqtk_QDialog_closeEvent(
                   QCloseEvent* arg1) override; 
    void lqtk_QDialog_contextMenuEvent(
                   QContextMenuEvent* arg1) override; 
    void lqtk_QDialog_keyPressEvent(
                   QKeyEvent* arg1) override; 
    void lqtk_QDialog_resizeEvent(
                   QResizeEvent* arg1) override; 
    void lqtk_QDialog_showEvent(
                   QShowEvent* arg1) override; 
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
    struct accept1CallArgs : BindingUtil::CallArgs {
        accept1CallArgs(
                QDialog* thiz)
              : BindingUtil::CallArgs(thiz),
                arg1(thiz)
        {}

        ToLua<QDialog*> arg1;
    };
    
    static int accept1_doLua(lua_State* L);
public:
    void accept() override;

/* -------------------------------------------------------------------------------------------- */
public:
    struct closeEvent1CallArgs : BindingUtil::CallArgs {
        closeEvent1CallArgs(
                QDialog* thiz,
                    QCloseEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QDialog*> arg1;
        ToLua<QCloseEvent*> arg2;
    };
    
    static int closeEvent1_doLua(lua_State* L);
public:
    void closeEvent(
                   QCloseEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct contextMenuEvent1CallArgs : BindingUtil::CallArgs {
        contextMenuEvent1CallArgs(
                QDialog* thiz,
                    QContextMenuEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QDialog*> arg1;
        ToLua<QContextMenuEvent*> arg2;
    };
    
    static int contextMenuEvent1_doLua(lua_State* L);
public:
    void contextMenuEvent(
                   QContextMenuEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct done1CallArgs : BindingUtil::CallArgs {
        done1CallArgs(
                QDialog* thiz,
                    int arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QDialog*> arg1;
        ToLua<int> arg2;
    };
    
    static int done1_doLua(lua_State* L);
public:
    void done(
                   int arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct keyPressEvent1CallArgs : BindingUtil::CallArgs {
        keyPressEvent1CallArgs(
                QDialog* thiz,
                    QKeyEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QDialog*> arg1;
        ToLua<QKeyEvent*> arg2;
    };
    
    static int keyPressEvent1_doLua(lua_State* L);
public:
    void keyPressEvent(
                   QKeyEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct minimumSizeHint1CallArgs : BindingUtil::CallArgs {
        minimumSizeHint1CallArgs(
                QDialog* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<QSize*> rsltPtr;
        QSize rslt;
        ToLua<QDialog*> arg1;
    };
    
    static int minimumSizeHint1_doLua(lua_State* L);
public:
    QSize minimumSizeHint() const override;

/* -------------------------------------------------------------------------------------------- */
public:
    struct open1CallArgs : BindingUtil::CallArgs {
        open1CallArgs(
                QDialog* thiz)
              : BindingUtil::CallArgs(thiz),
                arg1(thiz)
        {}

        ToLua<QDialog*> arg1;
    };
    
    static int open1_doLua(lua_State* L);
public:
    void open() override;

/* -------------------------------------------------------------------------------------------- */
public:
    struct reject1CallArgs : BindingUtil::CallArgs {
        reject1CallArgs(
                QDialog* thiz)
              : BindingUtil::CallArgs(thiz),
                arg1(thiz)
        {}

        ToLua<QDialog*> arg1;
    };
    
    static int reject1_doLua(lua_State* L);
public:
    void reject() override;

/* -------------------------------------------------------------------------------------------- */
public:
    struct resizeEvent1CallArgs : BindingUtil::CallArgs {
        resizeEvent1CallArgs(
                QDialog* thiz,
                    QResizeEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QDialog*> arg1;
        ToLua<QResizeEvent*> arg2;
    };
    
    static int resizeEvent1_doLua(lua_State* L);
public:
    void resizeEvent(
                   QResizeEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct setVisible1CallArgs : BindingUtil::CallArgs {
        setVisible1CallArgs(
                QDialog* thiz,
                    bool arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QDialog*> arg1;
        ToLua<bool> arg2;
    };
    
    static int setVisible1_doLua(lua_State* L);
public:
    void setVisible(
                   bool arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct showEvent1CallArgs : BindingUtil::CallArgs {
        showEvent1CallArgs(
                QDialog* thiz,
                    QShowEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QDialog*> arg1;
        ToLua<QShowEvent*> arg2;
    };
    
    static int showEvent1_doLua(lua_State* L);
public:
    void showEvent(
                   QShowEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct sizeHint1CallArgs : BindingUtil::CallArgs {
        sizeHint1CallArgs(
                QDialog* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<QSize*> rsltPtr;
        QSize rslt;
        ToLua<QDialog*> arg1;
    };
    
    static int sizeHint1_doLua(lua_State* L);
public:
    QSize sizeHint() const override;

/* -------------------------------------------------------------------------------------------- */
public:
    bool event(
                   QEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    bool hasHeightForWidth() const override;

/* -------------------------------------------------------------------------------------------- */
public:
    int heightForWidth(
                   int arg2) const override; 

/* -------------------------------------------------------------------------------------------- */
public:
    void mouseDoubleClickEvent(
                   QMouseEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    void mouseMoveEvent(
                   QMouseEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    void mousePressEvent(
                   QMouseEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    void mouseReleaseEvent(
                   QMouseEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    void paintEvent(
                   QPaintEvent* arg2) override; 

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

#endif // LQTK_QDialog_WRAPPER_HPP
