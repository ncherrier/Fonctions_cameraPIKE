#ifndef FRAMINGWINDOW_H
#define FRAMINGWINDOW_H

#include <QPushButton>
#include <QWidget>
#include <QApplication>

class FramingWindow : public QWidget
{
    //Q_OBJECT // To be able to define new slots (interactions with user)
    // /!\ Build -> run QMAKE before building and running

    public:
        FramingWindow();
        // No destructor needed (?)

    //public slots:
        void openNextWindow(); // TODO: rename (?)

    private:
        QPushButton *webcamSettingsButton;
        QPushButton *nextButton;
        QPushButton *cancelButton;

};

#endif // FRAMINGWINDOW_H
