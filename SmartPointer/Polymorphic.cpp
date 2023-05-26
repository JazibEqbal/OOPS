#include <iostream>
#include <memory>

class Base
{
public:
    Base(){
        std::cout << "Base const\n";
    }
    virtual ~Base(){
        std::cout << "Base des\n";
    }    
    void printMessage(){
        std::cout << "Base message\n";
    }
    virtual void fun() =0;
};

class Derived : public Base
{
public:
    Derived(){
        std::cout << "Derived const\n";
    }
    ~Derived(){
        std::cout << "Derived des\n";
    }
    void printMessage(){
        std::cout << "Derived message\n";
    }
    void fun() override {
        std::cout<<"Overridden base Class by Derived\n";
    }
};

class SecondDerived : public Base
{
public:
    SecondDerived(){
        std::cout << "Second Derived const\n";
    }
    ~SecondDerived(){
        std::cout << "Second Derived des\n";
    }
    void printMessage(){
        std::cout << "Second Derived message\n";
    }
    void fun() override {
        std::cout<<"Overridden base Class by Second Derived\n";
    }
};

int main()
{
    std::unique_ptr<Base> p =std::make_unique<Derived>();
    //p->printMessage();
    p->fun();
    std::unique_ptr<Base> p2 =std::make_unique<SecondDerived>();
    p2->fun();
    return 0;
}
