/****************************************************************************
** Meta object code from reading C++ file 'specialtransactiondialog.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/specialtransactiondialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'specialtransactiondialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SpecialTransactionDialog_t {
    QByteArrayData data[10];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpecialTransactionDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpecialTransactionDialog_t qt_meta_stringdata_SpecialTransactionDialog = {
    {
QT_MOC_LITERAL(0, 0, 24), // "SpecialTransactionDialog"
QT_MOC_LITERAL(1, 25, 8), // "showMenu"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 11), // "copyAddress"
QT_MOC_LITERAL(4, 47, 15), // "viewItemChanged"
QT_MOC_LITERAL(5, 63, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(6, 80, 20), // "headerSectionClicked"
QT_MOC_LITERAL(7, 101, 16), // "buttonBoxClicked"
QT_MOC_LITERAL(8, 118, 16), // "QAbstractButton*"
QT_MOC_LITERAL(9, 135, 22) // "buttonSelectAllClicked"

    },
    "SpecialTransactionDialog\0showMenu\0\0"
    "copyAddress\0viewItemChanged\0"
    "QTreeWidgetItem*\0headerSectionClicked\0"
    "buttonBoxClicked\0QAbstractButton*\0"
    "buttonSelectAllClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpecialTransactionDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       3,    0,   47,    2, 0x08 /* Private */,
       4,    2,   48,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       7,    1,   56,    2, 0x08 /* Private */,
       9,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,

       0        // eod
};

void SpecialTransactionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpecialTransactionDialog *_t = static_cast<SpecialTransactionDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->copyAddress(); break;
        case 2: _t->viewItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->headerSectionClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->buttonBoxClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 5: _t->buttonSelectAllClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject SpecialTransactionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SpecialTransactionDialog.data,
      qt_meta_data_SpecialTransactionDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SpecialTransactionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpecialTransactionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SpecialTransactionDialog.stringdata0))
        return static_cast<void*>(const_cast< SpecialTransactionDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SpecialTransactionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
