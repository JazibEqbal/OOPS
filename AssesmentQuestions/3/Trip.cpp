#include "Trip.h"

Trip::Trip(std::string id, std::string driver, int distance, int rating, VehicleType types) : tripId{id}, tripDriver{driver}, tripDistance{distance}, tripRating{rating}, tripVehicleType{types} {}

Trip::~Trip()
{
    std::cout << "trip\n";
}
