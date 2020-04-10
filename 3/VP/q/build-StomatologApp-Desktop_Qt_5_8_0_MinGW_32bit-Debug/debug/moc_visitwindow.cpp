/****************************************************************************
** Meta object code from reading C++ file 'visitwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../StomatologApp/visitwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'visitwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VisitWindow_t {
    QByteArrayData data[21];
    char stringdata0[349];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VisitWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VisitWindow_t qt_meta_stringdata_VisitWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "VisitWindow"
QT_MOC_LITERAL(1, 12, 11), // "LoadClients"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "LoadVisits"
QT_MOC_LITERAL(4, 36, 12), // "LoadServices"
QT_MOC_LITERAL(5, 49, 9), // "SetStyles"
QT_MOC_LITERAL(6, 59, 10), // "closeEvent"
QT_MOC_LITERAL(7, 70, 12), // "QCloseEvent*"
QT_MOC_LITERAL(8, 83, 5), // "event"
QT_MOC_LITERAL(9, 89, 19), // "on_addVisit_clicked"
QT_MOC_LITERAL(10, 109, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(11, 133, 22), // "on_visitUpdate_clicked"
QT_MOC_LITERAL(12, 156, 23), // "on_clientUpdate_clicked"
QT_MOC_LITERAL(13, 180, 24), // "on_serviceUpdate_clicked"
QT_MOC_LITERAL(14, 205, 23), // "on_clientDelete_clicked"
QT_MOC_LITERAL(15, 229, 24), // "on_serviceDelete_clicked"
QT_MOC_LITERAL(16, 254, 21), // "on_serviceAdd_clicked"
QT_MOC_LITERAL(17, 276, 22), // "on_visitDelete_clicked"
QT_MOC_LITERAL(18, 299, 15), // "on_Help_clicked"
QT_MOC_LITERAL(19, 315, 13), // "on_ot_clicked"
QT_MOC_LITERAL(20, 329, 19) // "on_choiceot_clicked"

    },
    "VisitWindow\0LoadClients\0\0LoadVisits\0"
    "LoadServices\0SetStyles\0closeEvent\0"
    "QCloseEvent*\0event\0on_addVisit_clicked\0"
    "on_pushButton_4_clicked\0on_visitUpdate_clicked\0"
    "on_clientUpdate_clicked\0"
    "on_serviceUpdate_clicked\0"
    "on_clientDelete_clicked\0"
    "on_serviceDelete_clicked\0on_serviceAdd_clicked\0"
    "on_visitDelete_clicked\0on_Help_clicked\0"
    "on_ot_clicked\0on_choiceot_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VisitWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    1,  103,    2, 0x08 /* Private */,
       9,    0,  106,    2, 0x08 /* Private */,
      10,    0,  107,    2, 0x08 /* Private */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    0,  109,    2, 0x08 /* Private */,
      13,    0,  110,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    0,  114,    2, 0x08 /* Private */,
      18,    0,  115,    2, 0x08 /* Private */,
      19,    0,  116,    2, 0x08 /* Private */,
      20,    0,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
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

void VisitWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VisitWindow *_t = static_cast<VisitWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LoadClients(); break;
        case 1: _t->LoadVisits(); break;
        case 2: _t->LoadServices(); break;
        case 3: _t->SetStyles(); break;
        case 4: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 5: _t->on_addVisit_clicked(); break;
        case 6: _t->on_pushButton_4_clicked(); break;
        case 7: _t->on_visitUpdate_clicked(); break;
        case 8: _t->on_clientUpdate_clicked(); break;
        case 9: _t->on_serviceUpdate_clicked(); break;
        case 10: _t->on_clientDelete_clicked(); break;
        case 11: _t->on_serviceDelete_clicked(); break;
        case 12: _t->on_serviceAdd_clicked(); break;
        case 13: _t->on_visitDelete_clicked(); break;
        case 14: _t->on_Help_clicked(); break;
        case 15: _t->on_ot_clicked(); break;
        case 16: _t->on_choiceot_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject VisitWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_VisitWindow.data,
      qt_meta_data_VisitWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VisitWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VisitWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VisitWindow.stringdata0))
        return static_cast<void*>(const_cast< VisitWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int VisitWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
