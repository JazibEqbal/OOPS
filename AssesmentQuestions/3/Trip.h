#ifndef TRIP_H
#define TRIP_H
#include <iostream>
#include "VehicleType.h"

class Trip
{
private:
    std::string tripId;
    std::string tripDriver;
    int tripDistance;
    int tripRating;
    enum VehicleType tripVehicleType;

public:
    Trip(std::string id, std::string driver, int distance, int rating, enum VehicleType);
    virtual ~Trip();

    std::string getTripId() const { return tripId; }
    void setTripId(const std::string &tripId_) { tripId = tripId_; }

    std::string getTripDriver() const { return tripDriver; }
    void setTripDriver(const std::string &tripDriver_) { tripDriver = tripDriver_; }

    int getTripDistance() const { return tripDistance; }
    void setTripDistance(int tripDistance_) { tripDistance = tripDistance_; }

    int getTripRating() const { return tripRating; }
    void setTripRating(int tripRating_) { tripRating = tripRating_; }

    int getTripVehicleType()
    {
        if (tripVehicleType == REGULAR)
        {
            return 25;
        }
        else if (tripVehicleType == COMFORT)
        {
            return 30;
        }
        else
        {
            return 50;
        }
    };
    void setTripVehicleType(enum VehicleType types)
    {
        if (types == REGULAR)
        {
            this->tripVehicleType = REGULAR;
        }
        else if (types == COMFORT)
        {
            this->tripVehicleType = COMFORT;
        }
        else
        {
            this->tripVehicleType = PREMIUM;
        }
    }

    virtual float calculateFare() = 0;

    virtual float calculateFare(float surge) = 0;

    virtual bool isTripAsPerStandard() = 0;
};

#endif