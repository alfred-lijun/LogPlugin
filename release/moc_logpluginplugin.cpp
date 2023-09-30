/****************************************************************************
** Meta object code from reading C++ file 'logpluginplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../logpluginplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logpluginplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogPlugin__Internal__LogPluginPlugin_t {
    QByteArrayData data[1];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogPlugin__Internal__LogPluginPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogPlugin__Internal__LogPluginPlugin_t qt_meta_stringdata_LogPlugin__Internal__LogPluginPlugin = {
    {
QT_MOC_LITERAL(0, 0, 36) // "LogPlugin::Internal::LogPlugi..."

    },
    "LogPlugin::Internal::LogPluginPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogPlugin__Internal__LogPluginPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void LogPlugin::Internal::LogPluginPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LogPlugin::Internal::LogPluginPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<ExtensionSystem::IPlugin::staticMetaObject>(),
    qt_meta_stringdata_LogPlugin__Internal__LogPluginPlugin.data,
    qt_meta_data_LogPlugin__Internal__LogPluginPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LogPlugin::Internal::LogPluginPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogPlugin::Internal::LogPluginPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogPlugin__Internal__LogPluginPlugin.stringdata0))
        return static_cast<void*>(this);
    return ExtensionSystem::IPlugin::qt_metacast(_clname);
}

int LogPlugin::Internal::LogPluginPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExtensionSystem::IPlugin::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x21,  'o',  'r',  'g',  '.',  'q', 
    't',  '-',  'p',  'r',  'o',  'j',  'e',  'c', 
    't',  '.',  'Q',  't',  '.',  'Q',  't',  'C', 
    'r',  'e',  'a',  't',  'o',  'r',  'P',  'l', 
    'u',  'g',  'i',  'n', 
    // "className"
    0x03,  0x6f,  'L',  'o',  'g',  'P',  'l',  'u', 
    'g',  'i',  'n',  'P',  'l',  'u',  'g',  'i', 
    'n', 
    // "MetaData"
    0x04,  0xa9,  0x6d,  'C',  'o',  'm',  'p',  'a', 
    't',  'V',  'e',  'r',  's',  'i',  'o',  'n', 
    0x65,  '0',  '.',  '0',  '.',  '1',  0x69,  'C', 
    'o',  'p',  'y',  'r',  'i',  'g',  'h',  't', 
    0x6d,  '(',  'C',  ')',  ' ',  'M',  'y',  'C', 
    'o',  'm',  'p',  'a',  'n',  'y',  0x6c,  'D', 
    'e',  'p',  'e',  'n',  'd',  'e',  'n',  'c', 
    'i',  'e',  's',  0x81,  0xa2,  0x64,  'N',  'a', 
    'm',  'e',  0x64,  'C',  'o',  'r',  'e',  0x67, 
    'V',  'e',  'r',  's',  'i',  'o',  'n',  0x65, 
    '5',  '.',  '0',  '.',  '3',  0x6b,  'D',  'e', 
    's',  'c',  'r',  'i',  'p',  't',  'i',  'o', 
    'n',  0x78,  0x2b,  'P',  'u',  't',  ' ',  'a', 
    ' ',  's',  'h',  'o',  'r',  't',  ' ',  'd', 
    'e',  's',  'c',  'r',  'i',  'p',  't',  'i', 
    'o',  'n',  ' ',  'o',  'f',  ' ',  'y',  'o', 
    'u',  'r',  ' ',  'p',  'l',  'u',  'g',  'i', 
    'n',  ' ',  'h',  'e',  'r',  'e',  0x67,  'L', 
    'i',  'c',  'e',  'n',  's',  'e',  0x78,  0x21, 
    'P',  'u',  't',  ' ',  'y',  'o',  'u',  'r', 
    ' ',  'l',  'i',  'c',  'e',  'n',  's',  'e', 
    ' ',  'i',  'n',  'f',  'o',  'r',  'm',  'a', 
    't',  'i',  'o',  'n',  ' ',  'h',  'e',  'r', 
    'e',  0x64,  'N',  'a',  'm',  'e',  0x69,  'L', 
    'o',  'g',  'P',  'l',  'u',  'g',  'i',  'n', 
    0x63,  'U',  'r',  'l',  0x78,  0x18,  'h',  't', 
    't',  'p',  ':',  '/',  '/',  'w',  'w',  'w', 
    '.',  'm',  'y',  'c',  'o',  'm',  'p',  'a', 
    'n',  'y',  '.',  'c',  'o',  'm',  0x66,  'V', 
    'e',  'n',  'd',  'o',  'r',  0x69,  'M',  'y', 
    'C',  'o',  'm',  'p',  'a',  'n',  'y',  0x67, 
    'V',  'e',  'r',  's',  'i',  'o',  'n',  0x65, 
    '0',  '.',  '0',  '.',  '1', 
    0xff, 
};
using namespace LogPlugin;
using namespace LogPlugin::Internal;
QT_MOC_EXPORT_PLUGIN(LogPlugin::Internal::LogPluginPlugin, LogPluginPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
