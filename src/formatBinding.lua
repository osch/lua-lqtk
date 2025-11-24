local BindingSerializer = require("BindingSerializer")

local format = string.format

------------------------------------------------------------------------------------------------------------------------

local function errorf(...)
    error(format(...))
end

------------------------------------------------------------------------------------------------------------------------

local function loadBinding(fileName)
    local binding = {}
    local chunk, errmsg = loadfile(fileName, "t", binding)
    if chunk then
        if setfenv then
            setfenv(chunk, binding)
        end
        chunk()
    else
        errorf("Error loading %q: %s", fileName, errmsg)
    end
    return binding
end

------------------------------------------------------------------------------------------------------------------------

local binding = loadBinding(arg[1])

local serialized = BindingSerializer(binding, true --[[checkUniqueness]])

local outFile =    arg[2] and arg[2] == "-" and io.open(arg[1], "w")
               or  arg[2] and io.open(arg[2], "w") 
               or  io.stdout

outFile:write(serialized)
outFile:flush()
outFile:close()
