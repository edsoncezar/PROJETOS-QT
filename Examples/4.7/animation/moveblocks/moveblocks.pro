SOURCES = main.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/animation/moveblocks
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS moveblocks.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/animation/moveblocks
INSTALLS += target sources

symbian {
    TARGET.UID3 = 0xA000E3F7
    include($$PWD/../../symbianpkgrules.pri)
}
maemo5: include($$PWD/../../maemo5pkgrules.pri)
