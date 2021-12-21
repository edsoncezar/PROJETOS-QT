HEADERS   = message.h
SOURCES   = main.cpp \
            message.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/tools/customcompleter
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS customcompleter.pro resources
sources.path = $$[QT_INSTALL_EXAMPLES]/tools/customcompleter
INSTALLS += target sources

symbian: include($$PWD/../../symbianpkgrules.pri)
maemo5: include($$PWD/../../maemo5pkgrules.pri)

symbian: warning(This example might not fully work on Symbian platform)
maemo5: warning(This example might not fully work on Maemo platform)
simulator: warning(This example might not fully work on Simulator platform)
