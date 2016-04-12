#include <QApplication>
#include <QPushButton>
#include <iostream>
#include "cameraSettingsWindow.h"
#include "webcamSettingsWindow.h"
#include "SettingsWindow.h"
#include "FramingWindow.h"
#include "ProcessWindow.h"
#include "MainProg.h"
#include "TakePictureTest.h" // for tests only


using namespace std;




// Slots
//void MainProg::openWebcamSettingsWindow() {}
//void MainProg::openCameraSettingsWindow() {}

//void MainProg::openFramingWindow() {}

/*
void MainProg::openSettingsWindow() {
    std::cout << "TODO: open next window" << std::endl;
    SettingsWindow *set = new SettingsWindow();
    set->show();
    cout << "SettingsWindow shown" << endl;
}*/

//void MainProg::openProcessWindow() {}

// main programm
int MainProg::mainFunction(){
    cout << "hello! in MainProg::MainFunction" << endl;

    //First window showed: FramingWindow
    FramingWindow *fra = new FramingWindow();
    fra->show();
    cout << "FramingWindow shown" << endl;

    TakePictureTest *tak = new TakePictureTest();
    tak->show();

    return app->exec();
}

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

}



// TODO: Remove after tests (?)
int main(int argc, char *argv[])
{
    cout << "hello! in main" << endl;
    //QApplication const * MainProg::app = new QApplication(argc, argv);
    MainProg mainProg(argc, argv);

}

