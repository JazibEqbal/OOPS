#include<iostream>

void fun(int a,int b){
    try
    {
        if(b==0) throw 'a';
    }
    catch(int e)
    {
        std::cout << "here" << '\n';
    }
    catch(...){
        std::cout<<"String\n";
    }
}

int main(){
    fun(3,0);
    return 0;
}