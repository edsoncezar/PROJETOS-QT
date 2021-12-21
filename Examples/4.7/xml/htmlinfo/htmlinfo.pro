SOURCES += main.cpp
QT -= gui

RESOURCES   = resources.qrc

win32: {
    CONFIG += console
}

# install
target.path = $$[QT_INSTALL_EXAMPLES]/xml/htmlinfo
INSTALLS += target

symbian {
    TARGET.UID3 = 0xA000C609
    include($$PWD/../../symbianpkgrules.pri)
}
maemo5: include($$PWD/../../maemo5pkgrules.pri)

symbian: warning(This example does not work on Symbian platform)
