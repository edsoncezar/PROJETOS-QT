HEADERS       = circlewidget.h \
                window.h
SOURCES       = circlewidget.cpp \
                main.cpp \
                window.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/painting/concentriccircles
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS concentriccircles.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/painting/concentriccircles
INSTALLS += target sources

symbian {
    TARGET.UID3 = 0xA000A64A
    include($$PWD/../../symbianpkgrules.pri)
}
maemo5: include($$PWD/../../maemo5pkgrules.pri)

