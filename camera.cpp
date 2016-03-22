/*#include "camera.h"


Camera::Camera() :
  cam() {
    AVT::VmbAPI::CameraPtrVector available_cameras;
    AVT::VmbAPI::VimbaSystem &system = AVT::VmbAPI::VimbaSystem :: GetInstance ();
    if ( VmbErrorSuccess == system.Startup () ) {
      if ( VmbErrorSuccess == system.GetCameras( available_cameras ) ) {
          cam = available_cameras[0];
      }
    }
}

Camera::~Camera(){
    delete &cam;
}

bool Camera::openCamera(){
    if ( VmbErrorSuccess == cam->Open( VmbAccessModeFull ) ){
        return true;
    }
    else return false;
}

bool Camera::closeCamera(){
    if ( VmbErrorSuccess == cam->Close() ){
        return true;
    }
    else return false;
}

int Camera::getExposureTime(){
    AVT::VmbAPI::FeaturePtr feature;
    VmbInt64_t time_us;
    std::string featureMode;
    if ( VmbErrorSuccess == cam ->GetFeatureByName( "ExposureMode", feature )){
        if(VmbErrorSuccess == feature->GetValue(featureMode)){
            if (featureMode.compare("Timed") == 0){
                if ( VmbErrorSuccess == cam ->GetFeatureByName( "ExposureTime", feature )){
                    if(VmbErrorSuccess == feature->GetValue(time_us)){
                        return time_us;
                    }
                }
            }
        }
    }
    return time_us;
}

bool Camera::setExposureTime(int time_us){
    AVT::VmbAPI::FeaturePtr feature;
    std::string featureMode;
    if ( VmbErrorSuccess == cam ->GetFeatureByName( "ExposureMode", feature )){
        if(VmbErrorSuccess == feature->GetValue(featureMode)){
            if (featureMode.compare("Timed") == 0){
                if(VmbErrorSuccess != feature->SetValue("Timed")) return false;
            }
        }
        if ( VmbErrorSuccess == cam ->GetFeatureByName( "ExposureTime", feature )){
            if(VmbErrorSuccess == feature->SetValue(time_us)) return true;
            else return false;
        }
        else return false;
    }
    else return false;
}

bool Camera::take_picture(){
    AVT::VmbAPI::FeaturePtr feature;
    if ( VmbErrorSuccess == cam ->GetFeatureByName( "AcquisitionMode", feature )){
        if ( VmbErrorSuccess == feature ->SetValue( "Continuous" ) ){
            if ( VmbErrorSuccess == cam->GetFeatureByName( "AcquisitionStart",feature ) ){
                if ( VmbErrorSuccess == feature ->RunCommand () ){
                    return true;
                }
            }
        }
    }
    return false;
}

*/
