/****************************************************************************
** Meta object code from reading C++ file 'tictactoedialog.h'
**
** Created: Fri Oct 14 15:57:13 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../designer/taskmenuextension/tictactoedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tictactoedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TicTacToeDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      30,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TicTacToeDialog[] = {
    "TicTacToeDialog\0\0resetState()\0saveState()\0"
};

const QMetaObject TicTacToeDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TicTacToeDialog,
      qt_meta_data_TicTacToeDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TicTacToeDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TicTacToeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TicTacToeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TicTacToeDialog))
        return static_cast<void*>(const_cast< TicTacToeDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int TicTacToeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: resetState(); break;
        case 1: saveState(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
