TEMPLATE = app
TARGET = notificationexample
QT        += core gui network
CONFIG += ovinotifications

INCLUDEPATH += . inc src

HEADERS     += inc/notificationexample.h
SOURCES     += src/main.cpp \
               src/notificationexample.cpp

symbian {
    TARGET.CAPABILITY = NetworkServices
    TARGET.VID = 0
    TARGET.EPOCALLOWDLLDATA = 1
}

FORMS += \
    notificationexample.ui
# End of file
