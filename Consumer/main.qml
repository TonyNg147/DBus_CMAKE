import QtQuick
import QtQuick.Controls
Window{
    visible: true
    width: 640
    height: 480
    Row{
        Repeater{
            model: 2
            Button{
                text: model.index ? "ON" : "OFF"
                onClicked: controller.modifyStatus(model.index )
            }
        }

    }
}