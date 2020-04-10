/****************************************************************************
** Meta object code from reading C++ file 'kiselev_lang.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kiselev_lang/kiselev_lang.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kiselev_lang.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_kiselev_lang_t {
    QByteArrayData data[7];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_kiselev_lang_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_kiselev_lang_t qt_meta_stringdata_kiselev_lang = {
    {
QT_MOC_LITERAL(0, 0, 12), // "kiselev_lang"
QT_MOC_LITERAL(1, 13, 17), // "slotButtonClicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 10), // "slotSelect"
QT_MOC_LITERAL(4, 43, 4), // "flag"
QT_MOC_LITERAL(5, 48, 7), // "slotAdd"
QT_MOC_LITERAL(6, 56, 10) // "slotChange"

    },
    "kiselev_lang\0slotButtonClicked\0\0"
    "slotSelect\0flag\0slotAdd\0slotChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_kiselev_lang[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void kiselev_lang::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        kiselev_lang *_t = static_cast<kiselev_lang *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotButtonClicked(); break;
        case 1: _t->slotSelect((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotAdd(); break;
        case 3: _t->slotChange(); break;
        default: ;
        }
    }
}

const QMetaObject kiselev_lang::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_kiselev_lang.data,
      qt_meta_data_kiselev_lang,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *kiselev_lang::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *kiselev_lang::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_kiselev_lang.stringdata0))
        return static_cast<void*>(const_cast< kiselev_lang*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int kiselev_lang::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
