#ifndef BIKE_H
#define BIKE_H
#include<iostream>
#include "BikeTypes.h"
#include "Vehicle.h"

class Bike : public Vehicle
{
private:
    enum class BikeTypes bikeTypes;
public:
    Bike() = delete;
    Bike(const Bike &obj) = default;
    Bike(int chasNumber, std::string brand, float showroomPrice, float tax, float insureAmount, enum class BikeTypes types);
    ~Bike();

    std::string getBikeTypes();
    void setBikeTypes(enum class BikeTypes types);

};

#endif // CAR_H