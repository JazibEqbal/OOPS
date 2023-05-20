#include "Manager.h"

Manager::Manager(int id, std::string name, float salary, int size): Employee(id,name,salary) , teamSize{size} {}

Manager::Manager(int id, std::string name, float salary) :Employee(id,name,salary) {}

Manager::~Manager()
{
    std::cout<<"Manager destructor called\n";
}

void Manager::calculateTax(){
    std::cout<<"Tax cut is "<<this->empSalary*0.1f<<"\n";
}