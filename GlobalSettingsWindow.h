#ifndef GLOBALSETTINGSWINDOW_H
#define GLOBALSETTINGSWINDOW_H

#include <vector>
#include <QPushButton>
#include <QWidget>

class GlobalSettingsWindow : public QWidget
{

    public:
        GlobalSettingsWindow(); // default constructor
        //virtual ~GlobalSettingsWindow(); // default destructor - useless

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

#endif // GLOBALSETTINGSWINDOW_H
