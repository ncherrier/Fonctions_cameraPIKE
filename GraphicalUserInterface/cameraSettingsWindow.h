#ifndef CAMERASETTINGSWINDOW_H
#define CAMERASETTINGSWINDOW_H

#include <QWidget>
#include <QApplication>
#include <QDialog>
#include <QPushButton>

class CameraSettingsWindow : public QDialog
// interet d'heriter de QDialog :
// quand cette fenetre est affichee, l'autre devient inactive
// (fenetre modale)
{

    Q_OBJECT

    public:
        //CameraSettingsWindow();
        CameraSettingsWindow(QWidget*);

    public slots:
        void reset();
        void apply();
        //void cancel(); // utile ?
        void validate();

    private:
        QPushButton* resetButton;
        QPushButton* applyButton;
        QPushButton* cancelButton;
        QPushButton* validateButton;

};

#endif // CAMERASETTINGSWINDOW_H


