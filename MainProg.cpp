#include <QApplication>
#include <QPushButton>
#include <iostream>
#include "cameraSettingsWindow.h"
#include "webcamSettingsWindow.h"
#include "SettingsWindow.h"
#include "FramingWindow.h"
#include "ProcessWindow.h"
#include "MainProg.h"

using namespace std;


/* Slots */
/*void MainProg::openWebcamSettingsWindow() {}

/* Instanciate all windows */
WebcamSettingsWindow const * MainProg::web = new WebcamSettingsWindow();
CameraSettingsWindow const * MainProg::cam = new CameraSettingsWindow();
FramingWindow const * MainProg::fra = new FramingWindow();
SettingsWindow const * MainProg::set = new SettingsWindow();
ProcessWindow const * MainProg::pro = new ProcessWindow();



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
int MainProg::mainFunction(){
    cout << "hello!" << endl;




    //fra->show();
    //cout << "FramingWindow shown" << endl;

    return app->exec();
};

// Constructor (with arguments of main)
MainProg::MainProg(int argc, char **argv)
{

    app = new QApplication(argc, argv);
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

// Initialize static attributes
void MainProg::init(){

}


// TODO: Remove after tests (?)
int main(int argc, char *argv[])
{
    cout << "hello! in main" << endl;
    //MainProg mainProg(argc, argv);
    //mainProg.init();


}

