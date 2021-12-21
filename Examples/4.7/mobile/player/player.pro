TEMPLATE = app
TARGET = player
QT += network \
      xml


include(../mobility_examples.pri)

CONFIG += mobility
MOBILITY = multimedia

HEADERS = \
    player.h \
    playercontrols.h \
    playlistmodel.h \
    videowidget.h
SOURCES = main.cpp \
    player.cpp \
    playercontrols.cpp \
    playlistmodel.cpp \
    videowidget.cpp

maemo* {
    DEFINES += PLAYER_NO_COLOROPTIONS
}

symbian {
    TARGET.CAPABILITY = ReadUserData
}
