#include "Trip.h"
#include "IndividualTrip.h"
#include "SharedTrip.h"
#include <iostream>

enum VehicleType vehicle()
{
    std::cout << "Choose 1 for REGULAR\n"
              << "Choose 2 for COMFORT\n"
              << "Choose 3 for PREMIUM\n";
    int choice;
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        return VehicleType::REGULAR;
        break;
    case 2:
        return VehicleType::COMFORT;
        break;
    case 3:
        return VehicleType::PREMIUM;
        break;
    default:
        return VehicleType::REGULAR;
        break;
    }
};

int main()
{
    enum VehicleType ans = vehicle();
    SharedTrip *s = new SharedTrip("oo","sibi",22,2,ans,20,4);
    // s->setTripId("12oox");
    // s->setTripDriver("Sunil");
    // s->setTripDistance(121);
    // s->setTripRating(4);
    // s->setTripVehicleType(ans);
    // s->setIndividualTripDuration(20);
    // s->setNumberOfPassengers(4);
    //std::cout << s->calculateFare(12)<<"\n";
    std::cout<<s->isTripAsPerStandard();
    return 0;
}