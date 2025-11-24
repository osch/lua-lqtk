#ifndef LQTK_QPushButton_WRAPPER_HPP
#define LQTK_QPushButton_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QPushButtonExportWrapper
{
public:
    virtual void lqtk_QPushButton_paintEvent(
                   QPaintEvent* arg2) = 0; 
};

class QPushButtonWrapper : public QPushButton
                      , public QPushButtonExportWrapper
                      , public QWidgetExportWrapper
{
public:

/* -------------------------------------------------------------------------------------------- */

    QPushButtonWrapper();
    QPushButtonWrapper(
                   QWidget* arg1); 
    QPushButtonWrapper(
                   QString arg1); 
    QPushButtonWrapper(
                   QString arg1, 
                   QWidget* arg2); 

/* -------------------------------------------------------------------------------------------- */

private:
    static int lqtk_destruct(lua_State* L);
public:
    ~QPushButtonWrapper();


    void lqtk_QPushButton_paintEvent(
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

/* -------------------------------------------------------------------------------------------- */
public:
    struct paintEvent1CallArgs : BindingUtil::CallArgs {
        paintEvent1CallArgs(
                QPushButton* thiz,
                    QPaintEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QPushButton*> arg1;
        ToLua<QPaintEvent*> arg2;
    };
    
    static int paintEvent1_doLua(lua_State* L);
public:
    void paintEvent(
                   QPaintEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    void closeEvent(
                   QCloseEvent* arg2) override; 

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

#endif // LQTK_QPushButton_WRAPPER_HPP
