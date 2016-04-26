#include "SerialCommunication.h"
#include <iostream> // TODO: remove after tests

using namespace std;



SerialCommunication::SerialCommunication() {}



// Low-level communication (read and write - TODO)

bool SerialCommunication::sendCharacter(char c){
    cout << "calling SerialCommunication::sendCharacter(" << c << ")" << endl;
    // TODO
    return true;
}


// Higher-level functions
// Try several times ? a reflechir

bool SerialCommunication::startCycle(){
    cout << "calling SerialCommunication::startCycle()" << endl;
    return sendCharacter('a');
}


bool SerialCommunication::takePictureNow() {
    cout << "calling SerialCommunication::takePictureNow()" << endl;
    return sendCharacter('p');
}

bool SerialCommunication::pictureTaken() {
    cout << "calling SerialCommunication::pictureTaken()" << endl;
    return sendCharacter('o'); // "OK"
}

bool SerialCommunication::goTo(int x, int y){
    cout << "calling SerialCommunication::goTo(" << x << "," << y << ")" << endl;
    return (sendCharacter('c') && sendCharacter(x) && sendCharacter(y));
    // TODO: verifier protocole de communication avec elec
}

bool SerialCommunication::emergencyStop() {
    cout << "calling SerialCommunication::emergencyStop()" << endl;
    return sendCharacter('s');
}
