import QtQuick
import QtQuick.Controls
import my.qml.module 1.0

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: "TestQtQuick Example"

    CustomButton {
        text: "Click Me"
        anchors.centerIn: parent
        onClicked: console.log("Button clicked!")
    }

    Image {
        source: "qrc:/images/logo.png"
        width: 100
        height: 100
        anchors.top: parent.top
        anchors.horizontalCenter: parent.horizontalCenter
    }
}
