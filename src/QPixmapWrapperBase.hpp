#ifndef Q_PIXMAP_WRAPPER_BASE_HPP
#define Q_PIXMAP_WRAPPER_BASE_HPP

namespace lqtk
{

class QPixmapWrapperBase : public QPixmap
{
protected:
    QPixmapWrapperBase()
    {}

    QPixmapWrapperBase(int arg1, int arg2)
      : QPixmap(arg1, arg2)
    {}

    QPixmapWrapperBase(QString arg1)
      : QPixmap(arg1)
    {}

    QPixmapWrapperBase(QSize arg1)
      : QPixmap(arg1)
    {}

    QPixmapWrapperBase(QPixmap arg1)
      : QPixmap(arg1)
    {}

public:    
    virtual ObjectGuard* lqtk_getObjectGuard() const = 0;
};

} // namespace lqtk

#endif // Q_PIXMAP_WRAPPER_BASE_HPP
