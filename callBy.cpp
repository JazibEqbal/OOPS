#include<iostream>

void magic(int data){
    std::cout<<"Address of argument passed is: "<<&data<<"\n";
    std::cout<<"Value inside the argument is: "<<data<<"\n";
}

int main(){
    int n1=100;
    magic(10);  //integer literal
    magic(n1);
    //magic(&n1); // call by pointers
    return 0;
}

// lvalues: anything that has an address in memory and which can be obtained


/*
call by value means the data passed to the function has different address inside and outside the main function
it maintains two copies so it leads to wastage of memory
if you want the adress and value of n1 inside the main function then there adress will be different.
Think as two people with the same name but lives in different house at different location */