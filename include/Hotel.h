#ifndef HOTEL_H
#define HOTEL_H

#include <string>
#include <vector>
#include "HotelLocation.h"

class Hotel {
private:
    std::string name;
    std::vector<HotelLocation> locations;

public:
    //Constructor definition
    Hotel(const std::string& name);

    //Destructor definition
    ~Hotel();

    //Add a hotel location
    void addLocation(const HotelLocation& location);

    //Accesor methods
    std::string getName();
    std::vector<HotelLocation> getLocations();
};

#endif