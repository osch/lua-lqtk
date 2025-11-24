lqtk = require"lqtk"

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

local loadstring       = loadstring or load
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
local isOwner          = lqtk.debug.isOwner
local isValid          = lqtk.isValid
local class            = lqtk.class
local baseClass        = lqtk.baseClass
local newClass         = lqtk.newClass

-------------------------------------------------------------------------------------------

local ref = setmetatable({}, {
    __mode = "v"
})

-------------------------------------------------------------------------------------------

collectAll()

PRINT("----------------------------------------------------------------------------------")
do
    if not QApplication.instance() then
        QApplication(arg)
    end
end

PRINT("----------------------------------------------------------------------------------")
do
    assert(baseClass(QWidget) == QObject)
    assert(baseClass(QObject) == nil)

    local C0 = newClass(QObject)
    assert(ltype(C0) == "userdata")
    assert(type(C0) == "lqtk.Class")
    assert(tostring(C0):match("^lqtk.Class<C0>: [x0-9A-Fa-f]+$"))
    assert(qtype(C0) == "C0")
    assert(baseClass(C0) == QObject)
    
    local C1 = newClass("C1", QObject)
    assert(ltype(C1) == "userdata")
    assert(type(C1) == "lqtk.Class")
    assert(tostring(C1):match("^lqtk.Class<C1>: [x0-9A-Fa-f]+$"))
    assert(qtype(C1) == "C1")
    assert(baseClass(C1) == QObject)
    
    local C2 = newClass("C2", QWidget)
    assert(ltype(C2) == "userdata")
    assert(type(C2) == "lqtk.Class")
    assert(tostring(C2):match("^lqtk.Class<C2>: [x0-9A-Fa-f]+$"))
    assert(qtype(C2) == "C2")
    assert(baseClass(C2) == QWidget)
    
    assert(QObject.new ~= nil)
    assert(type(QObject.new) == "function")
    
    assert(C0.new ~= nil)
    assert(C0.new == QObject.new)
    
    local nnn = function() print(1) end
    C0.new = nnn
    assert(C0.new == nnn)
    
    local C3 = newClass("C3", C2)
    assert(baseClass(C3) == C2)
    local qwn = QWidget.new
    assert(C3.new == qwn)
    local c2n = function() print(2) end
    C2.new = c2n
    assert(C2.new == c2n)
    assert(C3.new == c2n)
    assert(QWidget.new == qwn)
    
    local ok, rslt = pcall(function() QWidget.new = {} end)
    print(rslt)
    assert(not ok and rslt:match("class 'QWidget' is not mutable"))
    
    
    local QRect2 = newClass(QRect)
    function QRect2:x()
        return QRect.x(self) + 100
    end
    local r = QRect2(1, 2, 3, 4)
    assert(qtype(r) == "QRect2")
    assert(r:equals(QRect(1, 2, 3, 4)))
    assert(r:x() == 101)
    
    local o1 = C1()
    print(o1)
    
    function C3:new(...)
        PRINT("------------------------------")
        print(self, ...)
        assert(not isValid(self))
        --QWidget.new(self) -- TODO
    end
    PRINT("------------------------")
    local ok, rslt = pcall(function() print(C3()) end)
    print(rslt)
    assert(not ok and rslt:match("implementation <tests[/\\]test0020.lua%:131> of method C3%:new%(%) did not call QWidget.new%(%)"))

    function C3:new(...)
        PRINT("------------------------------")
        print(self, ...)
        assert(not isValid(self))
        QWidget.new(self) -- TODO
        assert(isValid(self))
    end
    local o3 = C3()
    print(o3)
    
    assert(class(o3) == C3)
    assert(baseClass(C3) == C2)
    assert(baseClass(o3) == C2)

    print("QWidget.new", QWidget.new)
    print("C2.new", C2.new)
    print("C3.new", C3.new)
    
    function C3:new(...)
        PRINT("------------------------------")
        print(self, ...)
        assert(not isValid(self))
        C2.new(self, ...)
        assert(not isValid(self))
    end
    local ok, rslt = pcall(function() print(C3()) end)
    print(rslt)
    assert(not ok and rslt:isError("method C3:new() did not call QWidget.new()"))

    function C3:new(...)
        PRINT("------------------------------")
        print(self, ...)
        assert(not isValid(self))
        C2.new(self, ...)
        assert(isValid(self))
    end
    C2.new = nil
    local o3 = C3()
    print(o3)
    
    local c3NewCalled, c2NewCalled
    
    function C3:new(...)
        PRINT("------------------------------")
        print(self, ...)
        c3NewCalled = true
        C2.new(self, ...)
        assert(isValid(self))
    end
    function C2:new(...)
        PRINT("------------------------------")
        print(self, ...)
        c2NewCalled = true
        assert(not isValid(self))
        QWidget.new(self, ...)
        assert(isValid(self))
    end        
    local o3 = C3()
    assert(c3NewCalled and c2NewCalled)

    c3NewCalled, c2NewCalled = false, false
    C3.new = nil
    local o3 = C3()
    assert(not c3NewCalled and c2NewCalled)
    
    c3NewCalled, c2NewCalled = false, false
    function C2:new(...)
        c2NewCalled = true
    end
    local ok, rslt = pcall(function() print(C3()) end)
    print(rslt)
    assert(not ok and rslt:isError("method C2:new() did not call QWidget.new()"))
    assert(not c3NewCalled and c2NewCalled)
    
    function C2:new(...)
        QObject.new(self, ...)
    end
    local ok, rslt = pcall(function() print(C3()) end)
    print(rslt)
    assert(not ok and rslt:isError("initial object of type lqtk.Object<QObject> expected"))

    local xxx = {}
    function C2:new(...)
        self.xxx = xxx
        QWidget.new(self, ...)
    end
    local o3 = C3()
    assert(o3.xxx == xxx)
    local w = QWidget()
    local ok, rslt = pcall(function() print(QWidget.new(w)) end)
    print(rslt)
    assert(not ok and rslt:isError("QWidget is already initialized"))
