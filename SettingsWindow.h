/* Fenetre pour les reglages :
 * Choix de l'emplacement de la mise au point,
 * Retour video (camera indus.) pour la mise au point,
 * Retour video (webcam) (pour situer l'endroit de la mise au point)
 * Acces aux reglages de la camera indus. (et de la webcam ?),
 * Acces au choix de dossier de destination.
 * */

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
