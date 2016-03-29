#include <QApplication>
#include <QPushButton>
#include <iostream>
#include "SettingsWindow.h"
#include "FramingWindow.h"
#include "MainProg.h"

using namespace std;

/* Slots */
void MainProg::openWebcamSettingsWindow() {}

void MainProg::openCameraSettingsWindow() {}

void MainProg::openFramingWindow() {}

void MainProg::openSettingsWindow() {
    std::cout << "TODO: open next window" << std::endl;
    //GlobalSettingsWindow win;
    //win.show(); // TODO
    cout << "G...Window instanciated" << endl;
}

void MainProg::openProcessWindow() {}

// main programm
void MainProg::mainFunction(){
    cout << "hello!" << endl;


    //fra.show();
    cout << "FramingWindow shown" << endl;

    //return app->exec();
};

// Constructor (with arguments of main)
MainProg::MainProg(int argc, char **argv)
: app(argc, argv)
{

    mainFunction();

}

// Default constructor (no argument)
/*MainProg::MainProg() {

    char * argv = new char[1]();
    app = new QApplication(0, *argv);
    mainFunction();

}*/
// TODO: uncomment, regler le bug pour avoir une belle syntaxe. inutile en soi

// Default destructor
MainProg::~MainProg(){
    // TODO
}


// TODO: Remove after tests (?)
int main(int argc, char *argv[])
{

    MainProg mainProg(argc, argv);

}

