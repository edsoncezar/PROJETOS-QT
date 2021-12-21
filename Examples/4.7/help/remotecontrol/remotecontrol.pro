TEMPLATE   = app

HEADERS   += remotecontrol.h
SOURCES   += main.cpp \
             remotecontrol.cpp
FORMS     += remotecontrol.ui
RESOURCES += remotecontrol.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/help/remotecontrol
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS *.pro *.png *.doc doc
sources.path = $$[QT_INSTALL_EXAMPLES]/help/remotecontrol
INSTALLS += target sources

symbian: include($$PWD/../../symbianpkgrules.pri)
maemo5: include($$PWD/../../maemo5pkgrules.pri)

symbian: warning(This example does not work on Symbian platform)
maemo5: warning(This example does not work on Maemo platform)
simulator: warning(This example does not work on Simulator platform)
