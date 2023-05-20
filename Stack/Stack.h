#ifndef STACK_H
#define STACK_H

#define MAXSIZE 10;

template<typename T>
class Stack{
    private: 
      T* data;
      int stackTop=-1;
      int capacity=10;
    public:
      //default constructor with zero argument
      Stack() = default;
      /*
        This constructor takes a pointer of type T along with a size parameter(integer)
        It must construct a new stack with elements upto number "size" copied fromthe pointer
        location into the data of this object
      */
      Stack(T* arr,int size);
      /*
        copy constructor to copy data from data* of the argument into the current object 
      */
      Stack(const Stack<T>& obj) = default;  //
      ~Stack();

      /*
        push function that takes one argument of type T and adds it to the stackTop position in the array.
        It return void.
      */
      void push(T arg);

      /*
         pop function should return the element at the stackTop position.
         decrement stackTop by one and return the element popped;
      */
     T pop();

     /*
       current size will be calculated as stackTop value +1
       return this number from the function
     */
     int size(){
      return this->stackTop + 1;
     }

     /*
       returns the top most element (by const reference)
     */
     const T& peek();

     /*
       isEmpty function should return true if stack is empty else false
     */
    bool isEmpty(){
      return (this->size() == 0);
    }

    /*
      isFullfunction should return true if stack is full else false
    */
    bool isFull(){
      return (this->stackTop == MAXSIZE-1)
    }
};

#endif
#include "StackFunctions.hpp"