HEADERS   = window.h
SOURCES   = main.cpp \
            window.cpp
QT += sql

# install
target.path = $$[QT_INSTALL_EXAMPLES]/sql/sqlwidgetmapper
sources.files = $$SOURCES $$HEADERS *.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/sql/sqlwidgetmapper
INSTALLS += target sources

wince*: DEPLOYMENT_PLUGIN += qsqlite

symbian: include($$PWD/../../symbianpkgrules.pri)
maemo5: include($$PWD/../../maemo5pkgrules.pri)

