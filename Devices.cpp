#include "Devices.h"

// 1. Smart Light
void SmartLight::showAction() {
    cout << name << " is ";
    if (status == true) { 
        cout << "ON" << endl; 
    }
    if (status == false) { 
        cout << "OFF" << endl; 
    }
}

// 2. Smart Fan
void SmartFan::showAction() {
    cout << name << " is ";
    if (status == true) { 
        cout << "ON" << endl; 
    }
    if (status == false) { 
        cout << "OFF" << endl; 
    }
}

// 3. Smart AC
void SmartAC::showAction() {
    cout << name << " is ";
    if (status == true) { 
        cout << "ON" << endl; 
    }
    if (status == false) { 
        cout << "OFF" << endl; 
    }
}

// 4. Smart Camera
void SmartCamera::showAction() {
    cout << name << " is ";
    if (status == true) { 
        cout << "ON" << endl; 
    }
    if (status == false) { 
        cout << "OFF" << endl; 
    }
}

// 5. Smart Heater
void SmartHeater::showAction() {
    cout << name << " is ";
    if (status == true) { 
        cout << "ON" << endl; 
    }
    if (status == false) { 
        cout << "OFF" << endl; 
    }
}

