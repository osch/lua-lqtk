#ifndef LQTK_QFile_WRAPPER_HPP
#define LQTK_QFile_WRAPPER_HPP

#include "BindingUtil.hpp"

namespace lqtk
{

class QFileWrapper : public QFile
{
public:

/* -------------------------------------------------------------------------------------------- */

    QFileWrapper();
    QFileWrapper(
                   QString arg1); 
    QFileWrapper(
                   QObject* arg1); 
    QFileWrapper(
                   QString arg1, 
                   QObject* arg2); 

/* -------------------------------------------------------------------------------------------- */

private:
    static int lqtk_destruct(lua_State* L);
public:
    ~QFileWrapper();
public:
    QFileDevice::Permissions permissions() const override;
public:
    bool resize(
                   qint64 arg2) override; 
public:
    bool setPermissions(
                   QFileDevice::Permissions arg2) override; 
public:
    QString fileName() const override;
public:
    bool open(
                   QIODeviceBase::OpenMode arg2) override; 
public:
    qint64 size() const override;
public:
    bool atEnd() const override;
public:
    void close() override;
public:
    bool isSequential() const override;
public:
    qint64 pos() const override;
public:
    bool seek(
                   qint64 arg2) override; 
public:
    bool event(
                   QEvent* arg2) override; 

/* -------------------------------------------------------------------------------------------- */

private:
    lua_State* getL() const {
        if (lqtk_stateGuard) {
            return lqtk_stateGuard->getL();
        } else {
            return nullptr;
        }
    }
public:
    StateGuard* lqtk_stateGuard;

/* -------------------------------------------------------------------------------------------- */

};

} // namespace lqtk

#endif // LQTK_QFile_WRAPPER_HPP
