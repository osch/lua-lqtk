#ifndef LQTK_QLabel_WRAPPER_HPP
#define LQTK_QLabel_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QLabelWrapper : public QLabel
                      , public QWidgetExportWrapper
{
public:

/* -------------------------------------------------------------------------------------------- */

    QLabelWrapper();
    QLabelWrapper(
                   QWidget* arg1); 
    QLabelWrapper(
                   QWidget* arg1, 
                   Qt::WindowFlags arg2); 
    QLabelWrapper(
                   QString arg1); 
    QLabelWrapper(
                   QString arg1, 
                   QWidget* arg2); 
    QLabelWrapper(
                   QString arg1, 
                   QWidget* arg2, 
                   Qt::WindowFlags arg3); 

/* -------------------------------------------------------------------------------------------- */

private:
    static int lqtk_destruct(lua_State* L);
public:
    ~QLabelWrapper();


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
    void paintEvent(
                   QPaintEvent* arg2) override; 

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

#endif // LQTK_QLabel_WRAPPER_HPP
