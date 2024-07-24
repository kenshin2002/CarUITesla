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
    Rectangle{
        width: lockCarId.width
        height: lockCarId.height
        anchors{
            top: lockCarId.top
            left:lockCarId.right
            leftMargin: 5
            bottom:lockCarId.bottom
            bottomMargin: 5
        }
        Text {
            id: timeTextId
            //anchors.fill: parent
            //contentWidth: parent.width
            text: SystemHander.timeSystem
            font.pointSize: 10
            font.bold: true
            //width: parent.width/40
        }
    }
}

