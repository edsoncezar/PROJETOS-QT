HEADERS       = mainwindow.h \
                xbeltree.h
SOURCES       = main.cpp \
                mainwindow.cpp \
                xbeltree.cpp
QT           += xml

# install
target.path = $$[QT_INSTALL_EXAMPLES]/xml/dombookmarks
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS dombookmarks.pro *.xbel
sources.path = $$[QT_INSTALL_EXAMPLES]/xml/dombookmarks
INSTALLS += target sources

symbian: include($$PWD/../../symbianpkgrules.pri)

symbian: {
    include($$PWD/../../symbianpkgrules.pri)
    addFiles.sources = frank.xbel jennifer.xbel
    addFiles.path = files
    DEPLOYMENT += addFiles
}

wince*: {
    addFiles.sources = frank.xbel jennifer.xbel
    addFiles.path = "\\My Documents"
    DEPLOYMENT += addFiles
}
maemo5: include($$PWD/../../maemo5pkgrules.pri)

