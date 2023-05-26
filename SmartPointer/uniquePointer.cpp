#include<iostream>
#include<memory>

int main(){
    //std::unique_ptr>data_type>(some_value) function.
    std::unique_ptr<int> p1(new int{123}); //creates a pointer to an object of type int and assigns a value of 123 to the object.
    std::cout<<*p1<<"\n";
    //better way by make_unique
    std::unique_ptr<int> p2 = std::make_unique<int>(1);
    std::cout<<*p2<<"\n";

    return 0;
}
