
#ifndef CAMERAPIKE_H
#define CAMERAPIKE_H

#include "VimbaCPP/Include/VimbaCPP.h"

class CameraPike : public AVT::VmbAPI::Camera
{
    public:
        CameraPike();
        ~CameraPike();

        // Initialization
        bool openCamera();
        bool closeCamera();

        // Features
        int getExposureTime();
        bool setExposureTime(int time_us);

        // Picture commands
        // Appeler au début et à la fin du process entier
        bool start_acquisition();
        bool stop_acquisition();

        // Prendre une image (à mettre plusieurs fois au cours du process)
        AVT::VmbAPI::FramePtr take_picture();

        AVT::VmbAPI::IFrameObserverPtr start_getting_images();
        bool stop_getting_images();
        AVT::VmbAPI::FramePtr get_image(AVT::VmbAPI::IFrameObserverPtr frameObserver); // en continu, évènement nouvelle frame => actualisation de l'affichage



};

#endif // CAMERAPIKE_H



// AVT::VmbAPI::FramePtr
