#include "VimbaCPP/Include/VimbaCPP.h"

#ifndef CAMERAPIKE_H
#define CAMERAPIKE_H


class CameraPike : public AVT::VmbAPI::Camera
{
    public:

        // Initialization
        bool openCamera();
        bool closeCamera();

        // Features
        int getExposureTime();
        bool setExposureTime(int time_us);

        // Picture commands
        bool start_acquisition();
        bool stop_acquisition();
        bool take_picture();

};

#endif // CAMERAPIKE_H


