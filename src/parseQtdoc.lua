local BindingSerializer = require("BindingSerializer")

local format = string.format

local ARGS = arg

------------------------------------------------------------------------------------------------------------------------

local function errorf(...)
    error(format(...))
end

local function printf(...)
    io.write(format(...))
    io.flush()
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
        if map[f] then
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

local function space(n)
    return string.rep(" ", n)
end

------------------------------------------------------------------------------------------------------------------------

local function add(set, name, value)
    if not set[name] then
        set[name] = value
        set[#set + 1] = value
        return true
    end
end

------------------------------------------------------------------------------------------------------------------------

local docContent do
    local arg1 = ARGS[1]
    if arg1:match("%.") or arg1:match("/") then
        local docFile = io.open(arg1, "r")
        docContent = docFile:read("*a")
        docFile:close()
    else
        local docDir = ARGS[2]
        local htmlFile do
            local htmlFileName = arg1:lower()
            local paths = {
                docDir.."/qtcore/%s.html",
                docDir.."/qtgui/%s.html",
                docDir.."/qtwidgets/%s.html",
                docDir.."/qtopengl/%s.html"
            }
            for _, path in ipairs(paths) do
                local fullName = format(path, htmlFileName)
                htmlFile = io.open(fullName, "r")
                if htmlFile then break end
            end
        end
        local htmlContent = htmlFile:read("*a")
        htmlFile:close()
        function html_to_text(html)
            -- Remove script and style blocks
            html = html:gsub("<script.->.-</script>", "")
            html = html:gsub("<style.->.-</style>", "")
            -- Remove all HTML tags
            html = html:gsub("</td>", " ")
            html = html:gsub("<br/?>", "\n")
            html = html:gsub("<.->", "")
            -- Convert HTML entities (basic implementation)
            html = html:gsub("&nbsp;", " ")
            html = html:gsub("&lt;", "<")
            html = html:gsub("&gt;", ">")
            html = html:gsub("&amp;", "&")
            html = html:gsub("&quot;", "\"")
            html = html:gsub("&apos;", "'")
            -- Collapse excessive whitespace
            html = html:gsub("[ \t]+", " ")
            html = html:gsub("%s*[\r\n]+%s*", "\n")
            -- Trim leading and trailing whitespace
            html = html:match("^%s*(.-)%s*$")
            return html
        end
        docContent = html_to_text(htmlContent)
    end
end

------------------------------------------------------------------------------------------------------------------------

local isIn = nil

local thisName
local className
local baseClass
local namespaceName
local enums = {}
local flags = {}
local funcs = {}
local methods = {}

local function simplifyType(tp)
    if tp:match("^%s*QList<.*>%s*$") then
        return tp:match("^%s*(QList<.*>)%s*$"):gsub("%s+%*", "*")
    elseif tp:match("%*%s*$") then
        return tp:gsub("^%s+", ""):gsub("%s+%*", "*")
    elseif tp:match("^%s*const%s.*%&%s*$") then
        return tp:match("^%s*const%s+(.-)%s*%&%s*$")
    else
        return tp:match("^%s*(.-)%s*$")
    end
end

local function simplifyArg(arg)
    local rslt = assert(arg:match("^%s*(.-)[_%w]*%s*$"), arg)
    if rslt == "" then
        rslt = arg
    end
    return simplifyType(rslt)
end

local function parseArgs(args)
    local rslt = {}
    while #args > 0 do
        local arg1, sep, rest = args:match("^([^,=]*)([,=]?)(.*)$")
        if sep == "=" then
            local def
            if rest:match("^[^,]-%(") then
                def, rest = rest:match("^%s*([^(]*%b())[,]?(.-)%s*$")
            else
                def, rest = rest:match("^%s*([^,]*)[,]?(.-)%s*$")
            end
            rslt[#rslt + 1] = simplifyArg(arg1).."="..def
        else
            rslt[#rslt + 1] = simplifyArg(arg1)
        end
        args = rest
    end
    return rslt
end
local function parseMethod(line, isProtected, isFunc)
    local isVirtual = false
    if line:match("^virtual%s") then
        isVirtual = true
        line = line:match("^virtual%s+(.*)$")
    end
    local rslt, name, rest

    if line:match("^%s*"..className.."%s*%(") then
        name = "new"
        isFunc = true
        rslt = className.."*"
        rest = assert(line:match("^%s*"..className.."%s*(%(.-)%s*$"))
    elseif line:match("^%s*%~"..className.."%(") then
        return
    else
        rslt, name, rest = line:match("^%s*(.-)%s*(%a[_%w]*)%s*(%(.-)%s*$")
    end
    if not rslt and (   line:match("^[^()]*operator[^()]+%(")
                     or line:match("^[^()]*$"))
    then
        -- skipping operator and static variable
        return
    end
    assert(rslt)
    rslt = simplifyType(rslt)
    local args, rest = rest:match("^%(%s*(.*)%s*%)%s*(.*)$")
    args = parseArgs(args)
    local const, rest2 = rest:match("^%s*(const)%s*(.-)%s*$")
    local isConst = false
    local isOverride = false
    local isAbstract = false
    if const then
        isConst = true
        rest = rest2
    else 
        rest = rest:match("^%s*(.-)%s*$")
    end
    local override, rest2 = rest:match("^%s*(override)%s*(.-)%s*$")
    if override then    
        isOverride = true
        rest = rest2
    else
        rest = rest:match("^%s*(.-)%s*$")
    end
    --printf("--- %q, %q %s -- %q\n", rslt, name, require"inspect"(args), rest)
    if rest == "= 0" then
        isAbstract = true
    elseif rest == "&" or rest == "&&" then
        return
    else
        assert(#rest == 0, rest)
    end

    local protected = not isAbstract and isProtected and true or nil
    local override = not isProtected and not isAbstract and isOverride and true or nil
    local abstract = isAbstract and true or nil

    local existing1 = funcs[name]
    local existing2 = methods[name]
    assert(not (existing1 and existing2))
    
    if isFunc then
        if existing2 then
            existing2.func = name
            existing2.method = nil
            methods[name] = nil
            funcs[name] = existing2
            if existing2.binding then
                for _, bnd in ipairs(existing2.binding) do
                    bnd.isMethod = true
                end
            end
        end
    else
        assert(not existing1)
    end

    local map = isFunc and funcs or methods

    local existing = map[name]

    local newBind = { rslt, args, 
                      isMethod  = (existing and existing.func and not isFunc) and true or nil,
                      virtual   = isVirtual,
                      abstract  = abstract,
                      override  = override,
                      protected = isProtected,
                      const     = (protected or isVirtual or override or abstract) and isConst and true or nil,
                    }
    if not existing then
        add(map, name, {
            method = not isFunc and name or nil,
            func = isFunc and name or nil,
            binding = { newBind }
        })
    else
        append(existing.binding, newBind)
    end
end

local currentEnum
local lineCount = 0

for line in docContent:gmatch("[^\n]*") do
    lineCount = lineCount + 1
    line = line:gsub("%s%(since[^)]*%)%s", " ")
    --printf("line %d: %q\n", lineCount, line)
    if line:match("^%(since") then
        line = line:match("^%(since[^%)]*%)%s*(.*)$")
    end
    if not thisName then
        if line:match("^%a[_%w]* Class$") then
            assert(not thisName)
            thisName = line:match("^%a[_%w]*")
            className = thisName
        elseif line:match("^%a[_%w]* Namespace$") then
            assert(not thisName)
            thisName = line:match("^%a[_%w]*")
            namespaceName = thisName
        end
    else
        if line:match("^Inherits:") then
            baseClass = line:match("^Inherits:%s*(%a[_%w]*)")
        elseif line:match("^Public Types$") 
            or line:match("^Types$") 
        then
            isIn = "types"
        elseif line:match("^Protected%s+Types$") then
            isIn = "protectedTypes"
        elseif line:match("^Properties$") then
            isIn = nil
        elseif line:match("^Public Functions$") 
            or line:match("^Reimplemented Public Functions$")
            or line:match("^Public Slots$")
        then
            isIn = "methods"
        elseif line:match("^Static Public Members$") then
            isIn = "funcs"
        elseif line:match("^Protected Functions$") 
            or line:match("^Reimplemented Protected Functions$")
            or line:match("^Protected Slots$")
        then
            isIn =  "protectedMethods"
        elseif line:match("^Property Documentation$") 
            or line:match("^Detailed Description$")
            or line:match("^Macros$")
            or line:match("^Related Non%-Members$")
            or line:match("^Member Function Documentation$")
        then
            isIn = nil
        elseif line:match("^Member Type Documentation$") then
            isIn = nil
        elseif line:match("^Property Documentation$") 
            or line:match("^Signals$") 
        then
            isIn = nil
        elseif thisName and line:match("^enum%s+"..thisName.."::".."%a[_%w]*%s*$") then
            isIn = "enum"
            currentEnum = assert(line:match("^enum%s+"..thisName.."::".."(%a[_%w]*)%s*$"))
            --printf("%d isIn enum %q\n", lineCount, currentEnum)
            assert(enums[currentEnum])
        elseif thisName and line:match("^flags%s+"..thisName.."::".."%a[_%w]*%s*$") then
            isIn = "flags"
            currentEnum = assert(line:match("^flags%s+"..thisName.."::".."(%a[_%w]*)%s*$"))
            --printf("%d isIn flags %q\n", lineCount, currentEnum)
            assert(flags[currentEnum])
        elseif isIn == "types" or isIn == "protectedTypes" then
            if line:match("^enum%s") then
                local n = line:match("^enum%s+(%a[_%w]*)")
                --printf("Enum %q\n", n)
                add(enums, n, { enum = n, values = {}, protected = (isIn == "protectedTypes" and true or nil) })
            elseif line:match("^flags%s") then
                local n = line:match("^flags%s+(%a[_%w]*)")
                --printf("Flags %q\n", n)
                add(flags, n, { flag = n, values = {}, protected = (isIn == "protectedTypes" and true or nil) })
            else
                inTypes = false
            end
        elseif isIn == "enum" or isIn == "flags" then
            if line:match("^"..thisName.."::") then
                local value, cmt = line:match("^"..thisName.."::(%a[_%w]*)%s+%S+%s*(.-)%s*$")
                if value then
                    --printf("%s: %q -- %q\n", currentEnum, value, cmt)
                    local e = (isIn == "enum" and enums[currentEnum] or flags[currentEnum])
                    append(e.values,  { value, cmt = cmt:gsub("\t", " ") })
                end
            end
        elseif isIn == "methods" then
            parseMethod(line)
        elseif isIn == "protectedMethods" then
            parseMethod(line, true)
        elseif isIn == "funcs" then
            parseMethod(line, false, true)
        end
    end
end

local elements = {}
for _, e in ipairs(enums) do
    if #e.values > 0 then
        append(elements, e)
    end
end
for _, e in ipairs(flags) do
    if #e.values > 0 then
        append(elements, e)
    end
end
for _, f in ipairs(funcs) do
    append(elements, f)
end
for _, m in ipairs(methods) do
    append(elements, m)
end
local binding = {
    class = className,
    namespace = namespaceName,
    baseClass = baseClass,
    elements = elements
}

local serialized = BindingSerializer(binding, true --[[checkUniqueness]])

local outFile
if ARGS[3] and ARGS[3] ~= "-" then
    printf("Writing to %q\n", ARGS[3])
    outFile = io.open(ARGS[3], "w")
elseif ARGS[3] == "-" then
    outFile = stdout
else
    local outFileName = "orig/"..thisName.."FromDoc.lua"
    --printf("Writing %q\n", outFileName)
    outFile = io.open(outFileName, "w")
end

outFile:write(serialized)
outFile:flush()
outFile:close()
