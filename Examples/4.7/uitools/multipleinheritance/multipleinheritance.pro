#! [0]
SOURCES = calculatorform.cpp main.cpp
HEADERS	= calculatorform.h
FORMS = calculatorform.ui
#! [0]

# install
target.path = $$[QT_INSTALL_EXAMPLES]/uitools/multipleinheritance
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS *.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/uitools/multipleinheritance
INSTALLS += target sources

symbian {
    TARGET.UID3 = 0xA000D7C1
    include($$PWD/../../symbianpkgrules.pri)
}
maemo5: include($$PWD/../../maemo5pkgrules.pri)

