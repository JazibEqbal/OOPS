#include<iostream>

// TEMPLATE WITH A SINGLE ARGUMENT
// template<typename T>
// void fun(T val){
//     std::cout<<"Value is: "<<val<<"\n";
// }
// TEMPLATE WITH A MULTIPLE ARGUMENT
// template<typename T, typename U>
// void fun2(T val1, U val2){
//     std::cout<<"Value of T type is: "<<val1<<" Value of U type is: "<<val2<<"\n";
// }

//TEMPLATE OF CLASS 
template<typename T>
class Myclass{
    private:
       T x;
    public:
       Myclass(T data);

       T getX(){
        return x;
       }
       void someFunction();
       T genericFunction();
      // T getX() const { return x; }
       
};
template<typename T>
Myclass<T>::Myclass(T data): x{data} {};

template <typename T>
void Myclass<T>::someFunction()
{
    std::cout<<"Some Function\n";
};
template <typename T>
T Myclass<T>::genericFunction()
{
    std::cout<<"Generic Function\n";
};

int main(){
    Myclass<int> obj(1);
    std::cout<<"The value of x is: "<<obj.getX()<<"\n";
    Myclass<std::string> obj2("Jazib");
    std::cout<<"The value of x is: "<<obj2.getX()<<"\n";
    obj2.genericFunction();
    obj.someFunction();
    return 0;
    // fun<int>(2);
    // fun<std::string>("Jazib");
    // fun<char>('a');
    // std::cout<<"TEMPLATE WITH MULTIPLE ARGUMENT\n";
    // fun2<int,double>(1,2.3);
    // fun2<int, std::string>(1,"Jazib");
}