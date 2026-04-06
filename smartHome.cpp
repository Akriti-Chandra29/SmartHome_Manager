//Adds and displays all rooms and their devices
#include "smartHome.h"
SmartHome::SmartHome() {
    count = 0;
}
void SmartHome::addRoom(Room* r) {
    if (count < 5) {
        rooms[count] = r;
        count++;
    } else {
        cout << "Cannot add more rooms";
    }
}
void SmartHome::showRooms() {
    cout <<Smart Home Status";

    for (int i = 0; i < count; i++) {
        rooms[i]->showDevices();
    }
}
