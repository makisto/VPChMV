/****************************************************************************
** Meta object code from reading C++ file 'addvisit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../addvisit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addvisit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddVisit_t {
    QByteArrayData data[11];
    char stringdata[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AddVisit_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AddVisit_t qt_meta_stringdata_AddVisit = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 8),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 10),
QT_MOC_LITERAL(4, 30, 10),
QT_MOC_LITERAL(5, 41, 12),
QT_MOC_LITERAL(6, 54, 5),
QT_MOC_LITERAL(7, 60, 11),
QT_MOC_LITERAL(8, 72, 24),
QT_MOC_LITERAL(9, 97, 19),
QT_MOC_LITERAL(10, 117, 11)
    },
    "AddVisit\0sendList\0\0QList<int>\0closeEvent\0"
    "QCloseEvent*\0event\0loadClients\0"
    "on_serviceButton_clicked\0on_visitAdd_clicked\0"
    "recieveData\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddVisit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    1,   47,    2, 0x08,
       7,    0,   50,    2, 0x08,
       8,    0,   51,    2, 0x08,
       9,    0,   52,    2, 0x08,
      10,    1,   53,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void AddVisit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddVisit *_t = static_cast<AddVisit *>(_o);
        switch (_id) {
        case 0: _t->sendList((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 1: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 2: _t->loadClients(); break;
        case 3: _t->on_serviceButton_clicked(); break;
        case 4: _t->on_visitAdd_clicked(); break;
        case 5: _t->recieveData((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AddVisit::*_t)(QList<int> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddVisit::sendList)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject AddVisit::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_AddVisit.data,
      qt_meta_data_AddVisit,  qt_static_metacall, 0, 0}
};


const QMetaObject *AddVisit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddVisit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddVisit.stringdata))
        return static_cast<void*>(const_cast< AddVisit*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int AddVisit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AddVisit::sendList(QList<int> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
