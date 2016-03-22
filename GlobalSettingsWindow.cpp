/* Fenetre pour les reglages generaux :
 * Choix de l'emplacement de la mise au point,
 * Retour video (webcam) pour le cadrage,
 * Retour video (camera indus.) pour la mise au point,
 * Acces aux reglages de la camera indus. (et de la webcam ?),
 * Acces au choix de dossier de destination.
 * */

#include "GlobalSettingsWindow.h"
#include <QApplication>
#include <QPushButton>
#include <iostream>
#include "framingwindow.h" // TODO: remove after tests

using namespace std;

// Constructors and destructors

// Default Constructor
GlobalSettingsWindow::GlobalSettingsWindow() {

    // Set size

    setFixedSize(800,400);


    // Buttons

    upButton = new QPushButton("Up", this);
    leftButton = new QPushButton("Left", this);
    downButton = new QPushButton("Down", this);
    rightButton = new QPushButton("Right", this);

    finishButton = new QPushButton("Finish", this);
    previousButton = new QPushButton("Previous", this);

    cameraSettingsButton = new QPushButton("Indus. camera settings", this);
    webcamSettingsButton = new QPushButton("Webcam settings", this);

    //QPushButton RegisterSettingsButton("Register settings"); // To open a window to choose the repository to save photos. Useful ??


    // Add signals and slots (interactions with user)



    // Show Buttons

    upButton->show();
    leftButton->show();
    downButton->show();
    rightButton->show();

    finishButton->show();

    cameraSettingsButton->show();
    webcamSettingsButton->show();

}

// Default destructor
/*
GlobalSettingsWindow::~GlobalSettingsWindow(){

}*/
/* Nothing to do: Child-widgets automatically deleted */


// TODO: Remove after tests
int main(int argc, char *argv[])
{

    QApplication app(argc, argv);

    cout << "hello!" << endl;

    FramingWindow fra;
    fra.show();
    cout << "FramingWindow instanciated" << endl;

    /*GlobalSettingsWindow win;
    win.show();
    cout << "G...Window instanciated" << endl; */

    return app.exec();

}

