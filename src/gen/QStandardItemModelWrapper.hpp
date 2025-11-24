#ifndef LQTK_QStandardItemModel_WRAPPER_HPP
#define LQTK_QStandardItemModel_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QStandardItemModelWrapper : public QStandardItemModel
{
public:

/* -------------------------------------------------------------------------------------------- */

    QStandardItemModelWrapper();
    QStandardItemModelWrapper(
                   QObject* arg1); 
    QStandardItemModelWrapper(
                   int arg1, 
                   int arg2); 
    QStandardItemModelWrapper(
                   int arg1, 
                   int arg2, 
                   QObject* arg3); 

/* -------------------------------------------------------------------------------------------- */

private:
    static int lqtk_destruct(lua_State* L);
public:
    ~QStandardItemModelWrapper();



/* -------------------------------------------------------------------------------------------- */
public:
    struct data1CallArgs : BindingUtil::CallArgs {
        data1CallArgs(
                QStandardItemModel* thiz,
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
        ToLua<QStandardItemModel*> arg1;
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
    bool event(
                   QEvent* arg2) override; 

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

#endif // LQTK_QStandardItemModel_WRAPPER_HPP
