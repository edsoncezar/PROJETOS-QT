######################################################################
# Automatically generated by qmake (2.01a) fr. nov. 16 14:11:36 2007
######################################################################

TEMPLATE = app
DEPENDPATH += .
INCLUDEPATH += .
QT = core network
CONFIG += console

# Input
HEADERS += downloadmanager.h textprogressbar.h
SOURCES += downloadmanager.cpp main.cpp textprogressbar.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/network/downloadmanager
sources.files = $$SOURCES $$HEADERS $$FORMS $$RESOURCES *.pro *.png
sources.path = $$[QT_INSTALL_EXAMPLES]/network/downloadmanager
INSTALLS += target sources

symbian: include($$PWD/../../symbianpkgrules.pri)
maemo5: include($$PWD/../../maemo5pkgrules.pri)

OTHER_FILES += \
    debian/changelog \
    debian/compat \
    debian/control \
    debian/copyright \
    debian/README \
    debian/rules
symbian: warning(This example might not fully work on Symbian platform)
simulator: warning(This example might not fully work on Simulator platform)
