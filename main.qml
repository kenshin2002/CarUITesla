import QtQuick 2.12
import QtQuick.Window 2.12
import "ui/BottomBar"
import "ui/RightScreen"
import "ui/LeftScreen"
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("UI CAR TESLA")
    RightScreen{
        id:rightScreenId
    }
    LeftScreen{
        id:leftScreenId
    }
    BottomBar{
        id:bottomBarId
    }


}
