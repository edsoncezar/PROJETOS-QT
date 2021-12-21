HEADERS       = regexpdialog.h
SOURCES       = regexpdialog.cpp \
                main.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/tools/regexp
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS regexp.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/tools/regexp
INSTALLS += target sources

symbian: include($$PWD/../../symbianpkgrules.pri)
maemo5: include($$PWD/../../maemo5pkgrules.pri)

symbian: warning(This example might not fully work on Symbian platform)
maemo5: warning(This example might not fully work on Maemo platform)
simulator: warning(This example might not fully work on Simulator platform)
