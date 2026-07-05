#ifndef LQTK_QAbstractTableModel_WRAPPER_HPP
#define LQTK_QAbstractTableModel_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QAbstractTableModelWrapper : public QAbstractTableModel
                      , public QAbstractItemModelExportWrapper
{
public:

/* -------------------------------------------------------------------------------------------- */

    QAbstractTableModelWrapper();
    QAbstractTableModelWrapper(
                   QObject* arg1); 

/* -------------------------------------------------------------------------------------------- */

private:
    static int lqtk_destruct(lua_State* L);
public:
    ~QAbstractTableModelWrapper();
    QModelIndex lqtk_QAbstractItemModel_createIndex(
                   int arg1, 
                   int arg2) override; 
    QModelIndex lqtk_QAbstractItemModel_createIndex(
                   int arg1, 
                   int arg2, 
                   int arg3) override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct flags1CallArgs : BindingUtil::CallArgs {
        flags1CallArgs(
                QAbstractTableModel* thiz,
                    QModelIndex arg2) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2) 
        {}

        bool hasValidResult;
        FromLua<Qt::ItemFlags> rslt;
        ToLua<QAbstractTableModel*> arg1;
        ToLua<QModelIndex*> arg2;
    };
    
    static int flags1_doLua(lua_State* L);
public:
    Qt::ItemFlags flags(
                   const QModelIndex& arg2) const override; 
public:
    QModelIndex index(
                   int arg2, 
                   int arg3, 
                   const QModelIndex& arg4) const override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct sibling1CallArgs : BindingUtil::CallArgs {
        sibling1CallArgs(
                QAbstractTableModel* thiz,
                    int arg2, 
                    int arg3, 
                    QModelIndex arg4) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2), 
                arg3(arg3), 
                arg4(arg4) 
        {}

        bool hasValidResult;
        FromLua<QModelIndex*> rsltPtr;
        QModelIndex rslt;
        ToLua<QAbstractTableModel*> arg1;
        ToLua<int> arg2;
        ToLua<int> arg3;
        ToLua<QModelIndex*> arg4;
    };
    
    static int sibling1_doLua(lua_State* L);
public:
    QModelIndex sibling(
                   int arg2, 
                   int arg3, 
                   const QModelIndex& arg4) const override; 
public:
    int columnCount(
                   const QModelIndex& arg2) const override; 
public:
    QVariant data(
                   const QModelIndex& arg2, 
                   int arg3) const override; 
public:
    int rowCount(
                   const QModelIndex& arg2) const override; 
public:
    bool event(
                   QEvent* arg2) override; 

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

#endif // LQTK_QAbstractTableModel_WRAPPER_HPP
