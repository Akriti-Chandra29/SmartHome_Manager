//Manages all rooms
#include "room.h"
class SmartHome {
private:
    Room* rooms[5];  
    int count;       

public:
    SmartHome();
    void addRoom(Room* r);
    void showRooms();
};

