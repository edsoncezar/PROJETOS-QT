/*
 *  This file is part of Notifications API
 *  Copyright © 2011 Nokia Corporation and/or its subsidiary(-ies). All rights reserved.
 *  Contact:  notifications.support@nokia.com
 *  This software, including documentation, is protected by copyright controlled by Nokia Corporation.
 *  All rights reserved. You may use this file only in accordance with the Nokia Developer Software
 *  Agreement version 2.0 and accompanying Ovi any additional terms. This material also contains
 *  confidential information which may not be disclosed to others without the prior written consent of Nokia.
 */
import QtQuick 1.0


Item {
    id: container
    property string labelAlt1: ""
    property string labelAlt2: ""
    property string label: ""
    //property alias buttonPress: buttonMouseArea

    //width: buttonLabel.width + 10; height: buttonLabel.height + 10
    //width:  50; height: 50
    //border.width: buttonMouseArea.pressed ? 2 : 1
    //color: buttonMouseArea.pressed ? "black" : "white"

    function switchLabel() {
        if (label == labelAlt1) {
            label = labelAlt2;
        } else  {
            label = labelAlt1;
        }
        return label;
    }
    function output() {
        console.log("output")
    }

    signal buttonClick()

    Rectangle {
        id: button
        smooth: true
        anchors.fill: parent
        color: "grey"
    }

    Text {
        id: buttonLabel;
        anchors.centerIn: parent;
        text: container.label;
        color: "white"
        style: Text.Raised
        font.pixelSize: 16
    }
/*
    MouseArea {
        id: buttonMouseArea
        anchors.fill: parent
        onPressed: {
            button.color = "white"
            buttonLabel.color = "grey"
        }
        onReleased: {
            button.color = "grey"
            buttonLabel.color = "white"
            if(labelAlt2 != "")
                container.switchLabel()
            buttonClick()
        }
    }
    */
}
