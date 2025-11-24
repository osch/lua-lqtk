local lqtk = require"lqtk"

--lqtk.debug.setTraceFile(io.stdout)

-------------------------------------------------------------------------------------------

local function assertEq(a1, a2)
    if not (a1 == a2) then
        error("assertEq failed: "..tostring(a1).." <> "..tostring(a2), 2)
    end
end
local function PRINT(s)
    print(s.." ("..debug.getinfo(2).currentline..")")
end
local function msgh(err)
    return debug.traceback(err, 2)
end
local function pcall(f, ...)
    return xpcall(f, msgh, ...)
end
function string:isError(expected)
    return self:match(expected:gsub("[().:]", "%%%0"))
end

local function collectAll()
    collectgarbage()
    collectgarbage()
    QApplication.sendPostedEvents(nil, QEvent.DeferredDelete)
end

-------------------------------------------------------------------------------------------

lqtk.import()

local ltype            = type
local type             = lqtk.type
local qtype            = lqtk.qtype
local getUserValue     = lqtk.debug.getUserValue
local weakUserValues   = lqtk.debug.weakUserValues
local strongUserValues = lqtk.debug.strongUserValues
local userData         = lqtk.debug.userData
local objPtr           = lqtk.debug.objPtr
local ptr              = lqtk.debug.ptr
local id               = lqtk.debug.id
local isValid          = lqtk.isValid
local newClass         = lqtk.newClass

-------------------------------------------------------------------------------------------

local ref = setmetatable({}, {
    __mode = "v"
})

-------------------------------------------------------------------------------------------

PRINT("----------------------------------------------------------------------------------")
do
    assert(QApplication.instance() == nil)

    local ok, rslt = pcall(function() print(QWidget()) end)
    assert(not ok and rslt:match("Must construct a QApplication before a QWidget"), rslt)

    local ok, rslt = pcall(function() print(QPushButton()) end)
    print(rslt)
    assert(not ok and rslt:match("Must construct a QApplication before a QWidget"), rslt)

    local app = QApplication(arg)
    local appPtr = objPtr(app)
    local appId  = id(app)
    local xxx = {}
    local ok, rslt = pcall(function() app.xxx = xxx end)
    assert(not ok and rslt:match("object is not mutable"), rslt)

    assert(userData[appPtr] == app)
    assert(isValid(app))    
    assert(QApplication.instance() == app)
    assert(ptr(QApplication.instance()) == ptr(app))
    assert(id(QApplication.instance()) == id(app))
    assert(type(app.event) == "function")

    assert(userData[appPtr] == app)
    assert(weakUserValues[appPtr] == nil)
    assert(strongUserValues[appPtr] == nil)

    local ok, rslt = pcall(function() print(QApplication(arg)) end)
    assert(not ok and rslt:match("QApplication already constructed"), rslt)
    
    app = nil
    PRINT("---")
    collectgarbage()
    collectgarbage()
    PRINT("---")

    assert(userData[appPtr] == nil)
    assert(weakUserValues[appPtr] == nil)
    assert(strongUserValues[appPtr] == weakUserValues[appPtr])

    local app2 = QApplication.instance()
    
    assert(appPtr == objPtr(app2))
    assert(appId  ~= id(app2))
    
    assert(userData[appPtr] == app2)
    assert(weakUserValues[appPtr] == nil)
    assert(strongUserValues[appPtr] == weakUserValues[appPtr])

    PRINT("---")
    QApplication.sendPostedEvents(nil, QEvent.DeferredDelete)
    PRINT("---")

end

collectAll()


