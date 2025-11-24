local lqtk = require("lqtk")

lqtk.import("Q.*", "newClass")

local AnalogClock = newClass(QWidget)
do
    local hourHand = {
        QPoint(5, 14),
        QPoint(-5, 14),
        QPoint(-4, -71),
        QPoint(4, -71)
    }
    local minuteHand = {
        QPoint(4, 14),
        QPoint(-4, 14),
        QPoint(-3, -89),
        QPoint(3, -89)
    }
    local secondsHand = {
       QPoint(1, 14),
       QPoint(-1, 14),
       QPoint(-1, -89),
       QPoint(1, -89)
    }
    
    function AnalogClock:new(parent)
        QWidget.new(self, parent)
        self:setWindowTitle("Analog Clock")
        self:resize(200, 200)
        self.timer = QTimer()
        self.timer:setTimerType(Qt.PreciseTimer)
        self.timer:connect("timeout()", self, "update")
        self.timer:start()
    end
    
    function AnalogClock:update(...)
        QWidget.update(self, ...)
        local now  = QTime.currentTime()
        local next = now:addMSecs(1000 - now:msec())
        self.timer:setInterval(now:msecsTo(next))
    end

    function AnalogClock:paintEvent(event)
        local palette       = self:palette()
        local hourColor     = palette:color(QPalette.Text)
        local minuteColor   = palette:color(QPalette.Text)
        local secondsColor  = palette:color(QPalette.Accent)
        local w, h = self:width(), self:height()
        local side = w < h and w or h
        local painter = QPainter(self)
        painter:setRenderHint(QPainter.Antialiasing)
        local time = QTime.currentTime()
        painter:translate(w / 2, h / 2)
        painter:scale(side / 200.0, side / 200.0)
        painter:setPen(Qt.NoPen)
        painter:setBrush(hourColor)
        do  
            painter:save()
            painter:rotate(30.0 * ((time:hour() + time:minute() / 60.0)))
            painter:drawConvexPolygon(hourHand)
            painter:restore()
        end
        do  
            painter:save()
            for i = 0, 12 do
                painter:drawRect(73, -3, 16, 6);
                painter:rotate(30.0);
            end
            painter:restore()
        end
        painter:setBrush(minuteColor)
        do  
            painter:save()
            painter:rotate(6.0 * time:minute());
            painter:drawConvexPolygon(minuteHand);
            painter:restore()
        end
        painter:setBrush(secondsColor)
        do  
            painter:save()
            painter:rotate(6.0 * time:second());
            painter:drawConvexPolygon(secondsHand);
            painter:drawEllipse(-3, -3, 6, 6);
            painter:drawEllipse(-5, -68, 10, 10);
            painter:restore()
        end
        painter:finish()
    end
    
end

QApplication(arg)
local clock = AnalogClock()
clock:show()
QApplication.exec()
