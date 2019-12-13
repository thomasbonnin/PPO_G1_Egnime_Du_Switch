#include <QCoreApplication>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "client.h"
#include <iostream>

using namespace std;


int main ( int argc, char *argv[] )
{

    QCoreApplication a(argc, argv);
    string saisie =" ";


    while (saisie != "2022"){


      cout << "Veuillez saisir le code afficher a l ecran : \n" << endl;
      cin >> saisie;
}
    printf("BRAVO ! Le message de reussite va etre envoye au SRV de la section !");
    // Ouvrir dans le naviguateur par défaut le site web suivant. System execute une commande DOS WINDOWS (CMD).
    system("start \"\" \"C:\\Users\\nathan.guigand\\Pictures\\chat.jpg\"" );
    printf ("Le site web a ete ouvert dans le naviguateur par defaut.");


    //Envoi d'un message au serveur :
    Client c1;
    return a.exec();
}




