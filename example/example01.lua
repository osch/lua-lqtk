local lqtk = require("lqtk")

lqtk.import()

QApplication(arg)

local window = QWidget() do
    local label  = QLabel("Hello World!") do
        local font = QFont()
        font:setPointSize(2 * font:pointSize())
        label:setFont(font)
        label:setAlignment(Qt.AlignCenter)
    end
    local buttons = QDialogButtonBox() do
        buttons:setCenterButtons(true)
        local button = buttons:addButton(QDialogButtonBox.Ok) do
            button:connect("clicked()", function() 
                QApplication.exit() 
            end)
        end
    end
    local layout = QVBoxLayout(window) do
        layout:addWidget(label)
        layout:addWidget(buttons)
    end
end
window:show()

QApplication.exec()