#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"

/*
  Manager has 1 attribute
    teamSize
    
  we need 3 constructors
    1) a copy constructor to copy data of an existing manager
    2) A parameterized constructor that takes 4 arguments
       id,name,salary,size
    3) A parameterized constructor that takes 3 arguments
       id,name size
    
   Generate getters and setters for teamSize

   we must override the method calculateTax by specifying 10% of salary as Tax
   make sure we inherit from employee class 
*/

class Manager : public Employee
{
private:
    int teamSize;
public:
    Manager(const Manager &obj)= default;
    Manager(int id,std::string name,float salary,int size);
    Manager(int id,std::string name,float salary);
    ~Manager();
    void calculateTax();  //acts as a behaviour
    int getTeamSize() const { return teamSize; }
    void setTeamSize(int teamSize_) { teamSize = teamSize_; }
};


#endif