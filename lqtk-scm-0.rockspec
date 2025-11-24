package = "lqtk"
version = "scm-0"
local versionNumber = version:gsub("^(.*)-.-$", "%1")
source = {
  url = "https://github.com/osch/lua-lqtk/archive/master.zip",
  dir = "lua-lqtk-master",
}
description = {
    summary = "Lua Qt Toolkit",
    detailed = [[
        A Lua binding for Qt 6
    ]],
    homepage = "http://github.com/osch/lua-lqtk",
    license = "MIT/X11"
}
dependencies = {
    "lua = 5.4",
    "luarocks-build-extended"
}
external_dependencies = {
  QT = {
    header = "QtWidgets/qwidget.h"
  }
}

build = {
    type = "extended",
    modules = 
    {
        lqtk = 
        {
            defines = {
                "LQTK_VERSION="..versionNumber
            },
            sources = {
                -- MODULES BEGIN
                --
                "src/BindingUtil.cpp",
                "src/ClassInfo.cpp",
                "src/ClassUdata.cpp",
                "src/ConnectionUdata.cpp",
                "src/FromLua.cpp",
                "src/Listener.cpp",
                "src/Member.cpp",
                "src/NamespaceUdata.cpp",
                "src/ObjectUdata.cpp",
                "src/QApplicationBinding2.cpp",
                "src/QByteArrayBinding2.cpp",
                "src/QCharBinding2.cpp",
                "src/QObjectBinding2.cpp",
                "src/QPainterBinding2.cpp",
                "src/QPointBinding2.cpp",
                "src/QRectBinding2.cpp",
                "src/QRectFBinding2.cpp",
                "src/QSizeBinding2.cpp",
                "src/QStandardItemBinding2.cpp",
                "src/QStringBinding2.cpp",
                "src/QTransformBinding2.cpp",
                "src/QWidgetBinding2.cpp",
                "src/StateGuard.cpp",
                "src/ToLua.cpp",
                "src/gen/QAbstractButtonBinding.cpp",
                "src/gen/QAbstractItemModelBinding.cpp",
                "src/gen/QAbstractItemViewBinding.cpp",
                "src/gen/QAbstractScrollAreaBinding.cpp",
                "src/gen/QActionBinding.cpp",
                "src/gen/QApplicationBinding.cpp",
                "src/gen/QBoxLayoutBinding.cpp",
                "src/gen/QBrushBinding.cpp",
                "src/gen/QByteArrayBinding.cpp",
                "src/gen/QCharBinding.cpp",
                "src/gen/QCloseEventBinding.cpp",
                "src/gen/QColorBinding.cpp",
                "src/gen/QContextMenuEventBinding.cpp",
                "src/gen/QCoreApplicationBinding.cpp",
                "src/gen/QDateTimeBinding.cpp",
                "src/gen/QDeadlineTimerBinding.cpp",
                "src/gen/QDialogBinding.cpp",
                "src/gen/QDialogButtonBoxBinding.cpp",
                "src/gen/QEventBinding.cpp",
                "src/gen/QEventLoopBinding.cpp",
                "src/gen/QFontBinding.cpp",
                "src/gen/QFrameBinding.cpp",
                "src/gen/QGradientBinding.cpp",
                "src/gen/QGridLayoutBinding.cpp",
                "src/gen/QGuiApplicationBinding.cpp",
                "src/gen/QHBoxLayoutBinding.cpp",
                "src/gen/QHeaderViewBinding.cpp",
                "src/gen/QInputEventBinding.cpp",
                "src/gen/QKeyCombinationBinding.cpp",
                "src/gen/QKeyEventBinding.cpp",
                "src/gen/QKeySequenceBinding.cpp",
                "src/gen/QLabelBinding.cpp",
                "src/gen/QLayoutBinding.cpp",
                "src/gen/QLayoutItemBinding.cpp",
                "src/gen/QLineEditBinding.cpp",
                "src/gen/QLineFBinding.cpp",
                "src/gen/QLinearGradientBinding.cpp",
                "src/gen/QMainWindowBinding.cpp",
                "src/gen/QMenuBarBinding.cpp",
                "src/gen/QMenuBinding.cpp",
                "src/gen/QModelIndexBinding.cpp",
                "src/gen/QMouseEventBinding.cpp",
                "src/gen/QObjectBinding.cpp",
                "src/gen/QOpenGLWidgetBinding.cpp",
                "src/gen/QPaintEventBinding.cpp",
                "src/gen/QPainterBinding.cpp",
                "src/gen/QPainterPathBinding.cpp",
                "src/gen/QPaletteBinding.cpp",
                "src/gen/QPixmapBinding.cpp",
                "src/gen/QPointBinding.cpp",
                "src/gen/QPointFBinding.cpp",
                "src/gen/QPointerEventBinding.cpp",
                "src/gen/QPolygonFBinding.cpp",
                "src/gen/QPushButtonBinding.cpp",
                "src/gen/QRectBinding.cpp",
                "src/gen/QRectFBinding.cpp",
                "src/gen/QRegionBinding.cpp",
                "src/gen/QRegularExpressionBinding.cpp",
                "src/gen/QRegularExpressionMatchBinding.cpp",
                "src/gen/QRegularExpressionMatchIteratorBinding.cpp",
                "src/gen/QResizeEventBinding.cpp",
                "src/gen/QShowEventBinding.cpp",
                "src/gen/QSinglePointEventBinding.cpp",
                "src/gen/QSizeBinding.cpp",
                "src/gen/QSizeFBinding.cpp",
                "src/gen/QSizePolicyBinding.cpp",
                "src/gen/QStandardItemBinding.cpp",
                "src/gen/QStandardItemModelBinding.cpp",
                "src/gen/QStringBinding.cpp",
                "src/gen/QTabWidgetBinding.cpp",
                "src/gen/QTableViewBinding.cpp",
                "src/gen/QThreadBinding.cpp",
                "src/gen/QTimeBinding.cpp",
                "src/gen/QTimerBinding.cpp",
                "src/gen/QTimerEventBinding.cpp",
                "src/gen/QTransformBinding.cpp",
                "src/gen/QTreeViewBinding.cpp",
                "src/gen/QVBoxLayoutBinding.cpp",
                "src/gen/QVariantBinding.cpp",
                "src/gen/QWidgetBinding.cpp",
                "src/gen/QWidgetItemBinding.cpp",
                "src/gen/QtBinding.cpp",
                "src/gen/registryEntries.cpp",
                "src/main.cpp",
                "src/moc_Listener.cpp",
                "src/registry.cpp",
                "src/trace.cpp",
                "src/util.cpp",
                --
                -- MODULES END
            },
            libraries = {
            	"Qt6Core",
            	"Qt6Gui",
                "Qt6Widgets", 
                "Qt6OpenGLWidgets",
            },
            incdirs = {
                "src",
                "src/gen",
                "$(QT_INCDIR)",
                "$(QT_INCDIR)/QtCore",
                "$(QT_INCDIR)/QtGui",
                "$(QT_INCDIR)/QtWidgets",
                "$(QT_INCDIR)/QtOpenGLWidgets",
            },
            libdirs = {
                "$(QT_LIBDIR)",
            },
        }
    },
    copy_directories = {}
}
