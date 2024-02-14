#include "RoomKey.h"

//Constructor
RoomKey::RoomKey(const Room& room, const int& keyId, const std::string& barcode) {}

//Destructor
RoomKey::~RoomKey() {}

//Return room
Room RoomKey::getRoom() {
    return room;
}

//Return key id
int RoomKey::getKeyId() {
    return keyId;
}

//Return barcode
std::string RoomKey::getBarcode() {
    return barcode;
}