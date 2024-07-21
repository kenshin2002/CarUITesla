import QtQuick 2.15

Rectangle{
    id:leftScreenId
    width: parent.width*1/3

    anchors{
     left:parent.left
     right:rightScreenId.left
     top:parent.top
     bottom:bottomBarId.top
    }
    Image {
        id: carRenderId
        width: parent.width*.75
        fillMode: Image.PreserveAspectFit
        anchors.centerIn: parent
        source: "qrc:/ui/asserts/carRender.jpg"
    }
}
