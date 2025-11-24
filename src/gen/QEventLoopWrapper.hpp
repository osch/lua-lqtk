#ifndef LQTK_QEventLoop_WRAPPER_HPP
#define LQTK_QEventLoop_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QEventLoopWrapper : public QEventLoop
{
public:

/* -------------------------------------------------------------------------------------------- */

    QEventLoopWrapper();

/* -------------------------------------------------------------------------------------------- */

private:
    static int lqtk_destruct(lua_State* L);
public:
    ~QEventLoopWrapper();



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

#endif // LQTK_QEventLoop_WRAPPER_HPP
