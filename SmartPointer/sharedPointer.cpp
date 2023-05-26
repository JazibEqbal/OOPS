#include<iostream>
#include<memory>

int main(){
    //defination std::shared_ptr<some_type>
    //initialization std::make_shared<some_type>(some_value) function.
    //std::shared_ptr<int> p1 = std::make_shared<int>(1);
    //std::shared_ptr<int> p(new int{2});
    //std::cout<<*p;
    std::shared_ptr<int> p1 = std::make_shared<int>(1);
    std::shared_ptr<int> p2 = p1;
    std::shared_ptr<int> p3 = p1;
    std::cout << "Value accessed through a first pointer p1: " << *p1 << '\n';
    std::cout << "Value accessed through a second pointer p2: " << *p2 << '\n';
    std::cout << "Value accessed through a third pointer p3: " << *p3 << '\n';

    return 0;
}