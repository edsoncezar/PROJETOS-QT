/****************************************************************************
** Meta object code from reading C++ file 'editardialog.h'
**
** Created: Fri Oct 14 14:03:06 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "editardialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editardialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_editarDialog[] = {

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
      14,   13,   13,   13, 0x08,
      33,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_editarDialog[] = {
    "editarDialog\0\0adicionarRegisto()\0"
    "eliminarRegisto()\0"
};

const QMetaObject editarDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_editarDialog,
      qt_meta_data_editarDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &editarDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *editarDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *editarDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_editarDialog))
        return static_cast<void*>(const_cast< editarDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int editarDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: adicionarRegisto(); break;
        case 1: eliminarRegisto(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
