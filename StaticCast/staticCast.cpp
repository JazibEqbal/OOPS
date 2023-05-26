#include<iostream>

int main(){
    int x=12;
    double d = 23.67;
    bool b = true;

    double d_result = static_cast<double>(x);
    std::cout<<"Int to Double: "<<d_result<<"\n";
    
    int int_result = static_cast<int>(d);
    std::cout<<"Double To Int: "<<int_result<<"\n";

    bool boolresult = static_cast<bool>(x); 
    std::cout << "Int to bool: " << boolresult << '\n';
    return 0;
}