######################################################################
# Automatically generated by qmake (2.01a) Fri May 12 17:15:46 2006
######################################################################

TEMPLATE = app
DEPENDPATH += .
INCLUDEPATH += .

QT += opengl svg

# Input
HEADERS += glwidget.h
SOURCES += glwidget.cpp main.cpp
RESOURCES += pbuffers2.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/opengl/pbuffers2
sources.files = $$SOURCES $$HEADERS $$RESOURCES pbuffers2.pro *.png *.svg
sources.path = $$[QT_INSTALL_EXAMPLES]/opengl/pbuffers2
INSTALLS += target sources

symbian: include($$PWD/../../symbianpkgrules.pri)
maemo5: include($$PWD/../../maemo5pkgrules.pri)

symbian: warning(This example might not fully work on Symbian platform)
maemo5: warning(This example does not work on Maemo platform)
simulator: warning(This example might not fully work on Simulator platform)
