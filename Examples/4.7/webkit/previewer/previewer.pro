QT      +=  webkit network
HEADERS =   previewer.h \
            mainwindow.h
SOURCES =   main.cpp \
            previewer.cpp \
            mainwindow.cpp
FORMS   =   previewer.ui \
            previewer_mobiles.ui

# install
target.path = $$[QT_INSTALL_EXAMPLES]/webkit/previewer
sources.files = $$SOURCES $$HEADERS $$FORMS $$RESOURCES *.pro images
sources.path = $$[QT_INSTALL_EXAMPLES]/webkit/previewer
INSTALLS += target sources

symbian {
    TARGET.UID3 = 0xA000CF6F
    include($$PWD/../../symbianpkgrules.pri)
    TARGET.CAPABILITY = NetworkServices
}
maemo5: include($$PWD/../../maemo5pkgrules.pri)
