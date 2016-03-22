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
#include <QGridLayout>
#include "framingwindow.h" // TODO: remove after tests

using namespace std;

// Constructors and destructors

// Default Constructor
GlobalSettingsWindow::GlobalSettingsWindow() {

    // Set size

    setFixedSize(800,400);


    // Buttons

    upButton = new QPushButton("Up ^");
    leftButton = new QPushButton("< Left");
    downButton = new QPushButton("Down v");
    rightButton = new QPushButton("Right >");

    finishButton = new QPushButton("Finish >");
    previousButton = new QPushButton("< Previous");

    cameraSettingsButton = new QPushButton("Indus. camera settings");
    webcamSettingsButton = new QPushButton("Webcam settings");

    //QPushButton RegisterSettingsButton("Register settings"); // To open a window to choose the repository to save photos. Useful ??


    // Add signals and slots (interactions with user)



    // Layout

    QGridLayout *layout = new QGridLayout;

    layout->addWidget(upButton);
    layout->addWidget(leftButton);
    layout->addWidget(downButton);
    layout->addWidget(rightButton);
    layout->addWidget(finishButton);
    layout->addWidget(previousButton);
    layout->addWidget(cameraSettingsButton);
    layout->addWidget(webcamSettingsButton);

    setLayout(layout);

}




// TODO: Remove after tests
int main(int argc, char *argv[])
{

    QApplication app(argc, argv);

    cout << "hello!" << endl;

    FramingWindow fra;
    fra.show();
    cout << "FramingWindow instanciated" << endl;

    GlobalSettingsWindow win;
    win.show();
    cout << "G...Window instanciated" << endl;

    return app.exec();

}

