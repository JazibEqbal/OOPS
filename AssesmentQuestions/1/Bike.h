#ifndef BIKE_H
#define BIKE_H
#include<iostream>

class Bike{
private:
    long chassisNumber;
    std::string vehicleBrand;
    float exShowroomPrice;
    int numberOfSeats;
    float tax;
    float insuranceAmount;
    enum BikeTypes bikeTypes;
public:
    Bike() = delete;
    Bike(const Bike &obj) = default;
    

};

#endif // CAR_H