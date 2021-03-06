HEADERS     = mainwindow.h \
              pieview.h
RESOURCES   = chart.qrc
SOURCES     = main.cpp \
              mainwindow.cpp \
              pieview.cpp
unix:!mac:!symbian:!vxworks:LIBS+= -lm

TARGET.EPOCHEAPSIZE = 0x200000 0x800000

# install
target.path = $$[QT_INSTALL_EXAMPLES]/itemviews/chart
sources.files = $$SOURCES $$HEADERS $$RESOURCES *.pro *.cht
sources.path = $$[QT_INSTALL_EXAMPLES]/itemviews/chart
INSTALLS += target sources

symbian {
    TARGET.UID3 = 0xA000A647
    include($$PWD/../../symbianpkgrules.pri)
}
maemo5: include($$PWD/../../maemo5pkgrules.pri)

