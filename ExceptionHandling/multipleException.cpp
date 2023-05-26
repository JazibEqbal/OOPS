#include<iostream>

void fun(int a,int b){
    try
    {
        if(b==0) throw 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

int main(){
    return 0;
}