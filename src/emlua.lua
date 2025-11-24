-------------------------------------------------------------------------------
--
-- Preprocessor for embedded lua code within arbitrary text files.
--
-- This code is a modified version of
--
--                              http://lua-users.org/wiki/SimpleLuaPreprocessor
--
-------------------------------------------------------------------------------

local emlua = {}

local format = string.format

local loadstring = loadstring or load

local function append(list, toBeAppended)
    list[#list + 1] = toBeAppended
end

local function quoteString(s)
    local rslt
    rslt = string.gsub(s,    '([\'"\\])', '\\%1')
    rslt = string.gsub(rslt, '\n',      '\\n')
    return rslt;
end

local function quoteAsString(s)
    return '"'..quoteString(s)..'"'
end


function _emlua_ErrorHandler(msg)
    io.stderr:write(format("%s\n", debug.traceback("", 2)))
    return msg
end


local function buildScript(templateFileName)
  local file = io.open(templateFileName)
  local lineNumber = 1
  local chunk = { "local format = string.format;",
                  "local _emlua_Buffer = {};",
                  "local function _emlua_Out(s) _emlua_Buffer[#_emlua_Buffer + 1] = s end; " }

  for line in file:lines() do
    if string.find(line, "^@[^(]") or string.find(line, "^@$") then
      append(chunk, string.sub(line, 2) .. "\n")
    else
      local last = 1
      for text, expr, index in string.gmatch(line, "(.-)@(%b())()") do
        last = index
        if text ~= "" then
          append(chunk, format('_emlua_Out(%s); ', quoteAsString(text)))
        end
        local func, msg = loadstring("return "..expr)
        if not func then
            error(format("\nFile %s, line %d: Error in expression @%s: %s\n\n", templateFileName, lineNumber, expr, msg))
        end
        local expr2 = string.sub(expr, 2, -2)
        append(chunk, format('do '))
        append(chunk, format('  local function exprFunc()'))
        append(chunk, format('      return %s;', expr))
        append(chunk, format('  end '))
        append(chunk, format('  local callok, rslt;'))
        append(chunk, format('  callok, rslt = xpcall(exprFunc, _emlua_ErrorHandler);'))
        
        append(chunk, format('  if not callok then '))
        append(chunk, format('      io.stderr:write(format("\\nFile %s, line %d: Error in expression @%s: %%s\\n\\n", rslt));', 
                                          templateFileName, lineNumber, quoteString(expr)))
        append(chunk, format('      os.exit(10);'))
        append(chunk, format('  elseif rslt then '))
        append(chunk, format('      _emlua_Out(rslt);'))
        append(chunk, format('  end '))
        append(chunk, format('end '))
      end
      append(chunk, format('_emlua_Out(%s)\n',
                                         quoteAsString(string.sub(line, last).."\n")))
    end
    lineNumber = lineNumber + 1
  end
  append(chunk, "return table.concat(_emlua_Buffer)")
  return table.concat(chunk)
end

function emlua.dofile(templateFileName, outputFileName)
    local script = buildScript(templateFileName)
    local func, msg = loadstring(script, templateFileName)
    if not func then
       error("Error: " .. msg .. "\n")
    end
    local ok, rslt = xpcall(func, _emlua_ErrorHandler)
    if ok then
      local outFile = io.open(outputFileName, "w")
      outFile:write(rslt)
      outFile:close()
    else
      error("Error in file "..templateFileName..": "..rslt.."\n")
    end
end

return emlua
