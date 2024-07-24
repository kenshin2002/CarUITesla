/****************************************************************************
** Meta object code from reading C++ file 'system.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.17)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Controller/system.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'system.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.17. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_System_t {
    QByteArrayData data[16];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_System_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_System_t qt_meta_stringdata_System = {
    {
QT_MOC_LITERAL(0, 0, 6), // "System"
QT_MOC_LITERAL(1, 7, 16), // "carLockedChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 18), // "outDoorTempChanged"
QT_MOC_LITERAL(4, 44, 15), // "userNameChanged"
QT_MOC_LITERAL(5, 60, 17), // "timeSystemChanged"
QT_MOC_LITERAL(6, 78, 12), // "setCarLocked"
QT_MOC_LITERAL(7, 91, 12), // "newCarLocked"
QT_MOC_LITERAL(8, 104, 14), // "setOutDoorTemp"
QT_MOC_LITERAL(9, 119, 14), // "newOutDoorTemp"
QT_MOC_LITERAL(10, 134, 11), // "setUserName"
QT_MOC_LITERAL(11, 146, 11), // "newUserName"
QT_MOC_LITERAL(12, 158, 9), // "carLocked"
QT_MOC_LITERAL(13, 168, 11), // "outDoorTemp"
QT_MOC_LITERAL(14, 180, 8), // "userName"
QT_MOC_LITERAL(15, 189, 10) // "timeSystem"

    },
    "System\0carLockedChanged\0\0outDoorTempChanged\0"
    "userNameChanged\0timeSystemChanged\0"
    "setCarLocked\0newCarLocked\0setOutDoorTemp\0"
    "newOutDoorTemp\0setUserName\0newUserName\0"
    "carLocked\0outDoorTemp\0userName\0"
    "timeSystem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_System[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    1,   53,    2, 0x02 /* Public */,
       8,    1,   56,    2, 0x02 /* Public */,
      10,    1,   59,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString,   11,

 // properties: name, type, flags
      12, QMetaType::Bool, 0x00495903,
      13, QMetaType::Int, 0x00495903,
      14, QMetaType::QString, 0x00495903,
      15, QMetaType::QString, 0x00495903,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void System::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<System *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->carLockedChanged(); break;
        case 1: _t->outDoorTempChanged(); break;
        case 2: _t->userNameChanged(); break;
        case 3: _t->timeSystemChanged(); break;
        case 4: _t->setCarLocked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setOutDoorTemp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setUserName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (System::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&System::carLockedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (System::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&System::outDoorTempChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (System::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&System::userNameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (System::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&System::timeSystemChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<System *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->carLocked(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->outDoorTemp(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->userName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->timeSystem(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<System *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCarLocked(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setOutDoorTemp(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setUserName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setTimeSystem(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject System::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_System.data,
    qt_meta_data_System,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *System::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *System::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_System.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int System::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void System::carLockedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void System::outDoorTempChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void System::userNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void System::timeSystemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
