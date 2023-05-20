#ifndef CAR_H
#define CAR_H
#include "CarTypes.h"
#include <iostream>

class Car
{
private:
    int chassisNumber;
    std::string vehicleBrand;
    float exShowroomPrice;
    int numberOfSeats;
    float tax;
    float insuranceAmount;
    enum CarTypes carTypes;

public:
    Car() = default;
    Car(const Car &obj) = default;
    Car(int chasNumber, std::string brand, float showroomPrice, int seats, float tax, float insureAmount, enum CarTypes types);
    void setDetails(int chasNumber, std::string brand, float showroomPrice, int seats, float tax, float insureAmount);
    ~Car();
    void getDetails(int chasNumber);
    void setCarTypes(enum CarTypes);
    std::string getCarTypes();
    float getTax() const { return tax; }
    int getNumberOfSeats() const { return numberOfSeats; }
    float getExShowroomPrice() const { return exShowroomPrice; }
    std::string getVehicleBrand() const { return vehicleBrand; }
    int getChassisNumber() const { return chassisNumber; }
    float getInsuranceAmount() const { return insuranceAmount; }
};

#endif // CAR_H
