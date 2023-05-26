#include <iostream>

class Base
{
public:
    void printMessage()
    {
        std::cout << "Base message\n";
    }
    Base()
    {
        std::cout << "Base const\n";
    }
    virtual ~Base()
    {
        std::cout << "Base des\n";
    }
};

class Derived : public Base
{
public:
    void printMessage()
    {
        std::cout << "Derived message\n";
    }
    Derived()
    {
        std::cout << "Derived const\n";
    }
    ~Derived()
    {
        std::cout << "Derived des\n";
    }
};

int main()
{
    Base *b = new Derived();
    b->printMessage();
    delete b;
}