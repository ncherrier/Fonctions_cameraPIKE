/* Fenêtre pour le cadrage (affiche le signal de la webcam ; accès aux réglages de la webcam */

#include "FramingWindow.h"
#include "GlobalSettingsWindow.h"
#include <QApplication>
#include <QPushButton>
#include <iostream>
#include <QGridLayout>
#include <iostream> // TODO: remove after tests

using namespace std;

// Slots

void FramingWindow::openNextWindow() {
    std::cout << "TODO: open next window" << std::endl;
    GlobalSettingsWindow win;
    win.show(); // TODO
    cout << "G...Window instanciated" << endl;
}

// Constructors and destructors

// Default Constructor
FramingWindow::FramingWindow()
{
    // Set size and title

    setFixedSize(800,400);
    setWindowTitle("Framing");


    // Buttons

    webcamSettingsButton = new QPushButton("Webcam settings");
    nextButton = new QPushButton("Next >");
    cancelButton = new QPushButton("Cancel");


    // Tips

    QString userTip = "Utiliser la webcam pour le cadrage, puis cliquer sur Next. Au besoin, régler la webcam. (Ces réglages n'interviennent pas dans la photo finale.)";



    // Signals and slots

    connect(cancelButton, SIGNAL(clicked()), this, SLOT(quit()));
    //connect(nextButton, SIGNAL(clicked()), this, SLOT(openNextWindow()));


    // Go to next setting window


    // Layout

    QGridLayout *layout = new QGridLayout;

    layout->addWidget(webcamSettingsButton,2,2);
    layout->addWidget(nextButton,3,1);
    layout->addWidget(cancelButton,3,2);

    setLayout(layout);

}
