HEADERS       = receiver.h
SOURCES       = receiver.cpp \
                main.cpp
QT           += network

# install
target.path = $$[QT_INSTALL_EXAMPLES]/network/broadcastreceiver
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS broadcastreceiver.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/network/broadcastreceiver
INSTALLS += target sources

symbian: {
    TARGET.CAPABILITY = NetworkServices
    include($$PWD/../../symbianpkgrules.pri)
}
maemo5: include($$PWD/../../maemo5pkgrules.pri)
