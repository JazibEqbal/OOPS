#include<iostream>
#include<vector>

/*
   a) self managed array
   b) means size can increase or decrease accordingly
   c) no insertion or deleteion from front end
*/

int main(){
    std::vector<int> v = {1,2,3,4,5};
    v.push_back(6);
    v.push_back(7);
    v.pop_back();
    //Normal iterating
    // for(int it: v){
    //     std::cout<<it<<"\n";
    // }

    std::vector<int>::iterator itr = v.begin();

    while(itr != v.end()){
        std::cout<<*itr<<" ";
        itr++;
    }
    return 0;
}