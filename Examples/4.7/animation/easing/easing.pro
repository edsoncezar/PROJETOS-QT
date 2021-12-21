HEADERS = window.h \
          animation.h
SOURCES = main.cpp \
          window.cpp

FORMS   = form.ui

RESOURCES = easing.qrc

target.path = $$[QT_INSTALL_EXAMPLES]/animation/easing
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS easing.pro images
sources.path = $$[QT_INSTALL_EXAMPLES]/animation/easing
INSTALLS += sources

INSTALLS += target

symbian {
    TARGET.UID3 = 0xA000E3F6
    include($$PWD/../../symbianpkgrules.pri)
}

maemo5: include($$PWD/../../maemo5pkgrules.pri)
