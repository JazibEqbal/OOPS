#include "Employee.h"
#include<iostream>

Employee::Employee(int id,std::string name,double salary):empId{id},empName{name},empSalary{salary} {}

void Employee::acceptDetails(int id,std::string name,double salary){
    this->empId=id;
    this->empName=name;
    this->empSalary=salary;
}

void Employee::displayDetails(){
    std::cout<<"The details of the employee is: \n";
    std::cout<<"Employee ID: "<<empId <<"\n";
    std::cout<<"Employee Name: "<<empName <<"\n";
    std::cout<<"Employee Salary: "<<empSalary <<"\n";
}

Employee::~Employee(){
    std::cout<<"Destructor called \n"; 
}

