#include "Employee.h"
#include <iostream>

int main()
{
    //Employee e;
    int id;
    std::cout<<"Enter employee id: \n";
    std::cin>>id;
    std::cout<<"Enter employee Name: \n";
    std::string name;
    std::cin.ignore();
    std::getline(std::cin,name);
    std::cout<<"Enter employee salary: \n";
    double salary;
    std::cin>>salary;
    Employee *e = new Employee(id,name,salary);
    e->acceptDetails(id,name,salary);
    e->displayDetails();
    // e.acceptDetails(1, "john", 99);
    // e.displayDetails();
    return 0;
}