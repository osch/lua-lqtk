#ifndef LQTK_QWidgetItem_WRAPPER_HPP
#define LQTK_QWidgetItem_WRAPPER_HPP

#include "BindingUtil.hpp"
#include "QWidgetItemWrapperBase.hpp"

namespace lqtk
{

class QWidgetItemWrapper : public QWidgetItemWrapperBase
                      , public ObjectGuard::Holder<QWidgetItem>
{
public:

/* -------------------------------------------------------------------------------------------- */

    QWidgetItemWrapper(
                   QWidget* arg1); 

/* -------------------------------------------------------------------------------------------- */

private:
    static int lqtk_destruct(lua_State* L);
public:
    ~QWidgetItemWrapper();

    ObjectGuard* lqtk_getObjectGuard() const {
        return ObjectGuard::Holder<QWidgetItem>::lqtk_getObjectGuard();
    }


/* -------------------------------------------------------------------------------------------- */

    void lqtk_checkValidity() const {
        const char* err = QWidgetItemWrapperBase::lqtk_validityError();
        if (err) {
            throw std::runtime_error(err);
        }
    }

/* -------------------------------------------------------------------------------------------- */
public:
    struct hasHeightForWidth1CallArgs : BindingUtil::CallArgs {
        hasHeightForWidth1CallArgs(
                QWidgetItem* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<bool> rslt;
        ToLua<QWidgetItem*> arg1;
    };
    
    static int hasHeightForWidth1_doLua(lua_State* L);
public:
    bool hasHeightForWidth() const override;

/* -------------------------------------------------------------------------------------------- */
public:
    struct heightForWidth1CallArgs : BindingUtil::CallArgs {
        heightForWidth1CallArgs(
                QWidgetItem* thiz,
                    int arg2) 
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz),
                arg2(arg2) 
        {}

        bool hasValidResult;
        FromLua<int> rslt;
        ToLua<QWidgetItem*> arg1;
        ToLua<int> arg2;
    };
    
    static int heightForWidth1_doLua(lua_State* L);
public:
    int heightForWidth(
                   int arg2) const override; 

/* -------------------------------------------------------------------------------------------- */
public:
    struct widget1CallArgs : BindingUtil::CallArgs {
        widget1CallArgs(
                QWidgetItem* thiz)
              : BindingUtil::CallArgs(thiz),
                hasValidResult(false),
                arg1(thiz)
        {}

        bool hasValidResult;
        FromLua<QWidget*> rslt;
        ToLua<QWidgetItem*> arg1;
    };
    
    static int widget1_doLua(lua_State* L);
public:
    QWidget* widget() const override;

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

#endif // LQTK_QWidgetItem_WRAPPER_HPP
