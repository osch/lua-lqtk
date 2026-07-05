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
#include "QWidgetBinding2.hpp"

/* ============================================================================================ */

using namespace lqtk;

/* ============================================================================================ */

void QWidgetBinding2::assert_new()
{
    if (!QCoreApplication::instance()) {
        throw std::runtime_error("Must construct a QApplication before a QWidget");
    }
}
