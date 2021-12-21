HEADERS       = mainwindow.h \
                xbelreader.h \
                xbelwriter.h
SOURCES       = main.cpp \
                mainwindow.cpp \
                xbelreader.cpp \
                xbelwriter.cpp
QT           += xml

# install
target.path = $$[QT_INSTALL_EXAMPLES]/xml/streambookmarks
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS streambookmarks.pro *.xbel
sources.path = $$[QT_INSTALL_EXAMPLES]/xml/streambookmarks
INSTALLS += target sources

symbian: {
    include($$PWD/../../symbianpkgrules.pri)
    addFiles.sources = frank.xbel jennifer.xbel
    addFiles.path = /data/qt/streambookmarks
    DEPLOYMENT += addFiles
}
maemo5: include($$PWD/../../maemo5pkgrules.pri)

