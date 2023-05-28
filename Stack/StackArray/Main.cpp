#include "StackArr.h"
#include<iostream>


int main(){
    //int arr[5] = {1,2,3,4,5};
    StackArray *stack = new StackArray(10);
    stack->push(1);
    stack->push(6);
    stack->display();
    delete stack;
    return 0;
}