#include "Hotel.h"

//Constructor
Hotel::Hotel(const std::string& hotelName) {
    name = hotelName;
}

//Destructor
Hotel::~Hotel() {}

//Adds a new hotel location
void Hotel::addLocation(const HotelLocation& location) {
    locations.push_back(location);
}

//Returns hotel name
std::string Hotel::getName() {
    return name;
}

//Returns hotel locations
std::vector<HotelLocation> Hotel::getLocations() {
    return locations;
}