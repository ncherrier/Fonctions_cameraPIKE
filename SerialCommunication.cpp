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

bool SerialCommunication::emergencyStop() {
    cout << "calling SerialCommunication::emergencyStop()" << endl;
    return sendCharacter('s');
}

// Move camera

bool SerialCommunication::goUp(){
    cout << "calling SerialCommunication::goUp()" << endl;
    return sendCharacter('u'); // voir avec l'elec
}

bool SerialCommunication::goDown(){
    cout << "calling SerialCommunication::goDown()" << endl;
    return sendCharacter('d'); // voir avec l'elec
}

bool SerialCommunication::goLeft(){
    cout << "calling SerialCommunication::goLeft()" << endl;
    return sendCharacter('l'); // voir avec l'elec
}

bool SerialCommunication::goRight(){
    cout << "calling SerialCommunication::goRight()" << endl;
    return sendCharacter('r'); // voir avec l'elec
}

bool SerialCommunication::goTo(int x, int y){
    cout << "calling SerialCommunication::goTo(" << x << "," << y << ")" << endl;
    return (sendCharacter('c') && sendCharacter(x) && sendCharacter(y));
    // TODO: verifier protocole de communication avec elec
}

bool SerialCommunication::startCycle(){
    cout << "calling SerialCommunication::startCycle()" << endl;
    return sendCharacter('a');
}

bool SerialCommunication::pictureTaken() {
    cout << "calling SerialCommunication::pictureTaken()" << endl;
    return sendCharacter('o'); // "OK"
}



