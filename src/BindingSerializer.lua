local format = string.format

------------------------------------------------------------------------------------------------------------------------

local function errorf(...)
    error(format(...))
end

function get(arg)
    if type(arg) == "table" then
        return arg[1]
    else
        return arg
    end
end

local function append(list, e)
    list[#list + 1] = e
end

local function Set(...)
    local rslt = {}
    for i = 1, select("#", ...) do
        local a = select(i, ...)
        rslt[a] = true
        rslt[i] = a
    end
    return rslt
end

local function oneOfFields(map, fields)
    for i, f in ipairs(fields) do
        if map[f] ~= nil then
            return f
        end
    end
end

local function calcMaxLength(...)
    local mlen = 0
    for i = 1, select("#", ...) do
        local list = select(i, ...)
        for _, el in ipairs(list) do
            local len = #el
            if len > mlen then
                mlen = len
            end
        end
    end
    return mlen
end

local function calcMaxLengthFor(list, map)
    local mlen = 0
    for _, el in ipairs(list) do
        if map[el] then
            local len = #el
            if len > mlen then
                mlen = len
            end
        end
    end
    return mlen
end

local function space(n)
    return string.rep(" ", n)
end

------------------------------------------------------------------------------------------------------------------------

local function BindingSerializer(binding, checkUniqueness)

    local consts = {}
    local funcs = {}
    local methods = {}
    local names = {}
    
    if binding.elements then
        for _, e in ipairs(binding.elements) do
            if e.enum then
                e.name = e.enum
                append(consts, e)
            elseif e.flag then
                e.name = e.flag
                append(consts, e)
            elseif e.func then
                e.name = e.func
                append(funcs, e)
            elseif e.method then
                e.name = e.method
                append(methods, e)
            else
                error("unknown element")
            end
            if checkUniqueness then
                assert(not names[e.name], e.name)
            end
            names[e.name] = true
        end
    end
    table.sort(consts,  function(a,b) return a.name < b.name end)
    table.sort(funcs,   function(a,b) 
        if     a.name == "new" then return true 
        elseif b.name == "new" then return false
        else                        return a.name < b.name end 
    end)
    table.sort(methods, function(a,b) return a.name < b.name end)
    
    ------------------------------------------------------------------------------------------------------------------------

    local outBuffer = {}
    
    local wasWritten = false
    local function out(...)
        outBuffer[#outBuffer + 1] = format(...)
        wasWritten = true
    end
    local function outsepnl()
        if wasWritten then
            out('\n')
            wasWritten = false
        end
    end
    
    ------------------------------------------------------------------------------------------------------------------------
    
    local function outConst(e)
        local asTables = false
        local maxLength = 0
        for _, v in ipairs(e.values) do
            if type(v) == "table" and v.cmt and #v.cmt > 0 then
                asTables = true
            end
            if #get(v) > maxLength then
                maxLength = #get(v)
            end
        end
        out('    {\n')
        if e.enum then
            out('        enum   = %q,\n', e.enum)
        elseif e.flag then
            out('        flag   = %q,\n', e.flag)
        else
            error("unhandled element")
        end
        out('        values = {\n')
        if asTables then
            for _, v in ipairs(e.values) do
                if type(v) == "table" and v.cmt and #v.cmt > 0 then
                    out('            { %q,%s cmt = %q },\n', get(v), space(maxLength - #get(v)), v.cmt)
                else
                    out('            { %q %s },\n', get(v), space(maxLength - #get(v)))
                end
            end    
        else
            for _, v in ipairs(e.values) do
                    out('            %q,\n', get(v))
            end    
        end
        out('        }\n')
        out('    },\n')
    end
    
    ------------------------------------------------------------------------------------------------------------------------
    
    local funcFlags    = Set("intercept")
    local funcBnds     = Set("binding", "delegate", "proxy")
    local funcAttr     = Set("func", "method")
    local funcFieldMxl = calcMaxLength(funcFlags, funcBnds, funcAttr)
    local bndAttrs     = Set("isMethod", "virtual", "override", "protected", "const", "abstract")
    
    
    local function outFuncOrMethod(e)
        out('    {\n')
        if e.func then
            out('        func%s = %q,\n', space(funcFieldMxl-#"func"), e.func)
        elseif e.method then
            out('        method%s = %q,\n', space(funcFieldMxl-#"method"), e.method)
        else
            error("unhandled element")
        end
        for _, flag in ipairs(funcFlags) do
            if e[flag] then
                out('        %s%s = true,\n', flag, space(funcFieldMxl-#flag))
            end
        end
        local bndField = oneOfFields(e, funcBnds)
        if bndField ~= nil then
            out('        %s%s = {\n', bndField, space(funcFieldMxl-#bndField))
            for _, bnd in ipairs(e[bndField]) do
                local rsltType = bnd[1]
                local argTypes = bnd[2]
                out('            { %q, {', rsltType)
                if #argTypes > 0 then
                    out(' ')
                    for a, argType in ipairs(argTypes) do
                        out('%q', argType)
                        if a < #argTypes then
                            out(', ')
                        end
                    end
                    out(' ')
                end
                out('}')
                if #bnd > 2 then
                    for i = 3, #bnd do
                        local a = bnd[i]
                        assert(bndAttrs[a])
                        assert(bnd[a] == nil or bnd[a] == true)
                        bnd[a] = true
                    end
                end
                for a, v in pairs(bnd) do
                    if type(a) == "string" then
                        assert(bndAttrs[a], a)
                        assert(type(v) == "boolean")
                    end
                end
                for _, attr in ipairs(bndAttrs) do
                    if bnd[attr] then
                        if attr == "abstract" then
                            out(', %q', "=0")
                        else
                            out(', %q', attr)
                        end
                    end
                end
                out(' },\n')
            end
            out('        }\n')
        end
        out('    },\n')
    end
    
    ------------------------------------------------------------------------------------------------------------------------
    
    if binding.class then
        out('class = %q\n', binding.class)
    elseif binding.namespace then
        out('namespace = %q\n', binding.namespace)
    else
        error("unknown binding")
    end
    
    if binding.baseClass then
        outsepnl()
        out('baseClass = %q\n', binding.baseClass)
    end
    local classFlags = Set("needsValidityCheck", "onlyWrapped", "needsGuard", "needsOwnerCheck", "polymorphic")
    
    if oneOfFields(binding, classFlags) then
        outsepnl()
        local mxl = calcMaxLengthFor(classFlags, binding)
        for _, flag in ipairs(classFlags) do
            if binding[flag] ~= nil then
                out('%s%s = %s\n', flag, space(mxl-#flag), binding[flag] and true or false)
            end
        end
    end
        
    if binding.elements then
        outsepnl()
        out('elements = {\n')
        if #consts > 0 then
            out('    --------------------------------------------------------------------------------------------------------------------------------------------------\n')
        end
        for _, e in ipairs(consts) do
            outConst(e)
        end
        if #funcs > 0 then
            out('    --------------------------------------------------------------------------------------------------------------------------------------------------\n')
        end
        for i, e in ipairs(funcs) do
            outFuncOrMethod(e)
            if e.func == "new" then
                assert(i == 1)
                out('    --------------------------------------------------------------------------------------------------------------------------------------------------\n')
            end
        end
        if #funcs > 1 and #methods > 0 then
            out('    --------------------------------------------------------------------------------------------------------------------------------------------------\n')
        end
        for _, e in ipairs(methods) do
            outFuncOrMethod(e)
        end
        if binding.elements.cmt then
            out('    cmt = [=====[\n')
            out(binding.elements.cmt:gsub("\n%s+$", ""))
            out('\n    ]=====]\n')
        end
        out('    --------------------------------------------------------------------------------------------------------------------------------------------------\n')
        out('}\n')    
    end
    out('\n')
    return table.concat(outBuffer)
end

return BindingSerializer
