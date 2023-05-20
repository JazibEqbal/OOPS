#include "Employee.h"
#include "Manager.h"

int main(){
    Manager *m = new Manager(1,"hfhf",78.8,2);
    std::cout<<"Employee Name is: "<<m->getEmpName()<<"\n";
    m->calculateTax();
    delete m;
    return 0;
}