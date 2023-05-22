#include<iostream>

template<typename T>
class SumClass
{
private:
    T x;
    T y;
public:
    SumClass(T xx, T yy);
    T getX(){
        return x;
    }
    void setX(T data){
        x= data;
    }
    T getY(){
        return y;
    }
    void setY(T data){
        y = data;
    }
    T calcSum(T xx,T yy);
    ~SumClass(){
        std::cout<<"Destructor\n";
    }
};

template<typename T>
SumClass<T>::SumClass(T xx,T yy): x{xx} , y{yy} {}

template <typename T>
T SumClass<T>::calcSum(T xx, T yy)
{
    return xx + yy;
};

int main(){ 
    SumClass<int> obj(2,4);
    std::cout<<obj.getX()<<"\n";
    std::cout<<obj.getY()<<"\n";
    //obj.setX(4);
    //std::cout<<obj.getX()<<"\n";
    std::cout<<obj.calcSum(4,3)<<"\n";
    return 0;
}