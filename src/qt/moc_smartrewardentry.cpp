/****************************************************************************
** Meta object code from reading C++ file 'smartrewardentry.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/smartrewardentry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smartrewardentry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QSmartRewardEntry_t {
    QByteArrayData data[8];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSmartRewardEntry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSmartRewardEntry_t qt_meta_stringdata_QSmartRewardEntry = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QSmartRewardEntry"
QT_MOC_LITERAL(1, 18, 9), // "copyLabel"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "copyAddress"
QT_MOC_LITERAL(4, 41, 10), // "copyAmount"
QT_MOC_LITERAL(5, 52, 18), // "copyEligibleAmount"
QT_MOC_LITERAL(6, 71, 10), // "copyReward"
QT_MOC_LITERAL(7, 82, 23) // "copyDisqualifyingTxHash"

    },
    "QSmartRewardEntry\0copyLabel\0\0copyAddress\0"
    "copyAmount\0copyEligibleAmount\0copyReward\0"
    "copyDisqualifyingTxHash"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSmartRewardEntry[] = {

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
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QSmartRewardEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSmartRewardEntry *_t = static_cast<QSmartRewardEntry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->copyLabel(); break;
        case 1: _t->copyAddress(); break;
        case 2: _t->copyAmount(); break;
        case 3: _t->copyEligibleAmount(); break;
        case 4: _t->copyReward(); break;
        case 5: _t->copyDisqualifyingTxHash(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QSmartRewardEntry::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_QSmartRewardEntry.data,
      qt_meta_data_QSmartRewardEntry,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QSmartRewardEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSmartRewardEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QSmartRewardEntry.stringdata0))
        return static_cast<void*>(const_cast< QSmartRewardEntry*>(this));
    return QFrame::qt_metacast(_clname);
}

int QSmartRewardEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
