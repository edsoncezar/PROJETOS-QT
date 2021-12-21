HEADERS     = mainwindow.h \
              pieceslist.h \
              puzzlewidget.h
RESOURCES   = puzzle.qrc
SOURCES     = main.cpp \
              mainwindow.cpp \
              pieceslist.cpp \
              puzzlewidget.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/draganddrop/puzzle
sources.files = $$SOURCES $$HEADERS $$RESOURCES *.pro *.jpg
sources.path = $$[QT_INSTALL_EXAMPLES]/draganddrop/puzzle
INSTALLS += target sources

symbian:{
   TARGET.UID3 = 0xA000CF65
   include($$PWD/../../symbianpkgrules.pri)
   addFile.sources = example.jpg
   addFile.path = .
   DEPLOYMENT += addFile
}
wince*: {
   addFile.sources = example.jpg
   addFile.path = .
   DEPLOYMENT += addFile
}
maemo5: include($$PWD/../../maemo5pkgrules.pri)
