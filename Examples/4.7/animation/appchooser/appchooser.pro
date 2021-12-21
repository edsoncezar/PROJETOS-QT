SOURCES = main.cpp
RESOURCES = appchooser.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/animation/appchooser
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS appchooser.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/animation/appchooser
INSTALLS += target sources

symbian {
    TARGET.UID3 = 0xA000E3F5
    include($$PWD/../../symbianpkgrules.pri)
}
maemo5: include($$PWD/../../maemo5pkgrules.pri)
