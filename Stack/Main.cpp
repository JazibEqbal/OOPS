#include "Stack.h"
#include<iostream>

int main(){
    //Stack<int> s1;          //s1 is a type of integer value 
    //Stack<std::string> s2;  //s2 is a type of string value
    int arr[5] ={1,2,3,4,5};
    Stack<int> s1(arr,5); //arr is pointing to first element in the array always
    Stack<std::string> s2;
    s2.push("Jaja");
    s2.push("haha");
    std::cout<<s2.isFull()<<"\n";
    return 0;
}

//T gets resolved at compile time
//Template functions can not be defined in .cpp file ---- error (undefined reference)