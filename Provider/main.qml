import QtQuick
Window{
    visible: true
    width: 640
    height: 480
    Rectangle{
        anchors.fill: parent
        color: controller.status ? "blue" : "red"
        Text{
            anchors.centerIn: parent
            text: controller.status ? "ON" : "OFF"
        }
    }
}