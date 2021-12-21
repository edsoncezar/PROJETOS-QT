TEMPLATE = app
TARGET = framebuffer
CONFIG -= qt

SOURCES += main.c

# install
target.path = $$[QT_INSTALL_EXAMPLES]/qws/framebuffer
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS framebuffer.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/qws/framebuffer
INSTALLS += target sources

symbian: include($$PWD/../../symbianpkgrules.pri)
maemo5: include($$PWD/../../maemo5pkgrules.pri)

symbian: warning(This example does not work on Symbian platform)
simulator: warning(This example does not work on Simulator platform)
