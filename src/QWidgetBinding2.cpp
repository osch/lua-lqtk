/* ============================================================================================ */

#include <stdexcept>

#include <QObject>
#include <QPointer>
#include <QWidget>
#include <QMetaMethod>
#include <QCoreApplication>

/* ============================================================================================ */

#include "init.h"
#include "util.hpp"

#include "ClassInfo.hpp"
#include "QWidgetBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;

/* ============================================================================================ */

void QWidgetBinding::intercept_new()
{
    if (!QCoreApplication::instance()) {
        throw std::runtime_error("Must construct a QApplication before a QWidget");
    }
}
