HEADERS += calibration.h \
	   scribblewidget.h
SOURCES += calibration.cpp \
	   scribblewidget.cpp \
	   main.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/qws/mousecalibration
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS *.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/qws/mousecalibration
INSTALLS += target sources

symbian: include($$PWD/../../symbianpkgrules.pri)
maemo5: include($$PWD/../../maemo5pkgrules.pri)

symbian: warning(This example does not work on Symbian platform)
maemo5: warning(This example might not fully work on Maemo platform)
simulator: warning(This example does not work on Simulator platform)
