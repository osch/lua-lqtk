/* ============================================================================================ */

#include "init.h"

/* ============================================================================================ */

namespace lqtk
{

    struct QAbstractButtonBinding { static int pushBinding(lua_State* L); };
    struct QAbstractItemModelBinding { static int pushBinding(lua_State* L); };
    struct QAbstractItemViewBinding { static int pushBinding(lua_State* L); };
    struct QAbstractScrollAreaBinding { static int pushBinding(lua_State* L); };
    struct QActionBinding { static int pushBinding(lua_State* L); };
    struct QApplicationBinding { static int pushBinding(lua_State* L); };
    struct QBoxLayoutBinding { static int pushBinding(lua_State* L); };
    struct QBrushBinding { static int pushBinding(lua_State* L); };
    struct QByteArrayBinding { static int pushBinding(lua_State* L); };
    struct QCharBinding { static int pushBinding(lua_State* L); };
    struct QCloseEventBinding { static int pushBinding(lua_State* L); };
    struct QColorBinding { static int pushBinding(lua_State* L); };
    struct QContextMenuEventBinding { static int pushBinding(lua_State* L); };
    struct QCoreApplicationBinding { static int pushBinding(lua_State* L); };
    struct QDateTimeBinding { static int pushBinding(lua_State* L); };
    struct QDeadlineTimerBinding { static int pushBinding(lua_State* L); };
    struct QDialogBinding { static int pushBinding(lua_State* L); };
    struct QDialogButtonBoxBinding { static int pushBinding(lua_State* L); };
    struct QEventBinding { static int pushBinding(lua_State* L); };
    struct QEventLoopBinding { static int pushBinding(lua_State* L); };
    struct QFontBinding { static int pushBinding(lua_State* L); };
    struct QFrameBinding { static int pushBinding(lua_State* L); };
    struct QGradientBinding { static int pushBinding(lua_State* L); };
    struct QGridLayoutBinding { static int pushBinding(lua_State* L); };
    struct QGuiApplicationBinding { static int pushBinding(lua_State* L); };
    struct QHBoxLayoutBinding { static int pushBinding(lua_State* L); };
    struct QHeaderViewBinding { static int pushBinding(lua_State* L); };
    struct QInputEventBinding { static int pushBinding(lua_State* L); };
    struct QKeyCombinationBinding { static int pushBinding(lua_State* L); };
    struct QKeyEventBinding { static int pushBinding(lua_State* L); };
    struct QKeySequenceBinding { static int pushBinding(lua_State* L); };
    struct QLabelBinding { static int pushBinding(lua_State* L); };
    struct QLayoutBinding { static int pushBinding(lua_State* L); };
    struct QLayoutItemBinding { static int pushBinding(lua_State* L); };
    struct QLineEditBinding { static int pushBinding(lua_State* L); };
    struct QLineFBinding { static int pushBinding(lua_State* L); };
    struct QLinearGradientBinding { static int pushBinding(lua_State* L); };
    struct QMainWindowBinding { static int pushBinding(lua_State* L); };
    struct QMenuBinding { static int pushBinding(lua_State* L); };
    struct QMenuBarBinding { static int pushBinding(lua_State* L); };
    struct QModelIndexBinding { static int pushBinding(lua_State* L); };
    struct QMouseEventBinding { static int pushBinding(lua_State* L); };
    struct QObjectBinding { static int pushBinding(lua_State* L); };
    struct QOpenGLWidgetBinding { static int pushBinding(lua_State* L); };
    struct QPaintEventBinding { static int pushBinding(lua_State* L); };
    struct QPainterBinding { static int pushBinding(lua_State* L); };
    struct QPainterPathBinding { static int pushBinding(lua_State* L); };
    struct QPaletteBinding { static int pushBinding(lua_State* L); };
    struct QPixmapBinding { static int pushBinding(lua_State* L); };
    struct QPointBinding { static int pushBinding(lua_State* L); };
    struct QPointFBinding { static int pushBinding(lua_State* L); };
    struct QPointerEventBinding { static int pushBinding(lua_State* L); };
    struct QPolygonFBinding { static int pushBinding(lua_State* L); };
    struct QPushButtonBinding { static int pushBinding(lua_State* L); };
    struct QRectBinding { static int pushBinding(lua_State* L); };
    struct QRectFBinding { static int pushBinding(lua_State* L); };
    struct QRegionBinding { static int pushBinding(lua_State* L); };
    struct QRegularExpressionBinding { static int pushBinding(lua_State* L); };
    struct QRegularExpressionMatchBinding { static int pushBinding(lua_State* L); };
    struct QRegularExpressionMatchIteratorBinding { static int pushBinding(lua_State* L); };
    struct QResizeEventBinding { static int pushBinding(lua_State* L); };
    struct QShowEventBinding { static int pushBinding(lua_State* L); };
    struct QSinglePointEventBinding { static int pushBinding(lua_State* L); };
    struct QSizeBinding { static int pushBinding(lua_State* L); };
    struct QSizeFBinding { static int pushBinding(lua_State* L); };
    struct QSizePolicyBinding { static int pushBinding(lua_State* L); };
    struct QStandardItemBinding { static int pushBinding(lua_State* L); };
    struct QStandardItemModelBinding { static int pushBinding(lua_State* L); };
    struct QStringBinding { static int pushBinding(lua_State* L); };
    struct QTabWidgetBinding { static int pushBinding(lua_State* L); };
    struct QTableViewBinding { static int pushBinding(lua_State* L); };
    struct QThreadBinding { static int pushBinding(lua_State* L); };
    struct QTimeBinding { static int pushBinding(lua_State* L); };
    struct QTimerBinding { static int pushBinding(lua_State* L); };
    struct QTimerEventBinding { static int pushBinding(lua_State* L); };
    struct QTransformBinding { static int pushBinding(lua_State* L); };
    struct QTreeViewBinding { static int pushBinding(lua_State* L); };
    struct QVBoxLayoutBinding { static int pushBinding(lua_State* L); };
    struct QVariantBinding { static int pushBinding(lua_State* L); };
    struct QWidgetBinding { static int pushBinding(lua_State* L); };
    struct QWidgetItemBinding { static int pushBinding(lua_State* L); };
    struct QtBinding { static int pushBinding(lua_State* L); };

namespace registry
{
    extern const luaL_Reg entries[];
    
