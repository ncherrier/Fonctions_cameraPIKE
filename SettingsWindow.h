#ifndef SETTINGSWINDOW_H
#define SETTINGSWINDOW_H

#include <vector>
#include <QPushButton>
#include <QWidget>

class SettingsWindow : public QWidget
{

    public:
        SettingsWindow(); // default constructor
        //virtual ~SettingsWindow(); // default destructor - useless

    private:
        QPushButton *upButton;
        QPushButton *leftButton;
        QPushButton *downButton;
        QPushButton *rightButton;
        QPushButton *finishButton;
        QPushButton *previousButton;
        QPushButton *cameraSettingsButton;
        QPushButton *webcamSettingsButton;

};

#endif // SETTINGSWINDOW_H
