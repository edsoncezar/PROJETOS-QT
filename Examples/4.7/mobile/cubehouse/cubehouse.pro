TEMPLATE = app
TARGET = cubehouse
CONFIG += qt debug warn_on
QT += opengl

!contains(QT_CONFIG, opengl):error("This example requires OpenGL to be available for the target platform")

include(../mobility_examples.pri)

CONFIG+=mobility
MOBILITY+=sensors

SOURCES = \
    view.cpp \
    main.cpp \
    camera.cpp \
    light.cpp \
    lightmodel.cpp \
    material.cpp \
    painter.cpp
HEADERS = \
    view.h \
    teapot.h \
    cube.h \
    camera.h light.h \
    lightmodel.h \
    material.h \
    painter.h

contains(QT_CONFIG,opengles2) {
    SOURCES += painter_shader.cpp
} else {
    SOURCES += painter_fixed.cpp
}
RESOURCES = cubehouse.qrc

symbian: {
    TARGET.CAPABILITY = ReadUserData
}
