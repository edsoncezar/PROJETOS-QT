TEMPLATE      = subdirs
SUBDIRS       = classwizard \
                configdialog \
                standarddialogs \
                tabdialog \
                trivialwizard

!symbian:!wince*: SUBDIRS += licensewizard \
                    extension \
                    findfiles

wince*: SUBDIRS += sipdialog

# install
sources.files = README *.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/dialogs
INSTALLS += sources

symbian: include($$PWD/../symbianpkgrules.pri)
maemo5: include($$PWD/../maemo5pkgrules.pri)
