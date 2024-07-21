import QtQuick 2.15

Rectangle{
    id:bottomBarId
    color:"black"
    width: parent.width
    height: parent.height/12
    anchors{
        bottom:parent.bottom
        right:parent.right
        left:parent.left
    }
    Image {
        id: carIconId
        source: "qrc:/ui/asserts/carIcon.png"
        anchors{
          left:parent.left
          leftMargin: 30
          verticalCenter: parent.verticalCenter
        }
        height: parent.height*0.85
        fillMode: Image.PreserveAspectFit
    }
}
