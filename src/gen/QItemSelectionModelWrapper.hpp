#ifndef LQTK_QItemSelectionModel_WRAPPER_HPP
#define LQTK_QItemSelectionModel_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QItemSelectionModelExportWrapper
{
public:
    virtual void lqtk_QItemSelectionModel_emitSelectionChanged(
                   QItemSelection arg2, 
                   QItemSelection arg3) = 0; 
};

class QItemSelectionModelWrapper : public QItemSelectionModel
                      , public QItemSelectionModelExportWrapper
{
public:

/* -------------------------------------------------------------------------------------------- */

    QItemSelectionModelWrapper();
    QItemSelectionModelWrapper(
                   QAbstractItemModel* arg1); 
    QItemSelectionModelWrapper(
                   QAbstractItemModel* arg1, 
                   QObject* arg2); 

/* -------------------------------------------------------------------------------------------- */

private:
    static int lqtk_destruct(lua_State* L);
public:
    ~QItemSelectionModelWrapper();
    void lqtk_QItemSelectionModel_emitSelectionChanged(
                   QItemSelection arg1, 
                   QItemSelection arg2) override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct clear1CallArgs : BindingUtil::CallArgs {
        clear1CallArgs(
                QItemSelectionModel* thiz)
              : BindingUtil::CallArgs(thiz),
                arg1(thiz)
        {}

        ToLua<QItemSelectionModel*> arg1;
    };
    
    static int clear1_doLua(lua_State* L);
public:
    void clear() override;

/* -------------------------------------------------------------------------------------------- */

public:
    struct clearCurrentIndex1CallArgs : BindingUtil::CallArgs {
        clearCurrentIndex1CallArgs(
                QItemSelectionModel* thiz)
              : BindingUtil::CallArgs(thiz),
                arg1(thiz)
        {}

        ToLua<QItemSelectionModel*> arg1;
    };
    
    static int clearCurrentIndex1_doLua(lua_State* L);
public:
    void clearCurrentIndex() override;

/* -------------------------------------------------------------------------------------------- */

public:
    struct reset1CallArgs : BindingUtil::CallArgs {
        reset1CallArgs(
                QItemSelectionModel* thiz)
              : BindingUtil::CallArgs(thiz),
                arg1(thiz)
        {}

        ToLua<QItemSelectionModel*> arg1;
    };
    
    static int reset1_doLua(lua_State* L);
public:
    void reset() override;

/* -------------------------------------------------------------------------------------------- */

public:
    struct select1CallArgs : BindingUtil::CallArgs {
        select1CallArgs(
                QItemSelectionModel* thiz,
                    QItemSelection arg2, 
                    QItemSelectionModel::SelectionFlags arg3) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2), 
                arg3(arg3) 
        {}

        ToLua<QItemSelectionModel*> arg1;
        ToLua<QItemSelection*> arg2;
        ToLua<QItemSelectionModel::SelectionFlags> arg3;
    };
    
    static int select1_doLua(lua_State* L);
public:
    void select(
                   const QItemSelection& arg2, 
                   QItemSelectionModel::SelectionFlags arg3) override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct select2CallArgs : BindingUtil::CallArgs {
        select2CallArgs(
                QItemSelectionModel* thiz,
                    QModelIndex arg2, 
                    QItemSelectionModel::SelectionFlags arg3) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2), 
                arg3(arg3) 
        {}

        ToLua<QItemSelectionModel*> arg1;
        ToLua<QModelIndex*> arg2;
        ToLua<QItemSelectionModel::SelectionFlags> arg3;
    };
    
    static int select2_doLua(lua_State* L);
public:
    void select(
                   const QModelIndex& arg2, 
                   QItemSelectionModel::SelectionFlags arg3) override; 

/* -------------------------------------------------------------------------------------------- */

public:
    struct setCurrentIndex1CallArgs : BindingUtil::CallArgs {
        setCurrentIndex1CallArgs(
                QItemSelectionModel* thiz,
                    QModelIndex arg2, 
                    QItemSelectionModel::SelectionFlags arg3) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2), 
                arg3(arg3) 
        {}

        ToLua<QItemSelectionModel*> arg1;
        ToLua<QModelIndex*> arg2;
        ToLua<QItemSelectionModel::SelectionFlags> arg3;
    };
    
    static int setCurrentIndex1_doLua(lua_State* L);
public:
    void setCurrentIndex(
                   const QModelIndex& arg2, 
                   QItemSelectionModel::SelectionFlags arg3) override; 
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

#endif // LQTK_QItemSelectionModel_WRAPPER_HPP
