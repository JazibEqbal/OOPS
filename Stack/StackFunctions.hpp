#include "Stack.h"
#include<iostream>

template <typename T>
Stack<T>::Stack(T* arr, int size)
{
    if(size > MAXSIZE){
        throw std::runtime_exception("Out of capacity!");
    }
    this->data = arr; //copy address inside arr into data
    this->capacity = size;
}

template <typename T>
Stack<T>::~Stack()
{
    std::cout<<"Stack object destroyed \n";
}

template <typename T>
void Stack<T>::push(T arg)
{
    if(this->isFull()){
        throw std::runtime_error("Stack is Full!");
    }
    *(this->data + (++this->stackTop)) = arg; //pre incrementing the position
}

template <typename T>
T Stack<T>::pop()
{
    if(this->isEmpty()){
        throw std::runtime_error("Stack is empty!");
    }
    return *(this->data + this->stackTop--);
}

template <typename T>
const T& Stack<T>::peek()
{
    return *(this->data + this->stackTop);
}