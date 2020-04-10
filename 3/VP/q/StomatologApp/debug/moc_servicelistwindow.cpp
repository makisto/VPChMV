/****************************************************************************
** Meta object code from reading C++ file 'servicelistwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../servicelistwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'servicelistwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ServiceListWindow_t {
    QByteArrayData data[10];
    char stringdata[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ServiceListWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ServiceListWindow_t qt_meta_stringdata_ServiceListWindow = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 8),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 10),
QT_MOC_LITERAL(4, 39, 21),
QT_MOC_LITERAL(5, 61, 12),
QT_MOC_LITERAL(6, 74, 20),
QT_MOC_LITERAL(7, 95, 9),
QT_MOC_LITERAL(8, 105, 23),
QT_MOC_LITERAL(9, 129, 11)
    },
    "ServiceListWindow\0sendData\0\0QList<int>\0"
    "on_saveButton_clicked\0loadServices\0"
    "on_addButton_clicked\0loadTable\0"
    "on_deleteButton_clicked\0recieveList\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServiceListWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    0,   52,    2, 0x08,
       5,    0,   53,    2, 0x08,
       6,    0,   54,    2, 0x08,
       7,    0,   55,    2, 0x08,
       8,    0,   56,    2, 0x08,
       9,    1,   57,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void ServiceListWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ServiceListWindow *_t = static_cast<ServiceListWindow *>(_o);
        switch (_id) {
        case 0: _t->sendData((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 1: _t->on_saveButton_clicked(); break;
        case 2: _t->loadServices(); break;
        case 3: _t->on_addButton_clicked(); break;
        case 4: _t->loadTable(); break;
        case 5: _t->on_deleteButton_clicked(); break;
        case 6: _t->recieveList((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
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
        case 6:
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
            typedef void (ServiceListWindow::*_t)(QList<int> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ServiceListWindow::sendData)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ServiceListWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ServiceListWindow.data,
      qt_meta_data_ServiceListWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *ServiceListWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServiceListWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ServiceListWindow.stringdata))
        return static_cast<void*>(const_cast< ServiceListWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ServiceListWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ServiceListWindow::sendData(QList<int> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
