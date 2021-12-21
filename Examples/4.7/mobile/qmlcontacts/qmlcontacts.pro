TEMPLATE = app
TARGET = qmlcontacts

include(../mobility_examples.pri)

QT += declarative

CONFIG += mobility
MOBILITY += contacts

HEADERS = qmlapplicationviewer.h
SOURCES = \
    main.cpp  \
    qmlapplicationviewer.cpp

OTHER_FILES += \
    contacts.qml \
    contents/ContactView.qml \
    contents/ContactListView.qml \
    contents/FieldRow.qml \
    contents/ToolBar.qml \
    contents/TitleBar.qml \
    contents/ScrollBar.qml \
    contents/MediaButton.qml \
    contents/example.vcf \
    contents/Button.qml \
    contents/images/toolbutton.sci \
    contents/images/toolbutton.png \
    contents/images/titlebar.sci \
    contents/images/titlebar.png \
    contents/images/stripes.png \
    contents/images/quit.png \
    contents/images/lineedit.sci \
    contents/images/lineedit.png \
    contents/images/gloss.png \
    contents/images/default.svg \
    contents/images/button-pressed.png \
    contents/images/button.png

symbian: {
    load(data_caging_paths)
    TARGET.CAPABILITY = ReadUserData \
                        WriteUserData
    TARGET.UID3 = 0xA000E407
    TARGET.EPOCHEAPSIZE = 0x20000 0x2000000
    contains(DEFINES, ORIENTATIONLOCK):LIBS += -lavkon -leikcore -leiksrv -lcone
    contains(DEFINES, NETWORKACCESS):TARGET.CAPABILITY += NetworkServices
}

RESOURCES += \
    qmlcontacts.qrc

maemo5:error("This example will not compile for N900 as this device misses Qt Mobility 1.1 features")
