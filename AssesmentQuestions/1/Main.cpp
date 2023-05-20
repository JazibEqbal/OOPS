#include "Car.h"
#include <iostream>

enum CarTypes car()
{
    std::cout << "Choose 1 for SUV\n"
              << "Choose 2 for HATCHBACK\n"
              << "Choose 3 for SEDAN\n";
    int choice;
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        return CarTypes::SUV;
        break;
    case 2:
        return CarTypes::HATCHBACK;
        break;
    case 3:
        return CarTypes::SEDAN;
        break;
    default:
        return CarTypes::SUV;
        break;
    }
};

int main()
{
    Car *inventory;
    inventory = new Car[2];
    for (int i = 0; i < 2; i++)
    {
        std::cout << "Enter chassis Number: ";
        int chassNumber;
        std::cin >> chassNumber;
        std::cout << "Enter Vehicle Brand: ";
        std::string brand;
        std::cin.ignore();
        std::getline(std::cin, brand);
        std::cout << "Enter Show Room Price: ";
        float showRoomPrice;
        std::cin >> showRoomPrice;
        std::cout << "Enter Number of seats: ";
        int seats;
        std::cin >> seats;
        std::cout << "Total Tax: ";
        float tax;
        std::cin >> tax;
        std::cout << "Enter Insurance Amount: ";
        float insAmount;
        std::cin >> insAmount;
        inventory[i].setDetails(chassNumber, brand, showRoomPrice, seats, tax, insAmount);
        enum CarTypes ans = car();
        inventory[i].setCarTypes(ans);
    }
    std::cout << "Choose chassis Number:";
    int number;
    std::cin >> number;
    for (int i = 0; i < 2; i++)
    {
        if (number == inventory[i].getChassisNumber())
        {
            inventory[i].getDetails(number);
            inventory[i].getCarTypes();
        }
    }
    std::cout<<"Enter category to find count:\n";
    std::string str;
    std::cin>>str;
    int count=0;
    for(int i=0;i<2;i++){
        if(inventory[i].getCarTypes() == str){
            count++;
        }
    }
    std::cout<<"Number of "<<str<<" founded is "<<count<<"\n";


    std::cout<<"Enter category to find average price\n";
    std::string str1;
    std::cin>>str1;
    int sum=0;
    for(int i=0;i<2;i++){
        if(inventory[i].getCarTypes() == str1){
            sum += inventory[i].getExShowroomPrice();
        }
    }
    std::cout<<"Average price for "<<str<<" category is "<< (sum/count)<<"\n";
    delete[] inventory;
    // std::cout<<c->getExShowroomPrice(3);
    // c->getCarTypes();
    return 0;
}