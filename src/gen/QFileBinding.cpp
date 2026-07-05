// Type: QFile
// Base: QFileDevice

/* ============================================================================================ */

#include <QByteArray>
#include <QEvent>
#include <QFile>
#include <QFileDevice>
#include <QIODevice>
#include <QIODeviceBase>
#include <QObject>
#include <QString>

#include <QPointer>
#include <stdexcept>

/* ============================================================================================ */

#include "init.h"
#include "util.hpp"
#include "ClassInfo.hpp"
#include "BindingUtil.hpp"
#include "ObjectUdata.hpp"
#include "ClassUdata.hpp"
#include "trace.hpp"
#include "FromLua.hpp"
#include "ToLua.hpp"
#include "registry.hpp"
#include "StateGuard.hpp"
#include "QByteArrayBinding.hpp"
#include "QEventBinding.hpp"
#include "QFileBinding.hpp"
#include "QFileDeviceBinding.hpp"
#include "QIODeviceBinding.hpp"
#include "QIODeviceBaseBinding.hpp"
#include "QObjectBinding.hpp"
#include "QStringBinding.hpp"
#include "QObjectWrapper.hpp"
#include "QIODeviceWrapper.hpp"
#include "QFileDeviceWrapper.hpp"
#include "QFileWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QFileWrapper::QFileWrapper()
        : QFile(),
          lqtk_stateGuard(nullptr)
    {}
    QFileWrapper::QFileWrapper(
                   QString arg1) 
        : QFile(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}
    QFileWrapper::QFileWrapper(
                   QObject* arg1) 
        : QFile(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}
    QFileWrapper::QFileWrapper(
                   QString arg1, 
                   QObject* arg2) 
        : QFile(
                   arg1,
                   arg2),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QFileWrapper::lqtk_destruct(lua_State* L) {
        QFile* objPtr = (QFile*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QFileWrapper::~QFileWrapper() {
        trace::printf("Deleting lqtk::QFileWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->getL();
            if (L) {
                QFile* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QFile");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

/* -------------------------------------------------------------------------------------------- */
    QFileDevice::Permissions QFileWrapper::permissions() const
    {
        lua_State* L = getL();
        if (L) {
            QFileDeviceWrapper::permissions1CallArgs args(
                    const_cast<QFileWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, QFileDeviceWrapper::permissions1_doLua, &args, "QFile", "permissions");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QFile", "permissions", msg);
                }
            }
        }
        return QFile::permissions();
    }

/* -------------------------------------------------------------------------------------------- */
    bool QFileWrapper::resize(
                   qint64 arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QFileDeviceWrapper::resize1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QFileDeviceWrapper::resize1_doLua, &args, "QFile", "resize");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QFile", "resize", msg);
                }
            }
        }
        return QFile::resize(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QFileWrapper::setPermissions(
                   QFileDevice::Permissions arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QFileDeviceWrapper::setPermissions1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QFileDeviceWrapper::setPermissions1_doLua, &args, "QFile", "setPermissions");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QFile", "setPermissions", msg);
                }
            }
        }
        return QFile::setPermissions(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    QString QFileWrapper::fileName() const
    {
        lua_State* L = getL();
        if (L) {
            QFileDeviceWrapper::fileName1CallArgs args(
                    const_cast<QFileWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, QFileDeviceWrapper::fileName1_doLua, &args, "QFile", "fileName");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a string";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QFile", "fileName", msg);
                }
            }
        }
        return QFile::fileName();
    }

/* -------------------------------------------------------------------------------------------- */
    bool QFileWrapper::open(
                   QIODeviceBase::OpenMode arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QIODeviceWrapper::open1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QIODeviceWrapper::open1_doLua, &args, "QFile", "open");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QFile", "open", msg);
                }
            }
        }
        return QFile::open(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    qint64 QFileWrapper::size() const
    {
        lua_State* L = getL();
        if (L) {
            QFileDeviceWrapper::size1CallArgs args(
                    const_cast<QFileWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, QFileDeviceWrapper::size1_doLua, &args, "QFile", "size");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QFile", "size", msg);
                }
            }
        }
        return QFile::size();
    }