PRINT("----------------------------------------------------------------------------------")
do
    local o = QObject()
    print(o)
    assert(type(QObject) == "lqtk.Class")
    assert(type(o) == "lqtk.Object")
    assert(qtype(o) == "QObject")
    assert(tostring(o):match("^lqtk.Object<QObject>: [x0-9A-Fa-f]+$"))
    do
        local ps1 = tostring(o):match("^lqtk.Object<QObject>: ([x0-9A-Fa-f]+)$")
        local ps2 = tostring(objPtr(o)):match("^userdata: ([x0-9A-Fa-f]+)$")
        local ps3 = tostring(ptr(o)):match("^userdata: ([x0-9A-Fa-f]+)$")
        assert(ps1 == ps2)
        assert(ps1 ~= ps3)
    end
    local optr = objPtr(o)
    assert(type(optr) == "userdata")
    assert(optr ~= o)
    assert(userData[optr] == o)

    ref[1] = o
    collectgarbage()
    assert(ref[1] == o)
    o = nil
    collectgarbage()
    assert(ref[1] == nil)
    assert(userData[optr] == nil)
end

PRINT("----------------------------------------------------------------------------------")
do
    local o = QObject()
    local ok, rslt = pcall(function() o.selfref = o end)
    assert(not ok and rslt:match("object is not mutable"), rslt)
    
    local C = newClass(QObject)
    local o = C()
    ref[1] = o
    o.selfref = o
    
    collectgarbage()
    assert(ref[1] == o)
    o = nil
    collectgarbage()
    assert(ref[1] == nil)
end

