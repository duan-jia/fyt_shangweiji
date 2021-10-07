/****************************************************************************
** Meta object code from reading C++ file 'openglscene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SerialScope/vOpenGL/openglscene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'openglscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpenGLScene_t {
    QByteArrayData data[22];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenGLScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenGLScene_t qt_meta_stringdata_OpenGLScene = {
    {
QT_MOC_LITERAL(0, 0, 11), // "OpenGLScene"
QT_MOC_LITERAL(1, 12, 9), // "mouseMove"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "enent"
QT_MOC_LITERAL(4, 29, 12), // "setCapeEuler"
QT_MOC_LITERAL(5, 42, 3), // "yaw"
QT_MOC_LITERAL(6, 46, 5), // "pitch"
QT_MOC_LITERAL(7, 52, 4), // "roll"
QT_MOC_LITERAL(8, 57, 12), // "ZeroAngleCfg"
QT_MOC_LITERAL(9, 70, 2), // "id"
QT_MOC_LITERAL(10, 73, 3), // "cfg"
QT_MOC_LITERAL(11, 77, 18), // "CoordinateRotation"
QT_MOC_LITERAL(12, 96, 9), // "vAxisTurn"
QT_MOC_LITERAL(13, 106, 15), // "enableWireframe"
QT_MOC_LITERAL(14, 122, 7), // "enabled"
QT_MOC_LITERAL(15, 130, 13), // "enableNormals"
QT_MOC_LITERAL(16, 144, 13), // "setModelColor"
QT_MOC_LITERAL(17, 158, 18), // "setBackgroundColor"
QT_MOC_LITERAL(18, 177, 9), // "loadModel"
QT_MOC_LITERAL(19, 187, 10), // "vloadModel"
QT_MOC_LITERAL(20, 198, 8), // "filePath"
QT_MOC_LITERAL(21, 207, 11) // "modelLoaded"

    },
    "OpenGLScene\0mouseMove\0\0enent\0setCapeEuler\0"
    "yaw\0pitch\0roll\0ZeroAngleCfg\0id\0cfg\0"
    "CoordinateRotation\0vAxisTurn\0"
    "enableWireframe\0enabled\0enableNormals\0"
    "setModelColor\0setBackgroundColor\0"
    "loadModel\0vloadModel\0filePath\0modelLoaded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenGLScene[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    3,   77,    2, 0x0a /* Public */,
       8,    2,   84,    2, 0x0a /* Public */,
      11,    1,   89,    2, 0x0a /* Public */,
      13,    1,   92,    2, 0x0a /* Public */,
      15,    1,   95,    2, 0x0a /* Public */,
      16,    0,   98,    2, 0x0a /* Public */,
      17,    0,   99,    2, 0x0a /* Public */,
      18,    0,  100,    2, 0x0a /* Public */,
      19,    0,  101,    2, 0x0a /* Public */,
      18,    1,  102,    2, 0x0a /* Public */,
      21,    0,  105,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    5,    6,    7,
    QMetaType::Void, QMetaType::SChar, QMetaType::SChar,    9,   10,
    QMetaType::Void, QMetaType::SChar,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void,

       0        // eod
};

void OpenGLScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OpenGLScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mouseMove((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 1: _t->setCapeEuler((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 2: _t->ZeroAngleCfg((*reinterpret_cast< qint8(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 3: _t->CoordinateRotation((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 4: _t->enableWireframe((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->enableNormals((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setModelColor(); break;
        case 7: _t->setBackgroundColor(); break;
        case 8: _t->loadModel(); break;
        case 9: _t->vloadModel(); break;
        case 10: _t->loadModel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->modelLoaded(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OpenGLScene::*)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpenGLScene::mouseMove)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpenGLScene::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsScene::staticMetaObject>(),
    qt_meta_stringdata_OpenGLScene.data,
    qt_meta_data_OpenGLScene,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenGLScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenGLScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenGLScene.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int OpenGLScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void OpenGLScene::mouseMove(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
