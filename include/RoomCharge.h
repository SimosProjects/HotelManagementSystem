#ifndef ROOM_CHARGE_H
#define ROOM_CHARGE_H

#include <string>
#include "Room.h"

class RoomCharge {
private:
    Room room;
    std::string chargeName;
    int chargeAmount;

public:
    //Constructor definition
    RoomCharge(const Room& room, const std::string& chargeName, const int& chargeAmount);

    //Destructor definition
    ~RoomCharge();

    //Accesor methods
    Room getRoom();
    std::string getChargeName();
    int getChargeAmount();
};

#endif