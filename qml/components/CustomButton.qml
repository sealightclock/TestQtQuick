import QtQuick
import QtQuick.Controls

Button {
    id: customButton
    property color bgColor: "blue"

    background: Rectangle {
        color: customButton.pressed ? "darkblue" : bgColor
        radius: 8
    }

    contentItem: Text {
        text: customButton.text
        color: "white"
        font.bold: true
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }
}
