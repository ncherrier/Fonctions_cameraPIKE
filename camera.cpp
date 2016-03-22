#include "camera.h"


bool CameraPike::openCamera(){
    return this->AVT::VmbAPI::Camera::Open( VmbAccessModeFull );
}

bool CameraPike::closeCamera(){
    return this->AVT::VmbAPI::Camera::Close();
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

bool CameraPike::take_picture(){
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

