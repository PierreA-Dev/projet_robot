#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    // Initialisation de l'interface graphique
    ui->setupUi(this);

    // Instanciation de la socket
    tcpSocket = new QTcpSocket(this);

    // Attachement d'un slot qui sera appelé à chaque fois que des données arrivent (mode asynchrone)
    connect(tcpSocket, SIGNAL(readyRead()), this, SLOT(gerer_donnees()));

    // Idem pour les erreurs
    connect(tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(afficher_erreur(QAbstractSocket::SocketError)));
}

MainWindow::~MainWindow()
{
    // Destruction de la socket
    tcpSocket->abort();
    delete tcpSocket;

    // Destruction de l'interface graphique
    delete ui;
}

void MainWindow::on_connexionButton_clicked()
{
    // Récupération des paramètres
    QString adresse_ip = ui->lineEdit_ip->text();
    unsigned short port_tcp = ui->lineEdit_port->text().toInt();

    // Connexion au serveur
    tcpSocket->connectToHost(adresse_ip, port_tcp);
}

void MainWindow::on_deconnexionButton_clicked()
{
    // Déconnexion du serveur
    tcpSocket->close();
}

void MainWindow::on_envoiButton_clicked()
{
    // Préparation de la requête
    QByteArray requete;
    requete = "Bonjour";

    // Envoi de la requête
    tcpSocket->write(requete);
}

void MainWindow::gerer_donnees()
{
    // Réception des données
    QByteArray reponse = tcpSocket->readAll();
    QString trame(reponse);

    // Affichage
    ui->lineEdit_reponse->setText(QString(trame));

        if (trame.size()>= 14){

            // Découpage
            QStringList trameDecoupee = trame.split(",");
            qDebug() << trameDecoupee[1] << "\n";

            // Isoler l'heure
            QString heure = trameDecoupee[1].mid(0, 2);
            qDebug() << heure << "\n";

            int h = heure.toInt();
            qDebug() << h << "\n";

            // Isoler la Latitude
            QString latitude = trameDecoupee[2];
            qDebug() << latitude << "\n";

            // Convertir la Latitude
            QString degrees_latitude = latitude.mid( 0, 2);
            QString minutes_latitude = latitude.mid ( 2, 8);

            int degrees_convertieLA = degrees_latitude.toInt();
            float minutes_convertieLA = minutes_latitude.toFloat();

            float resultat_finalLA = degrees_convertieLA + ( minutes_convertieLA/60 );

            // Affichage d'une valeur double x
            ui->Latitude->setText( QString("%1").arg(resultat_finalLA, 0, 'g', 4) );

            // Isoler la Longitude
            QString longitude = trameDecoupee[4];
            qDebug() << longitude << "\n";

            // Convertir la Longitude
            QString degrees_longitude = longitude.mid( 0, 3);
            QString minutes_longitude = longitude.mid ( 4, 10);

            int degrees_convertieLG = degrees_longitude.toInt();
            float minutes_convertieLG = minutes_longitude.toFloat();

            float resultat_finalLG = (degrees_convertieLG + ( minutes_convertieLG/60 ))*-1;

            // Affichage d'une valeur double x
            ui->Longitude->setText( QString("%1").arg(resultat_finalLG, 0, 'g', 4) );
    }
}


void MainWindow::afficher_erreur(QAbstractSocket::SocketError socketError)
{
    switch (socketError)
    {
        case QAbstractSocket::RemoteHostClosedError:
            break;
        case QAbstractSocket::HostNotFoundError:
            QMessageBox::information(this, tr("Client TCP"),
                                     tr("Hôte introuvable"));
            break;
        case QAbstractSocket::ConnectionRefusedError:
            QMessageBox::information(this, tr("Client TCP"),
                                     tr("Connexion refusée"));
            break;
        default:
            QMessageBox::information(this, tr("Client TCP"),
                                     tr("Erreur : %1.")
                                     .arg(tcpSocket->errorString()));
    }
}


void MainWindow::on_Avancer_clicked()
{
    tcpSocket->write("Z");
}

void MainWindow::on_Gauche_clicked()
{
    tcpSocket->write("Q");
}

void MainWindow::on_Reculer_clicked()
{
    tcpSocket->write("S");
}

void MainWindow::on_Droite_clicked()
{
    tcpSocket->write("D");
}

void MainWindow::on_Stop_clicked()
{
    tcpSocket->write("T");
}

void MainWindow::on_Descendre_clicked()
{
    tcpSocket->write("A");
}

void MainWindow::on_Lever_clicked()
{
    tcpSocket->write("E");
}

