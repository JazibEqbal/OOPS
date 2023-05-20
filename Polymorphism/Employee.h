#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>

/*
  Employee has 3 attributes
    Id
    Name
    Salary
  
  Employee can be constructed in 3 ways
    1) copy fromanother employee
    2) initialize with id and name
    3) initialize with id,name and salary

    Id & name are private, salary is protected

    A memeber function called calculateTax is to be created.
    This function is abstract
    hence, class is also abstract

    add getters and setters for all APPLICABLE properties
*/
class Employee
{
private:
    int empId;
    std::string empName;
protected:
    float empSalary;
public:
    Employee(const Employee &obj)=default;
    Employee(int id,std::string name);
    Employee(int id,std::string name,float salary);
    virtual ~Employee();
    virtual void calculateTax()=0;
    int getEmpId() const { return empId; }
    void setEmpId(int empId_) { empId = empId_; }

    float getEmpSalary() const { return empSalary; }
    void setEmpSalary(float empSalary_) { empSalary = empSalary_; }

    std::string getEmpName() const { return empName; }
    void setEmpName(const std::string &empName_) { empName = empName_; }
};

#endif