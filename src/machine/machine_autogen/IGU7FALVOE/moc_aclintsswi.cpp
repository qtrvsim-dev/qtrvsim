/****************************************************************************
** Meta object code from reading C++ file 'aclintsswi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../memory/backend/aclintsswi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aclintsswi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_machine__aclint__AclintSswi_t {
    QByteArrayData data[11];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_machine__aclint__AclintSswi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_machine__aclint__AclintSswi_t qt_meta_stringdata_machine__aclint__AclintSswi = {
    {
QT_MOC_LITERAL(0, 0, 27), // "machine::aclint::AclintSswi"
QT_MOC_LITERAL(1, 28, 18), // "write_notification"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 6), // "Offset"
QT_MOC_LITERAL(4, 55, 7), // "address"
QT_MOC_LITERAL(5, 63, 8), // "uint32_t"
QT_MOC_LITERAL(6, 72, 5), // "value"
QT_MOC_LITERAL(7, 78, 17), // "read_notification"
QT_MOC_LITERAL(8, 96, 16), // "signal_interrupt"
QT_MOC_LITERAL(9, 113, 9), // "irq_level"
QT_MOC_LITERAL(10, 123, 6) // "active"

    },
    "machine::aclint::AclintSswi\0"
    "write_notification\0\0Offset\0address\0"
    "uint32_t\0value\0read_notification\0"
    "signal_interrupt\0irq_level\0active"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_machine__aclint__AclintSswi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       7,    2,   34,    2, 0x06 /* Public */,
       8,    2,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,    9,   10,

       0        // eod
};

void machine::aclint::AclintSswi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AclintSswi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->write_notification((*reinterpret_cast< Offset(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2]))); break;
        case 1: _t->read_notification((*reinterpret_cast< Offset(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2]))); break;
        case 2: _t->signal_interrupt((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AclintSswi::*)(Offset , uint32_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AclintSswi::write_notification)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AclintSswi::*)(Offset , uint32_t ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AclintSswi::read_notification)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AclintSswi::*)(uint , bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AclintSswi::signal_interrupt)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject machine::aclint::AclintSswi::staticMetaObject = { {
    QMetaObject::SuperData::link<BackendMemory::staticMetaObject>(),
    qt_meta_stringdata_machine__aclint__AclintSswi.data,
    qt_meta_data_machine__aclint__AclintSswi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *machine::aclint::AclintSswi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *machine::aclint::AclintSswi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_machine__aclint__AclintSswi.stringdata0))
        return static_cast<void*>(this);
    return BackendMemory::qt_metacast(_clname);
}

int machine::aclint::AclintSswi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BackendMemory::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void machine::aclint::AclintSswi::write_notification(Offset _t1, uint32_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void machine::aclint::AclintSswi::read_notification(Offset _t1, uint32_t _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< machine::aclint::AclintSswi *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void machine::aclint::AclintSswi::signal_interrupt(uint _t1, bool _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< machine::aclint::AclintSswi *>(this), &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
