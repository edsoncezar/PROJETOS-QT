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
import com.nokia.OviNotifications 1.0

Rectangle {
    id: page
    width: 360
    height: 615
    color: "black"
    property string applicationId: "com.example"
    property string serviceId: "example.com"
    property string notificationId: ""
    property int buttonHeight: 30
    property int gridColums: 2
    property int gridRows: 4
    property int defaultSpacing: 2


    OviNotificationSession
    {
        id : notifications
        onStateChanged : {

            switch(aState.sessionState)
            {

            case OviNotificationState.EStateOffline:
            {
                messages.insert(0, {"msg": "onStateChanged", "description":  "offline"})
                break;
            }
            case OviNotificationState.EStateConnecting:
            {
                messages.insert(0, {"msg": "onStateChanged", "description":  "connecting"})
                break;
            }

            case OviNotificationState.EStateOnline:
            {
                messages.insert(0, {"msg": "onStateChanged", "description":  "online"})

                if(notifications.isWakeUp())
                {
                    buttonWakeUp.label = buttonWakeUp.labelAlt2
                }
                else
                {
                    buttonWakeUp.label = buttonWakeUp.labelAlt1
                }

                if(notifications.isNotificationUi())
                {
                    buttonNui.label = buttonNui.labelAlt2
                }
                else
                {
                    buttonNui.label = buttonNui.labelAlt1
                }
                break;
            }

            default:
                break;
            }

            messages.insert(0, {"msg": "Error", "description":  aState.sessionError});

        }
        onReceived : {

            var from="From: "+aNotification.senderInformation
            var timestamp="Type: "+aNotification.timestamp
            var paytmp=aNotification.payload;
            var notification ="Payload: "+paytmp.dataString
            var encoding ="Encoding: "+paytmp.encoding
            var  type ="Type: "+paytmp.type
            messages.insert(0, {"msg": "onReceived", "description":  notification})
        }
        onNotificationInformation : {
            notificationId=aData.notificationId;
            messages.insert(0, {"msg": "onNotificationInformation", "description":  notificationId})
        }

        onVersion: {
            messages.insert(0, {"msg": "onVersion", "description":  aVersion})
        }
    }

    function log(message) {
        logModel.append({ "message": message });
    }
    Column {
        id: column1
        anchors.left: parent.left
        anchors.leftMargin: 0
        anchors.top: parent.top
        anchors.topMargin: 0
        spacing: defaultSpacing

        Rectangle {
            id: messageList
            width: parent.width
            height: page.height - (gridButton.height + buttonHeight) - 6
            Component {
                id: outputDelegate
                Item {
                    width: parent.width; height: 60
                    Column {
                        Text { text: '<b>msg:</b> ' + msg }
                        Text { text: '<b>description:</b> ' + description }
                    }
                }
            }

            ListView {
                id: messageView
                anchors.fill: parent
                highlight: Rectangle { color: "lightsteelblue"; radius: 5 }
                highlightFollowsCurrentItem: true
                highlightMoveSpeed: 0
                model: ListModel {
                    id: messages
                }
                delegate: outputDelegate
                focus: true

                ScrollBar {
                    scrollArea: messageView; width: 8
                    anchors { right: messageView.right; top: messageView.top; bottom: messageView.bottom }
                }
                ScrollBar {
                    scrollArea: messageView; width: 8; orientation: Qt.Horizontal
                    anchors { right: messageView.right; rightMargin: 8; left: messageView.left; bottom: messageView.bottom }
                }
            }
        }

        Grid {
            id: gridButton
            width: parent.width
            height:  buttonHeight * rows + rows * spacing
            columns:  gridColums; rows: gridRows;
            spacing:  defaultSpacing;
            Button {
                id: buttonWakeUp
                width: page.width / gridColums; height: buttonHeight
                labelAlt1: "Wake up ON";
                labelAlt2: "Wake up OFF";
                label: labelAlt1
                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        if(buttonWakeUp.label == buttonWakeUp.labelAlt1)
                        {
                            notifications.setWakeUp(true);
                            messages.insert(0, {"msg": buttonWakeUp.label, "description": "Wakeup set"})
                            buttonWakeUp.label = buttonWakeUp.labelAlt2
                        }
                        else
                        {
                            notifications.setWakeUp(false);
                            messages.insert(0, {"msg": buttonWakeUp.label, "description": "Wakeup set"})
                            buttonWakeUp.label = buttonWakeUp.labelAlt1
                        }
                    }
                }
            }
            Button {
                id: buttonNui
                width: page.width / gridColums; height: buttonHeight
                labelAlt1: "UI Notifications ON";
                labelAlt2: "UI notifications OFF";
                label: labelAlt1
                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        if(buttonNui.label == buttonNui.labelAlt1)
                        {
                            notifications.setNotificationUi(true);
                            messages.insert(0, {"msg": buttonNui.label, "description": "Nui"})
                            // Toggling the name of button
                            buttonNui.label = buttonNui.labelAlt2;
                        }


                        else
                        {
                            notifications.setNotificationUi(false);
                            messages.insert(0, {"msg": buttonNui.label, "description": "Nui"})
                            // Toggling the name of button
                            buttonNui.label = buttonNui.labelAlt1;
                        }
                    }
                }
            }
            Button {
                id: buttonRegister
                width: page.width / gridColums; height: buttonHeight
                labelAlt1: "Unregister";
                labelAlt2: "Register";
                label: "Unregister";
                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        if(buttonRegister.label == buttonRegister.labelAlt1)
                        {
                            notifications.unregisterApplication();
                            messages.insert(0, {"msg": buttonRegister.label, "description": "Unregistering"})
                            // Toggling the name of button
                            buttonRegister.label = buttonRegister.labelAlt2;
                        }
                        else
                        {
                            notifications.registerApplication(applicationId);
                            messages.insert(0, {"msg": buttonRegister.label, "description": "Registering"})
                            // Toggling the name of button
                            buttonRegister.label = buttonRegister.labelAlt1;
                        }

                    }
                }
            }
            Button {
                id: buttonGetNID
                width: page.width / gridColums; height: buttonHeight
                label: "Get NID";
                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        messages.insert(0, {"msg": buttonGetNID.label, "description": "GetNID"})
                        notifications.getNotificationInformation();
                    }
                }
            }
            Button {
                id: buttonSendNID
                width: page.width / gridColums; height: buttonHeight
                property string post_url : 'https://account.nnapi.ovi.com/cm/ext/addnid'
                label: "Send NID";
                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        messages.insert(0, {"msg": buttonSendNID.label, "description": "SendNID"})
                        NetworkUtility.sendNotificationId(buttonSendNID.post_url, serviceId, notificationId);
                    }
                }
            }
            Button {
                id: buttonSettings
                width: page.width / gridColums; height: buttonHeight
                label: "Settings";
                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        messages.insert(0, {"msg": buttonSettings.label, "description": "WakeUp: " + notifications.isWakeUp() +
                                                                         " NotificationUi: " + notifications.isNotificationUi()})
                    }
                }
            }

            Button {
                id: buttonClear
                width: page.width / gridColums; height: buttonHeight
                label: "Clear";
                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        messages.clear();
                    }
                }
            }

            Button {
                id: buttonVersion
                width: page.width/ gridColums; height: buttonHeight
                label: "Version";
                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        notifications.getVersion();
                    }
                }
            }

        }


        Button {
            id: buttonExit
            width: page.width; height: buttonHeight
            label: "Exit";
            MouseArea {
                anchors.fill: parent
                onClicked: {
                    Qt.quit()
                }
            }
        }
    }

    Component.onCompleted: {
        notifications.registerApplication(applicationId);
    }
}
