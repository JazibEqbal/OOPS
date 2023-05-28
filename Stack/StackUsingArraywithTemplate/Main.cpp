#include"Stack.h"
#include<iostream>

int main(){
    int arr[5]={10,20,30,40,50};
    //s1 is a stack of integer values
    Stack<int> s1(arr,5);

    Stack<std::string> s2;
    s2.push("Anu");
}