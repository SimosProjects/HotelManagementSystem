#ifndef ROOM_HOUSE_KEEPING_H
#define ROOM_HOUSE_KEEPING_H

#include <string>
#include "Room.h"

class RoomHouseKeeping {
private:
    Room room;
    std::string date, status;

public:
    //Constructor definition
    RoomHouseKeeping(const Room& room, const std::string& date, const std::string& status);

    //Destructor definition
    ~RoomHouseKeeping();

    //Accesor methods
    Room getRoom();
    std::string getDate();
    std::string getStatus();
};

#endif