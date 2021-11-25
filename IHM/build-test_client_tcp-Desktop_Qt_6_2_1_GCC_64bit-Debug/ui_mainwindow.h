/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_ip;
    QLineEdit *lineEdit_port;
    QLineEdit *lineEdit_requete;
    QLabel *label_4;
    QLineEdit *lineEdit_reponse;
    QPushButton *connexionButton;
    QPushButton *deconnexionButton;
    QPushButton *envoiButton;
    QPushButton *Avancer;
    QPushButton *Reculer;
    QPushButton *Gauche;
    QPushButton *Droite;
    QPushButton *Stop;
    QLabel *label;
    QLineEdit *Latitude;
    QLineEdit *Longitude;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *Lever;
    QPushButton *Descendre;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1261, 665);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_1 = new QLabel(centralWidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(1000, 10, 31, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(980, 40, 41, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 90, 71, 16));
        lineEdit_ip = new QLineEdit(centralWidget);
        lineEdit_ip->setObjectName(QString::fromUtf8("lineEdit_ip"));
        lineEdit_ip->setGeometry(QRect(1030, 10, 113, 20));
        lineEdit_port = new QLineEdit(centralWidget);
        lineEdit_port->setObjectName(QString::fromUtf8("lineEdit_port"));
        lineEdit_port->setGeometry(QRect(1030, 40, 113, 20));
        lineEdit_requete = new QLineEdit(centralWidget);
        lineEdit_requete->setObjectName(QString::fromUtf8("lineEdit_requete"));
        lineEdit_requete->setGeometry(QRect(110, 90, 113, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 130, 51, 16));
        lineEdit_reponse = new QLineEdit(centralWidget);
        lineEdit_reponse->setObjectName(QString::fromUtf8("lineEdit_reponse"));
        lineEdit_reponse->setGeometry(QRect(110, 120, 113, 20));
        connexionButton = new QPushButton(centralWidget);
        connexionButton->setObjectName(QString::fromUtf8("connexionButton"));
        connexionButton->setGeometry(QRect(1040, 70, 121, 23));
        deconnexionButton = new QPushButton(centralWidget);
        deconnexionButton->setObjectName(QString::fromUtf8("deconnexionButton"));
        deconnexionButton->setGeometry(QRect(1040, 110, 121, 23));
        envoiButton = new QPushButton(centralWidget);
        envoiButton->setObjectName(QString::fromUtf8("envoiButton"));
        envoiButton->setGeometry(QRect(244, 90, 121, 61));
        Avancer = new QPushButton(centralWidget);
        Avancer->setObjectName(QString::fromUtf8("Avancer"));
        Avancer->setGeometry(QRect(1000, 250, 121, 111));
        QFont font;
        font.setPointSize(30);
        font.setBold(false);
        font.setItalic(false);
        Avancer->setFont(font);
        Avancer->setCursor(QCursor(Qt::OpenHandCursor));
        Avancer->setStyleSheet(QString::fromUtf8("background-color: rgb(138, 226, 52);"));
        Avancer->setIconSize(QSize(16, 16));
        Reculer = new QPushButton(centralWidget);
        Reculer->setObjectName(QString::fromUtf8("Reculer"));
        Reculer->setGeometry(QRect(1000, 470, 121, 111));
        QFont font1;
        font1.setPointSize(30);
        Reculer->setFont(font1);
        Reculer->setCursor(QCursor(Qt::OpenHandCursor));
        Reculer->setStyleSheet(QString::fromUtf8("background-color: rgb(138, 226, 52);"));
        Gauche = new QPushButton(centralWidget);
        Gauche->setObjectName(QString::fromUtf8("Gauche"));
        Gauche->setGeometry(QRect(880, 360, 121, 111));
        Gauche->setFont(font1);
        Gauche->setCursor(QCursor(Qt::OpenHandCursor));
        Gauche->setStyleSheet(QString::fromUtf8("background-color: rgb(138, 226, 52);"));
        Droite = new QPushButton(centralWidget);
        Droite->setObjectName(QString::fromUtf8("Droite"));
        Droite->setGeometry(QRect(1120, 360, 121, 111));
        Droite->setFont(font1);
        Droite->setCursor(QCursor(Qt::OpenHandCursor));
        Droite->setStyleSheet(QString::fromUtf8("background-color: rgb(138, 226, 52);"));
        Stop = new QPushButton(centralWidget);
        Stop->setObjectName(QString::fromUtf8("Stop"));
        Stop->setGeometry(QRect(1000, 360, 121, 111));
        QFont font2;
        font2.setPointSize(25);
        Stop->setFont(font2);
        Stop->setCursor(QCursor(Qt::OpenHandCursor));
        Stop->setStyleSheet(QString::fromUtf8("background-color: rgb(138, 226, 52);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 30, 67, 17));
        Latitude = new QLineEdit(centralWidget);
        Latitude->setObjectName(QString::fromUtf8("Latitude"));
        Latitude->setGeometry(QRect(180, 280, 451, 25));
        Longitude = new QLineEdit(centralWidget);
        Longitude->setObjectName(QString::fromUtf8("Longitude"));
        Longitude->setGeometry(QRect(180, 310, 451, 25));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 280, 71, 20));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, 320, 81, 20));
        Lever = new QPushButton(centralWidget);
        Lever->setObjectName(QString::fromUtf8("Lever"));
        Lever->setGeometry(QRect(1130, 240, 121, 111));
        Lever->setFont(font1);
        Lever->setCursor(QCursor(Qt::OpenHandCursor));
        Lever->setStyleSheet(QString::fromUtf8("background-color: rgb(138, 226, 52);"));
        Descendre = new QPushButton(centralWidget);
        Descendre->setObjectName(QString::fromUtf8("Descendre"));
        Descendre->setGeometry(QRect(870, 240, 121, 111));
        Descendre->setFont(font1);
        Descendre->setCursor(QCursor(Qt::OpenHandCursor));
        Descendre->setStyleSheet(QString::fromUtf8("background-color: rgb(138, 226, 52);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1261, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Client TCP v0.1", nullptr));
        label_1->setText(QCoreApplication::translate("MainWindow", "IP :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Port :", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Requ\303\252te :", nullptr));
        lineEdit_ip->setText(QCoreApplication::translate("MainWindow", "192.168.1.157", nullptr));
        lineEdit_port->setText(QCoreApplication::translate("MainWindow", "1664", nullptr));
        lineEdit_requete->setText(QCoreApplication::translate("MainWindow", "Bonjour", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "R\303\251ponse :", nullptr));
        lineEdit_reponse->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        connexionButton->setText(QCoreApplication::translate("MainWindow", "Connexion", nullptr));
        deconnexionButton->setText(QCoreApplication::translate("MainWindow", "D\303\251connexion", nullptr));
        envoiButton->setText(QCoreApplication::translate("MainWindow", "Envoi/R\303\251ception", nullptr));
        Avancer->setText(QCoreApplication::translate("MainWindow", "\342\207\221", nullptr));
#if QT_CONFIG(shortcut)
        Avancer->setShortcut(QCoreApplication::translate("MainWindow", "Z", nullptr));
#endif // QT_CONFIG(shortcut)
        Reculer->setText(QCoreApplication::translate("MainWindow", "\342\207\223", nullptr));
#if QT_CONFIG(shortcut)
        Reculer->setShortcut(QCoreApplication::translate("MainWindow", "S", nullptr));
#endif // QT_CONFIG(shortcut)
        Gauche->setText(QCoreApplication::translate("MainWindow", "\342\207\220", nullptr));
#if QT_CONFIG(shortcut)
        Gauche->setShortcut(QCoreApplication::translate("MainWindow", "Q", nullptr));
#endif // QT_CONFIG(shortcut)
        Droite->setText(QCoreApplication::translate("MainWindow", " \342\207\222", nullptr));
#if QT_CONFIG(shortcut)
        Droite->setShortcut(QCoreApplication::translate("MainWindow", "D", nullptr));
#endif // QT_CONFIG(shortcut)
        Stop->setText(QCoreApplication::translate("MainWindow", " \342\217\271 ", nullptr));
#if QT_CONFIG(shortcut)
        Stop->setShortcut(QCoreApplication::translate("MainWindow", "T", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Latitude", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Longitude", nullptr));
        Lever->setText(QCoreApplication::translate("MainWindow", "\342\207\220", nullptr));
#if QT_CONFIG(shortcut)
        Lever->setShortcut(QCoreApplication::translate("MainWindow", "E", nullptr));
#endif // QT_CONFIG(shortcut)
        Descendre->setText(QCoreApplication::translate("MainWindow", "\342\207\220", nullptr));
#if QT_CONFIG(shortcut)
        Descendre->setShortcut(QCoreApplication::translate("MainWindow", "A", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
