TEMPLATE	= subdirs
SUBDIRS		= stylewindow \
		  plugin

# install
target.path = $$[QT_INSTALL_EXAMPLES]/tools/styleplugin
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS styleplugin.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/tools/styleplugin
INSTALLS += target sources

symbian: include($$PWD/../../symbianpkgrules.pri)
maemo5: include($$PWD/../../maemo5pkgrules.pri)

