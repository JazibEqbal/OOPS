#ifndef SHAREDTRIP_H
#define SHAREDTRIP_H
#include "Trip.h"
class SharedTrip : public Trip
{
private:
    int individualTripDuration;
    int numberOfPassengers;

public:
    SharedTrip(std::string id, std::string driver, int distance, int rating, enum VehicleType, int tripDuration, int passengers);
    ~SharedTrip();

    int getIndividualTripDuration() const { return individualTripDuration; }
    void setIndividualTripDuration(int individualTripDuration_) { individualTripDuration = individualTripDuration_; }

    float calculateFare();

    float calculateFare(float surge);

    int getNumberOfPassengers() const { return numberOfPassengers; }
    void setNumberOfPassengers(int numberOfPassengers_) { numberOfPassengers = numberOfPassengers_; }

    bool isTripAsPerStandard();
};

#endif // SHAREDTRIP_H
