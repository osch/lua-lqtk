os.setlocale("C")
local rockspecFilename, listFilename = ...
local inList = false
local rockspecFile = io.open(rockspecFilename, "r")
local lines = {}
for line in rockspecFile:lines() do
    lines[#lines + 1] = line
end
rockspecFile:close()
local out = {}
for _, line in ipairs(lines) do
    local pre, m = line:match("^(%s*%-%-) MODULES ([A-Z_]+)")
    if m == "BEGIN" then 
        out[#out+1] = line
        out[#out+1] = pre
        inList = true 
        local sources = {}
        local files   = {}
        local maxl = 0
        for source in io.lines(listFilename) do
            sources[#sources + 1] = source
            if #source > maxl then maxl = #source end
        end
        table.sort(sources, function(a,b)
            return a < b 
        end)
        for _, source in ipairs(sources) do
            out[#out+1] = string.format([[                %q,]], source)
        end
    elseif m == "END" then 
        out[#out+1] = pre
        out[#out+1] = line
        inList = false 
    elseif not inList then
        out[#out+1] = line
    end
end
local rockspecFile = io.open(rockspecFilename, "w")
for _, line in ipairs(out) do
    rockspecFile:write(line.."\n")
end
rockspecFile:close()

