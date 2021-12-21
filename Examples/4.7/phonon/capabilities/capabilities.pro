QT      += phonon

HEADERS += window.h
SOURCES += window.cpp \
           main.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/phonon/capabilities
sources.files = $$SOURCES $$HEADERS capabilities.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/phonon/capabilities
INSTALLS += target sources

wince*{
    DEPLOYMENT_PLUGIN += phonon_ds9 phonon_waveout
}

symbian {
    TARGET.UID3 = 0xA000CF69
    include($$PWD/../../symbianpkgrules.pri)
}

maemo5: include($$PWD/../../maemo5pkgrules.pri)

simulator: warning(This example might not fully work on Simulator platform)
