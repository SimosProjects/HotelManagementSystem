#include "Invoice.h"

//Constructor
Invoice::Invoice(const Room& room, const std::vector<RoomCharge>& charges) {}

//Destructor
Invoice::~Invoice() {}

//Returns room
Room Invoice::getRoom() {
    return room;
}

//Returns charges
std::vector<RoomCharge> Invoice::getCharges() {
    return charges;
}