PRINT("----------------------------------------------------------------------------------")
do
    local p = QObject()
    local o = QObject(p)
    ref.p = p
    ref.o = o
    local op  = ptr(o)
    local oid = id(o)
    local oop = objPtr(o)

    o = nil
    collectgarbage()
    assert(ref.p == p)
    assert(ref.o == nil)
    
    assert(#p:children() == 1)
    
    local o2 = p:children()[1]
    assert(o2 ~= nil)
    
    assert(oid ~= id(o2))
    assert(oop == objPtr(o2))
end

PRINT("----------------------------------------------------------------------------------")
do
    local C = newClass(QObject)
    local p = C()
    local o = C(p)
    ref.p = p
    ref.o = o
    local op  = ptr(o)
    local oid = id(o)
    local oop = objPtr(o)
    local xxx = {}
    o.xxx = xxx
    
    assert(weakUserValues[oop] ~= nil)
    assert(weakUserValues[oop].xxx == xxx)
    assert(strongUserValues[oop] == nil)

    o = nil
    collectgarbage()
    assert(ref.p == p)
    assert(ref.o == nil)
    
    assert(#p:children() == 1)
    
    local o2 = p:children()[1]
    assert(o2 ~= nil)
    
    assert(oid ~= id(o2))
    assert(oop == objPtr(o2))

    assert(weakUserValues[oop] ~= nil)
    assert(weakUserValues[oop].xxx == xxx)
    assert(strongUserValues[oop] == weakUserValues[oop])
end

collectAll()

PRINT("----------------------------------------------------------------------------------")

do
    local C = newClass(QObject)

    local p = C()
    local o = C(p)
    
    print("PPP", p);
    print("OOO", o);
    
    ref.p = p
    ref.o = o
    local oid = id(o)
    local oop = objPtr(o)
    
    local pid = id(p)
    local pop = objPtr(p)
    
    assert(userData[pop] == p)
    assert(weakUserValues[pop] ~= nil)
    assert(strongUserValues[pop] == nil)

    assert(userData[oop] == o)
    assert(weakUserValues[oop] ~= nil)
    assert(strongUserValues[oop] == nil)

    local xxx = {}
    local yyy = {}
    o.xxx = xxx
    p.yyy = yyy
    
    assert(userData[pop] == p)
    assert(weakUserValues[pop] ~= nil)
    assert(weakUserValues[pop].yyy == yyy)
    assert(strongUserValues[pop] == nil)

    assert(userData[oop] == o)
    assert(weakUserValues[oop] ~= nil)
    assert(weakUserValues[oop].xxx == xxx)
    assert(strongUserValues[oop] == nil)

    p = nil
    PRINT("-------")
    collectgarbage()
    PRINT("-------")
    print("OOO", o);
    
    assert(ref.p == nil)
    assert(ref.o == o)

    assert(userData[pop] == nil)
    assert(weakUserValues[pop] ~= nil)
    assert(weakUserValues[pop].yyy == yyy)
    assert(strongUserValues[pop] == weakUserValues[pop])

    local p2 = o:parent()

    assert(objPtr(p2) == pop)
    assert(id(p2) ~= pid)

    assert(userData[pop] == p2)
    assert(weakUserValues[pop] ~= nil)
    assert(weakUserValues[pop].yyy == yyy)
    assert(strongUserValues[pop] == weakUserValues[pop])

    assert(userData[oop] == o)
    assert(weakUserValues[oop] ~= nil)
    assert(weakUserValues[oop].xxx == xxx)
    assert(strongUserValues[oop] == nil)

    PRINT("-------")
    QApplication.sendPostedEvents(nil, QEvent.DeferredDelete)
    PRINT("-------")

    print("PPP", p2);
    print("OOO", o);

    assert(not isValid(p2))
    assert(not isValid(o))

    local ok, rslt = pcall(function() print(p2:children()) end)
    print(rslt)
    assert(not ok and rslt:match("QObject has been destructed"))
    
    local ok, rslt = pcall(function() print(o:parent()) end)
    print(rslt)
    assert(not ok and rslt:match("QObject has been destructed"))
    
    assert(userData[pop] == p2)
    assert(weakUserValues[pop] == nil)
    assert(strongUserValues[pop] == nil)

    assert(userData[oop] == o)
    assert(weakUserValues[oop] == nil)
    assert(strongUserValues[oop] == nil)
    
    p2 = nil
    PRINT("-------")
    collectgarbage()
    PRINT("-------")
    
    assert(userData[pop] == nil)
    assert(weakUserValues[pop] == nil)
    assert(strongUserValues[pop] == nil)
end

PRINT("----------------------------------------------------------------------------------")
collectAll()
PRINT("----------------------------------------------------------------------------------")

do
    local w = QWidget()
    local painter = QPainter()
    painter:begin(w)
    painter:setRenderHint(QPainter.Antialiasing)
    w = nil
    PRINT("COLLECTING GARBAGE")
    collectgarbage()
    collectgarbage()
    PRINT("GARBAGE COLLECTED 1")
    QApplication.sendPostedEvents(nil, QEvent.DeferredDelete)
    PRINT("GARBAGE COLLECTED 2")
    
    local ok, rslt = pcall(function() painter:setRenderHint(QPainter.Antialiasing) end)
    print(rslt)
    assert(not ok and rslt:isError("QWidget in QPainter has been destructed"))
end

PRINT("----------------------------------------------------------------------------------")
collectAll()
PRINT("----------------------------------------------------------------------------------")
do
    local W = newClass(QWidget)
    local w = W()
    local called
    local event
    function w:resizeEvent(e)
        assert(isValid(e))
        assert(e:size())
        called = true
        event = e
    end
    w:show()
    w:resize(10, 10)
    assert(called)
    assert(event)
    assert(not isValid(event))

    local ok, rslt = pcall(function() print(event:size()) end)
    print(rslt)
    assert(not ok and rslt:isError("QResizeEvent has been destructed"))
end

PRINT("----------------------------------------------------------------------------------")
collectAll()
PRINT("----------------------------------------------------------------------------------")
do

    local widget1 = QLabel("Name:")
    local widget2 = QLineEdit()
    
    local item1 = QWidgetItem(widget1)
    local item2 = QWidgetItem(widget2)
    
    
    assert(widget1:parent() == nil)
    assert(widget2:parent() == nil)
    
    print("WW1", widget1)

    widget1 = nil
    
    print("=== COLLECTING GARBAGE")
    collectAll()
    print("=== GARBAGE COLLECTED")
    
    print("WW1", widget1)
    print("WW2", widget2)
    print("II1", item1)
    print("II2", item2)
    
    assert(not isValid(item1))
    assert(    isValid(item2))
    
    assert(not isValid(widget1))
    assert(    isValid(widget2))
    
    assert(widget2 == item2:widget())

    local ok, rslt = pcall(function() print(item1:widget()) end)
    print(rslt)
    assert(not ok and rslt:isError("QWidget in QWidgetItem has been destructed"))
end
PRINT("----------------------------------------------------------------------------------")
collectAll()
PRINT("----------------------------------------------------------------------------------")
print("Ok.")
