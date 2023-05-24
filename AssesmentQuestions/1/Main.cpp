#include "Car.h"
#include "Bike.h"
#include <iostream>

// enum CarTypes car()
// {
//     std::cout << "Choose 1 for SUV\n"
//               << "Choose 2 for HATCHBACK\n"
//               << "Choose 3 for SEDAN\n";
//     int choice;
//     std::cin >> choice;
//     switch (choice)
//     {
//     case 1:
//         return CarTypes::SUV;
//         break;
//     case 2:
//         return CarTypes::HATCHBACK;
//         break;
//     case 3:
//         return CarTypes::SEDAN;
//         break;
//     default:
//         return CarTypes::SUV;
//         break;
//     }
// };

Car *inventory[2];
//Bike *bikeInventory[2];

void getDetailsByChesisNumber(int number){
    for (int i = 0; i < 2; i++)
    {
        if (number == inventory[i]->getChassisNumber())
        {
            inventory[i]->getDetails(number);
            inventory[i]->getCarTypes();
        }
    }
}

int countVehicle(std::string str){
    int count = 0;
    for (int i = 0; i < 2; i++)
    {
        if (inventory[i]->getCarTypes() == str)
        {
            count++;
        }
    }
    return count;
}

float calculateAveragePrice(std::string str1){
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {
        if (inventory[i]->getCarTypes() == str1)
        {
            sum += inventory[i]->getExShowroomPrice();
        }
    }
    return (sum/countVehicle(str1));
}

void deleteMemory(){
    for (int i = 0; i < 2; i++){
        delete inventory[i];
    }
}

int main()
{
    Car *c1 = new Car(1, "b", 23, 220, 29, 4, CarTypes::SUV);
    Car *c2 = new Car(2, "aa", 43, 120, 9, 34, CarTypes::HATCHBACK);
    // Bike *b1 = new Bike(3, "cc", 3, 1220, 91, BikeTypes::COMMUTE);
    // Bike *b2 = new Bike(4, "dd", 11, 10, 1, BikeTypes::SPORTS);

    inventory[0] = {c1};
    inventory[1] = {c2};

    // bikeInventory[0] = {b1};
    // bikeInventory[1] = {b2};

    std::cout << "Choose chassis Number:";
    int number;
    std::cin >> number;
    getDetailsByChesisNumber(number);

    std::cout << "Enter category to find count:\n";
    std::string str;
    std::cin >> str;
    std::cout << "Number of " << str << " founded is " << countVehicle(str) << "\n";

    std::cout << "Enter category to find average price\n";
    std::string str1;
    std::cin >> str1;

    std::cout << "Average price for " << str1 << " category is " << calculateAveragePrice(str1) << "\n";
    
    deleteMemory();
    return 0;
}