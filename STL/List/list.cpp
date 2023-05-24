#include<iostream>
#include<list>

/*
  list acts as doubly linked list
  in list insertion and deletionfrom either end is possible
*/
void displayList(std::list<int> list){
    std::list<int>::iterator itr= list.begin();
    std::cout<<"Elements of list are: \n";
    while(itr != list.end()){
        std::cout<<*itr<<" "<<"\n";
        itr++;
    }
}

int main(){
    std::list<int> list = {6,2};
    list.push_back(3);
    list.push_back(4);
    list.push_front(5);
    list.pop_back();
    list.pop_front();

    std::cout<<"First element of list is: "<<list.front()<<"\n";
    std::cout<<"Last element of list is: "<<list.back()<<"\n";

    displayList(list);
    //list.sort();
    list.reverse();
    displayList(list);
    return 0;
}