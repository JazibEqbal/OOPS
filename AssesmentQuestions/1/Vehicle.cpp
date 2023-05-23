#include "Vehicle.h"

Vehicle::Vehicle(int chassNumber, std::string brand, float showRoomPrice, float tax, float amount)
 : chassisNumber{chassNumber}, vehicleBrand{brand}, exShowroomPrice{showRoomPrice}, tax{tax}, insuranceAmount{amount} {}

Vehicle::~Vehicle()
{
   std::cout<<"Vehicle destroyed\n";
}

// void Vehicle::setDetails(int chasNumber, std::string brand, float showroomPrice, float tax, float insureAmount)
// {
//     this->chassisNumber = chasNumber;
//     this->vehicleBrand = brand;
//     this->exShowroomPrice = showroomPrice;
//     this->tax = tax;
//     this->insuranceAmount = insureAmount;
// }
