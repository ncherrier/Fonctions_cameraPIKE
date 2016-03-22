#include "framingwindow.h"
#include <QApplication>
#include <QPushButton>
#include <iostream>
#include <QGridLayout>

using namespace std;

// Constructors and destructors

// Default Constructor
FramingWindow::FramingWindow()
{
    // Set size and title

    setFixedSize(800,400);
    setWindowTitle("Framing");


    // Buttons

    webcamSettingsButton = new QPushButton("Webcam settings");
    nextButton = new QPushButton("Next");
    cancelButton = new QPushButton("Cancel");

    // Layout

    QGridLayout *layout = new QGridLayout;
    layout->addWidget(webcamSettingsButton,2,2);
    layout->addWidget(nextButton,3,1);
    layout->addWidget(cancelButton,3,2);



    // Tips

    QString userTip = "Utiliser la webcam pour le cadrage, puis cliquer sur Next. Au besoin, régler la webcam. (Ces réglages n'interviennent pas dans la photo finale.)";


    // Signals and slots



    setLayout(layout);

}
