/****************************************************************************
** Meta object code from reading C++ file 'smartrewardslist.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/smartrewardslist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smartrewardslist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SmartrewardsList_t {
    QByteArrayData data[11];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SmartrewardsList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SmartrewardsList_t qt_meta_stringdata_SmartrewardsList = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SmartrewardsList"
QT_MOC_LITERAL(1, 17, 16), // "updateOverviewUI"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 17), // "CSmartRewardRound"
QT_MOC_LITERAL(4, 53, 12), // "currentRound"
QT_MOC_LITERAL(5, 66, 18), // "const CBlockIndex*"
QT_MOC_LITERAL(6, 85, 3), // "tip"
QT_MOC_LITERAL(7, 89, 8), // "updateUI"
QT_MOC_LITERAL(8, 98, 24), // "on_btnSendProofs_clicked"
QT_MOC_LITERAL(9, 123, 13), // "scrollChanged"
QT_MOC_LITERAL(10, 137, 5) // "value"

    },
    "SmartrewardsList\0updateOverviewUI\0\0"
    "CSmartRewardRound\0currentRound\0"
    "const CBlockIndex*\0tip\0updateUI\0"
    "on_btnSendProofs_clicked\0scrollChanged\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SmartrewardsList[] = {

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
       1,    2,   34,    2, 0x0a /* Public */,
       7,    0,   39,    2, 0x0a /* Public */,
       8,    0,   40,    2, 0x0a /* Public */,
       9,    1,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void SmartrewardsList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SmartrewardsList *_t = static_cast<SmartrewardsList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateOverviewUI((*reinterpret_cast< const CSmartRewardRound(*)>(_a[1])),(*reinterpret_cast< const CBlockIndex*(*)>(_a[2]))); break;
        case 1: _t->updateUI(); break;
        case 2: _t->on_btnSendProofs_clicked(); break;
        case 3: _t->scrollChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SmartrewardsList::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SmartrewardsList.data,
      qt_meta_data_SmartrewardsList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SmartrewardsList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SmartrewardsList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SmartrewardsList.stringdata0))
        return static_cast<void*>(const_cast< SmartrewardsList*>(this));
    return QWidget::qt_metacast(_clname);
}

int SmartrewardsList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
