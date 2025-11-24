local format = string.format

local function errorf(...)
    error(format(...), 2)
end

local function append(t, v)
    t[#t + 1 ] = v
end


BINDINGS = {}

local GENFILENAME

for i = 1, select("#", ...) do
    local arg = select(i, ...)
    if i == 1 then
        GENFILENAME = arg
    else
        BINDINGS[#BINDINGS + 1] = arg
    end
end

local function isOneOf(x, ...) 
    for i = 1, select("#", ...) do
        if x == select(i, ...) then
            return true
        end
    end
    return false
end


local bindings = {}

local hasConstructorSet = {}
local hasVirtualMemberSet = {}
local needsGuardSet = {}
local needsValidityCheckSet = {}
local hasConstructorProxySet = {}

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
            binding = {}
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
            if binding.needsGuard then
                needsGuardSet[name] = true
            end
            if binding.needsValidityCheck then
                needsValidityCheckSet[name] = true
            end
            if binding.elements then
                for _, e in ipairs(binding.elements) do
                    if e.func == "new" then
                        hasConstructorSet[name] = true
                        if e.proxy then
                            hasConstructorProxySet[name] = true
                        end
                    end
                    for _, b in ipairs(e.binding or e.delegate or e.proxy or {}) do
                        for i = 3, #b do
                            local v = b[i]
                            b[v] = true
                            if isOneOf(v, "virtual", "=0", "override", "protected") then
                                hasVirtualMemberSet[name] = true
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

for _, bindingName in ipairs(BINDINGS) do
    hasVirtualMembersFromBaseClass(bindingName)
end

local needsWrapperList = {}
for _, bindingName in ipairs(BINDINGS) do
    if not needsWrapperList[bindingName] and needsWrapper(bindingName) then
        append(needsWrapperList, bindingName)
        needsWrapperList[bindingName] = true
    end
end

table.sort(needsWrapperList)

local outFile = assert(io.open(GENFILENAME, "w"))

local function outf(...)
    outFile:write(format(...))
end

outf("WRAPPER_BINDINGS := ")
for i, name in ipairs(needsWrapperList) do
    if i > 1 then
        outf(" \\\n                    ")
    end
    outf("%s", name)
end
outf("\n")
outFile:close()
