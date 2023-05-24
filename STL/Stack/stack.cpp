#include<iostream>
#include<stack>

/*
  follows LIFO principle
  new element is added at one end (top) and an element is removed from that end only.
    Stack uses an encapsulated object of either vector or deque (by default)
    or list (sequential container class) as its underlying container, 
    providing a specific set of member functions to access its elements. 
   Syntax-- template <class Type, class Container = deque<Type> > class stack;
*/
int main(){
    std::stack<int> stack;
    
    return 0;
}