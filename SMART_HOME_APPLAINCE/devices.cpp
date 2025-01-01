#include "devices.h"
#include <iostream>
using namespace std;

bool toggleDevice(const string& deviceName, bool currentState) {
    currentState = !currentState;
    cout << deviceName << (currentState ? " is now ON.\n" : " is now OFF.\n");
    return currentState;
}
