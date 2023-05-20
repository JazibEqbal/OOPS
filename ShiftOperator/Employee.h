#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>

class Employee{
    private:
      int employeeId;
      std::string employeeName;
    public:
       Employee(int id,std::string name);
       ~Employee();

       int getEmployeeId() const { return employeeId;};
       void setEmployeeId(int employeeId_){
        employeeId = employeeId_;
       }

       std::string getEmployeeName() const { return employeeName};
       void setEmployeeName(const std::string &employeeName_) {
        employeeName = employeeName_;
       }

       friend std::ostream& operator << (std::ostream& os, Employee &obj);
};
#endif

//one object becomes argument of other object in operator +overloading.