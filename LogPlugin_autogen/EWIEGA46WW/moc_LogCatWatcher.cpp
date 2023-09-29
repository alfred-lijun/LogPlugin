/****************************************************************************
** Meta object code from reading C++ file 'LogCatWatcher.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../LogCatWatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogCatWatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogCatWatcher_t {
    const uint offsetsAndSize[20];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_LogCatWatcher_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_LogCatWatcher_t qt_meta_stringdata_LogCatWatcher = {
    {
QT_MOC_LITERAL(0, 13), // "LogCatWatcher"
QT_MOC_LITERAL(14, 15), // "onDeviceOffline"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 14), // "onDeviceOnline"
QT_MOC_LITERAL(46, 15), // "onDeviceRestart"
QT_MOC_LITERAL(62, 7), // "onPrint"
QT_MOC_LITERAL(70, 3), // "log"
QT_MOC_LITERAL(74, 18), // "slot_deviceOffline"
QT_MOC_LITERAL(93, 17), // "slot_deviceOnline"
QT_MOC_LITERAL(111, 18) // "slot_deviceRestart"

    },
    "LogCatWatcher\0onDeviceOffline\0\0"
    "onDeviceOnline\0onDeviceRestart\0onPrint\0"
    "log\0slot_deviceOffline\0slot_deviceOnline\0"
    "slot_deviceRestart"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogCatWatcher[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,
       3,    0,   57,    2, 0x06,    2 /* Public */,
       4,    0,   58,    2, 0x06,    3 /* Public */,
       5,    1,   59,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   62,    2, 0x08,    6 /* Private */,
       8,    0,   63,    2, 0x08,    7 /* Private */,
       9,    0,   64,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LogCatWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogCatWatcher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onDeviceOffline(); break;
        case 1: _t->onDeviceOnline(); break;
        case 2: _t->onDeviceRestart(); break;
        case 3: _t->onPrint((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->slot_deviceOffline(); break;
        case 5: _t->slot_deviceOnline(); break;
        case 6: _t->slot_deviceRestart(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogCatWatcher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogCatWatcher::onDeviceOffline)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LogCatWatcher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogCatWatcher::onDeviceOnline)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LogCatWatcher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogCatWatcher::onDeviceRestart)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LogCatWatcher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogCatWatcher::onPrint)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject LogCatWatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LogCatWatcher.offsetsAndSize,
    qt_meta_data_LogCatWatcher,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_LogCatWatcher_t
, QtPrivate::TypeAndForceComplete<LogCatWatcher, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *LogCatWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogCatWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogCatWatcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LogCatWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void LogCatWatcher::onDeviceOffline()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LogCatWatcher::onDeviceOnline()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LogCatWatcher::onDeviceRestart()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LogCatWatcher::onPrint(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
