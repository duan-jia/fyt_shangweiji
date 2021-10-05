/****************************************************************************
** Meta object code from reading C++ file 'vseaskyport.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SerialScope/vSeaskyPort/vseaskyport.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vseaskyport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_vSeaskyPort_t {
    QByteArrayData data[20];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_vSeaskyPort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_vSeaskyPort_t qt_meta_stringdata_vSeaskyPort = {
    {
QT_MOC_LITERAL(0, 0, 11), // "vSeaskyPort"
QT_MOC_LITERAL(1, 12, 14), // "vQWidgetRxShow"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "vQWidgetTxShow"
QT_MOC_LITERAL(4, 43, 11), // "textChanged"
QT_MOC_LITERAL(5, 55, 12), // "vInfoChanged"
QT_MOC_LITERAL(6, 68, 10), // "showRxHead"
QT_MOC_LITERAL(7, 79, 9), // "vSerialTx"
QT_MOC_LITERAL(8, 89, 3), // "str"
QT_MOC_LITERAL(9, 93, 7), // "RxScope"
QT_MOC_LITERAL(10, 101, 6), // "rxData"
QT_MOC_LITERAL(11, 108, 15), // "RxPIDshowupdate"
QT_MOC_LITERAL(12, 124, 7), // "ReadPID"
QT_MOC_LITERAL(13, 132, 8), // "WritePID"
QT_MOC_LITERAL(14, 141, 10), // "vSendQuery"
QT_MOC_LITERAL(15, 152, 13), // "vSeaskyTxSlot"
QT_MOC_LITERAL(16, 166, 9), // "vSeaskyRx"
QT_MOC_LITERAL(17, 176, 11), // "vQueryPIDTx"
QT_MOC_LITERAL(18, 188, 17), // "vQueryPIDCheckout"
QT_MOC_LITERAL(19, 206, 9) // "vWritePID"

    },
    "vSeaskyPort\0vQWidgetRxShow\0\0vQWidgetTxShow\0"
    "textChanged\0vInfoChanged\0showRxHead\0"
    "vSerialTx\0str\0RxScope\0rxData\0"
    "RxPIDshowupdate\0ReadPID\0WritePID\0"
    "vSendQuery\0vSeaskyTxSlot\0vSeaskyRx\0"
    "vQueryPIDTx\0vQueryPIDCheckout\0vWritePID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_vSeaskyPort[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    0,   96,    2, 0x06 /* Public */,
       5,    0,   97,    2, 0x06 /* Public */,
       6,    0,   98,    2, 0x06 /* Public */,
       7,    1,   99,    2, 0x06 /* Public */,
       9,    1,  102,    2, 0x06 /* Public */,
      11,    0,  105,    2, 0x06 /* Public */,
      12,    0,  106,    2, 0x06 /* Public */,
      13,    0,  107,    2, 0x06 /* Public */,
      14,    0,  108,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,  109,    2, 0x0a /* Public */,
      16,    0,  110,    2, 0x0a /* Public */,
      17,    0,  111,    2, 0x0a /* Public */,
      18,    0,  112,    2, 0x0a /* Public */,
      19,    0,  113,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    8,
    QMetaType::Void, QMetaType::QVariant,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void vSeaskyPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<vSeaskyPort *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->vQWidgetRxShow(); break;
        case 1: _t->vQWidgetTxShow(); break;
        case 2: _t->textChanged(); break;
        case 3: _t->vInfoChanged(); break;
        case 4: _t->showRxHead(); break;
        case 5: _t->vSerialTx((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 6: _t->RxScope((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 7: _t->RxPIDshowupdate(); break;
        case 8: _t->ReadPID(); break;
        case 9: _t->WritePID(); break;
        case 10: _t->vSendQuery(); break;
        case 11: _t->vSeaskyTxSlot(); break;
        case 12: _t->vSeaskyRx(); break;
        case 13: _t->vQueryPIDTx(); break;
        case 14: _t->vQueryPIDCheckout(); break;
        case 15: _t->vWritePID(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (vSeaskyPort::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&vSeaskyPort::vQWidgetRxShow)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (vSeaskyPort::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&vSeaskyPort::vQWidgetTxShow)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (vSeaskyPort::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&vSeaskyPort::textChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (vSeaskyPort::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&vSeaskyPort::vInfoChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (vSeaskyPort::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&vSeaskyPort::showRxHead)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (vSeaskyPort::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&vSeaskyPort::vSerialTx)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (vSeaskyPort::*)(const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&vSeaskyPort::RxScope)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (vSeaskyPort::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&vSeaskyPort::RxPIDshowupdate)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (vSeaskyPort::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&vSeaskyPort::ReadPID)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (vSeaskyPort::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&vSeaskyPort::WritePID)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (vSeaskyPort::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&vSeaskyPort::vSendQuery)) {
                *result = 10;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject vSeaskyPort::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_vSeaskyPort.data,
    qt_meta_data_vSeaskyPort,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *vSeaskyPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vSeaskyPort::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_vSeaskyPort.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int vSeaskyPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void vSeaskyPort::vQWidgetRxShow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void vSeaskyPort::vQWidgetTxShow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void vSeaskyPort::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void vSeaskyPort::vInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void vSeaskyPort::showRxHead()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void vSeaskyPort::vSerialTx(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void vSeaskyPort::RxScope(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void vSeaskyPort::RxPIDshowupdate()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void vSeaskyPort::ReadPID()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void vSeaskyPort::WritePID()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void vSeaskyPort::vSendQuery()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
struct qt_meta_stringdata_vSeaskyPortQThread_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_vSeaskyPortQThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_vSeaskyPortQThread_t qt_meta_stringdata_vSeaskyPortQThread = {
    {
QT_MOC_LITERAL(0, 0, 18) // "vSeaskyPortQThread"

    },
    "vSeaskyPortQThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_vSeaskyPortQThread[] = {

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

void vSeaskyPortQThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject vSeaskyPortQThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_vSeaskyPortQThread.data,
    qt_meta_data_vSeaskyPortQThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *vSeaskyPortQThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vSeaskyPortQThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_vSeaskyPortQThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int vSeaskyPortQThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
