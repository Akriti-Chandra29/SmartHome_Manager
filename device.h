#include <iostream>
using namespace std;

class Device {
protected:
    string name;
    bool status;

public:
    Device(string n);

    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual void showStatus() = 0;

    string getName();
    bool getStatus();

    virtual ~Device() {}
};