end

PRINT("----------------------------------------------------------------------------------")
PRINT("Collecting garbage...")
collectAll()
PRINT("----------------------------------------------------------------------------------")
do
    local Class1 = newClass(QObject)
    assert(qtype(Class1) == "Class1")
    
    Class2 = newClass(QObject)
    assert(qtype(Class2) == "Class2")
        
    local function test(...)
        local t = qtype(select(1, ...))
        print(t, id(select(1, ...)))
        assert(t == "QObject#"..tostring(id(select(1, ...))))
    end
    test(newClass(QObject))

    local WClass1 = newClass(QWidget)
    assert(qtype(WClass1) == "WClass1")
    
    WClass2 = newClass(QWidget)
    assert(qtype(WClass2) == "WClass2")
        
    local function test(...)
        local t = qtype(select(1, ...))
        print(t, id(select(1, ...)))
        assert(t == "QWidget#"..tostring(id(select(1, ...))))
    end
    test(newClass(QWidget))

    local WClass3 = newClass(QWidget)
    local w3 = WClass3()
    assert(qtype(w3) == "WClass3")
    assert(class(w3) == WClass3)
    
    local WClass4 = newClass(WClass3)
    local w4 = WClass4()
    assert(qtype(w4) == "WClass4")
    assert(class(w4) == WClass4)
    assert(baseClass(w4) == WClass3)
    
end

PRINT("----------------------------------------------------------------------------------")
PRINT("Collecting garbage...")
collectAll()
PRINT("----------------------------------------------------------------------------------")
do
    assert(ltype(Qt) == "userdata")
    assert(type(Qt) == "lqtk.Namespace")
    assert(qtype(Qt) == "Qt")
    assert(tostring(Qt):match("^lqtk.Namespace<Qt>: [x0-9A-Fa-f]+$"))

    local ok, rslt = pcall(function() Qt.XXX = "AAA" end)
    print(rslt)
    assert(not ok and rslt:isError("attempt to index a lqtk.Namespace value"))
end

PRINT("----------------------------------------------------------------------------------")
PRINT("Collecting garbage...")
collectAll()
PRINT("----------------------------------------------------------------------------------")
do
    local CCC = newClass(QObject)
    local ccc = CCC()
    CCC = nil
    collectAll()
    print(ccc)
    print(ccc)
    print(class(ccc))
    assert(qtype(ccc) == "CCC")
end

PRINT("----------------------------------------------------------------------------------")
PRINT("Collecting garbage...")
collectAll()
PRINT("----------------------------------------------------------------------------------")
do
    local ccc = newClass(QObject)()
    collectAll()
    print(ccc)
    print(class(ccc))
    assert(qtype(ccc):match("^QObject#%d+$"))
