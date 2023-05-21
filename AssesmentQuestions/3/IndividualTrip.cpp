#include "IndividualTrip.h"

IndividualTrip::IndividualTrip(std::string id, std::string driver, int distance, int rating, VehicleType types, int tripDuration) : Trip(id, driver, distance, rating, types), individualTripDuration{tripDuration} {}

IndividualTrip::~IndividualTrip()
{
    std::cout << "Individual\n";
};

float IndividualTrip::calculateFare()
{
    float fare = getTripDistance() * getTripVehicleType();
    fare = fare + 0.18 * fare;
    return fare;
}

float IndividualTrip::calculateFare(float surge)
{
    float fare = (getTripDistance() * getTripVehicleType()) + (getIndividualTripDuration() * surge);
    fare = fare + 0.18 * fare;
    return fare;
}

bool IndividualTrip::isTripAsPerStandard()
{
    if (getTripVehicleType() == REGULAR)
    {
        return (getTripRating() >= 3 && (getIndividualTripDuration() <= 3 * getTripDistance()));
    }
    else if (getTripVehicleType() == COMFORT)
    {
        return (getTripRating() >= 4 && (getIndividualTripDuration() <= 3 * getTripDistance()));
    }
    else if (getTripVehicleType() == PREMIUM)
    {
        return (getTripRating() >= 4 && (getIndividualTripDuration() <= 4 * getTripDistance()));
    }
    else
    {
        return false;
    }
}
