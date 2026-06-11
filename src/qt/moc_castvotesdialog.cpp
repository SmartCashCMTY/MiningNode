/****************************************************************************
** Meta object code from reading C++ file 'castvotesdialog.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/castvotesdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'castvotesdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CastVotesDialog_t {
    QByteArrayData data[17];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CastVotesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CastVotesDialog_t qt_meta_stringdata_CastVotesDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CastVotesDialog"
QT_MOC_LITERAL(1, 16, 15), // "votedForAddress"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "QString&"
QT_MOC_LITERAL(4, 42, 7), // "address"
QT_MOC_LITERAL(5, 50, 10), // "proposalId"
QT_MOC_LITERAL(6, 61, 10), // "successful"
QT_MOC_LITERAL(7, 72, 4), // "exec"
QT_MOC_LITERAL(8, 77, 5), // "start"
QT_MOC_LITERAL(9, 83, 5), // "close"
QT_MOC_LITERAL(10, 89, 15), // "waitForResponse"
QT_MOC_LITERAL(11, 105, 5), // "voted"
QT_MOC_LITERAL(12, 111, 17), // "SmartProposalVote"
QT_MOC_LITERAL(13, 129, 4), // "vote"
QT_MOC_LITERAL(14, 134, 6), // "result"
QT_MOC_LITERAL(15, 141, 11), // "std::string"
QT_MOC_LITERAL(16, 153, 6) // "strErr"

    },
    "CastVotesDialog\0votedForAddress\0\0"
    "QString&\0address\0proposalId\0successful\0"
    "exec\0start\0close\0waitForResponse\0voted\0"
    "SmartProposalVote\0vote\0result\0std::string\0"
    "strErr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CastVotesDialog[] = {

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
       1,    3,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   51,    2, 0x0a /* Public */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,
      10,    0,   54,    2, 0x08 /* Private */,
      11,    3,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Bool,    4,    5,    6,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QJsonArray, 0x80000000 | 15,   13,   14,   16,

       0        // eod
};

void CastVotesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CastVotesDialog *_t = static_cast<CastVotesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->votedForAddress((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: { int _r = _t->exec();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: _t->start(); break;
        case 3: _t->close(); break;
        case 4: _t->waitForResponse(); break;
        case 5: _t->voted((*reinterpret_cast< const SmartProposalVote(*)>(_a[1])),(*reinterpret_cast< const QJsonArray(*)>(_a[2])),(*reinterpret_cast< const std::string(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CastVotesDialog::*_t)(QString & , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CastVotesDialog::votedForAddress)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CastVotesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CastVotesDialog.data,
      qt_meta_data_CastVotesDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CastVotesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CastVotesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CastVotesDialog.stringdata0))
        return static_cast<void*>(const_cast< CastVotesDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CastVotesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CastVotesDialog::votedForAddress(QString & _t1, int _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
