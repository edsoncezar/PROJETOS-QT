TEMPLATE = app
DEPENDPATH += .
INCLUDEPATH += .

# Input
SOURCES += main.cpp imagescaling.cpp
HEADERS += imagescaling.h

# install
target.path = $$[QT_INSTALL_EXAMPLES]/qtconcurrent/imagescaling
sources.files = $$SOURCES $$HEADERS $$FORMS $$RESOURCES *.pro *.png
sources.path = $$[QT_INSTALL_EXAMPLES]/qtconcurrent/imagescaling
INSTALLS += target sources

symbian: include($$PWD/../../symbianpkgrules.pri)

wince*: DEPLOYMENT_PLUGIN += qgif qjpeg qtiff
maemo5: include($$PWD/../../maemo5pkgrules.pri)

simulator: warning(This example does not work on Simulator platform)