    void pushEntryKeyValue(lua_State* L, int i);
    
    int getEntryCount();
}

const luaL_Reg registry::entries[] =
{
        { "QAbstractButton",                 QAbstractButtonBinding::pushBinding },
        { "QAbstractItemModel",              QAbstractItemModelBinding::pushBinding },
        { "QAbstractItemView",               QAbstractItemViewBinding::pushBinding },
        { "QAbstractScrollArea",             QAbstractScrollAreaBinding::pushBinding },
        { "QAction",                         QActionBinding::pushBinding },
        { "QApplication",                    QApplicationBinding::pushBinding },
        { "QBoxLayout",                      QBoxLayoutBinding::pushBinding },
        { "QBrush",                          QBrushBinding::pushBinding },
        { "QByteArray",                      QByteArrayBinding::pushBinding },
        { "QChar",                           QCharBinding::pushBinding },
        { "QCloseEvent",                     QCloseEventBinding::pushBinding },
        { "QColor",                          QColorBinding::pushBinding },
        { "QContextMenuEvent",               QContextMenuEventBinding::pushBinding },
        { "QCoreApplication",                QCoreApplicationBinding::pushBinding },
        { "QDateTime",                       QDateTimeBinding::pushBinding },
        { "QDeadlineTimer",                  QDeadlineTimerBinding::pushBinding },
        { "QDialog",                         QDialogBinding::pushBinding },
        { "QDialogButtonBox",                QDialogButtonBoxBinding::pushBinding },
        { "QEvent",                          QEventBinding::pushBinding },
        { "QEventLoop",                      QEventLoopBinding::pushBinding },
        { "QFont",                           QFontBinding::pushBinding },
        { "QFrame",                          QFrameBinding::pushBinding },
        { "QGradient",                       QGradientBinding::pushBinding },
        { "QGridLayout",                     QGridLayoutBinding::pushBinding },
        { "QGuiApplication",                 QGuiApplicationBinding::pushBinding },
        { "QHBoxLayout",                     QHBoxLayoutBinding::pushBinding },
        { "QHeaderView",                     QHeaderViewBinding::pushBinding },
        { "QInputEvent",                     QInputEventBinding::pushBinding },
        { "QKeyCombination",                 QKeyCombinationBinding::pushBinding },
        { "QKeyEvent",                       QKeyEventBinding::pushBinding },
        { "QKeySequence",                    QKeySequenceBinding::pushBinding },
        { "QLabel",                          QLabelBinding::pushBinding },
        { "QLayout",                         QLayoutBinding::pushBinding },
        { "QLayoutItem",                     QLayoutItemBinding::pushBinding },
        { "QLineEdit",                       QLineEditBinding::pushBinding },
        { "QLineF",                          QLineFBinding::pushBinding },
        { "QLinearGradient",                 QLinearGradientBinding::pushBinding },
        { "QMainWindow",                     QMainWindowBinding::pushBinding },
        { "QMenu",                           QMenuBinding::pushBinding },
        { "QMenuBar",                        QMenuBarBinding::pushBinding },
        { "QModelIndex",                     QModelIndexBinding::pushBinding },
        { "QMouseEvent",                     QMouseEventBinding::pushBinding },
        { "QObject",                         QObjectBinding::pushBinding },
        { "QOpenGLWidget",                   QOpenGLWidgetBinding::pushBinding },
        { "QPaintEvent",                     QPaintEventBinding::pushBinding },
        { "QPainter",                        QPainterBinding::pushBinding },
        { "QPainterPath",                    QPainterPathBinding::pushBinding },
        { "QPalette",                        QPaletteBinding::pushBinding },
        { "QPixmap",                         QPixmapBinding::pushBinding },
        { "QPoint",                          QPointBinding::pushBinding },
        { "QPointF",                         QPointFBinding::pushBinding },
        { "QPointerEvent",                   QPointerEventBinding::pushBinding },
        { "QPolygonF",                       QPolygonFBinding::pushBinding },
        { "QPushButton",                     QPushButtonBinding::pushBinding },
        { "QRect",                           QRectBinding::pushBinding },
        { "QRectF",                          QRectFBinding::pushBinding },
        { "QRegion",                         QRegionBinding::pushBinding },
        { "QRegularExpression",              QRegularExpressionBinding::pushBinding },
        { "QRegularExpressionMatch",         QRegularExpressionMatchBinding::pushBinding },
        { "QRegularExpressionMatchIterator", QRegularExpressionMatchIteratorBinding::pushBinding },
        { "QResizeEvent",                    QResizeEventBinding::pushBinding },
        { "QShowEvent",                      QShowEventBinding::pushBinding },
        { "QSinglePointEvent",               QSinglePointEventBinding::pushBinding },
        { "QSize",                           QSizeBinding::pushBinding },
        { "QSizeF",                          QSizeFBinding::pushBinding },
        { "QSizePolicy",                     QSizePolicyBinding::pushBinding },
        { "QStandardItem",                   QStandardItemBinding::pushBinding },
        { "QStandardItemModel",              QStandardItemModelBinding::pushBinding },
        { "QString",                         QStringBinding::pushBinding },
        { "QTabWidget",                      QTabWidgetBinding::pushBinding },
        { "QTableView",                      QTableViewBinding::pushBinding },
        { "QThread",                         QThreadBinding::pushBinding },
        { "QTime",                           QTimeBinding::pushBinding },
        { "QTimer",                          QTimerBinding::pushBinding },
        { "QTimerEvent",                     QTimerEventBinding::pushBinding },
        { "QTransform",                      QTransformBinding::pushBinding },
        { "QTreeView",                       QTreeViewBinding::pushBinding },
        { "QVBoxLayout",                     QVBoxLayoutBinding::pushBinding },
        { "QVariant",                        QVariantBinding::pushBinding },
        { "QWidget",                         QWidgetBinding::pushBinding },
        { "QWidgetItem",                     QWidgetItemBinding::pushBinding },
        { "Qt",                              QtBinding::pushBinding },
        { NULL,                              NULL }
};


void registry::pushEntryKeyValue(lua_State* L, int i)
{
    if (1 <= i && i <= 82) {
        lua_pushstring(L, entries[i-1].name);
        entries[i-1].func(L);
    } else {
        lua_pushnil(L);
        lua_pushnil(L);
    }
}

int registry::getEntryCount()
{
    return 82;
}

} // namespace lqtk
