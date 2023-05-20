// #include "Stack.h"
// #include<iostream>

// Stack::Stack()
// {
    
// }

// Stack::Stack(int size, int top, int *stack)
// {
//     this->size = size;
//     this->top = top;
//     this->s = stack;
// }

// Stack::~Stack()
// {
//     std::cout<<"Stack memory destructor \n";
// }

// void Stack::createStack(Stack *stack)
// {
//     std::cout<<"Enter the size: \n";
//     std::cin>>stack->size;
//     stack->top == -1;
//     stack->s = new int[stack->size];
// }

// void Stack::displayStack(Stack *stack)
// {
//     for (int i = stack->top; i >= 0; i--)
//     {
//         std::cout << stack->s[i] << " ";
//     }
//     std::cout<<"\n";
// }

// void Stack::pushElement(Stack *stack, int element)
// {
//     if(stack->top == stack->size -1){
//         std::cout<<"Stack Overflow \n";
//         return;
//     } else {
//         stack->top++;
//         stack->s[stack->top] = element;
//     }
// }

// int Stack::popElement(Stack *stack)
// {
//     int x=-1;
//     if(stack->top == -1) {
//         std::cout<<"Stack Underflow \n";
//         return -1;
//     } else {
//         x= stack->s[stack->top];
//         stack->top--;
//     }
//     return x;
// }

// int Stack::peekElement(Stack *stack, int index)
// {
//     return stack->s[stack->top - index];
// }

// int Stack::isEmpty(Stack *stack)
// {
//     if(stack->top == -1) {
//         return 1;
//     }
//     else {
//     return 0;
//     }
// }

// int Stack::isFull(Stack *stack)
// {
//     if(stack->top == stack->size -1){
//         return 1;
//     } else {
//         return 0;
//     }
// }

// int Stack::stackTop(Stack *stack)
// {
//     if(!isEmpty(stack)){
//         return stack->s[stack->top];
//     } else {
//         return -1;
//     }
// }
