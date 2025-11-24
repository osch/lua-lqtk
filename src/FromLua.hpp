#ifndef LQTK_FROM_LUA_HPP
#define LQTK_FROM_LUA_HPP

#include "Binding.hpp"
#include "ClassInfo.hpp"
#include "ObjectUdata.hpp"

namespace lqtk {

/* ============================================================================================ */

class FromLuaBase
{
protected:
    static int triggerArgError(lua_State* L, int arg, const ClassInfo* expected);
};

/* ============================================================================================ */

template<class Enum> class FromLua : public FromLuaBase
{
public:
    typedef Enum ValueType;
    
    FromLua()
        : value()
    {}
    
    static const char* name() {
        return "integer";
    }
    
    operator ValueType() const {
        return value;
    }
    
    ValueType getValue() const {
        return value;
    }

    bool test(lua_State* L, int arg) 
    {
        int isValid = 0;
        value = static_cast<ValueType>(lua_tointegerx(L, arg, &isValid));
        return isValid;
    }

    void check(lua_State* L, int arg) 
    {
        value = static_cast<ValueType>(util::checkInteger(L, arg));
    }

private:
    ValueType value;
};

/* ============================================================================================ */

template<class QType> class FromLua<QType*> : public FromLuaBase
{
public:
    typedef typename Binding<QType>::QType* ValueType;

    FromLua()
        : value(nullptr),
          udata(nullptr)
    {}
    
    static const char* name() {
        return Binding<QType>::classInfo.className;
    }
    
    operator ValueType() const {
        return value;
    }
    
    ValueType getValue() const {
        return value;
    }

    bool test(lua_State* L, int arg) 
    {
        udata = ObjectUdata::testArg(L, arg);
        if (udata) {
            void* casted = udata->castTo(&Binding<QType>::classInfo);
            if (casted) {
                value = static_cast<ValueType>(casted);
                return true;
            }
        }
        return false;
    }
    
    void check(lua_State* L, int arg) 
    {
        if (!test(L, arg)) {
            triggerArgError(L, arg, &Binding<QType>::classInfo), nullptr;
        }
    }
    
    void unsetOwnership() {
        udata->unsetOwnership();
    }
    
private:
    ValueType    value;
    ObjectUdata* udata;
};

/* ============================================================================================ */

template<typename Enum> class FromLua<QFlags<Enum>> : public FromLuaBase
{
public:
    typedef QFlags<Enum> ValueType;
    
    FromLua()
        : value()
    {}
    
    static const char* name() {
        return "integer";
    }

    operator ValueType() const {
        return value;
    }

    ValueType getValue() const {
        return value;
    }

    bool test(lua_State* L, int arg) 
    {
        int isValid = 0;
        lua_Integer rslt = lua_tointegerx(L, arg, &isValid);
        if (isValid) { 
            value = QFlags<Enum>::fromInt(rslt); 
            return true;
        } else {
            return false; 
        }
    }

    void check(lua_State* L, int arg) 
    {
        value = QFlags<Enum>::fromInt(util::checkInteger(L, arg));
    }

private:
    ValueType value;
};

/* ============================================================================================ */

template<> class FromLua<int> : public FromLuaBase
{
public:
    typedef int ValueType;
    
    FromLua()
        : value()
    {}
    
    static const char* name() {
        return "integer";
    }

    operator ValueType() const {
        return value;
    }

    ValueType getValue() const {
        return value;
    }

    bool test(lua_State* L, int arg) 
    {
        int isValid = 0;
        lua_Integer rslt = lua_tointegerx(L, arg, &isValid);
        if (isValid) { 
            value = rslt;
            return true;
        } else { 
            return false;
        }
    }

    void check(lua_State* L, int arg) 
    {
        value = static_cast<int>(util::checkInteger(L, arg));
    }

private:
    ValueType value;
};

/* ============================================================================================ */

template<> class FromLua<char> : public FromLuaBase
{
public:
    typedef char ValueType;
    
    FromLua()
        : value()
    {}
    
    static const char* name() {
        return "byte value";
    }

    operator ValueType() const {
        return value;
    }

    ValueType getValue() const {
        return value;
    }

    bool test(lua_State* L, int arg);

    void check(lua_State* L, int arg);

private:
    ValueType value;
};

/* ============================================================================================ */

template<> class FromLua<bool> : public FromLuaBase
{
public:
    typedef bool ValueType;
    
    FromLua()
        : value()
    {}
    
    static const char* name() {
        return "boolean";
    }

    operator ValueType() const {
        return value;
    }

    ValueType getValue() const {
        return value;
    }

    bool test(lua_State* L, int arg) 
    {
        if (lua_type(L, arg) == LUA_TBOOLEAN) {
            value = lua_toboolean(L, arg);
            return true;
        } else {
            return false;
        }
    }

    void check(lua_State* L, int arg) 
    {
        util::checkType(L, arg, LUA_TBOOLEAN);
        value = lua_toboolean(L, arg);
    }

private:
    ValueType value;
};

/* ============================================================================================ */

template<> class FromLua<double> : public FromLuaBase
{
public:
    typedef double ValueType;
    
    FromLua()
        : value()
    {}
    
    static const char* name() {
        return "number";
    }

    operator ValueType() const {
        return value;
    }

    ValueType getValue() const {
        return value;
    }

    bool test(lua_State* L, int arg) 
    {
        if (lua_type(L, arg) == LUA_TNUMBER) {
            value = lua_tonumber(L, arg);
            return true;
        } else {
            return false;
        }
    }

    void check(lua_State* L, int arg) 
    {
        util::checkType(L, arg, LUA_TNUMBER);
        value = lua_tonumber(L, arg);
    }
private:
    ValueType value;
};

/* ============================================================================================ */

template<> class FromLua<QString> : public FromLuaBase
{
public:
    typedef QString ValueType;
    
    FromLua()
        : value()
    {}
    
    operator ValueType() const {
        return value;
    }

    ValueType getValue() const {
        return value;
    }

    static const char* name() {
        return "string";
    }

    bool test(lua_State* L, int arg);

    void check(lua_State* L, int arg);

private:
    ValueType value;
};
    
/* ============================================================================================ */

template<> class FromLua<QByteArray*> : public FromLuaBase
{
public:
    typedef QByteArray* ValueType;
    
    FromLua()
        : value(),
          hasNew(false)
    {}
    
    ~FromLua();
    
    operator ValueType() const {
        return value;
    }

    ValueType getValue() const {
        return value;
    }

    static const char* name() {
        return "bytes";
    }

    bool test(lua_State* L, int arg);

    void check(lua_State* L, int arg);

private:
    ValueType value;
    bool hasNew;
};
    
/* ============================================================================================ */

template<> class FromLua<QStringList> : public FromLuaBase
{
public:
    typedef QStringList ValueType;
    
    FromLua()
        : value()
    {}
    
    operator ValueType() const {
        return value;
    }

    ValueType getValue() const {
        return value;
    }

    bool test(lua_State* L, int arg);

    void check(lua_State* L, int arg);
    
private:
    ValueType        value;
    FromLua<QString> temp;
};

/* ============================================================================================ */

template<class T> class FromLua<QList<T>> : public FromLuaBase
{
public:
    typedef QList<T> ValueType;
    
    FromLua()
        : value()
    {}
    
    operator ValueType() const {
        return value;
    }

    ValueType getValue() const {
        return value;
    }

    bool test(lua_State* L, int arg) {
        value = QList<T>();
        if (lua_type(L, arg) != LUA_TTABLE) {
            return false;
        }
        for (int i = 1; lua_geti(L, arg, i) != LUA_TNIL; ++i) {
            if (temp.test(L, -1)) {
                value.append(*temp.getValue());
                lua_pop(L, 1);
            } else {
                lua_pop(L, 1);
                return false;
            }
        }
        return true;
    }
    
    void check(lua_State* L, int arg) {
        util::checkType(L, arg, LUA_TTABLE);
        value = QList<T>();
        for (int i = 1; lua_geti(L, arg, i) != LUA_TNIL; ++i) {
            if (temp.test(L, -1)) {
                lua_pop(L, 1);
                value.append(*temp.getValue());
            } else {
                lua_pop(L, 1);
                const char* err = lua_pushfstring(L, "list of %s elements expected", temp.name());
                util::argError(L, arg, err);
                return;
            }
        }
    }
    
private:
    ValueType value;
    FromLua<T*> temp;
};

/* ============================================================================================ */

template<class T> class FromLua<QList<T*>> : public FromLuaBase
{
public:
    typedef QList<T*> ValueType;
    
    FromLua()
        : value()
    {}
    
    operator ValueType() const {
        return value;
    }

    ValueType getValue() const {
        return value;
    }

    ValueType value;
    
    bool test(lua_State* L, int arg) {
        value = QList<T*>();
        if (lua_type(L, arg) != LUA_TTABLE) {
            return false;
        }
        for (int i = 1; lua_geti(L, arg, i) != LUA_TNIL; ++i) {
            if (temp.test(L, -1)) {
                value.append(temp);
                lua_pop(L, 1);
            } else {
                lua_pop(L, 1);
                return false;
            }
        }
        return true;
    }
    
    void check(lua_State* L, int arg) {
        util::checkType(L, arg, LUA_TTABLE);
        value = QList<T*>();
        for (int i = 1; lua_geti(L, arg, i) != LUA_TNIL; ++i) {
            if (temp.test(L, -1)) {
                lua_pop(L, 1);
                value.append(temp);
            } else {
                lua_pop(L, 1);
                const char* err = lua_pushfstring(L, "list of %s elements expected", temp.name());
                util::argError(L, arg, err);
                return;
            }
        }
    }
    
private:
    FromLua<T*> temp;
};

/* ============================================================================================ */

    
} // namespace lqtk

#endif // LQTK_FROM_LUA_HPP
