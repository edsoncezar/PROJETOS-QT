SOURCES   = addressbook.cpp \
            finddialog.cpp \
            main.cpp
HEADERS   = addressbook.h \
            finddialog.h

# install
target.path = $$[QT_INSTALL_EXAMPLES]/tutorials/addressbook/part5
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS part5.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/tutorials/addressbook/part5
INSTALLS += target sources

symbian: include($$PWD/../../../symbianpkgrules.pri)
maemo5: include($$PWD/../../../maemo5pkgrules.pri)

symbian: warning(This example might not fully work on Symbian platform)
maemo5: warning(This example might not fully work on Maemo platform)
simulator: warning(This example might not fully work on Simulator platform)
