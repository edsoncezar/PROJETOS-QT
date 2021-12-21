/****************************************************************************
** Meta object code from reading C++ file 'tictactoetaskmenu.h'
**
** Created: Fri Oct 14 15:57:15 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../designer/taskmenuextension/tictactoetaskmenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tictactoetaskmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TicTacToeTaskMenu[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TicTacToeTaskMenu[] = {
    "TicTacToeTaskMenu\0\0editState()\0"
};

const QMetaObject TicTacToeTaskMenu::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TicTacToeTaskMenu,
      qt_meta_data_TicTacToeTaskMenu, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TicTacToeTaskMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TicTacToeTaskMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TicTacToeTaskMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TicTacToeTaskMenu))
        return static_cast<void*>(const_cast< TicTacToeTaskMenu*>(this));
    if (!strcmp(_clname, "QDesignerTaskMenuExtension"))
        return static_cast< QDesignerTaskMenuExtension*>(const_cast< TicTacToeTaskMenu*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.Designer.TaskMenu"))
        return static_cast< QDesignerTaskMenuExtension*>(const_cast< TicTacToeTaskMenu*>(this));
    return QObject::qt_metacast(_clname);
}

int TicTacToeTaskMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: editState(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_TicTacToeTaskMenuFactory[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_TicTacToeTaskMenuFactory[] = {
    "TicTacToeTaskMenuFactory\0"
};

const QMetaObject TicTacToeTaskMenuFactory::staticMetaObject = {
    { &QExtensionFactory::staticMetaObject, qt_meta_stringdata_TicTacToeTaskMenuFactory,
      qt_meta_data_TicTacToeTaskMenuFactory, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TicTacToeTaskMenuFactory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TicTacToeTaskMenuFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TicTacToeTaskMenuFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TicTacToeTaskMenuFactory))
        return static_cast<void*>(const_cast< TicTacToeTaskMenuFactory*>(this));
    return QExtensionFactory::qt_metacast(_clname);
}

int TicTacToeTaskMenuFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QExtensionFactory::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
