#ifndef Q_PAINTER_WRAPPER_BASE_HPP
#define Q_PAINTER_WRAPPER_BASE_HPP

#include "ObjectGuard.hpp"
#include "QPixmapWrapperBase.hpp"

namespace lqtk
{

class QPainterWrapperBase : public QPainter
{
public:
    QPainterWrapperBase() 
        : QPainter() ,
          hadWidget(false),
          hadPixmap(false),
          pixmapGuard(nullptr)
    {}

    QPainterWrapperBase(QWidget* arg1) 
        : QPainter(arg1) ,
          hadWidget(arg1 != nullptr),
          hadPixmap(false),
          guardedWidget(arg1),
          pixmapGuard(nullptr)
    {}

    QPainterWrapperBase(QPixmapWrapperBase* arg1) 
        : QPainter(arg1),
          hadWidget(false),
          hadPixmap(arg1 != nullptr),
          pixmapGuard(arg1->lqtk_getObjectGuard()->incRef())
    {}
    
    ~QPainterWrapperBase() {
        ObjectGuard::decRef(&pixmapGuard);
    }

    const char* lqtk_validityError() const {
        if (hadWidget && guardedWidget.isNull()) {
            return "QWidget in QPainter has been destructed";
        } else if (hadPixmap && !pixmapGuard->objectPtr) {
            return "QPixmap in QPainter has been destructed";
        } else {
            return nullptr;
        }
    }
    
    bool lqtk_begin(QWidget* widget) {
        ObjectGuard::decRef(&pixmapGuard);
        guardedWidget = widget;
        hadWidget = (widget != nullptr);
        hadPixmap = false;
        return QPainter::begin(widget);
    }
    
    bool lqtk_begin(QPixmapWrapperBase* pixmap) {
        ObjectGuard::decRef(&pixmapGuard);
        guardedWidget = nullptr;
        hadWidget = false;
        hadPixmap = (pixmap != nullptr);
        pixmapGuard = pixmap->lqtk_getObjectGuard()->incRef();
        return QPainter::begin(pixmap);
    }
    
private:
    bool hadWidget;
    bool hadPixmap;
    QPointer<QWidget> guardedWidget;
    ObjectGuard*      pixmapGuard;
};

} // namespace lqtk

#endif // Q_PAINTER_WRAPPER_BASE_HPP
