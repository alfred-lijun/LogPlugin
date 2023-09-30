/****************************************************************************
** Meta object code from reading C++ file 'LogCatWatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../LogCatWatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogCatWatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeviceThread_t {
    QByteArrayData data[4];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceThread_t qt_meta_stringdata_DeviceThread = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DeviceThread"
QT_MOC_LITERAL(1, 13, 14), // "onDeviceOnline"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 15) // "onDeviceOffline"

    },
    "DeviceThread\0onDeviceOnline\0\0"
    "onDeviceOffline"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DeviceThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onDeviceOnline(); break;
        case 1: _t->onDeviceOffline(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeviceThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceThread::onDeviceOnline)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeviceThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceThread::onDeviceOffline)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DeviceThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_DeviceThread.data,
    qt_meta_data_DeviceThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeviceThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int DeviceThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void DeviceThread::onDeviceOnline()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DeviceThread::onDeviceOffline()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_RollFileThread_t {
    QByteArrayData data[3];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RollFileThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RollFileThread_t qt_meta_stringdata_RollFileThread = {
    {
QT_MOC_LITERAL(0, 0, 14), // "RollFileThread"
QT_MOC_LITERAL(1, 15, 15), // "onDeviceRestart"
QT_MOC_LITERAL(2, 31, 0) // ""

    },
    "RollFileThread\0onDeviceRestart\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RollFileThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void RollFileThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RollFileThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onDeviceRestart(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RollFileThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RollFileThread::onDeviceRestart)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RollFileThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_RollFileThread.data,
    qt_meta_data_RollFileThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RollFileThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RollFileThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RollFileThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int RollFileThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void RollFileThread::onDeviceRestart()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_LogCatWatcher_t {
    QByteArrayData data[10];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogCatWatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogCatWatcher_t qt_meta_stringdata_LogCatWatcher = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LogCatWatcher"
QT_MOC_LITERAL(1, 14, 15), // "onDeviceOffline"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "onDeviceOnline"
QT_MOC_LITERAL(4, 46, 15), // "onDeviceRestart"
QT_MOC_LITERAL(5, 62, 7), // "onPrint"
QT_MOC_LITERAL(6, 70, 3), // "log"
QT_MOC_LITERAL(7, 74, 18), // "slot_deviceOffline"
QT_MOC_LITERAL(8, 93, 17), // "slot_deviceOnline"
QT_MOC_LITERAL(9, 111, 18) // "slot_deviceRestart"

    },
    "LogCatWatcher\0onDeviceOffline\0\0"
    "onDeviceOnline\0onDeviceRestart\0onPrint\0"
    "log\0slot_deviceOffline\0slot_deviceOnline\0"
    "slot_deviceRestart"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogCatWatcher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

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
        Q_UNUSED(_t)
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

QT_INIT_METAOBJECT const QMetaObject LogCatWatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LogCatWatcher.data,
    qt_meta_data_LogCatWatcher,
    qt_static_metacall,
    nullptr,
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
            *reinterpret_cast<int*>(_a[0]) = -1;
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