/* -------------------------------------------------------------------------------------------- */
    bool QFileWrapper::atEnd() const
    {
        lua_State* L = getL();
        if (L) {
            QFileDeviceWrapper::atEnd1CallArgs args(
                    const_cast<QFileWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, QFileDeviceWrapper::atEnd1_doLua, &args, "QFile", "atEnd");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QFile", "atEnd", msg);
                }
            }
        }
        return QFile::atEnd();
    }

/* -------------------------------------------------------------------------------------------- */
    void QFileWrapper::close()
    {
        lua_State* L = getL();
        if (L) {
            QIODeviceWrapper::close1CallArgs args(
                    this
            );
            {
                BindingUtil::callLuaMethodImpl(L, QIODeviceWrapper::close1_doLua, &args, "QFile", "close");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QFile::close();
    }

/* -------------------------------------------------------------------------------------------- */
    bool QFileWrapper::isSequential() const
    {
        lua_State* L = getL();
        if (L) {
            QFileDeviceWrapper::isSequential1CallArgs args(
                    const_cast<QFileWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, QFileDeviceWrapper::isSequential1_doLua, &args, "QFile", "isSequential");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QFile", "isSequential", msg);
                }
            }
        }
        return QFile::isSequential();
    }

/* -------------------------------------------------------------------------------------------- */
    qint64 QFileWrapper::pos() const
    {
        lua_State* L = getL();
        if (L) {
            QFileDeviceWrapper::pos1CallArgs args(
                    const_cast<QFileWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, QFileDeviceWrapper::pos1_doLua, &args, "QFile", "pos");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QFile", "pos", msg);
                }
            }
        }
        return QFile::pos();
    }

/* -------------------------------------------------------------------------------------------- */
    bool QFileWrapper::seek(
                   qint64 arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QFileDeviceWrapper::seek1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QFileDeviceWrapper::seek1_doLua, &args, "QFile", "seek");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QFile", "seek", msg);
                }
            }
        }
        return QFile::seek(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QFileWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QObjectWrapper::event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QObjectWrapper::event1_doLua, &args, "QFile", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QFile", "event", msg);
                }
            }
        }
        return QFile::event(
                    arg2); 
    }

} // namespace lqtk

/* ============================================================================================ */

extern "C" {
    int lqtk_QFileDevice_atEnd(lua_State* L);
    int lqtk_QFileDevice_close(lua_State* L);
    int lqtk_QFileDevice_error(lua_State* L);
    int lqtk_QFileDevice_fileTime(lua_State* L);
    int lqtk_QFileDevice_flush(lua_State* L);
    int lqtk_QFileDevice_handle(lua_State* L);
    int lqtk_QFileDevice_isSequential(lua_State* L);
    int lqtk_QFileDevice_pos(lua_State* L);
    int lqtk_QFileDevice_seek(lua_State* L);
    int lqtk_QFileDevice_setFileTime(lua_State* L);
    int lqtk_QFileDevice_unsetError(lua_State* L);
    int lqtk_QIODevice_read(lua_State* L);
    int lqtk_QIODevice_readAll(lua_State* L);
    int lqtk_QIODevice_readLine(lua_State* L);
    int lqtk_QIODevice_write(lua_State* L);
    int lqtk_QObject_children(lua_State* L);
    int lqtk_QObject_connect(lua_State* L);
    int lqtk_QObject_event(lua_State* L);
    int lqtk_QObject_objectName(lua_State* L);
    int lqtk_QObject_parent(lua_State* L);
    int lqtk_QObject_setObjectName(lua_State* L);
    int lqtk_QObject_setParent(lua_State* L);
}

/* ============================================================================================ */


struct lqtk_QFile_copy_Args
{
    FromLua<QFile*> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<QString> arg_2_2;
    ToLua<bool> rslt_1;
};

