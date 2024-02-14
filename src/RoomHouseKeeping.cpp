#include "RoomHouseKeeping.h"

//Constructor
RoomHouseKeeping::RoomHouseKeeping(const Room& room, const std::string& date, const std::string& status) {}

//Destructor
RoomHouseKeeping::~RoomHouseKeeping() {}

//Returns room
Room RoomHouseKeeping::getRoom() {
    return room;
}

//Returns date
std::string RoomHouseKeeping::getDate() {
    return date;
}

//Returns room status
std::string RoomHouseKeeping::getStatus() {
    return status;
}