#include<iostream>

template<typename T>
T sum(T x,T y){
    return x + y;
}

int main(){
    int result = sum<int>(2,4);
    std::cout<<result<<"\n";
    return 0;
}