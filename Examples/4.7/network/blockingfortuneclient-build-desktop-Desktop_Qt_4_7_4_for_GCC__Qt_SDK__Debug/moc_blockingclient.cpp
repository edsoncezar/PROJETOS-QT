/****************************************************************************
** Meta object code from reading C++ file 'blockingclient.h'
**
** Created: Fri Oct 14 17:07:42 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../blockingfortuneclient/blockingclient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'blockingclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BlockingClient[] = {

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
      16,   15,   15,   15, 0x08,
      44,   36,   15,   15, 0x08,
      85,   65,   15,   15, 0x08,
     111,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BlockingClient[] = {
    "BlockingClient\0\0requestNewFortune()\0"
    "fortune\0showFortune(QString)\0"
    "socketError,message\0displayError(int,QString)\0"
    "enableGetFortuneButton()\0"
};

const QMetaObject BlockingClient::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BlockingClient,
      qt_meta_data_BlockingClient, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BlockingClient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BlockingClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BlockingClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BlockingClient))
        return static_cast<void*>(const_cast< BlockingClient*>(this));
    return QWidget::qt_metacast(_clname);
}

int BlockingClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: requestNewFortune(); break;
        case 1: showFortune((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: displayError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: enableGetFortuneButton(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
