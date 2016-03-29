#include <QApplication>
#include <QPushButton>
#include <iostream>
#include "GlobalSettingsWindow.h"
#include "FramingWindow.h"


using namespace std;

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
    cout << "G...Window instanciated" << endl;*/

    return app.exec();

}

