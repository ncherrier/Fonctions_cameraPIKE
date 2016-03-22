#include "VimbaCPP/Include/VimbaCPP.h"

#ifndef CAMERA_H
#define CAMERA_H


class Camera
{
    public:
        Camera();
        ~Camera();

        // Initialization
        bool openCamera();
        bool closeCamera();

        // Features
        int getExposureTime();
        bool setExposureTime(int time_us);

        // Picture commands
        bool take_picture();


    private:
        AVT::VmbAPI::CameraPtr cam;
};

#endif // CAMERA_H

