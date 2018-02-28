import QtQuick 2.7
import "./base" as Base


Item {
    width: parent.width
    height: 40
    function init(image, name){
        img.source = image;
        text.text = name;
    }

    function getName(){
        return text.text;
    }

    signal clicked();
    Row {
        id: row1
        spacing: 10
        Image {
            id:img;
            width: 40
            height: 40
        }

        Base.BaseText {
            id:text
            text: "name"
            anchors.verticalCenter: parent.verticalCenter
            font.bold: true
        }

        MouseArea{
            anchors.fill: parent
            onClicked: {
                clicked();
            }
        }
        anchors.fill: parent;
    }
}
