HEADERS       = ../connection.h
SOURCES       = relationaltablemodel.cpp
QT           += sql

# install
target.path = $$[QT_INSTALL_EXAMPLES]/sql/relationaltablemodel
sources.files = $$SOURCES *.h $$RESOURCES $$FORMS relationaltablemodel.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/sql/relationaltablemodel
INSTALLS += target sources

symbian: include($$PWD/../../symbianpkgrules.pri)
maemo5: include($$PWD/../../maemo5pkgrules.pri)

