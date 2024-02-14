#ifndef HOTEL_LOCATION_H
#define HOTEL_LOCATION_H

#include <string>

class HotelLocation {
private:
    std::string location, address;
    long int phoneNumber;

public:
    //Constructor definition
    HotelLocation(const std::string& hoteLocation, const std::string& hotelAddress, const long int& hotelPhoneNumber);

    //Destructor definition
    ~HotelLocation();

    //Accesor methods
    std::string getLocation();
    std::string getAddress();
    long int getPhoneNumber();
};

#endif