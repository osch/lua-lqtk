lqtk = require"lqtk"

-------------------------------------------------------------------------------------------

local function printf(...)
    io.write(string.format(...))
    io.flush()
end
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
    local eee = expected:gsub("[%^%$%(%)%%%.%[%]%*%+%-%?]", "%%%0")
    return self:match(eee)
end

local function collectAll()
    collectgarbage()
    collectgarbage()
    QApplication.sendPostedEvents(nil, QEvent.DeferredDelete)
    collectgarbage()
    collectgarbage()
    QApplication.sendPostedEvents(nil, QEvent.DeferredDelete)
    collectgarbage()
    collectgarbage()
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
    local Regex = QRegularExpression
    local r = Regex("^123")

    local m = r:match("123")
    assert(m and m:isValid() and m:hasMatch())
    assert(m:capturedStart() == 0)

    local m = r:match("abc123")
    assert(m and m:isValid() and not m:hasMatch())
    assert(m:capturedStart() == -1)

    local m = r:match("abc123", 3)
    assert(m and m:isValid() and not m:hasMatch())
    assert(m:capturedStart() == -1)

    local m = r:match("abc123", 3, Regex.NormalMatch, Regex.AnchorAtOffsetMatchOption)
    assert(m and m:isValid() and not m:hasMatch())
    assert(m:capturedStart() == -1)

    local r = Regex("123")
    local m = r:match("abc123", 0, Regex.NormalMatch, Regex.AnchorAtOffsetMatchOption)
    assert(m and m:isValid() and not m:hasMatch())
    assert(m:capturedStart() == -1)

    local m = r:match("abc123", 3, Regex.NormalMatch, Regex.AnchorAtOffsetMatchOption)
    assert(m and m:isValid() and m:hasMatch())
    assert(m:capturedStart() == 3)

    local r = Regex("\\G123")
    local m = r:match("abc123xyz")
    assert(m and m:isValid() and not m:hasMatch())
    assert(m:capturedStart() == -1)
    local m = r:match("abc123xyz", 1)
    assert(m and m:isValid() and not m:hasMatch())
    assert(m:capturedStart() == -1)
    local m = r:match("abc123xyz", 3)
    assert(m and m:isValid() and m:hasMatch())
    assert(m:capturedStart() == 3)
    assert(m:captured() == "123")
