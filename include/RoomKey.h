#ifndef ROOM_KEY_H
#define ROOM_KEY_H

#include <string>
#include "Room.h"

class RoomKey {
private:
    Room room;
    int keyId;
    std::string barcode;

public:
    //Constructor definition
    RoomKey(const Room& room, const int& keyId, const std::string& barcode);

    //Destructor definition
    ~RoomKey();

    //Accesor methods
    Room getRoom();
    int getKeyId();
    std::string getBarcode();
};

#endif