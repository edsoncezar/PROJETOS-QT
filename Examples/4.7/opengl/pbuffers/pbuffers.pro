HEADERS += glwidget.h \
    cube.h
SOURCES += glwidget.cpp \
    main.cpp \
    cube.cpp
RESOURCES += pbuffers.qrc
QT += opengl

# install
target.path = $$[QT_INSTALL_EXAMPLES]/opengl/pbuffers
sources.files = $$SOURCES \
    $$HEADERS \
    $$RESOURCES \
    pbuffers.pro \
    *.png
sources.path = $$[QT_INSTALL_EXAMPLES]/opengl/pbuffers
INSTALLS += target \
    sources
symbian:include($$PWD/../../symbianpkgrules.pri)
maemo5: include($$PWD/../../maemo5pkgrules.pri)

symbian: warning(This example might not fully work on Symbian platform)
maemo5: warning(This example does not work on Maemo platform)
simulator: warning(This example might not fully work on Simulator platform)
