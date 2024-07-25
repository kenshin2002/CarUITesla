import QtQuick 2.12
import QtLocation 5.11
import QtPositioning 5.11
Rectangle{
    id:rightScreenId
    width:parent.width*2/3
    anchors{
        top:parent.top
        right:parent.right
        bottom:bottomBarId.top
    }
    Plugin {
        id: mapPlugin
        name: "osm"
    }
    Map {
        id: map
        anchors.fill: parent
        plugin: mapPlugin
        center: QtPositioning.coordinate(20.98, 105.86) // Hoang Mai/ Ha Noi
        zoomLevel: 14
    }
    Image {
        id: lockCarId
        source: (SystemHander.carLocked ? "qrc:/ui/asserts/carLock.png" :"qrc:/ui/asserts/carUnlock.png" )
        anchors{
            top:parent.top
            left:parent.left
            topMargin: 5
            leftMargin: 5
        }
        fillMode: Image.PreserveAspectFit
        width: parent.width/40
        MouseArea{
            anchors.fill: parent
            onClicked: SystemHander.setCarLocked(!SystemHander.carLocked)
        }
    }
    Image {
        id: clockId
        source: "qrc:/ui/asserts/clockIcon.png"
        anchors{
          top:parent.top
          left:lockCarId.left
          leftMargin: 100
          topMargin: 5
        }
        fillMode:Image.PreserveAspectFit
        width: parent.width/40
    }
    Text {
        id: timeTextId
        text: SystemHander.timeSystem
        anchors{
            top: clockId.top
            left:clockId.right
            leftMargin: 5
            bottom:clockId.bottom
            bottomMargin: 5
            topMargin: 10
        }
     font.pointSize: 10
     font.pixelSize: 14
     font.bold: true
     //width: parent.width/40
    }
    Image {
        id: temparatureId
        source: "qrc:/ui/asserts/temparature.png"
        anchors{
          top:parent.top
          left:timeTextId.left
          leftMargin: 100
          topMargin: 5
        }
        fillMode:Image.PreserveAspectFit
        width: parent.width/40
    }
    Text {
        id: temparatureTextId
        text: SystemHander.outDoorTemp +"°F"
        anchors{
            top: temparatureId.top
            left:temparatureId.right
            leftMargin: 5
            bottom:temparatureId.bottom
            bottomMargin: 5
            topMargin: 10
        }
     font.pointSize: 10
     font.pixelSize: 14
     font.bold: true
     //width: parent.width/40
    }
    Text {
        id: userNameTextId
        text: SystemHander.userName
        anchors{
            top: temparatureId.top
            left:temparatureId.right
            leftMargin: 100
            bottom:temparatureId.bottom
            bottomMargin: 5
            topMargin: 10
        }
     font.pointSize: 10
     font.pixelSize: 14
     font.bold: true
     //width: parent.width/40
    }
}

