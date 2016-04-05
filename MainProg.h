#ifndef MAINPROG_H
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
        //MainProg(); // Default constructor, not to be used in normal conditions
        MainProg(int, char**); // "Right" constructor, with args of main
        virtual ~MainProg(); // Default destructor

        void init();

    /*public slots: // utile ?? ne devrait peut-etre pas etre ici
        void openWebcamSettingsWindow(); // TODO: rename (?)
        void openCameraSettingsWindow();
        void openFramingWindow(); // utile ?
        void openSettingsWindow();
        void openProcessWindow();*/


        static WebcamSettingsWindow *web; // settings for the webcam (= webcam used for framing)
        static CameraSettingsWindow *cam; // settings for the industrial camera
        static FramingWindow *fra;
        static SettingsWindow *set;
        static ProcessWindow *pro;


    //protected:

    private:
        QApplication *app;

        int mainFunction();

};

MainProg::web = new WebcamSettingsWindow();
MainProg::cam = new CameraSettingsWindow();
MainProg::fra = new FramingWindow();
MainProg::set = new SettingsWindow();
MainProg::pro = new ProcessWindow();

#endif // MAINPROG_H
