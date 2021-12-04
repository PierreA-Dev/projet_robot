// Librairies nécessaires
#include <iostream>
#include <unistd.h>
#include <cerrno>
#include <sys/un.h>
#include <arpa/inet.h>
#include "robot.hpp"
#include <sstream>
#include <string>
// Espace de nom utilisé
using namespace std;
// Point d'entrée du programme
int main()
{
    // Instanciation de l'objet robot
	Robot monRobot;

    int positionGauche;
    int positionDroite;
    // Création de la socket serveur
    int sd_serveur = socket(AF_INET, SOCK_STREAM, 0);
    // Configuration de la socket, notamment le port d'écoute
    struct sockaddr_in cfg_serveur;
    cfg_serveur.sin_family = AF_INET;
    cfg_serveur.sin_addr.s_addr = htonl(INADDR_ANY);
    cfg_serveur.sin_port = htons(1664);
    // Attachement de la socket au port défini
    int resultat = bind(sd_serveur, (struct sockaddr *)&cfg_serveur, sizeof(cfg_serveur));
        if (resultat < 0)
        {
            cout << "ERREUR DE PORC" << endl;
        }

    // Création une file d'attente de connexion
    listen(sd_serveur, 5);

    while(1)
    {
        // Dès qu’un nouveau client se connecte à notre serveur,
        // une nouvelle socket est créée pour gérer le client
        int sd_client = accept(sd_serveur, NULL, NULL);

        while(1)
        {
        // Réception de la requête du client
        char buffer[1024];
        memset(buffer, 0x00, 1024);
        int nbOctets = recv(sd_client, buffer, sizeof(buffer), 0);
        string reponse(buffer);
        cout << reponse << endl;
        // Envoi de la réponse au client
        string requete;
		
		       if (reponse[0] == 'Z' )
		{           
	           monRobot.changerPuissanceMoteurs(0, 0, 0);
	           monRobot.changerPuissanceMoteurs(100, 0, 100);
               monRobot.parler("Icssa rapta", true);
               send(sd_client, requete.c_str(), requete.size(), 0);
		}

        		if (reponse[0] == 'S' )
		{
	           monRobot.changerPuissanceMoteurs(0, 0, 0);
	           monRobot.changerPuissanceMoteurs(-100, 0, -100);
               monRobot.parler("", true);
               send(sd_client, requete.c_str(), requete.size(), 0);
		}

           		if (reponse[0] == 'Q' )
		{
	           monRobot.changerPuissanceMoteurs(0, 0, 0);
	           monRobot.changerPuissanceMoteurs(-100, 0, 100);
               monRobot.parler("Icssa rapta", true);
               send(sd_client, requete.c_str(), requete.size(), 0);
		}

               	if (reponse[0] == 'D' )
		{
               monRobot.changerPuissanceMoteurs(0, 0, 0);
	           monRobot.changerPuissanceMoteurs(100, 0, -100);
               monRobot.parler("Icssa rapta", true);
               send(sd_client, requete.c_str(), requete.size(), 0);
		}

                      	if (reponse[0] == 'A' )
		{
               monRobot.changerPuissanceMoteurs(0, 0, 0);
	           monRobot.changerPuissanceMoteurs(0, 50, 0);
               monRobot.parler("super robotdick", true);
               send(sd_client, requete.c_str(), requete.size(), 0);
		}

                        if (reponse[0] == 'E' )
		{
               monRobot.changerPuissanceMoteurs(0, 0, 0);
	           monRobot.changerPuissanceMoteurs(0, -50, 0);
               monRobot.parler("Oh big ass", true);
               send(sd_client, requete.c_str(), requete.size(), 0);
		}

                if (reponse[0] == 'T' )
		{
               monRobot.changerPuissanceMoteurs(0, 0, 0);
               monRobot.parler("Icssa rapta", true);
               send(sd_client, requete.c_str(), requete.size(), 0);
		}

            if (reponse[0] == 'Y' ) 
        {
                 // Construction de la chaîne de caractères en mémoire
                 ostringstream preparation;
                
                preparation << monRobot.recupererGyroscopeAngle() << ";"  << monRobot.recupererDistance() << ";" << monRobot.recupererCouleurCode() << ";" << monRobot.recupererPositionDuMoteur(Robot::GAUCHE) << ";" <<  monRobot.recupererPositionDuMoteur(Robot::DROITE);
                
                // Transformation de la chaîne préparée en string
                string chaine = preparation.str();

                // Affichage : La valeur est 17 unité(s)
                cout << chaine << endl;

                send(sd_client, requete.c_str(), requete.size(), 0);  

        }

                if (reponse[0] == 'C' )
		{
            // Pendant 10s on affiche l'état du capteur de couleur
            for (int i=0; i<100; i++)
            {
                cout << monRobot.recupererCouleurCode() << " ";
                cout << endl;
                monRobot.attendre(100);
            }
            send(sd_client, requete.c_str(), requete.size(), 0);
        }
                if (reponse[0] == 'X' )
		{
            // Pendant 10s on affiche l'état du capteur d'angle (gyroscopique)
            for (int i=0; i<100; i++)
            {
                cout << "angle => " << monRobot.recupererGyroscopeAngle() << " degrés" << endl;
                monRobot.attendre(100);
            }
            send(sd_client, requete.c_str(), requete.size(), 0);
        }

                        if (reponse[0] == 'F' )
		{
            if (reponse[0] == 'T' ){

            monRobot.changerPuissanceMoteurs(0, 0, 0);
            }
            else {
            // Pendant 10s on affiche l'état du capteur d'angle (gyroscopique)
            for (int i=0; i<10 ; i++)
            {
	           monRobot.changerPuissanceMoteurs(0, 50, 0);
               monRobot.changerPuissanceMoteurs(100, 0, -100);
               monRobot.parler("super robotdyck", true);
               monRobot.attendre(100);
               monRobot.changerPuissanceMoteurs(0, -50, 0);
               monRobot.changerPuissanceMoteurs(-100, 0, 100);
               monRobot.parler("super robotdyck", true);
               monRobot.attendre(100);
            }



            }
            
            send(sd_client, requete.c_str(), requete.size(), 0);
        
        }
     }
        
        // Fermeture de la socket client
        close(sd_client);
    }
    // Fermeture de la socket serveur
    close(sd_serveur);
    // Fin du programme
    return 0;
}

