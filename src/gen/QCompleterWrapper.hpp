#ifndef LQTK_QCompleter_WRAPPER_HPP
#define LQTK_QCompleter_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QCompleterExportWrapper
{
public:
    virtual bool lqtk_QCompleter_event(
                   QEvent* arg2) = 0; 
    virtual bool lqtk_QCompleter_eventFilter(
                   QObject* arg2, 
                   QEvent* arg3) = 0; 
};

class QCompleterWrapper : public QCompleter
                      , public QCompleterExportWrapper
{
public:

/* -------------------------------------------------------------------------------------------- */

    QCompleterWrapper();
    QCompleterWrapper(
                   QObject* arg1); 
    QCompleterWrapper(
                   QAbstractItemModel* arg1); 
    QCompleterWrapper(
                   QAbstractItemModel* arg1, 
                   QObject* arg2); 
    QCompleterWrapper(
                   QStringList arg1); 
    QCompleterWrapper(
                   QStringList arg1, 
                   QObject* arg2); 

/* -------------------------------------------------------------------------------------------- */

private:
    static int lqtk_destruct(lua_State* L);
public:
    ~QCompleterWrapper();
    bool lqtk_QCompleter_event(
                   QEvent* arg1) override; 
    bool lqtk_QCompleter_eventFilter(
                   QObject* arg1, 
                   QEvent* arg2) override; 
public:
    bool event(
                   QEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct eventFilter1CallArgs : BindingUtil::CallArgs {
        eventFilter1CallArgs(
                QCompleter* thiz,
                    QObject* arg2, 
                    QEvent* arg3) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2), 
                arg3(arg3) 
        {}

        bool hasValidResult;
        FromLua<bool> rslt;
        ToLua<QCompleter*> arg1;
        ToLua<QObject*> arg2;
        ToLua<QEvent*> arg3;
    };
    
    static int eventFilter1_doLua(lua_State* L);
public:
    bool eventFilter(
                   QObject* arg2, 
                   QEvent* arg3) override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct pathFromIndex1CallArgs : BindingUtil::CallArgs {
        pathFromIndex1CallArgs(
                QCompleter* thiz,
                    QModelIndex arg2) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2) 
        {}

        bool hasValidResult;
        FromLua<QString*> rsltPtr;
        QString rslt;
        ToLua<QCompleter*> arg1;
        ToLua<QModelIndex*> arg2;
    };
    
    static int pathFromIndex1_doLua(lua_State* L);
public:
    QString pathFromIndex(
                   const QModelIndex& arg2) const override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct splitPath1CallArgs : BindingUtil::CallArgs {
        splitPath1CallArgs(
                QCompleter* thiz,
                    QString arg2) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2) 
        {}

        bool hasValidResult;
        FromLua<QStringList> rslt;
        ToLua<QCompleter*> arg1;
        ToLua<QString> arg2;
    };
    
    static int splitPath1_doLua(lua_State* L);
public:
    QStringList splitPath(
                   const QString& arg2) const override; 

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

#endif // LQTK_QCompleter_WRAPPER_HPP
