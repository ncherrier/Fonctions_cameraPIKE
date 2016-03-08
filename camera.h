#include "VimbaCPP.h"

#ifndef CAMERA_H
#define CAMERA_H


class Camera
{
    public:
        Camera();
        ~Camera();
        bool openCamera();
        bool closeCamera();
        VmbInt64_t getWidth();
    private:
        CameraPtr cam;
};

#endif // CAMERA_H
