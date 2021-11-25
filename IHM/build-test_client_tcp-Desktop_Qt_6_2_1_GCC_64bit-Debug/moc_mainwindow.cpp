/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../test_client_tcp/mainwindow.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[36];
    char stringdata0[330];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 26), // "on_connexionButton_clicked"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 28), // "on_deconnexionButton_clicked"
QT_MOC_LITERAL(68, 22), // "on_envoiButton_clicked"
QT_MOC_LITERAL(91, 13), // "gerer_donnees"
QT_MOC_LITERAL(105, 15), // "afficher_erreur"
QT_MOC_LITERAL(121, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(150, 18), // "on_Avancer_clicked"
QT_MOC_LITERAL(169, 17), // "on_Gauche_clicked"
QT_MOC_LITERAL(187, 18), // "on_Reculer_clicked"
QT_MOC_LITERAL(206, 17), // "on_Droite_clicked"
QT_MOC_LITERAL(224, 15), // "on_Stop_clicked"
QT_MOC_LITERAL(240, 20), // "on_Descendre_clicked"
QT_MOC_LITERAL(261, 16), // "on_Lever_clicked"
QT_MOC_LITERAL(278, 41), // "on_lineEdit_reponse_cursorPos..."
QT_MOC_LITERAL(320, 4), // "arg1"
QT_MOC_LITERAL(325, 4) // "arg2"

    },
    "MainWindow\0on_connexionButton_clicked\0"
    "\0on_deconnexionButton_clicked\0"
    "on_envoiButton_clicked\0gerer_donnees\0"
    "afficher_erreur\0QAbstractSocket::SocketError\0"
    "on_Avancer_clicked\0on_Gauche_clicked\0"
    "on_Reculer_clicked\0on_Droite_clicked\0"
    "on_Stop_clicked\0on_Descendre_clicked\0"
    "on_Lever_clicked\0"
    "on_lineEdit_reponse_cursorPositionChanged\0"
    "arg1\0arg2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x08,    1 /* Private */,
       3,    0,   93,    2, 0x08,    2 /* Private */,
       4,    0,   94,    2, 0x08,    3 /* Private */,
       5,    0,   95,    2, 0x08,    4 /* Private */,
       6,    1,   96,    2, 0x08,    5 /* Private */,
       8,    0,   99,    2, 0x08,    7 /* Private */,
       9,    0,  100,    2, 0x08,    8 /* Private */,
      10,    0,  101,    2, 0x08,    9 /* Private */,
      11,    0,  102,    2, 0x08,   10 /* Private */,
      12,    0,  103,    2, 0x08,   11 /* Private */,
      13,    0,  104,    2, 0x08,   12 /* Private */,
      14,    0,  105,    2, 0x08,   13 /* Private */,
      15,    2,  106,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   16,   17,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_connexionButton_clicked(); break;
        case 1: _t->on_deconnexionButton_clicked(); break;
        case 2: _t->on_envoiButton_clicked(); break;
        case 3: _t->gerer_donnees(); break;
        case 4: _t->afficher_erreur((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 5: _t->on_Avancer_clicked(); break;
        case 6: _t->on_Gauche_clicked(); break;
        case 7: _t->on_Reculer_clicked(); break;
        case 8: _t->on_Droite_clicked(); break;
        case 9: _t->on_Stop_clicked(); break;
        case 10: _t->on_Descendre_clicked(); break;
        case 11: _t->on_Lever_clicked(); break;
        case 12: _t->on_lineEdit_reponse_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
