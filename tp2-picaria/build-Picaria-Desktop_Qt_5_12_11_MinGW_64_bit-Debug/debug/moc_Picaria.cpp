/****************************************************************************
** Meta object code from reading C++ file 'Picaria.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Picaria/Picaria.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Picaria.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Picaria_t {
    QByteArrayData data[27];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Picaria_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Picaria_t qt_meta_stringdata_Picaria = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Picaria"
QT_MOC_LITERAL(1, 8, 8), // "gameMode"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 13), // "Picaria::Mode"
QT_MOC_LITERAL(4, 32, 4), // "mode"
QT_MOC_LITERAL(5, 37, 8), // "gameOver"
QT_MOC_LITERAL(6, 46, 15), // "Picaria::Player"
QT_MOC_LITERAL(7, 62, 6), // "player"
QT_MOC_LITERAL(8, 69, 4), // "play"
QT_MOC_LITERAL(9, 74, 2), // "id"
QT_MOC_LITERAL(10, 77, 5), // "reset"
QT_MOC_LITERAL(11, 83, 16), // "setHoleNeighbors"
QT_MOC_LITERAL(12, 100, 9), // "showAbout"
QT_MOC_LITERAL(13, 110, 12), // "showGameOver"
QT_MOC_LITERAL(14, 123, 10), // "updateMode"
QT_MOC_LITERAL(15, 134, 8), // "QAction*"
QT_MOC_LITERAL(16, 143, 6), // "action"
QT_MOC_LITERAL(17, 150, 15), // "updateStatusBar"
QT_MOC_LITERAL(18, 166, 4), // "Mode"
QT_MOC_LITERAL(19, 171, 9), // "NineHoles"
QT_MOC_LITERAL(20, 181, 13), // "ThirteenHoles"
QT_MOC_LITERAL(21, 195, 6), // "Player"
QT_MOC_LITERAL(22, 202, 9), // "RedPlayer"
QT_MOC_LITERAL(23, 212, 10), // "BluePlayer"
QT_MOC_LITERAL(24, 223, 5), // "Phase"
QT_MOC_LITERAL(25, 229, 9), // "DropPhase"
QT_MOC_LITERAL(26, 239, 9) // "MovePhase"

    },
    "Picaria\0gameMode\0\0Picaria::Mode\0mode\0"
    "gameOver\0Picaria::Player\0player\0play\0"
    "id\0reset\0setHoleNeighbors\0showAbout\0"
    "showGameOver\0updateMode\0QAction*\0"
    "action\0updateStatusBar\0Mode\0NineHoles\0"
    "ThirteenHoles\0Player\0RedPlayer\0"
    "BluePlayer\0Phase\0DropPhase\0MovePhase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Picaria[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       1,   76, // properties
       3,   80, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   65,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,
      12,    0,   70,    2, 0x08 /* Private */,
      13,    0,   71,    2, 0x08 /* Private */,
      14,    1,   72,    2, 0x08 /* Private */,
      17,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,

 // properties: notify_signal_id
       0,

 // enums: name, alias, flags, count, data
      18,   18, 0x0,    2,   95,
      21,   21, 0x0,    2,   99,
      24,   24, 0x0,    2,  103,

 // enum data: key, value
      19, uint(Picaria::NineHoles),
      20, uint(Picaria::ThirteenHoles),
      22, uint(Picaria::RedPlayer),
      23, uint(Picaria::BluePlayer),
      25, uint(Picaria::DropPhase),
      26, uint(Picaria::MovePhase),

       0        // eod
};

void Picaria::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Picaria *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gameMode((*reinterpret_cast< Picaria::Mode(*)>(_a[1]))); break;
        case 1: _t->gameOver((*reinterpret_cast< Picaria::Player(*)>(_a[1]))); break;
        case 2: _t->play((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->reset(); break;
        case 4: _t->setHoleNeighbors(); break;
        case 5: _t->showAbout(); break;
        case 6: _t->showGameOver(); break;
        case 7: _t->updateMode((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 8: _t->updateStatusBar(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Picaria::*)(Picaria::Mode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Picaria::gameMode)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Picaria::*)(Picaria::Player );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Picaria::gameOver)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Picaria *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Picaria::Mode*>(_v) = _t->mode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Picaria *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMode(*reinterpret_cast< Picaria::Mode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Picaria::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_Picaria.data,
    qt_meta_data_Picaria,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Picaria::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Picaria::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Picaria.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Picaria::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Picaria::gameMode(Picaria::Mode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Picaria::gameOver(Picaria::Player _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
