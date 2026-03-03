#ifndef SMARTDEVICES_H
#define SMARTDEVICES_H

class SmartDevice {
protected:
    string name;
    int id;

public:
    bool status;

  
    SmartDevice(string deviceName, int deviceId) {
        name = deviceName;
        id = deviceId;
        status = false;
    }

  
    virtual ~SmartDevice() {}

    
    virtual void showAction() = 0;

    string getName() { return name; }
    int getId() { return id; }

    void changeStatus() {
        if (status == true) {
            status = false;
        } else {
            status = true;
        }
    } 
}
