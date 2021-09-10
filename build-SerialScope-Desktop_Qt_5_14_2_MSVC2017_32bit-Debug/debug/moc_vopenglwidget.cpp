/****************************************************************************
** Meta object code from reading C++ file 'vopenglwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SerialScope/vOpenGL/vopenglwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vopenglwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_vOpenGlWidget_t {
    QByteArrayData data[16];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_vOpenGlWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_vOpenGlWidget_t qt_meta_stringdata_vOpenGlWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "vOpenGlWidget"
QT_MOC_LITERAL(1, 14, 12), // "setCapeEuler"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 3), // "yaw"
QT_MOC_LITERAL(4, 32, 5), // "pitch"
QT_MOC_LITERAL(5, 38, 4), // "roll"
QT_MOC_LITERAL(6, 43, 8), // "loadMode"
QT_MOC_LITERAL(7, 52, 13), // "setModelColor"
QT_MOC_LITERAL(8, 66, 18), // "setBackgroundColor"
QT_MOC_LITERAL(9, 85, 15), // "vAxisTurnChange"
QT_MOC_LITERAL(10, 101, 7), // "changed"
QT_MOC_LITERAL(11, 109, 12), // "ZeroAngleCfg"
QT_MOC_LITERAL(12, 122, 2), // "id"
QT_MOC_LITERAL(13, 125, 3), // "cfg"
QT_MOC_LITERAL(14, 129, 12), // "getCapeEuler"
QT_MOC_LITERAL(15, 142, 6) // "rxData"

    },
    "vOpenGlWidget\0setCapeEuler\0\0yaw\0pitch\0"
    "roll\0loadMode\0setModelColor\0"
    "setBackgroundColor\0vAxisTurnChange\0"
    "changed\0ZeroAngleCfg\0id\0cfg\0getCapeEuler\0"
    "rxData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_vOpenGlWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   49,    2, 0x06 /* Public */,
       6,    0,   56,    2, 0x06 /* Public */,
       7,    0,   57,    2, 0x06 /* Public */,
       8,    0,   58,    2, 0x06 /* Public */,
       9,    1,   59,    2, 0x06 /* Public */,
      11,    2,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::SChar,   10,
    QMetaType::Void, QMetaType::SChar, QMetaType::SChar,   12,   13,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,   15,

       0        // eod
};

void vOpenGlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<vOpenGlWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCapeEuler((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 1: _t->loadMode(); break;
        case 2: _t->setModelColor(); break;
        case 3: _t->setBackgroundColor(); break;
        case 4: _t->vAxisTurnChange((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 5: _t->ZeroAngleCfg((*reinterpret_cast< qint8(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 6: _t->getCapeEuler((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (vOpenGlWidget::*)(float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&vOpenGlWidget::setCapeEuler)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (vOpenGlWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&vOpenGlWidget::loadMode)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (vOpenGlWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&vOpenGlWidget::setModelColor)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (vOpenGlWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&vOpenGlWidget::setBackgroundColor)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (vOpenGlWidget::*)(qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&vOpenGlWidget::vAxisTurnChange)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (vOpenGlWidget::*)(qint8 , qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&vOpenGlWidget::ZeroAngleCfg)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject vOpenGlWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_vOpenGlWidget.data,
    qt_meta_data_vOpenGlWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *vOpenGlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vOpenGlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_vOpenGlWidget.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int vOpenGlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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
void vOpenGlWidget::setCapeEuler(float _t1, float _t2, float _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void vOpenGlWidget::loadMode()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void vOpenGlWidget::setModelColor()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void vOpenGlWidget::setBackgroundColor()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void vOpenGlWidget::vAxisTurnChange(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void vOpenGlWidget::ZeroAngleCfg(qint8 _t1, qint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