static int lqtk_QFile_copy_doLua(lua_State* L)
{
    lqtk_QFile_copy_Args* args = (lqtk_QFile_copy_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFile::copy(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            if (!args->arg_2_2.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    QFile::copy(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QFile", "copy", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFile_copy(lua_State* L)
{
    try {
        lqtk_QFile_copy_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFile_copy_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFile_decodeName_Args
{
    FromLua<QByteArray*> arg_1_1;
    FromLua<const char*> arg_2_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QFile_decodeName_doLua(lua_State* L)
{
    lqtk_QFile_decodeName_Args* args = (lqtk_QFile_decodeName_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QFile::decodeName(*args->arg_1_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QFile::decodeName(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QFile", "decodeName", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFile_decodeName(lua_State* L)
{
    try {
        lqtk_QFile_decodeName_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFile_decodeName_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFile_encodeName_Args
{
    FromLua<QString> arg_1_1;
    ToLua<QByteArray*> rslt_1;
};

static int lqtk_QFile_encodeName_doLua(lua_State* L)
{
    lqtk_QFile_encodeName_Args* args = (lqtk_QFile_encodeName_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    QFile::encodeName(args->arg_1_1.getValue());
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFile", "encodeName", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFile_encodeName(lua_State* L)
{
    try {
        lqtk_QFile_encodeName_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFile_encodeName_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFile_exists_Args
{
    FromLua<QFile*> arg_1_1;
    FromLua<QString> arg_2_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QFile_exists_doLua(lua_State* L)
{
    lqtk_QFile_exists_Args* args = (lqtk_QFile_exists_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFile::exists();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QFile::exists(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QFile", "exists", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFile_exists(lua_State* L)
{
    try {
        lqtk_QFile_exists_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFile_exists_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFile_link_Args
{
    FromLua<QFile*> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<QString> arg_2_2;
    ToLua<bool> rslt_1;
};

static int lqtk_QFile_link_doLua(lua_State* L)
{
    lqtk_QFile_link_Args* args = (lqtk_QFile_link_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFile::link(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            if (!args->arg_2_2.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    QFile::link(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QFile", "link", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFile_link(lua_State* L)
{
    try {
        lqtk_QFile_link_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFile_link_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFile_moveToTrash_Args
{
    FromLua<QFile*> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<QString*> arg_3_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QFile_moveToTrash_doLua(lua_State* L)
{
    lqtk_QFile_moveToTrash_Args* args = (lqtk_QFile_moveToTrash_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFile::moveToTrash();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QFile::moveToTrash(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        if (nargs == 2) { do {
            args->arg_2_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    QFile::moveToTrash(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFile", "moveToTrash", nargs, "1,2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFile_moveToTrash(lua_State* L)
{
    try {
        lqtk_QFile_moveToTrash_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFile_moveToTrash_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFile_permissions_Args
{
    FromLua<QFile*> arg_1_1;
    FromLua<QString> arg_2_1;
    ToLua<QFileDevice::Permissions> rslt_1;
};

static int lqtk_QFile_permissions_doLua(lua_State* L)
{
    lqtk_QFile_permissions_Args* args = (lqtk_QFile_permissions_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFile::permissions();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QFile::permissions(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QFile", "permissions", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFile_permissions(lua_State* L)
{
    try {
        lqtk_QFile_permissions_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFile_permissions_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFile_remove_Args
{
    FromLua<QFile*> arg_1_1;
    FromLua<QString> arg_2_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QFile_remove_doLua(lua_State* L)
{
    lqtk_QFile_remove_Args* args = (lqtk_QFile_remove_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFile::remove();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QFile::remove(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QFile", "remove", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFile_remove(lua_State* L)
{
    try {
        lqtk_QFile_remove_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFile_remove_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFile_rename_Args
{
    FromLua<QFile*> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<QString> arg_2_2;
    ToLua<bool> rslt_1;
};

static int lqtk_QFile_rename_doLua(lua_State* L)
{
    lqtk_QFile_rename_Args* args = (lqtk_QFile_rename_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFile::rename(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            if (!args->arg_2_2.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    QFile::rename(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QFile", "rename", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFile_rename(lua_State* L)
{
    try {
        lqtk_QFile_rename_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFile_rename_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFile_resize_Args
{
    FromLua<QFile*> arg_1_1;
    FromLua<qint64> arg_2_1;
    FromLua<QString> arg_3_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QFile_resize_doLua(lua_State* L)
{
    lqtk_QFile_resize_Args* args = (lqtk_QFile_resize_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFile::resize(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_3_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    QFile::resize(args->arg_3_1.getValue(), args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QFile", "resize", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFile_resize(lua_State* L)
{
    try {
        lqtk_QFile_resize_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFile_resize_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFile_setPermissions_Args
{
    FromLua<QFile*> arg_1_1;
    FromLua<QFileDevice::Permissions> arg_2_1;
    FromLua<QString> arg_3_1;
    ToLua<bool> rslt_1;
};

static int lqtk_QFile_setPermissions_doLua(lua_State* L)
{
    lqtk_QFile_setPermissions_Args* args = (lqtk_QFile_setPermissions_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFile::setPermissions(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            if (!args->arg_3_1.test(L, argOffs+1)) break;
            if (!args->arg_2_1.test(L, argOffs+2)) break;
            {
                args->rslt_1 = 
                    QFile::setPermissions(args->arg_3_1.getValue(), args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            assert(false);
        }
        return util::argCountError(L, "QFile", "setPermissions", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFile_setPermissions(lua_State* L)
{
    try {
        lqtk_QFile_setPermissions_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFile_setPermissions_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFile_supportsMoveToTrash_Args
{
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFile_supportsMoveToTrash(lua_State* L)
{
    lqtk_QFile_supportsMoveToTrash_Args  argValues;
    lqtk_QFile_supportsMoveToTrash_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 0) { do {
            {
                args->rslt_1 = 
                    QFile::supportsMoveToTrash();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFile", "supportsMoveToTrash", nargs, "0");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFile_symLinkTarget_Args
{
    FromLua<QFile*> arg_1_1;
    FromLua<QString> arg_2_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QFile_symLinkTarget_doLua(lua_State* L)
{
    lqtk_QFile_symLinkTarget_Args* args = (lqtk_QFile_symLinkTarget_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFile::symLinkTarget();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                args->rslt_1 = 
                    QFile::symLinkTarget(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        return util::argCountError(L, "QFile", "symLinkTarget", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFile_symLinkTarget(lua_State* L)
{
    try {
        lqtk_QFile_symLinkTarget_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFile_symLinkTarget_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFile_fileName_Args
{
    FromLua<QFile*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QFile_fileName_doLua(lua_State* L)
{
    lqtk_QFile_fileName_Args* args = (lqtk_QFile_fileName_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFile::fileName();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFile", "fileName", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFile_fileName(lua_State* L)
{
    try {
        lqtk_QFile_fileName_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFile_fileName_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFile_open_Args
{
    FromLua<QFile*> arg_1_1;
    FromLua<QIODeviceBase::OpenMode> arg_2_1;
    FromLua<QFileDevice::Permissions> arg_3_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QFile_open(lua_State* L)
{
    lqtk_QFile_open_Args  argValues;
    lqtk_QFile_open_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFile::open(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFile::open(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFile", "open", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFile_setFileName_Args
{
    FromLua<QFile*> arg_1_1;
    FromLua<QString> arg_2_1;
};

static int lqtk_QFile_setFileName_doLua(lua_State* L)
{
    lqtk_QFile_setFileName_Args* args = (lqtk_QFile_setFileName_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QFile::setFileName(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QFile", "setFileName", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFile_setFileName(lua_State* L)
{
    try {
        lqtk_QFile_setFileName_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QFile_setFileName_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QFile_size_Args
{
    FromLua<QFile*> arg_1_1;
    ToLua<qint64> rslt_1;
};

extern "C" int lqtk_QFile_size(lua_State* L)
{
    lqtk_QFile_size_Args  argValues;
    lqtk_QFile_size_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QFile::size();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QFile", "size", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

static void* castFunction(const ClassInfo* targetClassInfo, void* objectPtr)
{
    if (objectPtr)
    {
        QFileBinding::QType* ptr = static_cast<QFileBinding::QType*>(objectPtr);
        if (targetClassInfo == &QFileBinding::classInfo) {
            return ptr;
        }
        if (targetClassInfo == &QFileDeviceBinding::classInfo) {
            return static_cast<QFileDeviceBinding::QType*>(ptr);
        }
        if (targetClassInfo == &QIODeviceBinding::classInfo) {
            return static_cast<QIODeviceBinding::QType*>(ptr);
        }
        if (targetClassInfo == &QObjectBinding::classInfo) {
            return static_cast<QObjectBinding::QType*>(ptr);
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QFile* ptr = (QFile*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QFile* obj = (QFile*) objectPtr;
        
        QFileWrapper* wrapper = dynamic_cast<QFileWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */

struct lqtk_QFile_new_Args
{
    explicit lqtk_QFile_new_Args(bool explicitNew)
        : explicitNew(explicitNew)
    {}
    bool explicitNew;
    FromLua<QString> arg_1_1;
    FromLua<QObject*> arg_2_1;
    ToLua<QFile*> rslt_1;
};

static int lqtk_QFile_new_doLua(lua_State* L)
{
    lqtk_QFile_new_Args* args = (lqtk_QFile_new_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    bool explicitNew = args->explicitNew;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QFileBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QFile> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QFileWrapper* rslt = 
                    new QFileWrapper();
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                QFileWrapper* rslt = 
                    new QFileWrapper(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                QFileWrapper* rslt = 
                    new QFileWrapper(args->arg_2_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QFileWrapper* rslt = 
                    new QFileWrapper(args->arg_1_1.getValue(), args->arg_2_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QFile", "new", nargs, "1,2,3");
        } else {
            return util::argCountError(L, "QFile", nullptr, nargs, "0,1,2");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QFile_constructor(lua_State* L, bool explicitNew)
{
    try {
        lqtk_QFile_new_Args args(explicitNew);
        return BindingUtil::callMethodFromLua(L, lqtk_QFile_new_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QFile_new(lua_State* L)
{
    return lqtk_QFile_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QFileBinding::pushObject(lua_State* L, QFile* objPtr, OwnerType ownerType)
{
    QFileWrapper* wrapper = dynamic_cast<QFileWrapper*>(objPtr);
    StateGuard::pushWeakUdataRef(L, objPtr);                             // -> udata?
    ObjectUdata* udata = ObjectUdata::testArg(L, -1);  
                                                                         // -> udata?
    if (!udata || udata->classInfo != &classInfo  
               || udata->getObjectPtr() != objPtr)
    {                                                                    // -> xxx
        lua_pop(L, 1);                                                   // -> 
        bool hasUserValue = false;
        if (StateGuard::pushWeakUserValue(L, objPtr) == LUA_TTABLE) {    // -> uval?
            hasUserValue = true;
        }
        udata = ObjectUdata::pushNew<QFile>(L, hasUserValue);     // -> uval?, udata
        udata->setQObjectPtr(L, -1, objPtr, ownerType);
        if (hasUserValue) {
            udata->setUserValue(L, -1, -2);                              // -> uval,  udata, 
        }                                                                // -> uval?, udata
        lua_remove(L, -2);                                               // -> udata
    }                                                                    // -> udata
    return udata;
}

/* ============================================================================================ */

static const Member members[] =
{
    { "AbortError",             Member::INTEGER,              (void*) QFile::AbortError },
    { "AutoCloseHandle",        Member::INTEGER,              (void*) QFile::AutoCloseHandle },
    { "CopyError",              Member::INTEGER,              (void*) QFile::CopyError },
    { "DontCloseHandle",        Member::INTEGER,              (void*) QFile::DontCloseHandle },
    { "ExeGroup",               Member::INTEGER,              (void*) QFile::ExeGroup },
    { "ExeOther",               Member::INTEGER,              (void*) QFile::ExeOther },
    { "ExeOwner",               Member::INTEGER,              (void*) QFile::ExeOwner },
    { "ExeUser",                Member::INTEGER,              (void*) QFile::ExeUser },
    { "FatalError",             Member::INTEGER,              (void*) QFile::FatalError },
    { "FileAccessTime",         Member::INTEGER,              (void*) QFile::FileAccessTime },
    { "FileBirthTime",          Member::INTEGER,              (void*) QFile::FileBirthTime },
    { "FileMetadataChangeTime", Member::INTEGER,              (void*) QFile::FileMetadataChangeTime },
    { "FileModificationTime",   Member::INTEGER,              (void*) QFile::FileModificationTime },
    { "MapPrivateOption",       Member::INTEGER,              (void*) QFile::MapPrivateOption },
    { "NoError",                Member::INTEGER,              (void*) QFile::NoError },
    { "NoOptions",              Member::INTEGER,              (void*) QFile::NoOptions },
    { "OpenError",              Member::INTEGER,              (void*) QFile::OpenError },
    { "PermissionsError",       Member::INTEGER,              (void*) QFile::PermissionsError },
    { "PositionError",          Member::INTEGER,              (void*) QFile::PositionError },
    { "ReadError",              Member::INTEGER,              (void*) QFile::ReadError },
    { "ReadGroup",              Member::INTEGER,              (void*) QFile::ReadGroup },
    { "ReadOther",              Member::INTEGER,              (void*) QFile::ReadOther },
    { "ReadOwner",              Member::INTEGER,              (void*) QFile::ReadOwner },
    { "ReadUser",               Member::INTEGER,              (void*) QFile::ReadUser },
    { "RemoveError",            Member::INTEGER,              (void*) QFile::RemoveError },
    { "RenameError",            Member::INTEGER,              (void*) QFile::RenameError },
    { "ResizeError",            Member::INTEGER,              (void*) QFile::ResizeError },
    { "ResourceError",          Member::INTEGER,              (void*) QFile::ResourceError },
    { "TimeOutError",           Member::INTEGER,              (void*) QFile::TimeOutError },
    { "UnspecifiedError",       Member::INTEGER,              (void*) QFile::UnspecifiedError },
    { "WriteError",             Member::INTEGER,              (void*) QFile::WriteError },
    { "WriteGroup",             Member::INTEGER,              (void*) QFile::WriteGroup },
    { "WriteOther",             Member::INTEGER,              (void*) QFile::WriteOther },
    { "WriteOwner",             Member::INTEGER,              (void*) QFile::WriteOwner },
    { "WriteUser",              Member::INTEGER,              (void*) QFile::WriteUser },
    { "atEnd",                  Member::VIRTUAL_FUNCTION,     (void*) lqtk_QFileDevice_atEnd },
    { "children",               Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_children },
    { "close",                  Member::VIRTUAL_FUNCTION,     (void*) lqtk_QFileDevice_close },
    { "connect",                Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_connect },
    { "copy",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QFile_copy },
    { "decodeName",             Member::NORMAL_FUNCTION,      (void*) lqtk_QFile_decodeName },
    { "encodeName",             Member::NORMAL_FUNCTION,      (void*) lqtk_QFile_encodeName },
    { "error",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QFileDevice_error },
    { "event",                  Member::VIRTUAL_FUNCTION,     (void*) lqtk_QObject_event },
    { "exists",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QFile_exists },
    { "fileName",               Member::VIRTUAL_FUNCTION,     (void*) lqtk_QFile_fileName },
    { "fileTime",               Member::NORMAL_FUNCTION,      (void*) lqtk_QFileDevice_fileTime },
    { "flush",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QFileDevice_flush },
    { "handle",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QFileDevice_handle },
    { "isSequential",           Member::VIRTUAL_FUNCTION,     (void*) lqtk_QFileDevice_isSequential },
    { "link",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QFile_link },
    { "moveToTrash",            Member::NORMAL_FUNCTION,      (void*) lqtk_QFile_moveToTrash },
    { "objectName",             Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "open",                   Member::VIRTUAL_FUNCTION,     (void*) lqtk_QFile_open },
    { "parent",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "permissions",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QFile_permissions },
    { "pos",                    Member::VIRTUAL_FUNCTION,     (void*) lqtk_QFileDevice_pos },
    { "read",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QIODevice_read },
    { "readAll",                Member::NORMAL_FUNCTION,      (void*) lqtk_QIODevice_readAll },
    { "readLine",               Member::NORMAL_FUNCTION,      (void*) lqtk_QIODevice_readLine },
    { "remove",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QFile_remove },
    { "rename",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QFile_rename },
    { "resize",                 Member::VIRTUAL_FUNCTION,     (void*) lqtk_QFile_resize },
    { "seek",                   Member::VIRTUAL_FUNCTION,     (void*) lqtk_QFileDevice_seek },
    { "setFileName",            Member::NORMAL_FUNCTION,      (void*) lqtk_QFile_setFileName },
    { "setFileTime",            Member::NORMAL_FUNCTION,      (void*) lqtk_QFileDevice_setFileTime },
    { "setObjectName",          Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",              Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { "setPermissions",         Member::VIRTUAL_FUNCTION,     (void*) lqtk_QFile_setPermissions },
    { "size",                   Member::VIRTUAL_FUNCTION,     (void*) lqtk_QFile_size },
    { "supportsMoveToTrash",    Member::NORMAL_FUNCTION,      (void*) lqtk_QFile_supportsMoveToTrash },
    { "symLinkTarget",          Member::NORMAL_FUNCTION,      (void*) lqtk_QFile_symLinkTarget },
    { "unsetError",             Member::NORMAL_FUNCTION,      (void*) lqtk_QFileDevice_unsetError },
    { "write",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QIODevice_write },
    { NULL,                     Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QFileBinding::classInfo = 
{
    "QFile",

    &QFileDeviceBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    lqtk_QFile_constructor,
    lqtk_QFile_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    74,
    members
};

/* ============================================================================================ */

int QFileBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
