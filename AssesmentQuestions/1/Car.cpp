#include "Car.h"

Car::Car(int chasNumber, std::string brand, float showroomPrice, int seats, float tax, float insureAmount, CarTypes types) : chassisNumber{chasNumber}, vehicleBrand{brand}, exShowroomPrice{showroomPrice}, numberOfSeats{seats}, tax{tax}, insuranceAmount{insureAmount},carTypes{types} {}

void Car::setDetails(int chasNumber, std::string brand, float showroomPrice, int seats, float tax, float insureAmount)
{
    this->chassisNumber = chasNumber;
    this->vehicleBrand = brand;
    this->exShowroomPrice = showroomPrice;
    this->numberOfSeats = seats;
    this->tax = tax;
    this->insuranceAmount = insureAmount;
}

Car::~Car()
{
    std::cout << "Car with " << this->chassisNumber << " destroyed.\n";
}

void Car::getDetails(int chasNumber)
{
    if (this->chassisNumber == chasNumber)
    {
        std::cout<<"Details founded is:\n";
        if (carTypes == CarTypes::SUV)
        {
            std::cout << "Chassis Number is: " << getChassisNumber() << "\n"
                      << "Car Brand is: " << getVehicleBrand() << "\n"
                      << "Showroom Price is: " << getExShowroomPrice() << "\n"
                      << "Number of seats in the car is: " << getNumberOfSeats() << "\n"
                      << "Tax is: " << getTax() << "\n"
                      << "Insurance Amount is:" << getInsuranceAmount() << "\n";
        }
        else if (carTypes == CarTypes::HATCHBACK)
        {
            std::cout << "Chassis Number is: " << getChassisNumber() << "\n"
                      << "Car Brand is: " << getVehicleBrand() << "\n"
                      << "Showroom Price is: " << getExShowroomPrice() << "\n"
                      << "Number of seats in the car is: " << getNumberOfSeats() << "\n"
                      << "Tax is: " << getTax() << "\n"
                      << "Insurance Amount is: " << getInsuranceAmount() << "\n";
        }
        else if (carTypes == CarTypes::SEDAN)
        {
            std::cout << "Chassis Number is: " << getChassisNumber() << "\n"
                      << "Car Brand is: " << getVehicleBrand() << "\n"
                      << "Showroom Price is: " << getExShowroomPrice() << "\n"
                      << "Number of seats in the car is: " << getNumberOfSeats() << "\n"
                      << "Tax is: " << getTax() << "\n"
                      << "Insurance Amount is: " << getInsuranceAmount() << "\n";
        }
    }
    else
    {
        std::cout << "No car found with " << chasNumber << " number \n";
    }
}

void Car::setCarTypes(enum CarTypes types)
{
    if (types == SUV)
    {
        this->carTypes = SUV;
    }
    else if (types == HATCHBACK)
    {
        this->carTypes = HATCHBACK;
    }
    else
    {
        this->carTypes = SEDAN;
    }
};

std::string Car::getCarTypes()
{
    if (carTypes == SUV)
    {
        return "SUV";
    }
    else if (carTypes == HATCHBACK)
    {
        return "HATCHBACK";
    }
    else
    {
        return "SEDAN";
    }
}