#include "RoomCharge.h"

//Constructor
RoomCharge::RoomCharge(const Room& room, const std::string& chargeName, const int& chargeAmount) {}

//Destructor
RoomCharge::~RoomCharge() {}

//Return room
Room RoomCharge::getRoom() {
    return room;
}

//Return charge name
std::string RoomCharge::getChargeName() {
    return chargeName;
}

//Return charge amount
int RoomCharge::getChargeAmount() {
    return chargeAmount;
}