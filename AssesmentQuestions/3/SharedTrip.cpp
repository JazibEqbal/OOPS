#include "SharedTrip.h"

SharedTrip::SharedTrip(std::string id, std::string driver, int distance, int rating, VehicleType types, int tripDuration, int passengers) : Trip(id, driver, distance, rating, types), individualTripDuration{tripDuration}, numberOfPassengers{passengers}
{
}

SharedTrip::~SharedTrip()
{
    std::cout << "Shared\n";
}

float SharedTrip::calculateFare()
{
    float baseFare = getTripDistance() * getTripVehicleType();
    baseFare = baseFare + 0.18 * baseFare;
    float sharedFare = baseFare / getNumberOfPassengers();
    return sharedFare;
}

float SharedTrip::calculateFare(float surge)
{
    float baseFare = (getTripDistance() * getTripVehicleType()) + (getIndividualTripDuration() * surge);
    baseFare = baseFare + 0.18 * baseFare;
    float sharedFare = baseFare / getNumberOfPassengers();
    return sharedFare;
}

bool SharedTrip::isTripAsPerStandard()
{
    if (getTripRating() >= 3)
    {
        return true;
    }
    else
    {
        return false;
    }
}
