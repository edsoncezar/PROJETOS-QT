TEMPLATE      = subdirs
SUBDIRS       = basictools \
                extrafilters

# install
target.path = $$[QT_INSTALL_EXAMPLES]/tools/plugandpaintplugins
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS plugandpaintplugins.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/tools/plugandpaintplugins
INSTALLS += target sources

symbian: include($$PWD/../../symbianpkgrules.pri)
maemo5: include($$PWD/../../maemo5pkgrules.pri)

