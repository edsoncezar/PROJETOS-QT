SOURCES += main.cpp
RESOURCES += states.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/animation/states
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS states.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/animation/states
INSTALLS += target sources

symbian {
    TARGET.UID3 = 0xA000E3F8
    include($$PWD/../../symbianpkgrules.pri)
}
maemo5: include($$PWD/../../maemo5pkgrules.pri)
