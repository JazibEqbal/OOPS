#include "Car.h"

Car::Car(int chasNumber, std::string brand, float showroomPrice, float tax, float insureAmount,int seats, enum class CarTypes types)
    : Vehicle(chasNumber, brand, showroomPrice, tax, insureAmount), numberOfSeats{seats}, carTypes{types} {}

Car::~Car()
{
    std::cout << "Car with " << this->getChassisNumber() << " destroyed.\n";
}

void Car::getDetails(int chasNumber)
{
    if (this->getChassisNumber() == chasNumber)
    {
        std::cout << "Chassis Number is: " << getChassisNumber() << "\n"
                      << "Car Brand is: " << getVehicleBrand() << "\n"
                      << "Showroom Price is: " << getExShowroomPrice() << "\n"
                      << "Number of seats in the car is: " << getNumberOfSeats() << "\n"
                      << "Tax is: " << getTax() << "\n"
                      << "Insurance Amount is: " << getInsuranceAmount() << "\n";
    }else{
        std::cout << "No car found with chassis number: " << chasNumber << "\n";
    }
}

void Car::setCarTypes(enum class CarTypes types)
{
    if (types == CarTypes::SUV)
    {
        this->carTypes = CarTypes::SUV;
    }
    else if (types == CarTypes::HATCHBACK)
    {
        this->carTypes = CarTypes::HATCHBACK;
    }
    else
    {
        this->carTypes = CarTypes::SEDAN;
    }
};

std::string Car::getCarTypes()
{
    if (carTypes == CarTypes::SUV)
    {
        return "SUV";
    }
    else if (carTypes == CarTypes::HATCHBACK)
    {
        return "HATCHBACK";
    }
    else
    {
        return "SEDAN";
    }
}