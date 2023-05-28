#include<iostream>

int main(){
    int x=123;
    //int *ptr = &x;
    int *ptr = new int {x};
    std::cout<<*ptr<<"\n"; //with * prints value inside it
    std::cout<<ptr<<"\n";  // without * prints address where x is stored
    delete ptr;
    return 0; 
}