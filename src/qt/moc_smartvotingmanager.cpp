/****************************************************************************
** Meta object code from reading C++ file 'smartvotingmanager.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/smartvotingmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smartvotingmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SmartVotingManager_t {
    QByteArrayData data[21];
    char stringdata0[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SmartVotingManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SmartVotingManager_t qt_meta_stringdata_SmartVotingManager = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SmartVotingManager"
QT_MOC_LITERAL(1, 19, 16), // "addressesUpdated"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16), // "proposalsUpdated"
QT_MOC_LITERAL(4, 54, 11), // "std::string"
QT_MOC_LITERAL(5, 66, 6), // "strErr"
QT_MOC_LITERAL(6, 73, 5), // "voted"
QT_MOC_LITERAL(7, 79, 17), // "SmartProposalVote"
QT_MOC_LITERAL(8, 97, 4), // "vote"
QT_MOC_LITERAL(9, 102, 6), // "result"
QT_MOC_LITERAL(10, 109, 13), // "replyFinished"
QT_MOC_LITERAL(11, 123, 14), // "QNetworkReply*"
QT_MOC_LITERAL(12, 138, 5), // "reply"
QT_MOC_LITERAL(13, 144, 14), // "balanceChanged"
QT_MOC_LITERAL(14, 159, 7), // "CAmount"
QT_MOC_LITERAL(15, 167, 7), // "balance"
QT_MOC_LITERAL(16, 175, 18), // "unconfirmedBalance"
QT_MOC_LITERAL(17, 194, 15), // "immatureBalance"
QT_MOC_LITERAL(18, 210, 16), // "watchOnlyBalance"
QT_MOC_LITERAL(19, 227, 18), // "watchUnconfBalance"
QT_MOC_LITERAL(20, 246, 20) // "watchImmatureBalance"

    },
    "SmartVotingManager\0addressesUpdated\0"
    "\0proposalsUpdated\0std::string\0strErr\0"
    "voted\0SmartProposalVote\0vote\0result\0"
    "replyFinished\0QNetworkReply*\0reply\0"
    "balanceChanged\0CAmount\0balance\0"
    "unconfirmedBalance\0immatureBalance\0"
    "watchOnlyBalance\0watchUnconfBalance\0"
    "watchImmatureBalance"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SmartVotingManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,
       6,    3,   43,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   50,    2, 0x08 /* Private */,
      13,    6,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QJsonArray, 0x80000000 | 4,    8,    9,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14, 0x80000000 | 14, 0x80000000 | 14, 0x80000000 | 14, 0x80000000 | 14,   15,   16,   17,   18,   19,   20,

       0        // eod
};

void SmartVotingManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SmartVotingManager *_t = static_cast<SmartVotingManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addressesUpdated(); break;
        case 1: _t->proposalsUpdated((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 2: _t->voted((*reinterpret_cast< const SmartProposalVote(*)>(_a[1])),(*reinterpret_cast< const QJsonArray(*)>(_a[2])),(*reinterpret_cast< const std::string(*)>(_a[3]))); break;
        case 3: _t->replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: _t->balanceChanged((*reinterpret_cast< const CAmount(*)>(_a[1])),(*reinterpret_cast< const CAmount(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const CAmount(*)>(_a[4])),(*reinterpret_cast< const CAmount(*)>(_a[5])),(*reinterpret_cast< const CAmount(*)>(_a[6]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SmartVotingManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SmartVotingManager::addressesUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SmartVotingManager::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SmartVotingManager::proposalsUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SmartVotingManager::*_t)(const SmartProposalVote & , const QJsonArray & , const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SmartVotingManager::voted)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SmartVotingManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SmartVotingManager.data,
      qt_meta_data_SmartVotingManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SmartVotingManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SmartVotingManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SmartVotingManager.stringdata0))
        return static_cast<void*>(const_cast< SmartVotingManager*>(this));
    return QObject::qt_metacast(_clname);
}

int SmartVotingManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SmartVotingManager::addressesUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void SmartVotingManager::proposalsUpdated(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SmartVotingManager::voted(const SmartProposalVote & _t1, const QJsonArray & _t2, const std::string & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
