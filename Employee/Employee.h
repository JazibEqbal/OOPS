#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>

class Employee{
    private:
       int empId;
       std::string empName;
       double empSalary;
    public:
       Employee(int id,std::string name,double salary);
       void acceptDetails(int id,std::string name,double salary);
       void displayDetails();
       ~Employee();

       int getEmpId() const { return empId; }

       std::string getEmpName() const { return empName; }
       
       double getEmpSalary() const { return empSalary; }
};

#endif