#ifndef LQTK_QStandardItem_WRAPPER_HPP
#define LQTK_QStandardItem_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QStandardItemWrapper : public QStandardItem
                      , public ObjectGuard::Holder<QStandardItem>
{
public:

/* -------------------------------------------------------------------------------------------- */

    QStandardItemWrapper();
    QStandardItemWrapper(
                   QString arg1); 

/* -------------------------------------------------------------------------------------------- */

    ~QStandardItemWrapper();

    ObjectGuard* lqtk_getObjectGuard() const {
        return ObjectGuard::Holder<QStandardItem>::lqtk_getObjectGuard();
    }

};

} // namespace lqtk

#endif // LQTK_QStandardItem_WRAPPER_HPP
