#include<iostream>
#include<set>

/*
  The set stores the elements in sorted order.
  The values in a set are unindexed.
  Order of insertion is not maintained.
  It contains only unique elements.
  Sets follow the Binary search tree implementation.
  Insertion & Deletion of Elements – O(log N
*/

int main(){
    std::set<int> set;
    set.insert(1);
    set.insert(2);
    //set.insert(2); //set discards the duplicate values
    set.insert(3);

    // for(int it: set){
    //     std::cout<<it<<" ";
    // }
    std::set<int>::iterator itr = set.begin();
    while(itr != set.end()){
        std::cout<<*itr<<" "<<"\n";
        itr++;
    }
    std::cout<<"Set size is: "<<set.size()<<"\n";
    std::cout<<"Is set empty? "<<set.empty()<<"\n";
    return 0;
}