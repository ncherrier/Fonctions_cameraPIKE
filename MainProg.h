/*#ifndef MAINPROG_H
#define MAINPROG_H

#include <QApplication>
#include "cameraSettingsWindow.h"
#include "webcamSettingsWindow.h"
#include "FramingWindow.h"
#include "SettingsWindow.h"
#include "ProcessWindow.h"

class MainProg : public QObject
{
    Q_OBJECT // To be able to define new slots (interactions with user)
    // /!\ Build -> run QMAKE before building and running

    public:
        //static Windows const * windows;
        QApplication *app;

        //MainProg(); // Default constructor, not to be used in normal conditions
        MainProg(int, char**); // "Right" constructor, with args of main
        virtual ~MainProg(); // Default destructor

        void init();


    //protected:

    private:
        int mainFunction();

};

#endif // MAINPROG_H
*/
