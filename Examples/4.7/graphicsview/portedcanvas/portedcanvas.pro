TEMPLATE	= app
TARGET		= portedcanvas

CONFIG		+= qt warn_on

HEADERS		= canvas.h
SOURCES		= canvas.cpp main.cpp

RESOURCES += portedcanvas.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/graphicsview/portedcanvas
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS portedcanvas.pro *.png *.xpm *.doc
sources.path = $$[QT_INSTALL_EXAMPLES]/graphicsview/portedcanvas
INSTALLS += target sources

symbian: include($$PWD/../../symbianpkgrules.pri)
maemo5: include($$PWD/../../maemo5pkgrules.pri)

simulator: warning(This example might not fully work on Simulator platform)
