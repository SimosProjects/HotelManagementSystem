#include "RoomBooking.h"

//Constructor
RoomBooking::RoomBooking(const Room& room, const std::string& guestName, const int& numberOfNights) {}

//Destructor
RoomBooking::~RoomBooking() {}

//Returns room
Room RoomBooking::getRoom() {
    return room;
}

//Returns guest name
std::string RoomBooking::getGuestName() {
    return guestName;
}

//Return number of nights
int RoomBooking::getNumberOfNights() {
    return numberOfNights;
}