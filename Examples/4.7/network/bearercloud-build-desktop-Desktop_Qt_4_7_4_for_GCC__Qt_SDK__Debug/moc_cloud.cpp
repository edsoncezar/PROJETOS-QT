/****************************************************************************
** Meta object code from reading C++ file 'cloud.h'
**
** Created: Fri Oct 14 17:03:49 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bearercloud/cloud.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cloud.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Cloud[] = {

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
      13,    7,    6,    6, 0x08,
      50,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Cloud[] = {
    "Cloud\0\0state\0stateChanged(QNetworkSession::State)\0"
    "newConfigurationActivated()\0"
};

const QMetaObject Cloud::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Cloud,
      qt_meta_data_Cloud, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Cloud::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Cloud::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Cloud::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Cloud))
        return static_cast<void*>(const_cast< Cloud*>(this));
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< Cloud*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< Cloud*>(this));
    return QObject::qt_metacast(_clname);
}

int Cloud::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: stateChanged((*reinterpret_cast< QNetworkSession::State(*)>(_a[1]))); break;
        case 1: newConfigurationActivated(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
