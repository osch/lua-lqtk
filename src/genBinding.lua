
BINDINGS = {}

for i = 1, select("#", ...) do
    local arg = select(i, ...)
    if i == 1 then
        BINDING = arg
    elseif i == 2 then
        GENFILENAME = arg
    else
        BINDINGS[#BINDINGS + 1] = arg
    end
end


local isBindingHpp  = GENFILENAME:match("Binding%.hpp$")
local isBindingCpp  = GENFILENAME:match("Binding%.cpp$")
local isWrapperHpp  = GENFILENAME:match("Wrapper%.hpp$")

local emlua = require("emlua")

format = string.format

function errorf(...)
    error(format(...), 2)
end

function append(t, v)
    t[#t + 1 ] = v
end

function get(arg)
    if type(arg) == "table" then
        return arg[1]
    else
        return arg
    end
end

function isOneOf(x, ...) 
    for i = 1, select("#", ...) do
        if x == select(i, ...) then
            return true
        end
    end
    return false
end

local bindings = {}

local function Set(...)
    local rslt = {}
    for i = 1, select("#", ...) do
        local a = select(i, ...)
        rslt[a] = true
        rslt[i] = a
    end
    return rslt
end

local validDefinitionPars = Set("class", "namespace", "baseClass", 
                             "needsValidityCheck", "onlyWrapped", "needsGuard", "needsOwnerCheck",
                             "elements", "polymorphic")

local validElementPars = Set("enum", "flag", "func", "method",
                             "intercept",
                             "values", "binding", "delegate", "proxy")

local validValuesPars = Set("cmt")

local validBindPars = Set("isMethod", "virtual", "=0", "override", "protected", "const")

local BindingMeta = {}
do
    function BindingMeta:__index(key)
        errorf("accessing global variable %q", key)
    end
    function BindingMeta:__newindex(key, value)
        if validDefinitionPars[key] then
            rawset(self, key, value)
        else
            errorf("invalid binding parameter %q", key)
        end
    end
end

local hasConstructorSet = {}
local hasVirtualMemberSet = {}
local hasProtectedMemberSet = {}
local needsGuardSet = {}
local needsValidityCheckSet = {}
local hasConstructorProxySet = {}

function hasProtectedMethods(bindingName)
    return hasProtectedMemberSet[bindingName]
end

function needsWrapper(bindingName)
    return hasConstructorSet[bindingName] and (   hasVirtualMemberSet[bindingName] 
                                               or needsGuardSet[bindingName]
                                               or needsValidityCheckSet[bindingName]
                                               or hasConstructorProxySet[bindingName])
end

function getBinding(name, ignoreErrors)
    if name then
        local binding = bindings[name]
        if not binding then
            binding = setmetatable({}, BindingMeta)
            local fileName = "def/"..name.."Binding.lua"
            local chunk, errmsg = loadfile(fileName, "t", binding)
            if chunk then
                if setfenv then
                    setfenv(chunk, binding)
                end
                chunk()
            else
                if ignoreErrors then
                    return nil
                else
                    errorf("Error loading %q: %s", fileName, errmsg)
                end
            end
            setmetatable(binding, nil)
            if binding.needsGuard then
                needsGuardSet[name] = true
            end
            if binding.needsValidityCheck then
                needsValidityCheckSet[name] = true
            end
            if binding.elements then
                for _, e in ipairs(binding.elements) do
                    assert(not(e.method and e.func))
                    if e.func == "new" then
                        hasConstructorSet[name] = true
                        if e.proxy then
                            hasConstructorProxySet[name] = true
                        end
                    end
                    for _, b in ipairs(e.binding or e.delegate or e.proxy or {}) do
                        for k, v in pairs(b) do
                            assert(math.type(k) == "integer" and 1 <= k and k <= #b, k)
                            if k == 1 then
                                assert(type(v) == "string")
                            elseif k == 2 then
                                assert(type(v) == "table")
                            else
                                assert(validBindPars[v], v)
                            end
                        end
                        for i = 3, #b do
                            local v = b[i]
                            b[v] = true
                            if isOneOf(v, "virtual", "=0", "override", "protected") then
                                b.virtual = true
                                hasVirtualMemberSet[name] = true
                            end
                            if v == "protected" then
                                hasProtectedMemberSet[name] = true
                            end
                        end
                    end
                end
            end
        end
        return binding
    end
end

local function hasVirtualMembersFromBaseClass(bindingName)
    local binding = getBinding(bindingName)
    if hasVirtualMemberSet[bindingName] then
        return true
    else
        if binding.baseClass and hasVirtualMembersFromBaseClass(binding.baseClass) then
            hasVirtualMemberSet[bindingName] = true
            return true
        end
    end
    return false
end

function getConstructorProxy(binding)
    local binding = type(binding) == "string" and getBinding(binding) or binding
    for _, e in ipairs(binding.elements or {}) do
        if e.func == "new" and e.proxy then
            return e.proxy
        end
    end
end

function hasInterceptor(binding, funcName)
    local binding = type(binding) == "string" and getBinding(binding) or binding
    for _, e in ipairs(binding.elements or {}) do
        if funcName then
            if e.func == funcName or e.method == funcName then
                return e.intercept
            end
        else
            if e.intercept then
                return true
            end
        end
    end
end

function getDelegateOrInterceptedFuncs(bindingName)
    local rslt = {}
    local binding = getBinding(bindingName)
    for _, e in ipairs(binding.elements or {}) do
        if (e.func or e.method) and (e.delegate or e.intercept) then
            assert(   (e.name == "new" and     e.binding and not e.delegate)
                   or (e.name ~= "new" and     e.binding and not e.delegate)
                   or (e.name ~= "new" and not e.binding and     e.delegate))
            local binding = {}
            if e.intercept then
                binding[1] = { "void", {}}
            else
                for _, bnd in ipairs(e.binding or e.delegate) do
                    local newArgs = {}
                    local newBnd = { bnd[1], newArgs }
                    local args = bnd[2]
                    if e.method then
                        newArgs[1] = bindingName.."*"
                    end
                    for _, a in ipairs(args) do
                        newArgs[#newArgs + 1] = a
                    end
                    binding[#binding + 1] = newBnd
                end
            end
            rslt[#rslt + 1] = {
                name = e.func or e.method,
                isMethod = e.method ~= nil,
                isFunc   = e.func ~= nil,
                binding = binding,
                isDelegate = e.delegate,
                isIntercepted = e.intercept
            }
        end
    end
    return rslt
end

function hasBinding(name)
    return getBinding(name, true) 
end



thisDef = getBinding(BINDING)
do
    baseClasses = {}
    local function considerBaseClasses(bindingName)
        if not baseClasses[bindingName] then
            baseClasses[bindingName] = true
            append(baseClasses, bindingName)
        end
        local binding = getBinding(bindingName)
        if binding.baseClass then
            considerBaseClasses(binding.baseClass)
        end
    end
    considerBaseClasses(BINDING)
    
    for k,v in pairs(thisDef) do
        assert(validDefinitionPars[k], k)
    end
    if thisDef.elements then
        for _, e in ipairs(thisDef.elements) do
            for k, v in pairs(e) do
                assert(validElementPars[k], k)
            end
            for _, val in ipairs(e.values or {}) do
                if type(val) == "table" then
                    for k, v in pairs(val) do
                        if type(k) ~= "number" then
                            assert(validValuesPars[k], k)
                        end
                    end
                end
            end
        end
    end
end

constructorProxy = getConstructorProxy(BINDING)

function isQlistType(arg)
    return arg:match("^QList<.*>$")
end

function isQlistPtrType(arg)
    return arg:match("^QList<.*[~@*?]%??>$")
end

function getQlistElementType(arg)
    return arg:match("^QList<(.*)>$")
end

function getQlistPtrElementType(arg)
    return arg:match("^QList<(.*)[~@*?]%??>$")
end

function isPtrType(arg)
    return arg and arg:match("[~@*?]%??$")
end

function isOwnershipTransferPtrType(arg)
    return arg:match("@%??$")
end

function isTempPtrType(arg)
    return arg:match("~$")
end

function isNullablePtrType(arg)
    return arg:match("%?$")
end

function toCType(arg)
    return arg:gsub("[~@*?]%??$", "*")
end

function toCTypeForOverride(arg)
    if isPtrType(arg) then
        return arg:gsub("[~@?]%??$", "*")
    elseif isClass(arg) then
        return format("const %s&", arg)
    else
        return arg
    end
end

function getPtrElementType(arg)
    if isPtrType(arg) then
        return arg:gsub("[~@*?]+$", "")
    end
end

onlyWrappeds = {}
function isOnlyWrapped(name)
    local rslt = onlyWrappeds[name]
    if rslt == nil then
        local b = getBinding(name, true)
        rslt = b and b.onlyWrapped and true or false
        onlyWrappeds[name] = rslt
    end
    return rslt
end

function calcBindingArgs(binding)
    local criticalSet = Set("QStringList", "QString", "QByteArray")
    local isCritical = false
    local function considerType(luaTypes, name)
        if  criticalSet[name] or isQlistType(name)
        then
            isCritical = true
        end
        name = toCType(name)
        local tp = luaTypes[name]
        if tp then
            tp.count = tp.count + 1
            return tp.idx, tp.count
        else
            local idx = #luaTypes + 1
            tp = {count = 1, maxCount = 0, idx = idx, name = name}
            luaTypes[name] = tp
            luaTypes[idx] = tp
            return idx, 1
        end
            
    end
    local function finishCounts(luaTypes)
        for i, tp in ipairs(luaTypes) do
            if tp.count > tp.maxCount then
                tp.maxCount = tp.count
            end
            tp.count = 0
        end
    end
    local fromLuaTypes = {}
    local toLuaTypes = {}
    local argNameMap = {}
    for b, bind in ipairs(binding) do
        argNameMap[b] = {}
        local rsltType = bind[1]
        local argTypes = bind[2]
        if rsltType ~= "void" and rsltType ~= "this" then
            local idx, cnt = considerType(toLuaTypes, rsltType)
            assert(cnt == 1, require"inspect"{toLuaTypes, rsltType, idx, cnt})
            argNameMap[b][0] = format("rslt_%s", idx)
        end
        for a, arg in ipairs(argTypes) do
            local idx, cnt = considerType(fromLuaTypes, arg)
            argNameMap[b][a] = format("arg_%s_%s", idx, cnt)
        end
        finishCounts(fromLuaTypes)
        finishCounts(toLuaTypes)
    end    
    return isCritical, fromLuaTypes, toLuaTypes, argNameMap
end

--if not isHpp then
do
    allDefs = { thisDef }
    do
        local def = thisDef
        while def.baseClass do
            def = getBinding(def.baseClass)
            allDefs[#allDefs + 1] = def
        end
    end
    
    maxMemberNameLength = 0
    local considered = {}
    
    local function considerMember(memberName)
        if memberName and not considered[memberName] then
            considered[memberName] = true
            if #memberName > maxMemberNameLength then
                maxMemberNameLength = #memberName
            end
            return true
        else
            return false
        end
    end
    
    members = {}
    functions = {}
    flags = {}
    enums = {}
    qclasses = {}
    classes = {}
    constructor = false
    onlyWrapped = thisDef.onlyWrapped and true or false
    
    function isFlag(name)
        if flags[name] ~= nil then
            return flags[name]
        else
            local n1, n2 = name:match("^([^:]*)::(.*)$")
            if n1 and n2 then
                local bnd = getBinding(n1)
                for _, e in ipairs(bnd.elements) do
                    if e.flag == n2 then
                        flags[name] = true
                        return true
                    end
                end
            end
            flags[name] = false
            return false
        end
    end
    
    function isEnum(name)
        if enums[name] ~= nil then
            return enums[name]
        else
            local n1, n2 = name:match("^([^:]*)::(.*)$")
            if n1 and n2 then
                local bnd = getBinding(n1)
                for _, e in ipairs(bnd.elements) do
                    if e.enum == n2 then
                        enums[name] = true
                        return true
                    end
                end
            end
            enums[name] = false
            return false
        end
    end
    
    function isQObject(name)
        if qclasses[name] ~= nil then
            return qclasses[name]
        else
            local b = getBinding(name, true)
            while b do
                if b.class == "QObject" then
                    qclasses[name] = true
                    return true
                end
                b = getBinding(b.baseClass)
            end
            qclasses[name] = false
            return false
        end
    end
    
    function isClass(name)
        if classes[name] ~= nil then
            return classes[name]
        else
            local b = getBinding(name, true --[[ignoreErrors]])
            if b and b.class then
                classes[name] = true
                return true
            end
            classes[name] = false
            return false
        end
    end

    qincludes = {}
    local function addInclude(name)
        if name then
            if not qincludes[name] then
                qincludes[name] = true
                qincludes[#qincludes + 1] = name
            end
        end
    end
    local function considerInclude(name)
        if name then
            local n = getPtrElementType(name)
            if n then
                name = n
            else
                n = name:match("^([^:]*)::(.*)$")
                if n then
                    name = n
                else
                    n = getQlistPtrElementType(name)
                    if n then
                        name = n
                    else
                        n = getQlistElementType(name)
                        if n then
                            name = n
                        end
                    end
                end
            end
            if not qincludes[name] then
                if  hasBinding(name) then
                    addInclude(name)
                end
            end
        end
    end
    addInclude("QObject")
    addInclude(thisDef.class)
    addInclude(thisDef.namespace)
    considerInclude(thisDef.baseClass)
    for _, element in ipairs(thisDef.elements or {}) do
        if (element.method or element.func) and (element.binding or element.delegate) then
            for _, b in ipairs(element.binding or element.delegate) do
                considerInclude(b[1])
                for _, a in ipairs(b[2]) do
                    considerInclude(a)
                end 
            end
        end
    end
    
    hasVirtualMembers = false
    virtualMembers = {}

    for i = 1, #allDefs do
        local def = allDefs[i]
        considerInclude(def.class)
        for _, element in ipairs(def.elements or {}) do
            if element.flag then
                element.name = element.flag 
                assert(not flags[element.flag])
                flags[element.flag] = element
                for _, value in ipairs(element.values) do
                    local name = get(value)
                    if considerMember(name) then
                        local member = { name = name, type = "int", fromClass = def.class, fromBase = (i > 1) }
                        members[#members + 1] = member
                        members[name] = member
                    end
                end
            elseif element.enum then
                element.name = element.enum 
                assert(not enums[element.enum])
                enums[element.enum] = element
                for _, value in ipairs(element.values) do
                    local name = get(value)
                    if considerMember(name) then
                        local member = { name = name, type = "int", fromClass = def.class, fromBase = (i > 1) }
                        members[#members + 1] = member
                        members[name] = member
                    end
                end
            elseif considerMember(element.method or element.func) then
                element.name = element.method or element.func
                local isFunc   = element.func ~= nil
                local isMethod = element.method ~= nil
                assert(not (isFunc and isMethod))
                if element.name == "new" then
                    assert(isFunc)
                    if i == 1 then
                        constructor = element
                        constructor.isIntercepted = element.intercept
                        if constructor.binding then
                            local argCounts = {}
                            local checkBnd = {}
                            for bndi = #constructor.binding, 1, -1 do
                                local bnd = constructor.binding[bndi]
                                local nargs = tostring(#bnd[2])
                                if not argCounts[nargs] then
                                    bnd.checkArgs = true
                                    checkBnd[nargs] = bnd
                                    argCounts[nargs] = true
                                    argCounts[#argCounts + 1] = nargs
                                end
                                checkBnd[nargs].checkIdx = bndi
                            end
                            table.sort(argCounts)
                            constructor.expectedArgCount = table.concat(argCounts, ",")
                            for i, c in ipairs(argCounts) do
                                argCounts[i] = tostring(tonumber(c) + 1)
                            end
                            constructor.expectedArgCountPlus1 = table.concat(argCounts, ",")
                        end
                    end
                else
                    local binding
                    local isDelegate = false
                    local argCounts
                    local checkBnd = {}
                    if element.binding or element.delegate then
                        isDelegate = (i == 1) and not element.binding
                        binding = {}
                        argCounts = {}
                        local origBinding = element.binding or element.delegate
                        for idx = #origBinding, 1, -1 do
                            local origb = origBinding[idx]
                            local newb = { isFunc = not origb.isMethod and isFunc, isMethod = origb.isMethod or isMethod, isDelegate = isDelegate, const = origb.const }
                            for _, f in ipairs(validBindPars) do
                                if origb[f] then
                                    newb[f] = true
                                end
                            end
                            newb[1] = origb[1]
                            local args = {}
                            newb[2] = args
                            if newb.isMethod then
                                args[1] = thisDef.class.."*"
                            end
                            for _, arg in ipairs(origb[2]) do
                                args[#args + 1] = arg
                            end
                            binding[idx] = newb
                            local nargs = tostring(#args)
                            if not argCounts[nargs] then
                                newb.checkArgs = true
                                checkBnd[nargs] = newb
                                argCounts[nargs] = true
                                argCounts[#argCounts + 1] = nargs
                            end
                            checkBnd[nargs].checkIdx = idx
                        end
                        table.sort(argCounts)
                    end
                    local member = { name = element.name, 
                                     type = isFunc and "func" or "method", 
                                     binding = binding, 
                                     fromClass = def.class, 
                                     fromBase = (i > 1),
                                     isDelegate    = isDelegate,
                                     isIntercepted = element.intercept,
                                     expectedArgCount = argCounts and table.concat(argCounts, ",") }
                    members[#members + 1] = member
                    members[element.name] = member
                    functions[#functions + 1] = member
                    functions[element.name] = member
                    if binding and #binding > 0 then
                        local allAbstract = true
                        local hasVirtual = false
                        local hasProtected = false
                        for _, bnd in ipairs(binding) do
                            if bnd["=0"] then
                                assert(bnd.abstract == nil or bnd.abstract == true)
                                bnd.abstract = true
                            end
                            if not bnd.abstract then
                                allAbstract = false
                            end
                            if bnd.protected or bnd.override or bnd.abstract or bnd.virtual then
                                hasVirtual = true
                                bnd.virtual = true
                            end
                            if bnd.protected then
                                hasProtected = true
                            end
                        end
                        if allAbstract then
                            member.abstract = true
                        end
                        if hasVirtual then
                            member.virtual = true
                            hasVirtualMembers = true
                            virtualMembers[member.name] = member
                            append(virtualMembers, member)
                        end
                        if hasProtected then
                            member.protected = true
                        end
                    end
                end
            end
        end
    end
    table.sort(members, function(a, b) return a.name < b.name end)
    for _, member in ipairs(members) do
        member.forLuaCallFromBase  = member.fromBase
        member.forLuaCallFromClass = member.fromClass
    end
    
    if constructor then
        for _, member in ipairs(virtualMembers) do
            if member.fromBase and member.protected then
                --member.forLuaCallFromClass = thisDef.class
                --member.forLuaCallFromBase = false
            end
            for _, b in ipairs(member.binding or {}) do
                if b[1] ~= "void" and b[1] ~= "this" then
                    considerInclude(b[1])
                end
                for _, a in ipairs(b[2]) do
                    considerInclude(a)
                end
            end
        end
    else
        hasVirtualMembers = false
        virtualMembers = {}
    end
    
    do
        local allDerivedClasses = {}
        local derivedClasses    = {}

        function getDerivedClasses()
            return derivedClasses, allDerivedClasses
        end

        for _, bindingName in ipairs(BINDINGS) do
            hasVirtualMembersFromBaseClass(bindingName)
            if bindingName ~= thisDef.class and allDerivedClasses[bindingName] == nil then
                local bn = getBinding(bindingName).baseClass
                local d = 1
                while bn do
                    local existingD = allDerivedClasses[bn]
                    local foundD
                    if existingD then
                        foundD = d + existingD
                    end
                    if bn == thisDef.class then
                        foundD = d
                    end
                    if foundD then
                        allDerivedClasses[bindingName] = foundD
                        allDerivedClasses[#allDerivedClasses + 1] = bindingName
                        if foundD == 1 then
                            derivedClasses[#derivedClasses + 1] = bindingName
                            considerInclude(bindingName)
                        end
                        break
                    end
                    bn = getBinding(bn).baseClass
                    d = d + 1
                end
                if not bn then
                    allDerivedClasses[bindingName] = false
                end
            end
        end
        table.sort(allDerivedClasses, function(a, b) return allDerivedClasses[a] >  allDerivedClasses[b] 
                                                         or allDerivedClasses[a] == allDerivedClasses[b] and a < b 
                                   end)
        table.sort(derivedClasses, function(a, b) return a < b end)
    end
    
    table.sort(qincludes)
    
    if thisDef.class then
        needsValidityCheck = thisDef.needsValidityCheck
        needsWrapperClass  = constructor and (hasVirtualMembers or thisDef.needsGuard or needsValidityCheck or constructorProxy)
        if needsWrapperClass then
            wrapperClass = thisDef.class.."Wrapper"
            if needsValidityCheck or constructorProxy or thisDef.onlyWrapped then
                isExternalWrapperBase = true
                wrapperBase = wrapperClass.."Base"
            else
                isExternalWrapperBase = false
                wrapperBase = thisDef.class
            end
        else
            wrapperClass = false
        end
    end
end

if thisDef.class then
    
    className = thisDef.class

    if isWrapperHpp then
        emlua.dofile("ClassWrapperTemplate.hpp.emlua", GENFILENAME)
    elseif isBindingHpp then
        emlua.dofile("ClassBindingTemplate.hpp.emlua", GENFILENAME)
    elseif isBindingCpp then
        emlua.dofile("ClassBindingTemplate.cpp.emlua", GENFILENAME)
    else
        errorf("unexpected target file %q", GENFILENAME)
    end

elseif thisDef.namespace then

    namespaceName = thisDef.namespace

    if isBindingHpp then
        emlua.dofile("NamespaceBindingTemplate.hpp.emlua", GENFILENAME)
    else    
        emlua.dofile("NamespaceBindingTemplate.cpp.emlua", GENFILENAME)
    end
else
    errorf("%s: unknown binding type", BINDING)
end
