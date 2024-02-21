/****************************************************************************
** Meta object code from reading C++ file 'memory.test.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../memory/backend/memory.test.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'memory.test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestMemory_t {
    QByteArrayData data[14];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestMemory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestMemory_t qt_meta_stringdata_TestMemory = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TestMemory"
QT_MOC_LITERAL(1, 11, 6), // "memory"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 11), // "memory_data"
QT_MOC_LITERAL(4, 31, 14), // "memory_section"
QT_MOC_LITERAL(5, 46, 19), // "memory_section_data"
QT_MOC_LITERAL(6, 66, 14), // "memory_compare"
QT_MOC_LITERAL(7, 81, 19), // "memory_compare_data"
QT_MOC_LITERAL(8, 101, 21), // "memory_write_ctl_data"
QT_MOC_LITERAL(9, 123, 16), // "memory_write_ctl"
QT_MOC_LITERAL(10, 140, 20), // "memory_read_ctl_data"
QT_MOC_LITERAL(11, 161, 15), // "memory_read_ctl"
QT_MOC_LITERAL(12, 177, 19), // "memory_memtest_data"
QT_MOC_LITERAL(13, 197, 14) // "memory_memtest"

    },
    "TestMemory\0memory\0\0memory_data\0"
    "memory_section\0memory_section_data\0"
    "memory_compare\0memory_compare_data\0"
    "memory_write_ctl_data\0memory_write_ctl\0"
    "memory_read_ctl_data\0memory_read_ctl\0"
    "memory_memtest_data\0memory_memtest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestMemory[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TestMemory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestMemory *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->memory(); break;
        case 1: _t->memory_data(); break;
        case 2: _t->memory_section(); break;
        case 3: _t->memory_section_data(); break;
        case 4: _t->memory_compare(); break;
        case 5: _t->memory_compare_data(); break;
        case 6: _t->memory_write_ctl_data(); break;
        case 7: _t->memory_write_ctl(); break;
        case 8: _t->memory_read_ctl_data(); break;
        case 9: _t->memory_read_ctl(); break;
        case 10: _t->memory_memtest_data(); break;
        case 11: _t->memory_memtest(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TestMemory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TestMemory.data,
    qt_meta_data_TestMemory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TestMemory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestMemory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestMemory.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestMemory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
