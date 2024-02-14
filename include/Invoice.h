#ifndef INVOICE_H
#define INVOICE_H

#include <string>
#include <vector>
#include "Room.h"
#include "RoomCharge.h"

class Invoice {
private:
    Room room;
    std::vector<RoomCharge> charges;

public:
    //Constructor definition
    Invoice(const Room& room, const std::vector<RoomCharge>& charges);

    //Destructor definition
    ~Invoice();

    //Accesor methods
    Room getRoom();
    std::vector<RoomCharge> getCharges();
};

#endif