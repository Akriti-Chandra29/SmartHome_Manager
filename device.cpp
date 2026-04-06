#include "device.h"

Device::Device(string n) {
    name = n;
    status = false;
}

string Device::getName() {
    return name;
}

bool Device::getStatus() {
    return status;
}

// LIGHT
Light::Light(string n) : Device(n) {}

void Light::turnOn() {
    status = true;
    cout << name << " Light is ON\n";
}

void Light::turnOff() {
    status = false;
    cout << name << " Light is OFF\n";
}

void Light::showStatus() {
    cout << name << " Light Status: " << (status ? "ON" : "OFF") << endl;
}

// FAN 
Fan::Fan(string n) : Device(n) {
    speed = 0;
}

void Fan::setSpeed(int s) {
    speed = s;
    cout << name << " Fan Speed set to " << speed << endl;
}

void Fan::turnOn() {
    status = true;
    cout << name << " Fan is ON\n";
}

void Fan::turnOff() {
    status = false;
    cout << name << " Fan is OFF\n";
}

void Fan::showStatus() {
    cout << name << " Fan Status: " << (status ? "ON" : "OFF")
         << " Speed: " << speed << endl;
}

// AC 
AC::AC(string n) : Device(n) {
    temp = 24;
}

void AC::setTemp(int t) {
    temp = t;
    cout << name << " AC Temperature set to " << temp << endl;
}

void AC::turnOn() {
    status = true;
    cout << name << " AC is ON\n";
}

void AC::turnOff() {
    status = false;
    cout << name << " AC is OFF\n";
}

void AC::showStatus() {
    cout << name << " AC Status: " << (status ? "ON" : "OFF")
         << " Temp: " << temp << endl;
}


bool operator==(Device &d1, Device &d2) {
    return d1.getName() == d2.getName();
}
