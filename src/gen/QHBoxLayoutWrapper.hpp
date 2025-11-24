#ifndef LQTK_QHBoxLayout_WRAPPER_HPP
#define LQTK_QHBoxLayout_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QHBoxLayoutWrapper : public QHBoxLayout
{
public:

/* -------------------------------------------------------------------------------------------- */

    QHBoxLayoutWrapper();
    QHBoxLayoutWrapper(
                   QWidget* arg1); 

/* -------------------------------------------------------------------------------------------- */

private:
    static int lqtk_destruct(lua_State* L);
public:
    ~QHBoxLayoutWrapper();



/* -------------------------------------------------------------------------------------------- */
public:
    void addItem(
                   QLayoutItem* arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    int count() const override;

/* -------------------------------------------------------------------------------------------- */
public:
    bool hasHeightForWidth() const override;

/* -------------------------------------------------------------------------------------------- */
public:
    int heightForWidth(
                   int arg2) const override; 

/* -------------------------------------------------------------------------------------------- */
public:
    QLayoutItem* itemAt(
                   int arg2) const override; 

/* -------------------------------------------------------------------------------------------- */
public:
    QSize sizeHint() const override;

/* -------------------------------------------------------------------------------------------- */
public:
    QLayoutItem* takeAt(
                   int arg2) override; 

/* -------------------------------------------------------------------------------------------- */
public:
    QRect geometry() const override;

/* -------------------------------------------------------------------------------------------- */
public:
    void setGeometry(
                   const QRect& arg2) override; 

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

#endif // LQTK_QHBoxLayout_WRAPPER_HPP
