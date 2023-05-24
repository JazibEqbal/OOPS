#include "Bike.h"

Bike::Bike(int chasNumber, std::string brand, float showroomPrice, float tax, float insureAmount, BikeTypes types)
  : Vehicle(chasNumber,brand,showroomPrice,tax,insureAmount) , bikeTypes{types} {}

Bike::~Bike()
{
    std::cout<<"Bike Destroyed\n";
}

void Bike::setBikeTypes(BikeTypes types)
{
    if(types == BikeTypes::COMMUTE){
            this->bikeTypes = BikeTypes::COMMUTE;
    } else if(types == BikeTypes::SPORTS){
            this->bikeTypes = BikeTypes::SPORTS;
    } else {
            this->bikeTypes = BikeTypes::OFFROADER;
    }
}

std::string Bike::getBikeTypes()
{
    if(bikeTypes == BikeTypes::COMMUTE){
        return "COMMUTE";
    } else if(bikeTypes == BikeTypes::SPORTS){
        return "SPORTS";
    }else {
        return "OFFROADER";
    }
}
