#include<iostream>
#include<forward_list>

/*
  it acts as singly linked list
  front -- This function is used to reference the first element of the forward list container.
  begin -- 	This function is used to return an iterator pointing to the first element of the forward list container.
*/

void displayForwardList(std::forward_list<int> forward_list){
    std::forward_list<int>::iterator itr= forward_list.begin();
    while(itr != forward_list.end()){
         std::cout<<*itr<<" ";
         itr++; 
    }
}

int main(){
    std::forward_list<int> forwardList ={1,2,3};
    std::cout<<forwardList.front()<<"\n";  
    std::cout<<forwardList.empty()<<"\n";
    forwardList.remove(2);
    displayForwardList(forwardList);
    return 0;
}