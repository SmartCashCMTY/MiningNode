/****************************************************************************
** Meta object code from reading C++ file 'smartvoting.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/smartvoting.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smartvoting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SmartVotingPage_t {
    QByteArrayData data[23];
    char stringdata0[302];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SmartVotingPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SmartVotingPage_t qt_meta_stringdata_SmartVotingPage = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SmartVotingPage"
QT_MOC_LITERAL(1, 16, 8), // "updateUI"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 16), // "updateProposalUI"
QT_MOC_LITERAL(4, 43, 16), // "proposalsUpdated"
QT_MOC_LITERAL(5, 60, 11), // "std::string"
QT_MOC_LITERAL(6, 72, 6), // "strErr"
QT_MOC_LITERAL(7, 79, 11), // "voteChanged"
QT_MOC_LITERAL(8, 91, 15), // "selectAddresses"
QT_MOC_LITERAL(9, 107, 9), // "castVotes"
QT_MOC_LITERAL(10, 117, 17), // "updateRefreshLock"
QT_MOC_LITERAL(11, 135, 16), // "refreshProposals"
QT_MOC_LITERAL(12, 152, 6), // "fForce"
QT_MOC_LITERAL(13, 159, 13), // "scrollChanged"
QT_MOC_LITERAL(14, 173, 5), // "value"
QT_MOC_LITERAL(15, 179, 14), // "balanceChanged"
QT_MOC_LITERAL(16, 194, 7), // "CAmount"
QT_MOC_LITERAL(17, 202, 7), // "balance"
QT_MOC_LITERAL(18, 210, 18), // "unconfirmedBalance"
QT_MOC_LITERAL(19, 229, 15), // "immatureBalance"
QT_MOC_LITERAL(20, 245, 16), // "watchOnlyBalance"
QT_MOC_LITERAL(21, 262, 18), // "watchUnconfBalance"
QT_MOC_LITERAL(22, 281, 20) // "watchImmatureBalance"

    },
    "SmartVotingPage\0updateUI\0\0updateProposalUI\0"
    "proposalsUpdated\0std::string\0strErr\0"
    "voteChanged\0selectAddresses\0castVotes\0"
    "updateRefreshLock\0refreshProposals\0"
    "fForce\0scrollChanged\0value\0balanceChanged\0"
    "CAmount\0balance\0unconfirmedBalance\0"
    "immatureBalance\0watchOnlyBalance\0"
    "watchUnconfBalance\0watchImmatureBalance"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SmartVotingPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    1,   71,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    1,   78,    2, 0x0a /* Public */,
      11,    0,   81,    2, 0x2a /* Public | MethodCloned */,
      13,    1,   82,    2, 0x0a /* Public */,
      15,    6,   85,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 16, 0x80000000 | 16, 0x80000000 | 16, 0x80000000 | 16, 0x80000000 | 16,   17,   18,   19,   20,   21,   22,

       0        // eod
};

void SmartVotingPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SmartVotingPage *_t = static_cast<SmartVotingPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateUI(); break;
        case 1: _t->updateProposalUI(); break;
        case 2: _t->proposalsUpdated((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 3: _t->voteChanged(); break;
        case 4: _t->selectAddresses(); break;
        case 5: _t->castVotes(); break;
        case 6: _t->updateRefreshLock(); break;
        case 7: _t->refreshProposals((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->refreshProposals(); break;
        case 9: _t->scrollChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->balanceChanged((*reinterpret_cast< const CAmount(*)>(_a[1])),(*reinterpret_cast< const CAmount(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const CAmount(*)>(_a[4])),(*reinterpret_cast< const CAmount(*)>(_a[5])),(*reinterpret_cast< const CAmount(*)>(_a[6]))); break;
        default: ;
        }
    }
}

const QMetaObject SmartVotingPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SmartVotingPage.data,
      qt_meta_data_SmartVotingPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SmartVotingPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SmartVotingPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SmartVotingPage.stringdata0))
        return static_cast<void*>(const_cast< SmartVotingPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int SmartVotingPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
