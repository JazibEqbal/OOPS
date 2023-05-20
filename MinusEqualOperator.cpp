#include<iostream>

class A{
    private:
       int x;
       double d;
    public: 
       A(int xx,double dd);
       A &operator-=(const A &obj);
       friend A operator-(A obj1, const A &obj2);
       void printValues();
};

A::A(int xx,double dd): x{xx}, d{dd}{}

A &A::operator-=(const A &obj){
    x -=obj.x;
    d -=obj.d;
    return *this;
}

A operator-(A obj1, const A &obj2){
    obj1 -= obj2;
    return obj1;
}

void A::printValues()
{
    std::cout << "The values of x is: " << x << ", the value of d is: "<< d<<"\n";
}

int main(){
    A a1(1,2.0);
    A a2(2,2.0);
    A a3 = a1 - a2;
    a3.printValues();
    return 0;
}