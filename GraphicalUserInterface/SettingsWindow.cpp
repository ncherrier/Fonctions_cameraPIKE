/* Fenetre pour les reglages :
 * Choix de l'emplacement de la mise au point, 
 * Retour video (camera indus.) pour la mise au point,
 * Retour video (webcam) (pour situer l'endroit de la mise au point)
 * Acces aux reglages de la camera indus. (et de la webcam ?),
 * Acces au choix de dossier de destination.
 * */

#include <QApplication>
#include <QPushButton>
#include <iostream>
#include <QGridLayout>
#include "GraphicalUserInterface/FramingWindow.h" // TODO: remove after tests
#include "GraphicalUserInterface/SettingsWindow.h"
#include "GraphicalUserInterface/ProcessWindow.h"
#include "MainProg.h"

using namespace std;

// Slots and functions
void SettingsWindow::goToProcessWindow() {
    ProcessWindow *pro = new ProcessWindow;
    pro->show();
    this->close();
}

void SettingsWindow::goToFramingWindow() {
    FramingWindow *fra = new FramingWindow;
    fra->show();
    this->close();
}

void SettingsWindow::startCycle() {
    // TODO !!
    goToProcessWindow();
    MainProg::startCycle();
}

// Constructors and destructors

// Default Constructor
SettingsWindow::SettingsWindow() {

    // Set size

    setFixedSize(800,400);
    setWindowTitle("Mise au point et réglages");

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
    QObject::connect(finishButton, SIGNAL(clicked()), this, SLOT(startCycle()));
    QObject::connect(previousButton, SIGNAL(clicked()), this, SLOT(goToFramingWindow()));


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




