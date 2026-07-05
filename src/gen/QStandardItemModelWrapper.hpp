#ifndef LQTK_QStandardItemModel_WRAPPER_HPP
#define LQTK_QStandardItemModel_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QStandardItemModelWrapper : public QStandardItemModel
                      , public QAbstractItemModelExportWrapper
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
    QModelIndex lqtk_QAbstractItemModel_createIndex(
                   int arg1, 
                   int arg2) override; 
    QModelIndex lqtk_QAbstractItemModel_createIndex(
                   int arg1, 
                   int arg2, 
                   int arg3) override; 
public:
    int columnCount(
                   const QModelIndex& arg2) const override; 
public:
    QVariant data(
                   const QModelIndex& arg2, 
                   int arg3) const override; 
public:
    QModelIndex index(
                   int arg2, 
                   int arg3, 
                   const QModelIndex& arg4) const override; 
public:
    QModelIndex parent(
                   const QModelIndex& arg2) const override; 
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

#endif // LQTK_QStandardItemModel_WRAPPER_HPP
