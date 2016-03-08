#include "VimbaCPP.h"

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
        bool Camera::take_picture();


    private:
        CameraPtr cam;
};

#endif // CAMERA_H
