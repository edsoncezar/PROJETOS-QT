TEMPLATE      = subdirs
CONFIG       += ordered
SUBDIRS       = screenshot

!symbian:contains(QT_CONFIG, svg): SUBDIRS += systray

# install
target.path = $$[QT_INSTALL_EXAMPLES]/desktop
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS desktop.pro README
sources.path = $$[QT_INSTALL_EXAMPLES]/desktop
INSTALLS += target sources

symbian: include($$PWD/../symbianpkgrules.pri)
maemo5: include($$PWD/../maemo5pkgrules.pri)
