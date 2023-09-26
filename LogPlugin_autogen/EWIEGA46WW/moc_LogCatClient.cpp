/****************************************************************************
** Meta object code from reading C++ file 'LogCatClient.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../LogCatClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogCatClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogCatClient_t {
    const uint offsetsAndSize[20];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_LogCatClient_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_LogCatClient_t qt_meta_stringdata_LogCatClient = {
    {
QT_MOC_LITERAL(0, 12), // "LogCatClient"
QT_MOC_LITERAL(13, 7), // "sendLog"
QT_MOC_LITERAL(21, 0), // ""
QT_MOC_LITERAL(22, 26), // "on_readyReadStandardOutput"
QT_MOC_LITERAL(49, 25), // "on_readyReadStandardError"
QT_MOC_LITERAL(75, 20), // "sendProcessCompleted"
QT_MOC_LITERAL(96, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(117, 16), // "sendProcessError"
QT_MOC_LITERAL(134, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(157, 5) // "error"

    },
    "LogCatClient\0sendLog\0\0on_readyReadStandardOutput\0"
    "on_readyReadStandardError\0"
    "sendProcessCompleted\0QProcess::ExitStatus\0"
    "sendProcessError\0QProcess::ProcessError\0"
    "error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogCatClient[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   47,    2, 0x08,    3 /* Private */,
       4,    0,   48,    2, 0x08,    4 /* Private */,
       5,    2,   49,    2, 0x08,    5 /* Private */,
       7,    1,   54,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    2,    2,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void LogCatClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogCatClient *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_readyReadStandardOutput(); break;
        case 2: _t->on_readyReadStandardError(); break;
        case 3: _t->sendProcessCompleted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 4: _t->sendProcessError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogCatClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogCatClient::sendLog)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject LogCatClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LogCatClient.offsetsAndSize,
    qt_meta_data_LogCatClient,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_LogCatClient_t
, QtPrivate::TypeAndForceComplete<LogCatClient, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QProcess::ExitStatus, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QProcess::ProcessError, std::false_type>


>,
    nullptr
} };


const QMetaObject *LogCatClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogCatClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogCatClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LogCatClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void LogCatClient::sendLog(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
