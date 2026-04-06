#include "device.h"

class Room {
private:
    string roomName;   

    Device* devices[10]; 
    int count;            

public:
    Room(string name);
    void addDevice(Device* d);

    // display all devices
    void showDevices();

    // function overloading
    void controlDevice(string name);            
    void controlDevice(string name, int val);  
};//Room class manages multiple devices inside a room
