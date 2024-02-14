#include "HotelLocation.h"

//Constructor
HotelLocation::HotelLocation(const std::string& hotelLocation, const std::string& hotelAddress, const long int& hotelPhoneNumber) {
    location = hotelLocation;
    address = hotelAddress;
    phoneNumber = hotelPhoneNumber;
}

//Destructor
HotelLocation::~HotelLocation() {}

//Returns hotel location
std::string HotelLocation::getLocation() {
    return location;
}

//Returns hotel address
std::string HotelLocation::getAddress() {
    return address;
}

//Returns hotel phone number
long int HotelLocation::getPhoneNumber() {
    return phoneNumber;
}