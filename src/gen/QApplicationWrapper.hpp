#ifndef LQTK_QApplication_WRAPPER_HPP
#define LQTK_QApplication_WRAPPER_HPP

#include "BindingUtil.hpp"
#include "QApplicationWrapperBase.hpp"

namespace lqtk
{

class QApplicationExportWrapper
{
public:
    virtual bool lqtk_QApplication_event(
                   QEvent* arg2) = 0; 
};

class QApplicationWrapper : public QApplicationWrapperBase
                      , public QApplicationExportWrapper
{
public:

/* -------------------------------------------------------------------------------------------- */

    QApplicationWrapper(
                   int arg1, 
                   char** arg2); 

/* -------------------------------------------------------------------------------------------- */

private:
    static int lqtk_destruct(lua_State* L);
public:
    ~QApplicationWrapper();
    bool lqtk_QApplication_event(
                   QEvent* arg1) override; 
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

#endif // LQTK_QApplication_WRAPPER_HPP
