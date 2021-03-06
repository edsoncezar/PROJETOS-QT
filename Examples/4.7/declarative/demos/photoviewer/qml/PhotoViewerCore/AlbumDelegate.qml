/****************************************************************************
**
** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the QtDeclarative module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** No Commercial Usage
** This file contains pre-release code and may not be distributed.
** You may use this file in accordance with the terms and conditions
** contained in the Technology Preview License Agreement accompanying
** this package.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights.  These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
**
**
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

import QtQuick 1.0

Component {
    id: albumDelegate
    Package {

        Item {
            Package.name: 'browser'
            GridView {
                id: photosGridView; model: visualModel.parts.grid; width: mainWindow.width; height: mainWindow.height - 21
                x: 0; y: 21; cellWidth: 160; cellHeight: 153; interactive: false
                onCurrentIndexChanged: photosListView.positionViewAtIndex(currentIndex, ListView.Contain)
            }
        }

        Item {
            Package.name: 'fullscreen'
            ListView {
                id: photosListView; model: visualModel.parts.list; orientation: Qt.Horizontal
                width: mainWindow.width; height: mainWindow.height; interactive: false
                onCurrentIndexChanged: photosGridView.positionViewAtIndex(currentIndex, GridView.Contain)
                highlightRangeMode: ListView.StrictlyEnforceRange; snapMode: ListView.SnapOneItem
            }
        }

        Item {
            Package.name: 'album'
            id: albumWrapper; width: 210; height: 220

            VisualDataModel {
                id: visualModel; delegate: PhotoDelegate { }
                model: RssModel { id: rssModel; tags: tag }
            }

            BusyIndicator {
                id: busyIndicator
                anchors { centerIn: parent; verticalCenterOffset: -20 }
                on: rssModel.status != XmlListModel.Ready
            }

            PathView {
                id: photosPathView; model: visualModel.parts.stack; pathItemCount: 5
                visible: !busyIndicator.visible
                anchors.centerIn: parent; anchors.verticalCenterOffset: -30
                path: Path {
                    PathAttribute { name: 'z'; value: 9999.0 }
                    PathLine { x: 1; y: 1 }
                    PathAttribute { name: 'z'; value: 0.0 }
                }
            }

            MouseArea {
                anchors.fill: parent
                onClicked: mainWindow.editMode ? photosModel.remove(index) : albumWrapper.state = 'inGrid'
            }

            Tag {
                anchors { horizontalCenter: parent.horizontalCenter; bottom: parent.bottom; bottomMargin: 10 }
                frontLabel: tag; backLabel: qsTr("Remove"); flipped: mainWindow.editMode
                onTagChanged: rssModel.tags = tag
                onBackClicked: if (mainWindow.editMode) photosModel.remove(index);
            }

            states: [
            State {
                name: 'inGrid'
                PropertyChanges { target: photosGridView; interactive: true }
                PropertyChanges { target: albumsShade; opacity: 1 }
                PropertyChanges { target: backButton; onClicked: albumWrapper.state = ''; y: 6 }
            },
            State {
                name: 'fullscreen'; extend: 'inGrid'
                PropertyChanges { target: photosGridView; interactive: false }
                PropertyChanges { target: photosListView; interactive: true }
                PropertyChanges { target: photosShade; opacity: 1 }
                PropertyChanges { target: backButton; y: -backButton.height - 8 }
            }
            ]

            GridView.onAdd: NumberAnimation {
                target: albumWrapper; properties: "scale"; from: 0.0; to: 1.0; easing.type: Easing.OutQuad
            }
            GridView.onRemove: SequentialAnimation {
                PropertyAction { target: albumWrapper; property: "GridView.delayRemove"; value: true }
                NumberAnimation { target: albumWrapper; property: "scale"; from: 1.0; to: 0.0; easing.type: Easing.OutQuad }
                PropertyAction { target: albumWrapper; property: "GridView.delayRemove"; value: false }
            }

            transitions: [
            Transition {
                from: '*'; to: 'inGrid'
                SequentialAnimation {
                    NumberAnimation { properties: 'opacity'; duration: 250 }
                    PauseAnimation { duration: 350 }
                    NumberAnimation { target: backButton; properties: "y"; duration: 200; easing.type: Easing.OutQuad }
                }
            },
            Transition {
                from: 'inGrid'; to: '*'
                NumberAnimation { properties: "y,opacity"; easing.type: Easing.OutQuad; duration: 300 }
            }
            ]
        }
    }
}
