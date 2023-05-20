#ifndef INDIVIDUALTRIP_H
#define INDIVIDUALTRIP_H
#include "Trip.h"

class IndividualTrip : public Trip
{
private:
    int individualTripDuration;
public:
    IndividualTrip(std::string id,std::string driver, int distance,int rating,enum VehicleType,int tripDuration);
    ~IndividualTrip();
     
    int getIndividualTripDuration() const { return individualTripDuration; };
    void setIndividualTripDuration(int individualTripDuration_) { individualTripDuration = individualTripDuration_}; 

    float calculateFare(); 

    float calculateFare(float surge);
     
    bool isTripAsPerStandard();

};

#endif // INDIVIDUALTRIP_H
