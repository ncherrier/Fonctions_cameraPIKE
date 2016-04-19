//#include "camera.h"

#include <QCoreApplication>
#include "VimbaCPP.h"
#include <iostream>

using namespace std;
using namespace AVT::VmbAPI;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout<<"123"<<endl;

    CameraPtrVector cameras;

    VmbUint32_t test = 4;
    cout << test << endl;

    CameraPtr cam = cameras[0];
    FramePtr frame;
    cam->AcquireSingleImage(frame,test);

    VimbaSystem &system = VimbaSystem::GetInstance();

    return a.exec();
}

/*
CameraPike::CameraPike():
    Camera() {
    AVT::VmbAPI::CameraPtrVector available_cameras;
    AVT::VmbAPI::VimbaSystem &system = AVT::VmbAPI::VimbaSystem :: GetInstance ();
    if ( VmbErrorSuccess == system.Startup () ) {
      if ( VmbErrorSuccess == system.GetCameras( available_cameras ) ) {
          camera = available_cameras[0];
      }
    }
    this->AVT::VmbAPI::Camera::Open( VmbAccessModeFull );
}

CameraPike::~CameraPike():
    ~Camera(){
    this->AVT::VmbAPI::Camera::Close();
}

int CameraPike::getExposureTime(){
    AVT::VmbAPI::FeaturePtr feature;
    VmbInt64_t time_us = 0;
    std::string featureMode;
    if ( VmbErrorSuccess == this ->GetFeatureByName( "ExposureMode", feature )){
        if(VmbErrorSuccess == feature->GetValue(featureMode)){
            if (featureMode.compare("Timed") == 0){
                if ( VmbErrorSuccess == this ->GetFeatureByName( "ExposureTime", feature )){
                    if(VmbErrorSuccess == feature->GetValue(time_us)){
                        return time_us;
                    }
                }
            }
        }
    }
    return time_us;
}

bool CameraPike::setExposureTime(int time_us){
    AVT::VmbAPI::FeaturePtr feature;
    std::string featureMode;
    if ( VmbErrorSuccess == this ->GetFeatureByName( "ExposureMode", feature )){
        if(VmbErrorSuccess == feature->GetValue(featureMode)){
            if (featureMode.compare("Timed") == 0){
                if(VmbErrorSuccess != feature->SetValue("Timed")) return false;
            }
        }
        if ( VmbErrorSuccess == this ->GetFeatureByName( "ExposureTime", feature )){
            if(VmbErrorSuccess == feature->SetValue(time_us)) return true;
            else return false;
        }
        else return false;
    }
    else return false;
}

bool CameraPike::start_acquisition(){
    AVT::VmbAPI::FeaturePtr feature;
    if ( VmbErrorSuccess == this ->GetFeatureByName( "AcquisitionMode", feature )){
        if ( VmbErrorSuccess == feature ->SetValue( "Continuous" ) ){
            if ( VmbErrorSuccess == this->GetFeatureByName( "AcquisitionStart",feature ) ){
                if ( VmbErrorSuccess == feature ->RunCommand () ){
                    return true;
                }
            }
        }
    }
    return false;
}

bool CameraPike::stop_acquisition(){
    AVT::VmbAPI::FeaturePtr feature;
    if ( VmbErrorSuccess == this->GetFeatureByName( "AcquisitionStop",feature ) ){
        if ( VmbErrorSuccess == feature ->RunCommand () ){
            return true;
        }
    }
    return false;
}

// Pour toutes les fonctions suivantes : nécessite d'avoir appelé start_acquisition avant !!

AVT::VmbAPI::FramePtr CameraPike::take_picture(){
    AVT::VmbAPI::FramePtr frame;
    VmbUint32_t timeout;
    this->AcquireSingleImage(frame,timeout);
    return frame;
}

AVT::VmbAPI::IFrameObserverPtr CameraPike::start_getting_images(){
    int bufferCount = 3;
    AVT::VmbAPI::IFrameObserverPtr frameObserver;
    if(VmbErrorSuccess == this->StartContinuousImageAcquisition(bufferCount,frameObserver)) {
        return frameObserver;
    }
}

bool CameraPike::stop_getting_images(){
    return this->StopContinuousImageAcquisition();
}

void CameraPike::get_image(AVT::VmbAPI::IFrameObserverPtr frameObserver){
    AVT::VmbAPI::FramePtr frame;
    frameObserver->FrameReceived(frame);
    return frame;
    // TODO : affichage de l'image en question (actualiser)
}

*/
