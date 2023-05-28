#include "StackArr.h"

StackArray::StackArray(int s) : size{s} {}

StackArray::~StackArray()
{
    std::cout<<"des\n";
}

void StackArray::push(int element)
{
    if(getStackTop() == getSize() - 1){
        std::cout<<"full\n";
    }else{
        this->stackTop++;
        this->arr_stack[stackTop] = element;
    }
}
void StackArray::pop(){
    if(getStackTop() == -1){
        std::cout<<"empty\n";
    }else{
        this->stackTop--;
    }
}
void StackArray::display(){
    for(int i=getStackTop(); i<getSize(); i++){
        std::cout<<this->arr_stack[i]<<"\n";
    }
};
