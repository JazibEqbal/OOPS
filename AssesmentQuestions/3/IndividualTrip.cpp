#include "IndividualTrip.h"

IndividualTrip::IndividualTrip(std::string id, std::string driver, int distance, int rating, VehicleType types, int tripDuration) : Trip(id, driver, distance, rating, types), individualTripDuration{tripDuration} {}

IndividualTrip::~IndividualTrip()
{
    std::cout << "Dest\n";
};

float IndividualTrip::calculateFare(){
    
}
