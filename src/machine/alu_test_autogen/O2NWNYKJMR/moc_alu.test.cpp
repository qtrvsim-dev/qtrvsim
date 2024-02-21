/****************************************************************************
** Meta object code from reading C++ file 'alu.test.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../execute/alu.test.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'alu.test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestAlu_t {
    QByteArrayData data[10];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestAlu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestAlu_t qt_meta_stringdata_TestAlu = {
    {
QT_MOC_LITERAL(0, 0, 7), // "TestAlu"
QT_MOC_LITERAL(1, 8, 23), // "test_alu64_operate_data"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 18), // "test_alu64_operate"
QT_MOC_LITERAL(4, 52, 23), // "test_alu32_operate_data"
QT_MOC_LITERAL(5, 76, 18), // "test_alu32_operate"
QT_MOC_LITERAL(6, 95, 23), // "test_mul64_operate_data"
QT_MOC_LITERAL(7, 119, 18), // "test_mul64_operate"
QT_MOC_LITERAL(8, 138, 23), // "test_mul32_operate_data"
QT_MOC_LITERAL(9, 162, 18) // "test_mul32_operate"

    },
    "TestAlu\0test_alu64_operate_data\0\0"
    "test_alu64_operate\0test_alu32_operate_data\0"
    "test_alu32_operate\0test_mul64_operate_data\0"
    "test_mul64_operate\0test_mul32_operate_data\0"
    "test_mul32_operate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestAlu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
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

void TestAlu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestAlu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->test_alu64_operate_data(); break;
        case 1: _t->test_alu64_operate(); break;
        case 2: _t->test_alu32_operate_data(); break;
        case 3: _t->test_alu32_operate(); break;
        case 4: _t->test_mul64_operate_data(); break;
        case 5: _t->test_mul64_operate(); break;
        case 6: _t->test_mul32_operate_data(); break;
        case 7: _t->test_mul32_operate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TestAlu::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TestAlu.data,
    qt_meta_data_TestAlu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TestAlu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestAlu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestAlu.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestAlu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
