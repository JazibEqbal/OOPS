#ifndef CAR_H
#define CAR_H
#include "CarTypes.h"
#include <iostream>
#include "Vehicle.h"

class Car : public Vehicle
{
private:
    int numberOfSeats;
    enum class CarTypes carTypes;
public:
    Car() = default;
    Car(const Car &obj) = default;
    Car(int chasNumber, std::string brand, float showroomPrice, float tax, float insureAmount, int seats, enum class CarTypes types);
    ~Car();
    void getDetails(int chasNumber);
    void setCarTypes(enum class CarTypes);
    std::string getCarTypes();

    int getNumberOfSeats() const { return numberOfSeats; }
    void setNumberOfSeats(int numberOfSeats_) { numberOfSeats = numberOfSeats_; }
};

#endif // CAR_H
