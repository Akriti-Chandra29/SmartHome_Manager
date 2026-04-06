#include "room.h"
#include <iostream>
using namespace std;

Room::Room(string name) {
    roomName = name;
    count = 0;
}

void Room::addDevice(Device* d) {
    if (count < 10) {
        devices[count] = d;
        count++;
    } else {
        cout << "Cannot add more devices\n";
    }
}

void Room::showDevices() {
    cout << "\nDevices in " << roomName << ":\n";

    for (int i = 0; i < count; i++) {
        devices[i]->showStatus();
    }
}

void Room::controlDevice(string name) {
    bool found = false;

    for (int i = 0; i < count; i++) {
        if (devices[i]->getName() == name) {
            devices[i]->turnOn();
            found = true;
        }
    }

    if (!found) {
        cout << "Device not found\n";
    }
}

void Room::controlDevice(string name, int val) {
    for (int i = 0; i < count; i++) {
        if (devices[i]->getName() == name) {

            Fan* f = (Fan*)devices[i];

            f->setSpeed(val);
            f->turnOn();
        }
    }
}
