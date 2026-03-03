#include "Devices.h"
#include <iostream>  
using namespace std;


// 1. Smart Light
void SmartLight::showAction() {
    cout << name << " is ";
    if (status) { 
        cout << "ON" << endl; 
    } else { 
        cout << "OFF" << endl; 
    }
}

// 2. Smart Fan
void SmartFan::showAction() {
    cout << name << " is ";
    if (status) { 
        cout << "ON" << endl; 
    } else { 
        cout << "OFF" << endl; 
    }
}

// 3. Smart AC
void SmartAC::showAction() {
    cout << name << " is ";
    if (status) { 
        cout << "ON" << endl; 
    } else { 
        cout << "OFF" << endl; 
    }
}

// 4. Smart Camera
void SmartCamera::showAction() {
    cout << name << " is ";
    if (status) { 
        cout << "ON" << endl; 
    } else { 
        cout << "OFF" << endl; 
    }
}

// 5. Smart Heater
void SmartHeater::showAction() {
    cout << name << " is ";
    if (status) { 
        cout << "ON" << endl; 
    } else { 
        cout << "OFF" << endl; 
    }
};


