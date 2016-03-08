#include <QtGui>

#include "camera.h"

int main(int argc, char *argv[]) {

  Camera* camera = new Camera();
  camera->openCamera();

  camera->closeCamera();

  return 0;
}
