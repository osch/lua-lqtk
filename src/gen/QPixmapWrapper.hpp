#ifndef LQTK_QPixmap_WRAPPER_HPP
#define LQTK_QPixmap_WRAPPER_HPP

#include "BindingUtil.hpp"
#include "QPixmapWrapperBase.hpp"

namespace lqtk
{

class QPixmapWrapper : public QPixmapWrapperBase
                      , public ObjectGuard::Holder<QPixmap>
{
public:

/* -------------------------------------------------------------------------------------------- */

    QPixmapWrapper();
    QPixmapWrapper(
                   int arg1, 
                   int arg2); 
    QPixmapWrapper(
                   QString arg1); 
    QPixmapWrapper(
                   QSize arg1); 
    QPixmapWrapper(
                   QPixmap arg1); 

/* -------------------------------------------------------------------------------------------- */

    ~QPixmapWrapper();

    ObjectGuard* lqtk_getObjectGuard() const {
        return ObjectGuard::Holder<QPixmap>::lqtk_getObjectGuard();
    }

};

} // namespace lqtk

#endif // LQTK_QPixmap_WRAPPER_HPP
