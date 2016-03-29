#ifndef MAINPROG_H
#define MAINPROG_H

#include <QApplication>
#include "cameraSettingsWindow.h"
#include "webcamSettingsWindow.h"
#include "FramingWindow.h"
#include "SettingsWindow.h"
#include "ProcessWindow.h"

class MainProg : public QWidget
{
    Q_OBJECT // To be able to define new slots (interactions with user)
    // /!\ Build -> run QMAKE before building and running

    public:
        MainProg(); // Default constructor, not to be used in normal conditions
        MainProg(int, char*[]); // "Right" constructor, with args of main
        virtual ~MainProg(); // Default destructor

    public slots:
        void openWebcamSettingsWindow(); // TODO: rename (?)
        void openCameraSettingsWindow();
        void openFramingWindow(); // utile ?
        void openSettingsWindow();
        void openProcessWindow();

    private:
        QApplication *app;

        WebcamSettingsWindow *web; // settings for the webcam (= webcam used for framing)
        CameraSettingsWindow *cam; // settings for the industrial camera
        FramingWindow *fra;
        SettingsWindow *set;
        ProcessWindow *pro;

        void mainFunction();

};

#endif // MAINPROG_H
