#include "Employee.h"

Employee::Employee(int id,std::string name):empId{id}, empName{name}{}

Employee::Employee(int id,std::string name,float salary):empId{id}, empName{name}, empSalary{salary} {}

Employee::~Employee(){
    std::cout<<"Employee id "
    <<this->empId
    <<" is destroyed \n";
}
