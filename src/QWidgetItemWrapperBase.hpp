#ifndef Q_WIDGET_ITEM_WRAPPER_BASE_HPP
#define Q_WIDGET_ITEM_WRAPPER_BASE_HPP

namespace lqtk
{

class QWidgetItemWrapperBase : public QWidgetItem
{
public:
    QWidgetItemWrapperBase(QWidget* arg1) 
        : QWidgetItem(arg1) ,
          hadWidget(arg1 != nullptr),
          guardedWidget(arg1)
    {}
    
    const char* lqtk_validityError() const {
        if (hadWidget && guardedWidget.isNull()) {
            return "QWidget in QWidgetItem has been destructed";
        } else {
            return nullptr;
        }
    }
    
private:
    bool hadWidget;
    QPointer<QWidget> guardedWidget;
};

} // namespace lqtk

#endif // Q_WIDGET_ITEM_WRAPPER_BASE_HPP
