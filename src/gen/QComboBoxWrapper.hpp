#ifndef LQTK_QComboBox_WRAPPER_HPP
#define LQTK_QComboBox_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QComboBoxExportWrapper
{
public:
    virtual void lqtk_QComboBox_changeEvent(
                   QEvent* arg2) = 0; 
    virtual void lqtk_QComboBox_contextMenuEvent(
                   QContextMenuEvent* arg2) = 0; 
    virtual void lqtk_QComboBox_focusInEvent(
                   QFocusEvent* arg2) = 0; 
    virtual void lqtk_QComboBox_focusOutEvent(
                   QFocusEvent* arg2) = 0; 
    virtual void lqtk_QComboBox_hideEvent(
                   QHideEvent* arg2) = 0; 
    virtual void lqtk_QComboBox_inputMethodEvent(
                   QInputMethodEvent* arg2) = 0; 
    virtual void lqtk_QComboBox_keyPressEvent(
                   QKeyEvent* arg2) = 0; 
    virtual void lqtk_QComboBox_keyReleaseEvent(
                   QKeyEvent* arg2) = 0; 
    virtual void lqtk_QComboBox_mousePressEvent(
                   QMouseEvent* arg2) = 0; 
    virtual void lqtk_QComboBox_mouseReleaseEvent(
                   QMouseEvent* arg2) = 0; 
    virtual void lqtk_QComboBox_paintEvent(
                   QPaintEvent* arg2) = 0; 
    virtual void lqtk_QComboBox_resizeEvent(
                   QResizeEvent* arg2) = 0; 
    virtual void lqtk_QComboBox_showEvent(
                   QShowEvent* arg2) = 0; 
    virtual void lqtk_QComboBox_wheelEvent(
                   QWheelEvent* arg2) = 0; 
};

