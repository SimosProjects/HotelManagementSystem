#ifndef ROOM_BOOKING_H
#define ROOM_BOOKING_H

#include <string>
#include "Room.h"

class RoomBooking {
private:
    Room room;
    std::string guestName;
    int numberOfNights;

public:
    //Constructor definition
    RoomBooking(const Room& room, const std::string& guestName, const int& numberOfNights);

    //Destructor definition
    ~RoomBooking();

    //Accesor methods
    Room getRoom();
    std::string getGuestName();
    int getNumberOfNights();
};

#endif