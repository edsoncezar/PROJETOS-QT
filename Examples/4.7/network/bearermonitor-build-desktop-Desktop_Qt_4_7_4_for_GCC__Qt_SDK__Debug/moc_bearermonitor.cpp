/****************************************************************************
** Meta object code from reading C++ file 'bearermonitor.h'
**
** Created: Fri Oct 14 17:06:09 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bearermonitor/bearermonitor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bearermonitor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BearerMonitor[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   15,   14,   14, 0x08,
      95,   88,   14,   14, 0x28,
     137,   88,   14,   14, 0x08,
     181,   88,   14,   14, 0x08,
     237,  225,   14,   14, 0x08,
     301,   14,   14,   14, 0x08,
     333,  324,   14,   14, 0x08,
     363,  358,   14,   14, 0x08,
     402,  358,   14,   14, 0x08,
     437,   14,   14,   14, 0x08,
     456,   14,   14,   14, 0x08,
     472,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BearerMonitor[] = {
    "BearerMonitor\0\0config,parent\0"
    "configurationAdded(QNetworkConfiguration,QTreeWidgetItem*)\0"
    "config\0configurationAdded(QNetworkConfiguration)\0"
    "configurationRemoved(QNetworkConfiguration)\0"
    "configurationChanged(QNetworkConfiguration)\0"
    "parent,snap\0"
    "updateSnapConfiguration(QTreeWidgetItem*,QNetworkConfiguration)\0"
    "updateConfigurations()\0isOnline\0"
    "onlineStateChanged(bool)\0item\0"
    "showConfigurationFor(QTreeWidgetItem*)\0"
    "createSessionFor(QTreeWidgetItem*)\0"
    "createNewSession()\0deleteSession()\0"
    "performScan()\0"
};

const QMetaObject BearerMonitor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BearerMonitor,
      qt_meta_data_BearerMonitor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BearerMonitor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BearerMonitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BearerMonitor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BearerMonitor))
        return static_cast<void*>(const_cast< BearerMonitor*>(this));
    if (!strcmp(_clname, "Ui_BearerMonitor"))
        return static_cast< Ui_BearerMonitor*>(const_cast< BearerMonitor*>(this));
    return QWidget::qt_metacast(_clname);
}

int BearerMonitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: configurationAdded((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 1: configurationAdded((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 2: configurationRemoved((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 3: configurationChanged((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 4: updateSnapConfiguration((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< const QNetworkConfiguration(*)>(_a[2]))); break;
        case 5: updateConfigurations(); break;
        case 6: onlineStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: showConfigurationFor((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 8: createSessionFor((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 9: createNewSession(); break;
        case 10: deleteSession(); break;
        case 11: performScan(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
