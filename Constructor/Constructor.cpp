#include<iostream>

class Constructor{
     private:
       int x,y;
     public:
       Constructor();
       Constructor(int xx,int yy);
       Constructor(const Constructor& copy);
       Constructor& operator=(const Constructor& rhs);  //copy assignment
       Constructor(Constructor &mo);   //move constructor
};

Constructor::Constructor()
{
    std::cout << "Default constructor invoked.\n";
}

Constructor::Constructor(int xx, int yy) : x{xx}, y{yy}
{
    std::cout << "Paramtereized constructor invoked.\n";
}

Constructor::Constructor(const Constructor &copy):x{copy.x}, y{copy.y}
{
    std::cout << "User defined Copy constructor invoked. \n";
}

Constructor &Constructor::operator=(const Constructor &rhs)
{
    x=rhs.x;
    y=rhs.y;
    return *this;
}

Constructor::Constructor(Constructor &mo):x{std::move(mo.x)}, y{std::move(mo.y)}
{
    std::cout<<"Move Constructor Invoked. \n";
}

int main(){
    Constructor c2;
    Constructor c(1,2);
    Constructor c1=c; 
    //uses copy assignement assignment c1=c;
    Constructor d= std::move(c);
    return 0;
}

/*
 Employee obj = new Employee(1,"2")  // obj variable --we are taking ownership of the data

 Employee(1,"2"); --- constructor return type is the name of the class -- a temporary value --
 when you call a constructor a temporary value is returned so someone has to accept that temporary value
*/