/*
#include "camera.h"

int main(int argc, char *argv[]) {
   CameraPike camera;
   AVT::VmbAPI::CameraPtrVector available_cameras;
   AVT::VmbAPI::VimbaSystem &system = AVT::VmbAPI::VimbaSystem :: GetInstance ();
   if ( VmbErrorSuccess == system.Startup () ) {
     if ( VmbErrorSuccess == system.GetCameras( available_cameras ) ) {
         camera = available_cameras[0];
     }
   }

  camera->openCamera();

  // do what you want =)

  camera->closeCamera();

  return 0;
}
*/
