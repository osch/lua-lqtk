#ifndef LQTK_QAbstractItemView_WRAPPER_HPP
#define LQTK_QAbstractItemView_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QAbstractItemViewExportWrapper
{
public:
    virtual void lqtk_QAbstractItemView_resizeEvent(
                   QResizeEvent* arg2) = 0; 
};

class QAbstractItemViewWrapper
{

/* -------------------------------------------------------------------------------------------- */

public:
    struct setModel1CallArgs : BindingUtil::CallArgs {
        setModel1CallArgs(
                QAbstractItemView* thiz,
                    QAbstractItemModel* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QAbstractItemView*> arg1;
        ToLua<QAbstractItemModel*> arg2;
    };
    
    static int setModel1_doLua(lua_State* L);

/* -------------------------------------------------------------------------------------------- */

public:
    struct setSelectionModel1CallArgs : BindingUtil::CallArgs {
        setSelectionModel1CallArgs(
                QAbstractItemView* thiz,
                    QItemSelectionModel* arg2) 
              : BindingUtil::CallArgs(thiz),
                arg1(thiz),
                arg2(arg2) 
        {}

        ToLua<QAbstractItemView*> arg1;
        ToLua<QItemSelectionModel*> arg2;
    };
    
    static int setSelectionModel1_doLua(lua_State* L);

/* -------------------------------------------------------------------------------------------- */

};

} // namespace lqtk

#endif // LQTK_QAbstractItemView_WRAPPER_HPP
