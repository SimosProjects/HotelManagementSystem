#ifndef ROOM_H
#define ROOM_H

#include <string>

class Room {
private:
    int roomNumber, bookingPrice;
    std::string roomStyle;

public:
    //Constructor definitions
    Room();
    Room(const int& roomNumber, const int& bookingPrice, const std::string& roomStyle);

    //Destructor definition
    ~Room();

    //Accesor methods
    int getRoomNumber();
    int getBookingPrice();
    std::string getRoomStyle();
};

#endif