#!/usr/bin/lua

local path     = require("path")     -- https://luarocks.org/modules/xavier-wang/lpath
local fs       = require("path.fs")  -- https://luarocks.org/modules/xavier-wang/lpath
local nocurses = pcall(function() return require("nocurses")  end) -- https://luarocks.org/modules/osch/nocurses

os.setlocale("C")

local args = {...}

local isfile  = require("path").isfile     -- https://luarocks.org/modules/xavier-wang/lpath
local scandir = require("path.fs").scandir -- https://luarocks.org/modules/xavier-wang/lpath
local sep     = require("path.info").sep

local function msgh(err)
    return debug.traceback(err, 2)
end
local function pcall(f, ...)
    return xpcall(f, msgh, ...)
end

local function path(p)
    return p:gsub("/", sep)
end

if #args == 1 or #args == 0 then
    local dirName
    if #args == 0 then
        dirName = "./tests"
    else
        dirName = args[1]
    end
    local pattern = path("/test.*%.lua$")
    for n, t in scandir(path(dirName)) do
        if n:match(pattern) and t == "file" and isfile(n) then
            args[#args + 1] = n
        end
    end
    table.sort(args)
end

local counter = 0
local tryNext = true

local tests = {}

local ok, errmsg = pcall(function()
    for argI = 1, #args do
        local testFileName = args[argI]
        counter = counter + 1
        local testname = testFileName:gsub("(test.*)%.lua$", "%1")
        local test, errmsg = loadfile(testFileName)
        if test then
            tests[#tests + 1] = testname
            print("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@")
            print("@@@@@@@@@@@", testname)
            print("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@")
            test()
        else
            error(errmsg, 2)
        end
    end
    print("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@")
    if nocurses and nocurses.isatty(io.stdout) then
        nocurses.setfontcolor("GREEN")
        nocurses.setfontbold(true)
    end
    for _, t in ipairs(tests) do
        print(t..": OK")
    end
    print("**** OK ****")
    if nocurses and nocurses.isatty(io.stdout) then
        nocurses.resetcolors()
    end
end)
if not ok then
    if nocurses and nocurses.isatty(io.stdout) then
        nocurses.setfontbold(true)
        nocurses.setfontcolor("RED")
    end
    print(errmsg)
    if nocurses and nocurses.isatty(io.stdout) then
        nocurses.resetcolors()
    end
end
