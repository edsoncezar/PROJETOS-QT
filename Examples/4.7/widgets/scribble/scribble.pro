HEADERS       = mainwindow.h \
                scribblearea.h
SOURCES       = main.cpp \
                mainwindow.cpp \
                scribblearea.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/scribble
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS scribble.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/widgets/scribble
INSTALLS += target sources

symbian: include($$PWD/../../symbianpkgrules.pri)
maemo5: include($$PWD/../../maemo5pkgrules.pri)

