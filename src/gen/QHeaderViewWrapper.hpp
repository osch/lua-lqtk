#ifndef LQTK_QHeaderView_WRAPPER_HPP
#define LQTK_QHeaderView_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QHeaderViewExportWrapper
{
public:
    virtual void lqtk_QHeaderView_resizeSections() = 0;
    virtual QSize lqtk_QHeaderView_sectionSizeFromContents(
                   int arg2) = 0; 
};

class QHeaderViewWrapper : public QHeaderView
                      , public QHeaderViewExportWrapper
                      , public QAbstractItemViewExportWrapper
                      , public QAbstractScrollAreaExportWrapper
                      , public QWidgetExportWrapper
{
public:

/* -------------------------------------------------------------------------------------------- */

    QHeaderViewWrapper(
                   Qt::Orientation arg1); 
    QHeaderViewWrapper(
                   Qt::Orientation arg1, 
                   QWidget* arg2); 

/* -------------------------------------------------------------------------------------------- */

private:
    static int lqtk_destruct(lua_State* L);
public:
    ~QHeaderViewWrapper();
    void lqtk_QHeaderView_resizeSections() override;
    QSize lqtk_QHeaderView_sectionSizeFromContents(
                   int arg1) override; 
    void lqtk_QAbstractItemView_resizeEvent(
                   QResizeEvent* arg1) override; 
    void lqtk_QAbstractScrollArea_resizeEvent(
                   QResizeEvent* arg1) override; 
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
    struct sectionSizeFromContents1CallArgs : BindingUtil::CallArgs {
        sectionSizeFromContents1CallArgs(
                QHeaderView* thiz,
                    int arg2) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2) 
        {}

        bool hasValidResult;
        FromLua<QSize*> rsltPtr;
        QSize rslt;
        ToLua<QHeaderView*> arg1;
        ToLua<int> arg2;
    };
    
    static int sectionSizeFromContents1_doLua(lua_State* L);
public:
    QSize sectionSizeFromContents(
                   int arg2) const override; 
public:
    void resizeEvent(
                   QResizeEvent* arg2) override; 
public:
    void setModel(
                   QAbstractItemModel* arg2) override; 
public:
    void setSelectionModel(
                   QItemSelectionModel* arg2) override; 
public:
    void closeEvent(
                   QCloseEvent* arg2) override; 
public:
    bool event(
                   QEvent* arg2) override; 
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
    void paintEvent(
                   QPaintEvent* arg2) override; 
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

#endif // LQTK_QHeaderView_WRAPPER_HPP
