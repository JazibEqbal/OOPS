#ifndef VEHICLE_H
#define VEHICLE_H
#include<iostream>
#include "CarTypes.h"

class Vehicle
{
private:
    int chassisNumber;
    std::string vehicleBrand;
    float exShowroomPrice;
    float tax;
    float insuranceAmount;
public:
    Vehicle() = delete;
    Vehicle(const Vehicle &obj) = default;
    Vehicle(int chassNumber,std::string brand,float showRoomPrice, float tax,float amount);
    virtual ~Vehicle();

    int getChassisNumber() const { return chassisNumber; }
    void setChassisNumber(int chassisNumber_) { chassisNumber = chassisNumber_; }

    std::string getVehicleBrand() const { return vehicleBrand; }
    void setVehicleBrand(const std::string &vehicleBrand_) { vehicleBrand = vehicleBrand_; }

    float getExShowroomPrice() const { return exShowroomPrice; }
    void setExShowroomPrice(float exShowroomPrice_) { exShowroomPrice = exShowroomPrice_; }

    float getTax() const { return tax; }
    void setTax(float tax_) { tax = tax_; }

    float getInsuranceAmount() const { return insuranceAmount; }
    void setInsuranceAmount(float insuranceAmount_) { insuranceAmount = insuranceAmount_; }
    
    //void setDetails(int chasNumber, std::string brand, float showroomPrice, float tax, float insureAmount);
    
};

#endif // VEHICLE_H
