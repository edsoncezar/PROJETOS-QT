HEADERS       = mainwindow.h \
                xbelgenerator.h \
                xbelhandler.h
SOURCES       = main.cpp \
                mainwindow.cpp \
                xbelgenerator.cpp \
                xbelhandler.cpp
QT           += xml

# install
target.path = $$[QT_INSTALL_EXAMPLES]/xml/saxbookmarks
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS saxbookmarks.pro *.xbel
sources.path = $$[QT_INSTALL_EXAMPLES]/xml/saxbookmarks
INSTALLS += target sources

wince*: {
     addFiles.sources = frank.xbel jennifer.xbel
     addFiles.path = "\\My Documents"
     DEPLOYMENT += addFiles
}

symbian: {
     TARGET.UID3 = 0xA000C60A
     include($$PWD/../../symbianpkgrules.pri)
     addFiles.sources = frank.xbel jennifer.xbel
     addFiles.path = /data/qt/saxbookmarks
     DEPLOYMENT += addFiles
}
maemo5: include($$PWD/../../maemo5pkgrules.pri)

