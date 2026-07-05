#ifndef LQTK_QAbstractItemModel_WRAPPER_HPP
#define LQTK_QAbstractItemModel_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QAbstractItemModelExportWrapper
{
public:
    virtual QModelIndex lqtk_QAbstractItemModel_createIndex(
                   int arg2, 
                   int arg3) = 0; 
    virtual QModelIndex lqtk_QAbstractItemModel_createIndex(
                   int arg2, 
                   int arg3, 
                   int arg4) = 0; 
};

class QAbstractItemModelWrapper : public QAbstractItemModel
                      , public QAbstractItemModelExportWrapper
{
public:

/* -------------------------------------------------------------------------------------------- */

    QAbstractItemModelWrapper();
    QAbstractItemModelWrapper(
                   QObject* arg1); 

/* -------------------------------------------------------------------------------------------- */

private:
    static int lqtk_destruct(lua_State* L);
public:
    ~QAbstractItemModelWrapper();
    QModelIndex lqtk_QAbstractItemModel_createIndex(
                   int arg1, 
                   int arg2) override; 
    QModelIndex lqtk_QAbstractItemModel_createIndex(
                   int arg1, 
                   int arg2, 
                   int arg3) override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct columnCount1CallArgs : BindingUtil::CallArgs {
        columnCount1CallArgs(
                QAbstractItemModel* thiz,
                    QModelIndex arg2) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2) 
        {}

        bool hasValidResult;
        FromLua<int> rslt;
        ToLua<QAbstractItemModel*> arg1;
        ToLua<QModelIndex*> arg2;
    };
    
    static int columnCount1_doLua(lua_State* L);
public:
    int columnCount(
                   const QModelIndex& arg2) const override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct data1CallArgs : BindingUtil::CallArgs {
        data1CallArgs(
                QAbstractItemModel* thiz,
                    QModelIndex arg2, 
                    int arg3) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2), 
                arg3(arg3) 
        {}

        bool hasValidResult;
        FromLua<QVariant*> rsltPtr;
        QVariant rslt;
        ToLua<QAbstractItemModel*> arg1;
        ToLua<QModelIndex*> arg2;
        ToLua<int> arg3;
    };
    
    static int data1_doLua(lua_State* L);
public:
    QVariant data(
                   const QModelIndex& arg2, 
                   int arg3) const override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct index1CallArgs : BindingUtil::CallArgs {
        index1CallArgs(
                QAbstractItemModel* thiz,
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
        ToLua<QAbstractItemModel*> arg1;
        ToLua<int> arg2;
        ToLua<int> arg3;
        ToLua<QModelIndex*> arg4;
    };
    
    static int index1_doLua(lua_State* L);
public:
    QModelIndex index(
                   int arg2, 
                   int arg3, 
                   const QModelIndex& arg4) const override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct parent1CallArgs : BindingUtil::CallArgs {
        parent1CallArgs(
                QAbstractItemModel* thiz,
                    QModelIndex arg2) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2) 
        {}

        bool hasValidResult;
        FromLua<QModelIndex*> rsltPtr;
        QModelIndex rslt;
        ToLua<QAbstractItemModel*> arg1;
        ToLua<QModelIndex*> arg2;
    };
    
    static int parent1_doLua(lua_State* L);
public:
    QModelIndex parent(
                   const QModelIndex& arg2) const override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct rowCount1CallArgs : BindingUtil::CallArgs {
        rowCount1CallArgs(
                QAbstractItemModel* thiz,
                    QModelIndex arg2) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2) 
        {}

        bool hasValidResult;
        FromLua<int> rslt;
        ToLua<QAbstractItemModel*> arg1;
        ToLua<QModelIndex*> arg2;
    };
    
    static int rowCount1_doLua(lua_State* L);
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

#endif // LQTK_QAbstractItemModel_WRAPPER_HPP
