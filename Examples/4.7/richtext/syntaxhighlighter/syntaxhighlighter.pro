HEADERS         = highlighter.h \
                  mainwindow.h
SOURCES         = highlighter.cpp \
                  mainwindow.cpp \
                  main.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/richtext/syntaxhighlighter
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS syntaxhighlighter.pro examples
sources.path = $$[QT_INSTALL_EXAMPLES]/richtext/syntaxhighlighter
INSTALLS += target sources

symbian: include($$PWD/../../symbianpkgrules.pri)

wince*: {
   addFiles.sources = main.cpp mainwindow.cpp
   addFiles.path = .
   DEPLOYMENT += addFiles
}
maemo5: include($$PWD/../../maemo5pkgrules.pri)

