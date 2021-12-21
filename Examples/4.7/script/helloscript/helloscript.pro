QT += script
RESOURCES += helloscript.qrc
SOURCES += main.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/script/helloscript
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS helloscript.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/script/helloscript
INSTALLS += target sources

symbian: include($$PWD/../../symbianpkgrules.pri)
maemo5: include($$PWD/../../maemo5pkgrules.pri)

