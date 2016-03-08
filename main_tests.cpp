#include <QtGui>
#include "VimbaCPP.h"

int main(int argc, char *argv[]) {

  CameraPtrVector cameras;
  VimbaSystem &system = VimbaSystem :: GetInstance ();
  FeaturePtr feature;
  VmbInt64_t width;

  if ( VmbErrorSuccess == system.Startup () ) {
    if ( VmbErrorSuccess == system.GetCameras( cameras ) ) {
      for ( CameraPtrVector :: iterator iter = cameras.begin (); cameras.end() != iter; ++iter ){
        /*if ( VmbErrorSuccess == system.OpenCameraByID( "192.168.0.42",VmbAccessModeFull ,camera ) ){
          std::cout << "Camera opened" << std::endl;
        }*/
        if ( VmbErrorSuccess == (*iter)->Open( VmbAccessModeFull ) ){ // opening camera
          if ( VmbErrorSuccess == (*iter)->GetFeatureByName( "Width", feature )){ // list of features available in Vimba1394TLFeaturesManual.pdf (camera parameters, exposure, saturation, RAW corrections...)
            if ( VmbErrorSuccess == feature ->GetValue( width ) ) {
              std::out << width << std::endl;
            }
          }
        }
        if ( VmbErrorSuccess == camera.Close () ){ // closing camera
          std::cout << "Camera closed" << std::endl;
        }
      }
    }
  }

  return 0;
}
