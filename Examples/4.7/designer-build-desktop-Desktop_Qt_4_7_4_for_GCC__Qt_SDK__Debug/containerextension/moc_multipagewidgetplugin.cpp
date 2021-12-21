/****************************************************************************
** Meta object code from reading C++ file 'multipagewidgetplugin.h'
**
** Created: Fri Oct 14 15:56:46 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../designer/containerextension/multipagewidgetplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multipagewidgetplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MultiPageWidgetPlugin[] = {

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
      29,   23,   22,   22, 0x08,
      60,   54,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MultiPageWidgetPlugin[] = {
    "MultiPageWidgetPlugin\0\0index\0"
    "currentIndexChanged(int)\0title\0"
    "pageTitleChanged(QString)\0"
};

const QMetaObject MultiPageWidgetPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MultiPageWidgetPlugin,
      qt_meta_data_MultiPageWidgetPlugin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MultiPageWidgetPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MultiPageWidgetPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MultiPageWidgetPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MultiPageWidgetPlugin))
        return static_cast<void*>(const_cast< MultiPageWidgetPlugin*>(this));
    if (!strcmp(_clname, "QDesignerCustomWidgetInterface"))
        return static_cast< QDesignerCustomWidgetInterface*>(const_cast< MultiPageWidgetPlugin*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.Designer.CustomWidget"))
        return static_cast< QDesignerCustomWidgetInterface*>(const_cast< MultiPageWidgetPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int MultiPageWidgetPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: pageTitleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