end
PRINT("----------------------------------------------------------------------------------")
do
    local s = QString()
    assert(qtype(s) == "QString")
    assert(s:isNull())
    assert(s:toString() == "")
    
    local s = QString("123abc")
    assert(not s:isNull())
    assert(s:toString() == "123abc")
    
    local s2 = s:append("xyz")
    assert(s2 == s)
    assert(s:toString() == "123abcxyz")
    
    local s3 = QString("123abcxyz")
    
    assert(s ~= s3)
    assert(QString.compare(s, s3) == 0)
    assert(s3:compare(s) == 0)
    
    local s4 = s3:assign("123abcxyzZ")
    assert(s4 == s3)
    assert(s4:compare(s) > 0)
    assert(s4:toString() == "123abcxyzZ")
    
    local s5 = QString.number(1.5, "e", 3)
    assert(s5 == "1.500e+00")

    local s5 = QString.number(1.5, "f", 3)
    assert(s5 == "1.500")
    
    local s6 = QString("ä")
    assert(#s6:toString() == 2)
    assert(s6:length() == 1)
    assert(s6:at(0) == 0xe4)
    
    local s7 = QString("€")
    assert(#s7:toString() == 3)
    assert(s7:length() == 1)
    assert(s7:at(0) == 0x20ac)

    local s7 = QString("€€")
    assert(#s7:toString() == 6)
    assert(s7:length() == 2)
    assert(s7:at(0) == 0x20ac)
    assert(s7:at(1) == 0x20ac)
    
    local ok, rslt = pcall(function() print(s7:at(2)) end)
    print(rslt)
    assert(not ok and rslt:isError("bad argument #1 to method 'at' (invalid index)"))
    
    local ok, rslt = pcall(function() print(QString.at(s7, 2)) end)
    print(rslt)
    assert(not ok and rslt:isError("bad argument #2 to 'at' (invalid index)"))
end
PRINT("----------------------------------------------------------------------------------")
PRINT("Collecting garbage...")
collectAll()
PRINT("----------------------------------------------------------------------------------")
do
    local MyString = newClass(QString)
    function MyString:xxx()
        self:append("xxx")
    end
    local s1 = MyString("abc")
    assert(qtype(s1) == "MyString")
    assert(s1.xxx)
    assert(s1:toString() == "abc")
    local s2 = QString(s1)
    assert(qtype(s2) == "QString")
    assert(not s2.xxx)
    assert(s1:compare(s2) == 0)
    assert(s2:compare(s1) == 0)
    assert(s1:equals(s2))
    assert(s2:equals(s1))
    s1:xxx()
    assert(not s1:equals(s2))
    assert(s1:equals("abcxxx"))
end
PRINT("----------------------------------------------------------------------------------")
PRINT("Collecting garbage...")
collectAll()
PRINT("----------------------------------------------------------------------------------")
do
    local regex = QRegularExpression("a.*b")
    local match = QRegularExpressionMatch()
    local s = QString("....a123456b789b...")
    assert(qtype(s) == "QString")
    assert(match:captured() == "")
    local i = s:indexOf(regex, 0, match)
    assert(i == 4)
    assert(match:captured() == "a123456b789b")

    local regex2 = QRegularExpression("a.*?b")
    local i = s:indexOf(regex2, 0, match)
    assert(i == 4)
    assert(match:captured() == "a123456b")

    local ok, rslt = pcall(function() print(s:indexOf(1)) end)
    print(rslt)
    assert(not ok and rslt:isError("bad argument #1 to method 'indexOf' (string expected, got number)"))

    local ok, rslt = pcall(function() print(QString.indexOf(s, 1)) end)
    print(rslt)
    assert(not ok and rslt:isError("bad argument #2 to 'indexOf' (string expected, got number)"))
end
PRINT("----------------------------------------------------------------------------------")
PRINT("Collecting garbage...")
collectAll()
PRINT("----------------------------------------------------------------------------------")
do
    local b = QByteArray("123abc")
    assert(qtype(b) == "QByteArray")
    assert(b == b:append("xyz"))
    assert(b:toString() == "123abcxyz")
    local b2 = QByteArray("123abcxyz")
    assert(b2:compare(b) == 0)
    assert(b2 ~= b)
    assert(b2:equals(b))
    b2:append(b)
    assert(b2:toString() == "123abcxyz123abcxyz")
    assert(b:toString() == "123abcxyz")
    local b64 = b2:toBase64()
    print(b64:toString())
    assert(b64:equals("MTIzYWJjeHl6MTIzYWJjeHl6"))
    local b2a = QByteArray.fromBase64(b64)
    assert(b2a:equals("123abcxyz123abcxyz"))
    assert(QByteArray("123"):toHex():equals("313233"))
end
PRINT("----------------------------------------------------------------------------------")
PRINT("Collecting garbage...")
collectAll()
PRINT("----------------------------------------------------------------------------------")
do
    assert(QPushButton.closeEvent == QWidget.closeEvent)
    local e = QCloseEvent()
    local w = QWidget()
    w:closeEvent(e)
    local b = QPushButton()
    b:closeEvent(e)
end
PRINT("----------------------------------------------------------------------------------")
PRINT("Collecting garbage...")
collectAll()
PRINT("----------------------------------------------------------------------------------")
do
    local O = newClass(QObject)
    local W = newClass(QWidget)
    function O:event(ev)
        print("O:event", ev:type(), ev)
        assert(ev:type() == QEvent.ChildAdded)
        return QObject.event(self, ev)
    end
    function W:event(ev)
        if ev:type() == QEvent.Show then
            print("W:event", ev:type(), ev)
            self.showCalled = true
        end
        return QObject.event(self, ev)
    end
    local o1, o2 = O(), O()
    PRINT("**************************")
    o1:setParent(o2)
    PRINT("**************************")
    local w1, w2 = W(), W()
    w1:setParent(w2)
    assert(w1:parent() == w2)
    PRINT("**************************")
    local w3 = W()
    assert(not w3.showCalled)
    w3:show()
    assert(w3.showCalled)
    PRINT("**************************")

    O.event = nil
    W.event = nil
end
PRINT("----------------------------------------------------------------------------------")
PRINT("Collecting garbage...")
collectAll()
PRINT("----------------------------------------------------------------------------------")
do
    local pixmap = QPixmap(100, 100)
    local painter = QPainter()
    painter:begin(pixmap)
    painter:setRenderHint(QPainter.Antialiasing)
    pixmap = nil
    PRINT("COLLECTING GARBAGE")
    collectgarbage()
    collectgarbage()
    PRINT("GARBAGE COLLECTED 1")
    QApplication.sendPostedEvents(nil, QEvent.DeferredDelete)
    PRINT("GARBAGE COLLECTED 2")
    local ok, rslt = pcall(function() painter:setRenderHint(QPainter.Antialiasing) end)
    print(rslt)
    assert(not ok and rslt:isError("QPixmap in QPainter has been destructed"))
end
PRINT("----------------------------------------------------------------------------------")
PRINT("Collecting garbage...")
collectAll()
PRINT("----------------------------------------------------------------------------------")
do
    lqtk.debug.setTraceFile(io.stdout)
    local m = QAbstractItemModel()
    local idx1 = m:createIndex(2, 3)
    print("XXXXXXXXXXXXXXX", idx1)
    assert(idx1:row() == 2)
    assert(idx1:column() == 3)
    m = nil
    assert(isValid(idx1))
    PRINT("Collecting garbage...")
    collectAll()
    print("XXXXXXXXXXXXXXX", idx1)
    assert(not isValid(idx1))
    PRINT("Collecting garbage...")
    collectAll()
    lqtk.debug.setTraceFile(nil)
end
PRINT("----------------------------------------------------------------------------------")
PRINT("Collecting garbage...")
collectAll()
PRINT("----------------------------------------------------------------------------------")
do
    lqtk.debug.setTraceFile(io.stdout)
    local m1 = QStandardItemModel()
    local v = QTableView()
    v:setModel(m1)
    assert(v:model() == m1)
    assert(id(v:model()) == id(m1))
    m1 = nil
    PRINT("Collecting garbage...")
    collectAll()
    assert(v:model() == nil)
    local m1 = QStandardItemModel()
    local m2 = QStandardItemModel()
    print("v", v)
    print("m1", m1)
    print("m2", m2)
    v:setModel(m1)
    v:setModel(m2)
    m1 = nil
    PRINT("Collecting garbage...")
    collectAll()
    assert(v:model() == m2)
    assert(id(v:model()) == id(m2))
    m2 = nil
    PRINT("Collecting garbage...")
    collectAll()
    assert(v:model() == nil)
    lqtk.debug.setTraceFile(nil)
end
PRINT("----------------------------------------------------------------------------------")
PRINT("Collecting garbage...")
collectAll()
PRINT("----------------------------------------------------------------------------------")
do
    lqtk.debug.setTraceFile(io.stdout)
    local v1 = QTableView()
    local v2 = QTableView()
    print("v1", v1)
    print("v2", v2)
    local m1 = QStandardItemModel()
    print("m1", m1)
    v1:setModel(m1)
    v2:setModel(m1)
    local idx1 = m1:createIndex(20,30)
    local idx2 = m1:index(2,3)
    print("idx1", idx1)
    print("idx2", idx2)
    assert(idx2:row() == -1 and idx2:column() == -1)
    for row = 1, 4 do
        local items = {}
        for column = 1, 4 do
            items[column] = QStandardItem("Item "..row.." "..column)
        end
        m1:appendRow(items)
    end
    local idx2 = m1:index(2,3)
    print(idx2, idx2:row(), idx2:column())
    assert(idx2:row() == 2 and idx2:column() == 3)
    assert(m1:data(idx2):toString() == "Item 3 4")
    PRINT("Collecting garbage...")
    collectAll()
    print("***", v1:model())
    assert(v1:model() == m1)
    assert(id(v1:model()) == id(m1))
    assert(v2:model() == m1)
    assert(id(v2:model()) == id(m1))
    assert(idx1:row() == 20)
    assert(idx1:column() == 30)
    assert(idx2:row() == 2)
    assert(idx2:column() == 3)
    m1 = nil
    PRINT("Collecting garbage...")
    collectAll()
    assert(v1:model() == nil)
    assert(v2:model() == nil)
    assert(not isValid(idx1))
    assert(not isValid(idx2))
    local ok, rslt = pcall(function() print(idx1:row()) end)
    print(rslt)
    assert(not ok and rslt:isError("QModelIndex has been destructed"))
    local ok, rslt = pcall(function() print(idx1:row()) end)
    assert(not ok and rslt:isError("QModelIndex has been destructed"))
    lqtk.debug.setTraceFile(nil)
end
PRINT("----------------------------------------------------------------------------------")
PRINT("Collecting garbage...")
collectAll()
PRINT("----------------------------------------------------------------------------------")
print("OK.")
PRINT("----------------------------------------------------------------------------------")
