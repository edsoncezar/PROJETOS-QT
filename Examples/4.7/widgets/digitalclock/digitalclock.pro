HEADERS       = digitalclock.h
SOURCES       = digitalclock.cpp \
                main.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/digitalclock
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS digitalclock.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/widgets/digitalclock
INSTALLS += target sources

symbian: include($$PWD/../../symbianpkgrules.pri)
maemo5: include($$PWD/../../maemo5pkgrules.pri)

