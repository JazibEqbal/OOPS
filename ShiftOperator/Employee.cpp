#include "Employee.h"
#include<iostream>

Employee::Employee(Employee &obj)
{
    
}

Employee::Employee(int id, std::string name)
{
}

std::ostream& operator <<(std::ostream &os,Employee &obj){
    return os << "Employee[\tName: "<<obj.employeeName <<"\tID: "<<obj.employeeId<<"]";
};


