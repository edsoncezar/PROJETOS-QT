/****************************************************************************
** Meta object code from reading C++ file 'screenshot.h'
**
** Created: Fri Oct 14 15:59:12 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../desktop/screenshot/screenshot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screenshot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Screenshot[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      28,   11,   11,   11, 0x08,
      45,   11,   11,   11, 0x08,
      59,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Screenshot[] = {
    "Screenshot\0\0newScreenshot()\0"
    "saveScreenshot()\0shootScreen()\0"
    "updateCheckBox()\0"
};

const QMetaObject Screenshot::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Screenshot,
      qt_meta_data_Screenshot, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Screenshot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Screenshot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Screenshot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Screenshot))
        return static_cast<void*>(const_cast< Screenshot*>(this));
    return QWidget::qt_metacast(_clname);
}

int Screenshot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: newScreenshot(); break;
        case 1: saveScreenshot(); break;
        case 2: shootScreen(); break;
        case 3: updateCheckBox(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
