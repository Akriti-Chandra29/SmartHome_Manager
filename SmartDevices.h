#ifndef SMARTDEVICES_H
#define SMARTDEVICES_H

#include <string>

class SmartDevice {
protected:
    std::string name; 
    int id;

public:
    bool status;

    SmartDevice(std::string deviceName, int deviceId) {
        name = deviceName;
        id = deviceId;
        status = false;
    }

    virtual ~SmartDevice() {}


    virtual void showAction() = 0;

    std::string getName() { return name; }  
    int getId() { return id; }

    void changeStatus() {
        if (status == true) {
            status = false;
        } else {
            status = true;
        }
    } 
}; 

#endif 
