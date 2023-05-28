#ifndef STACKARR_H
#define STACKARR_H
#include<iostream>

#define MAX_SIZE 5

class StackArray
{
private:
    int stackTop;
    int *arr_stack;
    int size;
public:
    StackArray() = delete;
    StackArray(const StackArray &obj) = default;
    StackArray(int s);
    ~StackArray();

    void push(int element);

    void pop();

    int getStackTop() const { return stackTop; }

    int getSize() const { return size; }

    void display();
};

#endif // STACKARR_H
