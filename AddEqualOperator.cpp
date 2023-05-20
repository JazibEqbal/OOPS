#include<iostream>

class A{
    private:
       int x;
       double d;
    public:
       A(int xx,double dd);
       A& operator+=(const A& obj);
       friend A operator+(A obj1,const A &obj2);
       void printValues();
};

A::A(int xx,double dd): x{xx}, d{dd}{}

A &A::operator+=(const A &obj){
    this->x +=obj.x;
    d +=obj.d;       // assigning value both way is fine
    std::cout<<"+= operator called here\n";
    return *this;
}

A operator+(A obj1, const A &obj2)
{
    obj1 +=obj2;
    std::cout<<"addition one called here\n";
    return obj1;
};

void A::printValues()
{
    std::cout << "The values of x is: " << x << ", the value of d is: "<< d<<"\n";
}

int main(){
    A a1(1,1.0);
    a1.printValues();
    A a2(2,2.0);
    a2.printValues();
    A a3 = a1+a2;
    a3.printValues();
    //a1 +=a2;   //calling operator += method here
    return 0;
}
