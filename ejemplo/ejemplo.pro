TEMPLATE = app
QT += core sql
CONFIG = qt \
 release \
 warn_on
DESTDIR = bin
OBJECTS_DIR = compilar
MOC_DIR = compilar
UI_DIR = compilar
unix {
 TARGET = ejemplo
 OBJECTS_DIR +=  build/o/unix
 database.path += ~/bin
 database.files = bd.db
 target.path += ~/bin
 INSTALLS += database \
  target
}
win32 {
 CONFIG = windows 
 TARGET = Ejemplo
 OBJECTS_DIR += build/o/win32
}
HEADERS += src/login.h
SOURCES += src/main.cpp src/login.cpp
