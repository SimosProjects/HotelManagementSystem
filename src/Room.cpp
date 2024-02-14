#include "Room.h"

//Constructors
Room::Room() {}

Room::Room(const int& roomNumber, const int& bookingPrice, const std::string& roomStyle) {}

//Destructor
Room::~Room() {}

//Return room number
int Room::getRoomNumber() {
    return roomNumber;
}

//Return booking price
int Room::getBookingPrice() {
    return bookingPrice;
}

//Return room style
std::string Room::getRoomStyle() {
    return roomStyle;
}