#include <QApplication>
#include <QPushButton>
#include <iostream>
#include "SettingsWindow.h"
#include "FramingWindow.h"
#include "MainProg.h"

using namespace std;

/* Slots */
void MainProg::openSettingsWindow() {
    std::cout << "TODO: open next window" << std::endl;
    //GlobalSettingsWindow win;
    //win.show(); // TODO
    cout << "G...Window instanciated" << endl;
}

// main programm
void MainProg::mainFunction(){
    cout << "hello!" << endl;


    //fra.show();
    cout << "FramingWindow shown" << endl;

    return app->exec();
};

// Constructor (with arguments of main)
MainProg::MainProg(int argc, char *argv[]) {

    app = new QApplication(argc, argv);
    mainFunction();

}

// Default constructor (no argument)
MainProg::MainProg() {

    app = new QApplication();
    mainFunction();

}

// Default destructor
MainProg::~MainProg(){
    // TODO
}


// TODO: Remove after tests (?)
int main(int argc, char *argv[])
{

    MainProg mainProg(argc, argv);

}

