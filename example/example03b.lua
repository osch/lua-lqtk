local lqtk = require("lqtk")

lqtk.import("Q.*", "newClass")

--local BaseClass = QOpenGLWidget
local BaseClass = QWidget

local D = 4 -- precision of prerendered smooth Pixmap coordinates,
            -- the coordinates are rastered at 0/D, 1/D, 2/D, 3/D ...
            -- (D = 1 -> only integer coordinates) 

local BallsExample = newClass(BaseClass)
do
    function BallsExample:new(parent)
        BaseClass.new(self, parent)
        self:setWindowTitle("example03b.lua")
        local initialWidth, initialHeight = 640, 480
        self:resize(initialWidth, initialHeight)
        self.timer = QTimer()
        self.timer:setTimerType(Qt.PreciseTimer)
        self.timer:connect("timeout()", self, "update")
        self.timer:start(20)
        self.lastTime = QDateTime.currentMSecsSinceEpoch()
        local colors = {
            QColor("#e0ff0000"),
            QColor("#e000ff00"),
            QColor("#e00000ff")
        }
        self.gradients = {}
        for i = 1, 3 do
            local gradient = QLinearGradient(-1, -1, 1, 1)
            self.gradients[i] = gradient
            gradient:setColorAt(0, QColor("#e0ffffff"))
            gradient:setColorAt(1, colors[i])
        end
        
        self.path = QPainterPath()
        self.path:addEllipse(-1, -1, 2, 2)

        self.cache = {{},{},{}}
        
        local function getPixmaps(r, g)
            local c2 = self.cache[g]
            local pxms = c2[r]
            if not pxms then
                pxms = {}
                local d = 1/D
                for x = 0, D-1 do
                    pxms[x] = {}
                    for y = 0, D-1 do
                        local pxm = QPixmap(2*r+1, 2*r+1)
                        pxm:fill(Qt.transparent)
                        local painter = QPainter(pxm)
                        painter:setRenderHint(QPainter.Antialiasing)
                        painter:setRenderHint(QPainter.SmoothPixmapTransform)
                        painter:setPen(Qt.NoPen)
                        painter:translate(r + x*d, r + y*d)
                        painter:scale(r, r)
                        local gradient = self.gradients[g]
                        painter:setBrush(gradient)
                        painter:drawPath(self.path)
                        painter:finish()
                        pxms[x][y] = pxm
                    end
                end
                c2[r] = pxms
            end
            return pxms
        end
        self.objects = {}
        for i = 1, 500 do
            local obj = {}
            self.objects[i] = obj
            obj.r    = math.random(10, 30)
            obj.x    = math.random(obj.r, initialWidth  - 2 * obj.r)
            obj.y    = math.random(obj.r, initialHeight - 2 * obj.r)
            obj.g    = math.random(1, 3)
            obj.dx   = math.random() / 20
            obj.dy   = math.random() / 20
            obj.pxms = getPixmaps(obj.r, obj.g)
            obj.rand = 0.25 * math.random()
        end
    end
    
    function BallsExample:update(...)
        local now = QDateTime.currentMSecsSinceEpoch()
        local dt = now - self.lastTime
        local w, h = self:width(), self:height()
        for i = 1, #self.objects do
            local obj = self.objects[i]
            local x, y = obj.x, obj.y
            x = x + obj.dx * dt
            if x + obj.r > w then
                x = w - obj.r
                obj.dx = -obj.dx
            elseif x - obj.r < 0 then
                x = obj.r
                obj.dx = -obj.dx
            end
            y = y + obj.dy * dt
            if y + obj.r > h then
                y = h - obj.r
                obj.dy = -obj.dy
            elseif y - obj.r < 0 then
                y = obj.r
                obj.dy = -obj.dy
            end
            obj.x, obj.y = x, y

            obj.dx = obj.dx * (1 - dt * (0.0001 * (1 + obj.rand)))
            obj.dy = obj.dy * (1 - dt * (0.0001 * (1 + obj.rand)))
        end
        self.lastTime = now
        BaseClass.update(self, ...)
    end

    function BallsExample:mousePressEvent(event)
        local pos = event:position()
        local mx, my = pos:x(), pos:y()
        for i = 1, #self.objects do
            local obj = self.objects[i]
            local x, y = obj.x, obj.y
            local bdx, bdy = x - mx, y - my
            local bd = math.sqrt(bdx^2 + bdy^2)
            local a = (bd + 0.01)^-1.5 
            obj.dx = obj.dx + a * bdx
            obj.dy = obj.dy + a * bdy
        end
        self:update()
    end
    
    function BallsExample:paintEvent(event)
        local w, h = self:width(), self:height()
        local painter = QPainter(self)
        painter:setRenderHint(QPainter.Antialiasing)
        painter:setRenderHint(QPainter.SmoothPixmapTransform)
        painter:setPen(Qt.NoPen)
        painter:fillRect(0, 0, w, h, QColor("#ffffff"))
        for _, obj in ipairs(self.objects) do
            local x0, y0 = obj.x - obj.r - 1, obj.y - obj.r - 1
            local d = 1/D
            local xi = math.floor(x0+d/2)
            local yi = math.floor(y0+d/2)
            local dx = math.floor((x0 - xi)/d+0.5)
            local dy = math.floor((y0 - yi)/d+0.5)
            local pxm = obj.pxms[dx][dy]
            painter:drawPixmap(xi, yi, pxm) -- draws pixmap at integer coordinates, even
                                            -- if QPointF is used (at least under X11)
        end
        painter:finish()
    end
    
end

QApplication(arg)
local example = BallsExample()
example:show()
QApplication.exec()
