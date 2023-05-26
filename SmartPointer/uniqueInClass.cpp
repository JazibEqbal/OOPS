#include<iostream>
#include<memory>

class MyClass{
    private: 
       int x;
       double d;
    public:
      MyClass(int xx,double dd) : x{xx}, d{dd} {}
      void message(){
            std::cout<<"Data members are: "<<x <<" and "<<d<<"\n";
    }
};

int main(){
    std::unique_ptr<MyClass> p = std::make_unique<MyClass>(2,4.5);
    p->message();
    return 0;
}