#ifndef LQTK_QPainter_WRAPPER_HPP
#define LQTK_QPainter_WRAPPER_HPP

#include "BindingUtil.hpp"
#include "QPainterWrapperBase.hpp"

namespace lqtk
{

class QPainterWrapper : public QPainterWrapperBase
{
public:

/* -------------------------------------------------------------------------------------------- */

    QPainterWrapper();
    QPainterWrapper(
                   QWidget* arg1); 
    QPainterWrapper(
                   QPixmapWrapperBase* arg1); 

/* -------------------------------------------------------------------------------------------- */

    ~QPainterWrapper();



/* -------------------------------------------------------------------------------------------- */

    void lqtk_checkValidity() const {
        const char* err = QPainterWrapperBase::lqtk_validityError();
        if (err) {
            throw std::runtime_error(err);
        }
    }
};

} // namespace lqtk

#endif // LQTK_QPainter_WRAPPER_HPP