end

PRINT("----------------------------------------------------------------------------------")
PRINT("Collecting garbage...")
collectAll()
PRINT("----------------------------------------------------------------------------------")
do
    local ccc = newClass("XXX", QObject)()
    collectAll()
    print(ccc)
    print(class(ccc))
    assert(qtype(ccc) == "XXX")
end

PRINT("----------------------------------------------------------------------------------")
PRINT("Collecting garbage...")
collectAll()
PRINT("----------------------------------------------------------------------------------")
do
    local C1 = newClass(QWidget)
    assert(C1.children == QObject.children)
    assert(C1.close    == QWidget.close)
    
    local xxx = {}
    C1.xxx = xxx
    
    local C2 = newClass(C1)
    
    assert(C2.children == QObject.children)
    assert(C2.close    == QWidget.close)
    assert(C2.xxx      == xxx)
    assert(C2.xxx      == C1.xxx)
    
    local xxx2 = {}
    C1.xxx = xxx2
    
    assert(C2.xxx      == xxx2)
    assert(C2.xxx      == C1.xxx)
    
    local new1 = function() end
    assert(C1.new == QWidget.new)
    C1.new = new1
    assert(C1.new == new1)
    assert(C2.new == new1)

    C2.new = "AAA"

    local ok, rslt = pcall(function() print(C2()) end)
    print(rslt)
    assert(not ok and rslt:isError("attempt to call a string value"))
    
    
    local new2 = function() end
    C2.new = new2
    assert(C1.new == new1)
    assert(C2.new == new2)
    
    local fff1 = {}
    C2.paintEvent = fff1
    print(C2.paintEvent)
    assert(C2.paintEvent == fff1)
    C2.new = nil
    C1.new = nil
    local c2 = C2()
    assert(getmetatable(getUserValue(c2)).__index.paintEvent == fff1)
    assert(c2.paintEvent)
    PRINT("------------------------")
    c2:show()
    c2:resize(100, 100)
    QThread.msleep(200)
    local ok, rslt = pcall(function() QApplication.processEvents() end)
    print(rslt)
    assert(not ok and rslt:isError("error calling implementation of method 'QWidget:paintEvent': attempt to call a table value"))
    assert(C1.paintEvent == QWidget.paintEvent)
    local paintEventCalled
    local paintEvent = function(self, event)
        print("PAINT EVENT!")
        paintEventCalled = true
        C1.paintEvent(self, event)
    end
    C2.paintEvent = paintEvent
    assert(c2.paintEvent == paintEvent)
    c2:close()
    QApplication.processEvents()
    c2 = C2()
    assert(c2.paintEvent == paintEvent)
    c2:show()
    PRINT("------------------------")
    local deadline = QDeadlineTimer(100)
    while not paintEventCalled and not deadline:hasExpired() do
        QApplication.processEvents()
    end
    PRINT("------------------------")
    assert(paintEventCalled)
    
    local xxx3 = {}
    assert(C2.xxx == xxx2)
    assert(c2.xxx == xxx2)
    C2.xxx = xxx3
    assert(C2.xxx == xxx3)
    assert(c2.xxx == xxx3)
    local xxx4 = {}
    C2.xxx = xxx4
    assert(C2.xxx == xxx4)
    assert(c2.xxx == xxx4)
    QApplication.processEvents()
    QThread.msleep(50)
    QApplication.processEvents()
    c2:close()
    QApplication.processEvents()
end

