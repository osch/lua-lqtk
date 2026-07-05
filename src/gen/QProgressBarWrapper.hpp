#ifndef LQTK_QProgressBar_WRAPPER_HPP
#define LQTK_QProgressBar_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QProgressBarExportWrapper
{
public:
    virtual bool lqtk_QProgressBar_event(
                   QEvent* arg2) = 0; 
    virtual void lqtk_QProgressBar_paintEvent(
                   QPaintEvent* arg2) = 0; 
};

class QProgressBarWrapper : public QProgressBar
                      , public QProgressBarExportWrapper
                      , public QWidgetExportWrapper
{
public:

/* -------------------------------------------------------------------------------------------- */

    QProgressBarWrapper();
    QProgressBarWrapper(
                   QWidget* arg1); 

/* -------------------------------------------------------------------------------------------- */

private:
    static int lqtk_destruct(lua_State* L);
public:
    ~QProgressBarWrapper();
    bool lqtk_QProgressBar_event(
                   QEvent* arg1) override; 
    void lqtk_QProgressBar_paintEvent(
                   QPaintEvent* arg1) override; 
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
public:
    bool event(
                   QEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct minimumSizeHint1CallArgs : BindingUtil::CallArgs {
        minimumSizeHint1CallArgs(
                QProgressBar* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<QSize*> rsltPtr;
        QSize rslt;
        ToLua<QProgressBar*> arg1;
    };
    
    static int minimumSizeHint1_doLua(lua_State* L);
public:
    QSize minimumSizeHint() const override;
public:
    void paintEvent(
                   QPaintEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct sizeHint1CallArgs : BindingUtil::CallArgs {
        sizeHint1CallArgs(
                QProgressBar* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<QSize*> rsltPtr;
        QSize rslt;
        ToLua<QProgressBar*> arg1;
    };
    
    static int sizeHint1_doLua(lua_State* L);
public:
    QSize sizeHint() const override;

/* -------------------------------------------------------------------------------------------- */

public:
    struct text1CallArgs : BindingUtil::CallArgs {
        text1CallArgs(
                QProgressBar* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<QString*> rsltPtr;
        QString rslt;
        ToLua<QProgressBar*> arg1;
    };
    
    static int text1_doLua(lua_State* L);
public:
    QString text() const override;
public:
    void closeEvent(
                   QCloseEvent* arg2) override; 
public:
    bool hasHeightForWidth() const override;
public:
    int heightForWidth(
                   int arg2) const override; 
public:
    QVariant inputMethodQuery(
                   Qt::InputMethodQuery arg2) const override; 
public:
    void mouseDoubleClickEvent(
                   QMouseEvent* arg2) override; 
public:
    void mouseMoveEvent(
                   QMouseEvent* arg2) override; 
public:
    void mousePressEvent(
                   QMouseEvent* arg2) override; 
public:
    void mouseReleaseEvent(
                   QMouseEvent* arg2) override; 
public:
    void resizeEvent(
                   QResizeEvent* arg2) override; 
public:
    void setVisible(
                   bool arg2) override; 

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

#endif // LQTK_QProgressBar_WRAPPER_HPP
