#include <iostream>
#include "Hotel.h"

using namespace std;

int main() {
    cout << "Program Starting...." << endl;

    cout << "Testing Hotel Creation" << endl;
    Hotel newHotel1("Hilton");
    HotelLocation location1_1("Atlanta, GA", "89 E 10th St.", 9093582940);
    HotelLocation location1_2("San Diego, CA", "7382 N Chandler Ave", 6513426608);
    newHotel1.addLocation(location1_1);
    newHotel1.addLocation(location1_2);

    Hotel newHotel2("Super 8");
    HotelLocation location2_1("Jacksonville, FL", "663 E Inland Ct.", 7849304757);
    HotelLocation location2_2("Los Angeles, CA", "101 N Highland Ave", 3638479944);
    newHotel2.addLocation(location2_1);
    newHotel2.addLocation(location2_2);

    if(newHotel1.getName() == "Hilton") {
        cout << "Hilton Hotel created successfully" << endl;
    }

    for(auto location: newHotel1.getLocations()) {
        cout << location.getAddress() << endl;
        cout << location.getLocation() << endl;
        cout << location.getPhoneNumber() << endl;
    }

    if(newHotel2.getName() == "Super 8") {
        cout << "Super 8 Hotel created successfully" << endl;
    }

    for(auto location: newHotel2.getLocations()) {
        cout << location.getAddress() << endl;
        cout << location.getLocation() << endl;
        cout << location.getPhoneNumber() << endl;
    }

    return 0;
}