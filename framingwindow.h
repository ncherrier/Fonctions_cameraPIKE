#ifndef FRAMINGWINDOW_H
#define FRAMINGWINDOW_H

#include <QPushButton>
#include <QWidget>

class FramingWindow : public QWidget
{

    public:
        FramingWindow();
        // No destructor needed (?)

    private:
        QPushButton *webcamSettingsButton;
        QPushButton *nextButton;
        QPushButton *cancelButton;

};

#endif // FRAMINGWINDOW_H
