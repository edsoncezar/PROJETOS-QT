SOURCES   = main.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/graphicsview/anchorlayout
sources.files = $$SOURCES $$HEADERS $$RESOURCES anchorlayout.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/graphicsview/anchorlayout
INSTALLS += target sources

TARGET = anchorlayout

symbian: include($$PWD/../../symbianpkgrules.pri)
maemo5: include($$PWD/../../maemo5pkgrules.pri)

simulator: warning(This example might not fully work on Simulator platform)
