#ifndef DEVICES_H
#define DEVICES_H

#include "SmartDevices.h"
#include <string>

// 1. Smart Light
class SmartLight : public SmartDevice {
public:
    SmartLight(std::string n, int i) : SmartDevice(n, i) {}
    void showAction() override; 
};


// 2. Smart Fan
class SmartFan : public SmartDevice {
public:
    SmartFan(std::string n, int i) : SmartDevice(n, i) {}
    void showAction() override;
};

// 3. Smart AC
class SmartAC : public SmartDevice {
public:
    SmartAC(std::string n, int i) : SmartDevice(n, i) {}
    void showAction() override;
};

// 4. Smart Camera
class SmartCamera : public SmartDevice {
public:
    SmartCamera(std::string n, int i) : SmartDevice(n, i) {}
    void showAction() override;
};

// 5. Smart Heater
class SmartHeater : public SmartDevice {
public:
    SmartHeater(std::string n, int i) : SmartDevice(n, i) {}
    void showAction() override;
};

#endif 
