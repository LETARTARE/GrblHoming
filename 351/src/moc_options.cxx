/****************************************************************************
** Meta object code from reading C++ file 'options.h'
**
** Created: Thu 17. Apr 20:13:28 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "options.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'options.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Options[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      29,   23,    8,    8, 0x08,
      54,   47,    8,    8, 0x08,
      82,   77,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Options[] = {
    "Options\0\0setSettings()\0useMm\0"
    "toggleUseMm(bool)\0limitZ\0"
    "toggleLimitZRate(bool)\0four\0"
    "toggleFourAxis(bool)\0"
};

const QMetaObject Options::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Options,
      qt_meta_data_Options, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Options::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Options::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Options::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Options))
        return static_cast<void*>(const_cast< Options*>(this));
    return QDialog::qt_metacast(_clname);
}

int Options::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setSettings(); break;
        case 1: toggleUseMm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: toggleLimitZRate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: toggleFourAxis((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Options::setSettings()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
