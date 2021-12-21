SOURCES   = main.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/graphicsview/simpleanchorlayout
sources.files = $$SOURCES $$HEADERS $$RESOURCES simpleanchorlayout.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/graphicsview/simpleanchorlayout
INSTALLS += target sources

TARGET = simpleanchorlayout

symbian: include($$PWD/../../symbianpkgrules.pri)
maemo5: include($$PWD/../../maemo5pkgrules.pri)
simulator: warning(This example might not fully work on Simulator platform)
