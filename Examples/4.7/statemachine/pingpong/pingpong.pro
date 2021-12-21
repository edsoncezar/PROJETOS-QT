QT = core
win32: CONFIG += console
mac:CONFIG -= app_bundle

SOURCES = main.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/statemachine/pingpong
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS pingpong.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/statemachine/pingpong
INSTALLS += target sources

symbian: include($$PWD/../../symbianpkgrules.pri)
maemo5: include($$PWD/../../maemo5pkgrules.pri)

symbian: warning(This example does not work on Symbian platform)
