QT          +=  webkit network
TARGET       =  formextractor
TEMPLATE     =  app
SOURCES     +=  main.cpp \
                formextractor.cpp \
                mainwindow.cpp
HEADERS     +=  formextractor.h \
                mainwindow.h
FORMS        += formextractor.ui \
                formextractor_mobiles.ui
RESOURCES    += formextractor.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/webkit/formextractor
sources.files = $$SOURCES $$HEADERS $$FORMS $$RESOURCES *.pro form.html images
sources.path = $$[QT_INSTALL_EXAMPLES]/webkit/formextractor
INSTALLS += target sources

symbian {
    TARGET.UID3 = 0xA000CF6D
    include($$PWD/../../symbianpkgrules.pri)
    TARGET.CAPABILITY = NetworkServices
}
maemo5: include($$PWD/../../maemo5pkgrules.pri)
