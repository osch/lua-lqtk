#ifndef LQTK_TO_LUA_HPP
#define LQTK_TO_LUA_HPP

#include "Binding.hpp"

namespace lqtk {

/* ============================================================================================ */

class ToLuaBase
{
protected:
};

/* ============================================================================================ */

template<class Enum> class ToLua : public ToLuaBase
{
public:
    typedef Enum ValueType;
    
    ToLua()
        : value()
    {}
    
    ToLua(const ValueType& value)
        : value(value)
    {}
    
    static const char* name() {
        return "integer";
    }
    
    operator ValueType() const {
        return value;
    }
    
    void operator=(const ValueType& value) {
        this->value = value;
    }
    
    void push(lua_State* L) 
    {
        lua_pushinteger(L, value);
    }

private:
    ValueType value;
};

/* ============================================================================================ */

template<> class ToLua<char> : public ToLuaBase
{
public:
    typedef unsigned char ValueType;
    
    ToLua()
        : value()
    {}
    
    ToLua(const ValueType& value)
        : value(value)
    {}
    
    static const char* name() {
        return "byte value";
    }
    
    operator ValueType() const {
        return value;
    }
    
    void operator=(const ValueType& value) {
        this->value = value;
    }
    
    void push(lua_State* L) 
    {
        lua_pushinteger(L, value);
    }

private:
    ValueType value;
};

/* ============================================================================================ */

template<class QType> class ToLua<QType*> : public ToLuaBase
{
public:
    typedef typename Binding<QType>::QType* ValueType;

    ToLua()
        : value(nullptr),
          hasNew(false)
    {}

    ToLua(const ValueType& value)
        : value(value),
          hasNew(false)
    {}
    
    ToLua(const QType& rhs)
        : value(new QType(rhs)),
          hasNew(true)
    {}
    
    ~ToLua() {
        release();
    }
    
    static const char* name() {
        return Binding<QType>::classInfo.className;
    }
    
    operator ValueType() const {
        return value;
    }
    
    void operator=(const ValueType& rhs) {
        release();
        value = rhs;
    }
    
    void operator=(const QType& rhs) {
        release();
        value = new QType(rhs);
        hasNew = true;
    }
    
    ObjectUdata* push(lua_State* L, OwnerType ownerType) 
    {
        if (value != nullptr) {
            ObjectUdata* rslt = Binding<QType>::pushObject(L, value, ownerType);
            if (hasNew) {
                assert(ownerType == IS_OWNER);
                hasNew = false;
            }
            return rslt;
        } else {
            lua_pushnil(L);
            return nullptr;
        }
    }
private:
    void release() {
        if (hasNew && value) {
            delete value;
        }
        hasNew = false;
        value = nullptr;
    }
    ValueType value;
    bool hasNew;
};

/* ============================================================================================ */

template<typename Enum> class ToLua<QFlags<Enum>> : public ToLuaBase
{
public:
    typedef QFlags<Enum> ValueType;
    
    ToLua()
        : value()
    {}
    
    ToLua(const ValueType& value)
        : value(value)
    {}

    static const char* name() {
        return "integer";
    }

    operator ValueType() const {
        return value;
    }
    
    void operator=(const ValueType& rhs) {
        value = rhs;
    }
    
    void push(lua_State* L) 
    {
        lua_pushinteger(L, value);
    }

private:
    ValueType value;
};

/* ============================================================================================ */

template<> class ToLua<int> : public ToLuaBase
{
public:
    typedef int ValueType;
    
    ToLua()
        : value()
    {}
    
    ToLua(const ValueType& value)
        : value(value)
    {}

    static const char* name() {
        return "integer";
    }

    operator ValueType() const {
        return value;
    }
    
    void operator=(const ValueType& rhs) {
        value = rhs;
    }
    
    void push(lua_State* L) 
    {
        lua_pushinteger(L, value);
    }

private:
    ValueType value;
};

/* ============================================================================================ */

template<> class ToLua<bool> : public ToLuaBase
{
public:
    typedef bool ValueType;
    
    ToLua()
        : value()
    {}
    
    ToLua(const ValueType& value)
        : value(value)
    {}

    static const char* name() {
        return "boolean";
    }

    operator ValueType() const {
        return value;
    }
    
    void operator=(const ValueType& rhs) {
        value = rhs;
    }
    
    void push(lua_State* L) 
    {
        lua_pushboolean(L, value);
    }

private:
    ValueType value;
};

/* ============================================================================================ */

template<> class ToLua<double> : public ToLuaBase
{
public:
    typedef double ValueType;
    
    ToLua()
        : value()
    {}
    
    ToLua(const ValueType& value)
        : value(value)
    {}

    static const char* name() {
        return "number";
    }

    operator ValueType() const {
        return value;
    }
    
    void operator=(const ValueType& rhs) {
        value = rhs;
    }
    
    void push(lua_State* L) 
    {
        lua_pushnumber(L, value);
    }

private:
    ValueType value;
};

/* ============================================================================================ */

template<> class ToLua<QString> : public ToLuaBase
{
public:
    typedef QString ValueType;
    
    ToLua()
        : value()
    {}
    
    ToLua(const ValueType& value)
        : value(value)
    {}

    operator ValueType() const {
        return value;
    }
    
    void operator=(const ValueType& rhs) {
        value = rhs;
    }

    void operator=(const QStringView& rhs) {
        value.clear();
        value.append(rhs);
    }

    static const char* name() {
        return "string";
    }

    const char* push(lua_State* L)  {
        temp = value.toUtf8();
        return lua_pushlstring(L, temp.data(), temp.length());
    }
    
private:
    ValueType value;
    QByteArray temp;
};

/* ============================================================================================ */

template<> class ToLua<const char*> : public ToLuaBase
{
public:
    typedef const char* ValueType;
    
    ToLua()
        : value()
    {}
    
    ToLua(const ValueType& value)
        : value(value)
    {}

    operator ValueType() const {
        return value;
    }
    
    void operator=(const ValueType& rhs) {
        value = rhs;
    }

    static const char* name() {
        return "string";
    }

    const char* push(lua_State* L)  {
        return lua_pushstring(L, value);
    }
    
private:
    ValueType value;
};

/* ============================================================================================ */

template<> class ToLua<QStringList> : public ToLuaBase
{
public:
    typedef QStringList ValueType;
    
    ToLua()
        : value()
    {}
    
    ToLua(const ValueType& value)
        : value(value)
    {}

    operator ValueType() const {
        return value;
    }
    
    void operator=(const ValueType& rhs) {
        value = rhs;
    }

    void push(lua_State* L);
    
private:
    ValueType value;
    ToLua<QString> temp;
};

/* ============================================================================================ */

template<class QType> class ToLua<QList<QType*>> : public ToLuaBase
{
public:
    typedef QList<QType*> ValueType;
    
    ToLua()
        : value()
    {}
    
    ToLua(const ValueType& value)
        : value(value)
    {}

    operator ValueType() const {
        return value;
    }
    
    void operator=(const ValueType& rhs) {
        value = rhs;
    }
    
    void push(lua_State* L, OwnerType ownerType)  {
        lua_newtable(L);                                                             // -> list
        for (int i = 0; i < value.count(); ++i) {
            QType* el = value.at(i);
            Binding<QType>::pushObject(L, el, ownerType);                            // -> list, el
            lua_rawseti(L, -2, i + 1);                                               // -> list
        }
    }

private:
    ValueType value;
};

/* ============================================================================================ */

template<class QType> class ToLua<QList<QType>> : public ToLuaBase
{
public:
    typedef QList<QType> ValueType;
    
    ToLua()
        : value()
    {}
    
    ToLua(const ValueType& value)
        : value(value)
    {}

    operator ValueType() const {
        return value;
    }
    
    void operator=(const ValueType& rhs) {
        value = rhs;
    }
    
    void push(lua_State* L)  {
        lua_newtable(L);                                                             // -> list
        for (int i = 0; i < value.count(); ++i) {
            QType* el = new QType(value.at(i));
            Binding<QType>::pushObject(L, el, IS_OWNER);                             // -> list, el
            lua_rawseti(L, -2, i + 1);                                               // -> list
        }
    }

private:
    ValueType value;
};

/* ============================================================================================ */

} // namespace lqtk

#endif // LQTK_TO_LUA_HPP
