SOURCES = main.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/tutorials/widgets/windowlayout
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS windowlayout.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/tutorials/widgets/windowlayout
INSTALLS += target sources

symbian: include($$PWD/../../../symbianpkgrules.pri)
maemo5: include($$PWD/../../../maemo5pkgrules.pri)

symbian: warning(This example might not fully work on Symbian platform)
maemo5: warning(This example might not fully work on Maemo platform)
simulator: warning(This example might not fully work on Simulator platform)