class QComboBoxWrapper : public QComboBox
                      , public QComboBoxExportWrapper
                      , public QWidgetExportWrapper
{
public:

/* -------------------------------------------------------------------------------------------- */

    QComboBoxWrapper();
    QComboBoxWrapper(
                   QWidget* arg1); 

/* -------------------------------------------------------------------------------------------- */

private:
    static int lqtk_destruct(lua_State* L);
public:
    ~QComboBoxWrapper();
    void lqtk_QComboBox_changeEvent(
                   QEvent* arg1) override; 
    void lqtk_QComboBox_contextMenuEvent(
                   QContextMenuEvent* arg1) override; 
    void lqtk_QComboBox_focusInEvent(
                   QFocusEvent* arg1) override; 
    void lqtk_QComboBox_focusOutEvent(
                   QFocusEvent* arg1) override; 
    void lqtk_QComboBox_hideEvent(
                   QHideEvent* arg1) override; 
    void lqtk_QComboBox_inputMethodEvent(
                   QInputMethodEvent* arg1) override; 
    void lqtk_QComboBox_keyPressEvent(
                   QKeyEvent* arg1) override; 
    void lqtk_QComboBox_keyReleaseEvent(
                   QKeyEvent* arg1) override; 
    void lqtk_QComboBox_mousePressEvent(
                   QMouseEvent* arg1) override; 
    void lqtk_QComboBox_mouseReleaseEvent(
                   QMouseEvent* arg1) override; 
    void lqtk_QComboBox_paintEvent(
                   QPaintEvent* arg1) override; 
    void lqtk_QComboBox_resizeEvent(
                   QResizeEvent* arg1) override; 
    void lqtk_QComboBox_showEvent(
                   QShowEvent* arg1) override; 
    void lqtk_QComboBox_wheelEvent(
                   QWheelEvent* arg1) override; 
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
    struct changeEvent1CallArgs : BindingUtil::CallArgs {
        changeEvent1CallArgs(
                QComboBox* thiz,
                    QEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QComboBox*> arg1;
        ToLua<QEvent*> arg2;
    };
    
    static int changeEvent1_doLua(lua_State* L);
public:
    void changeEvent(
                   QEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct contextMenuEvent1CallArgs : BindingUtil::CallArgs {
        contextMenuEvent1CallArgs(
                QComboBox* thiz,
                    QContextMenuEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QComboBox*> arg1;
        ToLua<QContextMenuEvent*> arg2;
    };
    
    static int contextMenuEvent1_doLua(lua_State* L);
public:
    void contextMenuEvent(
                   QContextMenuEvent* arg2) override; 
public:
    bool event(
                   QEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct focusInEvent1CallArgs : BindingUtil::CallArgs {
        focusInEvent1CallArgs(
                QComboBox* thiz,
                    QFocusEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QComboBox*> arg1;
        ToLua<QFocusEvent*> arg2;
    };
    
    static int focusInEvent1_doLua(lua_State* L);
public:
    void focusInEvent(
                   QFocusEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct focusOutEvent1CallArgs : BindingUtil::CallArgs {
        focusOutEvent1CallArgs(
                QComboBox* thiz,
                    QFocusEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QComboBox*> arg1;
        ToLua<QFocusEvent*> arg2;
    };
    
    static int focusOutEvent1_doLua(lua_State* L);
public:
    void focusOutEvent(
                   QFocusEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct hideEvent1CallArgs : BindingUtil::CallArgs {
        hideEvent1CallArgs(
                QComboBox* thiz,
                    QHideEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QComboBox*> arg1;
        ToLua<QHideEvent*> arg2;
    };
    
    static int hideEvent1_doLua(lua_State* L);
public:
    void hideEvent(
                   QHideEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct hidePopup1CallArgs : BindingUtil::CallArgs {
        hidePopup1CallArgs(
                QComboBox* thiz)
              : BindingUtil::CallArgs(thiz),
                arg1(thiz)
        {}

        ToLua<QComboBox*> arg1;
    };
    
    static int hidePopup1_doLua(lua_State* L);
public:
    void hidePopup() override;

/* -------------------------------------------------------------------------------------------- */

public:
    struct inputMethodEvent1CallArgs : BindingUtil::CallArgs {
        inputMethodEvent1CallArgs(
                QComboBox* thiz,
                    QInputMethodEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QComboBox*> arg1;
        ToLua<QInputMethodEvent*> arg2;
    };
    
    static int inputMethodEvent1_doLua(lua_State* L);
public:
    void inputMethodEvent(
                   QInputMethodEvent* arg2) override; 
public:
    QVariant inputMethodQuery(
                   Qt::InputMethodQuery arg2) const override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct keyPressEvent1CallArgs : BindingUtil::CallArgs {
        keyPressEvent1CallArgs(
                QComboBox* thiz,
                    QKeyEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QComboBox*> arg1;
        ToLua<QKeyEvent*> arg2;
    };
    
    static int keyPressEvent1_doLua(lua_State* L);
public:
    void keyPressEvent(
                   QKeyEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct keyReleaseEvent1CallArgs : BindingUtil::CallArgs {
        keyReleaseEvent1CallArgs(
                QComboBox* thiz,
                    QKeyEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QComboBox*> arg1;
        ToLua<QKeyEvent*> arg2;
    };
    
    static int keyReleaseEvent1_doLua(lua_State* L);
public:
    void keyReleaseEvent(
                   QKeyEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct minimumSizeHint1CallArgs : BindingUtil::CallArgs {
        minimumSizeHint1CallArgs(
                QComboBox* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<QSize*> rsltPtr;
        QSize rslt;
        ToLua<QComboBox*> arg1;
    };
    
    static int minimumSizeHint1_doLua(lua_State* L);
public:
    QSize minimumSizeHint() const override;
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
    void resizeEvent(
                   QResizeEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct setModel1CallArgs : BindingUtil::CallArgs {
        setModel1CallArgs(
                QComboBox* thiz,
                    QAbstractItemModel* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QComboBox*> arg1;
        ToLua<QAbstractItemModel*> arg2;
    };
    
    static int setModel1_doLua(lua_State* L);
public:
    void setModel(
                   QAbstractItemModel* arg2) override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct showEvent1CallArgs : BindingUtil::CallArgs {
        showEvent1CallArgs(
                QComboBox* thiz,
                    QShowEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QComboBox*> arg1;
        ToLua<QShowEvent*> arg2;
    };
    
    static int showEvent1_doLua(lua_State* L);
public:
    void showEvent(
                   QShowEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct showPopup1CallArgs : BindingUtil::CallArgs {
        showPopup1CallArgs(
                QComboBox* thiz)
              : BindingUtil::CallArgs(thiz),
                arg1(thiz)
        {}

        ToLua<QComboBox*> arg1;
    };
    
    static int showPopup1_doLua(lua_State* L);
public:
    void showPopup() override;

/* -------------------------------------------------------------------------------------------- */

public:
    struct sizeHint1CallArgs : BindingUtil::CallArgs {
        sizeHint1CallArgs(
                QComboBox* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<QSize*> rsltPtr;
        QSize rslt;
        ToLua<QComboBox*> arg1;
    };
    
    static int sizeHint1_doLua(lua_State* L);
public:
    QSize sizeHint() const override;

/* -------------------------------------------------------------------------------------------- */

public:
    struct wheelEvent1CallArgs : BindingUtil::CallArgs {
        wheelEvent1CallArgs(
                QComboBox* thiz,
                    QWheelEvent* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QComboBox*> arg1;
        ToLua<QWheelEvent*> arg2;
    };
    
    static int wheelEvent1_doLua(lua_State* L);
public:
    void wheelEvent(
                   QWheelEvent* arg2) override; 
public:
    void closeEvent(
                   QCloseEvent* arg2) override; 
public:
    bool hasHeightForWidth() const override;
public:
    int heightForWidth(
                   int arg2) const override; 
public:
    void mouseDoubleClickEvent(
                   QMouseEvent* arg2) override; 
public:
    void mouseMoveEvent(
                   QMouseEvent* arg2) override; 
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

#endif // LQTK_QComboBox_WRAPPER_HPP
