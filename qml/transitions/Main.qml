import QtQuick
import QtQuick.Controls

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: "QML Module Example"

    Button {
        text: "Click Me"
        anchors.centerIn: parent
        onClicked: console.log("Button clicked!")
    }
}
