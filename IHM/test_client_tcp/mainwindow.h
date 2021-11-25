#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_connexionButton_clicked();

    void on_deconnexionButton_clicked();

    void on_envoiButton_clicked();

    void gerer_donnees();

    void afficher_erreur(QAbstractSocket::SocketError);

    void on_Avancer_clicked();

    void on_Gauche_clicked();

    void on_Reculer_clicked();

    void on_Droite_clicked();

    void on_Stop_clicked();

    void on_Descendre_clicked();

    void on_Lever_clicked();

    void on_lineEdit_reponse_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::MainWindow *ui;
    QTcpSocket *tcpSocket;
    QTimer * pTimer;
};

#endif // MAINWINDOW_H
