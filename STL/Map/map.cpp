#include<iostream>
#include<map>

/*
   a) for storing key-value pair data
   b) contains unique keys
*/

int main(){
    std::map<int,std::string> map;
    //ONE WAY
    // map.insert(std::pair<int,std::string>(1,"John"));
    // map.insert(std::pair<int,std::string>(2,"Doe"));
    // map.insert(std::pair<int,std::string>(3,"Baby"));

    //std::map<int,std::string>::iterator itr
    // for(itr = map.begin(); itr != map.end(); itr++){
    //     std::cout<<itr->first<<" "<<itr->second<<"\n";
    // }
    
    //OTHER WAY
    map[1] = "John";
    map[2] = "Doe";
    map[3] = "Baby";
    std::map<int,std::string>::iterator itr = map.begin();
    while(itr != map.end()){
        std::cout<<itr->first<<" "<<itr->second<<"\n";
        itr++;
    }
    std::cout << "Size of map: " << map.size() << std::endl;
    return 0;
}