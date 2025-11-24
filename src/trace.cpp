#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

#include <QMutex>
#include <QMutexLocker>

#include "init.h"

#include "trace.hpp"

using namespace lqtk;

static QMutex mutex;
static FILE* file = NULL;

bool trace::setTraceFile(FILE* newFile)
{
     QMutexLocker locker(&mutex);
     
     if (file) {
        fclose(file);
        file = NULL;
     }
     if (newFile) {
        int fd = fileno(newFile);
        if (fd == -1) return false;
        int fd2 = dup(fd);
        if (fd2 == -1) return false;
        file = fdopen(fd2, "w");
     }
     return true;
}

void trace::printf(const char* fmt, ...)
{
    if (file) {
        QMutexLocker locker(&mutex);
        if (file) {
            va_list args;
            va_start(args, fmt);
            vfprintf(file, fmt, args);
            va_end(args);
            fflush(file);
        }
    }
}

