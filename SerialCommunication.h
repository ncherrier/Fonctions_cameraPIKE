#ifndef SERIALCOMMUNICATION_H
#define SERIALCOMMUNICATION_H

class SerialCommunication
{

public:
    SerialCommunication();
    // All static functions below return true if everything went good

    // Low-level communication
    static bool sendCharacter(char);

    // Higher-level functions
    static bool startCycle(); // start the cycle to take a (global) picture
    static bool takePictureNow(); // to take a sub-picture
    static bool pictureTaken(); // signals that the picture has been taken, so that elec can move the camera
    static bool goTo(int,int); // move camera (e. g. to focus). Args = percentage
    static bool emergencyStop();
};

#endif // SERIALCOMMUNICATION_H
