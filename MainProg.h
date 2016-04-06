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
        //static Windows const * windows;

        //MainProg(); // Default constructor, not to be used in normal conditions
        MainProg(int, char**); // "Right" constructor, with args of main
        virtual ~MainProg(); // Default destructor

    /*public slots: // utile ?? ne devrait peut-etre pas etre ici
        void openWebcamSettingsWindow(); // TODO: rename (?)
        void openCameraSettingsWindow();
        void openFramingWindow(); // utile ?
        void openSettingsWindow();
        void openProcessWindow();*/

        //static WebcamSettingsWindow const *web; // settings for the webcam (= webcam used for framing)
        /*static CameraSettingsWindow const *cam; // settings for the industrial camera
        static FramingWindow const *fra;
        static SettingsWindow const *set;
        static ProcessWindow const *pro;
//        static QApplication const *app;*/
        QApplication *app;

    //protected:

    private:

        int mainFunction();

};

/*WebcamSettingsWindow const * web = new WebcamSettingsWindow();
CameraSettingsWindow const * cam = new CameraSettingsWindow();
FramingWindow const * fra = new FramingWindow();
SettingsWindow const * set = new SettingsWindow();
ProcessWindow const * pro = new ProcessWindow();*/

#endif // MAINPROG_H
