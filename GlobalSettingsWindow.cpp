/* Fenetre pour les reglages generaux :
 * Choix de l'emplacement de la mise au point,
 * Retour video (webcam) pour le cadrage,
 * Retour video (camera indus.) pour la mise au point,
 * Acces aux reglages de la camera indus. (et de la webcam ?),
 * Acces au choix de dossier de destination.
 * */

#include <QApplication>
#include <QPushButton>

using namespace std;

int main(int argc, char *argv[])

{

    QApplication app(argc, argv);



    QPushButton bouton(" ");

    bouton.show();



    return app.exec();

}