PRINT("----------------------------------------------------------------------------------")
PRINT("Collecting garbage...")
collectAll()
PRINT("----------------------------------------------------------------------------------")
do
    assert(QLayout.sizeHint == nil)
    assert(QLayout.takeAt == nil)
    local MyLayout = newClass(QLayout)
    local l = MyLayout()
    local w = QWidget()
    local b = QPushButton("hi")
    local ok, rslt = pcall(function() l:addWidget(b) end)
    print(rslt)
    assert(not ok and rslt:isError("method 'QLayout:addItem' not implemented"))

    function MyLayout:addItem(item)
        self[#self + 1] = item
    end
    function MyLayout:count()
        return #self
    end
    function MyLayout:itemAt(i)
        print("itemAt", i, self[i+1])
        return self[i+1]
    end
    function MyLayout:sizeHint()
        return "XX"
    end
    local ok, rslt = pcall(function() l:addWidget(b) end)
    print(rslt)
    assert(not ok and rslt:isError("implementation <tests/test0020.lua:447> of method 'QLayout:addItem' could not be called: object of type 'QWidgetItem' cannot be bound to lua"))

    l:addItem(QWidgetItem(b))
    
    w:setLayout(l)
    assert(l:parent() == w)
    assert(b:parent() == w)
    local ok, rslt = pcall(function() print(w:sizeHint():toString()) end)
    print(rslt)
    assert(not ok and rslt:isError("implementation <tests/test0020.lua:457> of method 'QLayout:sizeHint' must return an object of type 'QSize'"))
    function MyLayout:sizeHint()
        return QSize(123, 456)
    end
    assert(w:sizeHint():toString() == "QSize(123,456)")
    assert(w:sizeHint():equals(QSize(123, 456)))
end

PRINT("----------------------------------------------------------------------------------")
PRINT("Collecting garbage...")
collectAll()
PRINT("----------------------------------------------------------------------------------")
do
    local MyLayout = newClass(QLayout) do
        function MyLayout:addItem(item)
            self[#self + 1] = item
        end
        function MyLayout:addWidget(w)
            assert(not w:parent())
            local p = self:parent()
            if p then
                w:setParent(p)
            end
            self:addItem(QWidgetItem(w))
        end
        function MyLayout:count()
            return #self
        end
        function MyLayout:itemAt(i)
            print("itemAt", i, self[i+1])
            return self[i+1]
        end
        function MyLayout:sizeHint()
            return QSize(456, 789)
        end
        function MyLayout:setGeometry(rect)
            print("MyLayout:setGeometry", rect:toString(), self[1]:widget():geometry():toString())
            QLayout.setGeometry(self, rect)
            self[1]:widget():setGeometry(rect)
        end
    end
    PRINT("-------------------------")
    local w = QWidget()
    local l = MyLayout(w)
    local b = QPushButton("hi")
    assert(not b:geometry():equals(QRect(0, 0, 456, 789)))
    PRINT("-------------------------")
    l:addWidget(b)
    PRINT("-------------------------")
    assert(not b:geometry():equals(QRect(0, 0, 456, 789)))

    assert(l:parent() == w)
    assert(b:parent() == w)
    assert(w:sizeHint():equals(QSize(456, 789)))
    PRINT("-------------------------")
    print(w:geometry():toString())
    assert(not w:geometry():equals(QRect(0, 0, 456, 789)))
    assert(not b:geometry():equals(QRect(0, 0, 456, 789)))
    w:show()
    print(w:geometry():toString())
    assert(w:geometry():equals(QRect(0, 0, 456, 789)))
    assert(b:geometry():equals(QRect(0, 0, 456, 789)))
    w:close()
end

PRINT("----------------------------------------------------------------------------------")
PRINT("Collecting garbage...")
collectAll()
PRINT("----------------------------------------------------------------------------------")
do
    local w1 = QWidget()
    assert(isOwner(w1))
    local w2 = QWidget(w1)
    assert(isOwner(w1))
    assert(not isOwner(w2))
    local w3 = QWidget()
    assert(isOwner(w3))
    w3:setParent(w1)
    assert(not isOwner(w3))

    local layout = QHBoxLayout()
    layout:addWidget(w1)
    assert(isOwner(w1))

    local w0 = QWidget()
    layout:setParent(w0)
    assert(w1:parent() == nil)
    assert(isOwner(w1))

    local layout = QHBoxLayout(w0)
    layout:addWidget(w1)
    assert(w1:parent() == w0)
    assert(not isOwner(w1))
    
    w0 = nil
    collectAll()
    assert(not isValid(w1))
end
PRINT("----------------------------------------------------------------------------------")
PRINT("Collecting garbage...")
collectAll()
PRINT("----------------------------------------------------------------------------------")
do
    PRINT("------------------------")
    for _, w in ipairs(QApplication.topLevelWidgets()) do
        print("closing", w)
        w:close()
    end
    PRINT("------------------------")
    local deadline = QDeadlineTimer(1000)
    repeat 
        QApplication.processEvents()
    until #QApplication.topLevelWidgets() == 0 or deadline:hasExpired() 
end
PRINT("----------------------------------------------------------------------------------")
PRINT("Collecting garbage...")
PRINT("----------------------------------------------------------------------------------")
print("OK.")
PRINT("----------------------------------------------------------------------------------")
