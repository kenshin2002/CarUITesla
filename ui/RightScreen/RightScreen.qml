import QtQuick 2.15
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
}

