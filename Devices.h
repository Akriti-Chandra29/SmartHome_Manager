
#ifndef DEVICES_H
#define DEVICES_H

#include "SmartDevices.h"

class SmartLight : public SmartDevice {
public:
    SmartLight(string n, int i) : SmartDevice(n, i) {}
    void showAction() override; 
};


class SmartFan : public SmartDevice {
public:
    SmartFan(string n, int i) : SmartDevice(n, i) {}
    void showAction() override;
};


class SmartAC : public SmartDevice {
public:
    SmartAC(string n, int i) : SmartDevice(n, i) {}
    void showAction() override;
};


class SmartCamera : public SmartDevice {
public:
    SmartCamera(string n, int i) : SmartDevice(n, i) {}
    void showAction() override;
};


class SmartHeater : public SmartDevice {
public:
    SmartHeater(string n, int i) : SmartDevice(n, i) {}
    void showAction() override;
};
