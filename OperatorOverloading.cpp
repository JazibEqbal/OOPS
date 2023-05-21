#include <iostream>

class Complex
{
private:
    double real;
    double imaginary;
public:
    Complex()=default;
    Complex(double r, double img);
    Complex operator+(Complex &c1);
    friend Complex operator+(Complex &c1, Complex &c2);
    Complex operator-(Complex &c1);
    Complex operator*(Complex &c1);
    Complex operator/(Complex &c1);
    Complex operator+=(const Complex &c);
    Complex operator-=(const Complex &c);
    friend Complex operator-=(Complex &c1,const Complex &c2);
    Complex operator++();
    Complex operator++(int);
    Complex operator-();
    friend std::ostream & operator<<(std::ostream &os, Complex &c1);
    void printValues();
};

Complex::Complex(double r, double img) : real{r}, imaginary{img} {}

//OPERATOR +
Complex Complex::operator+(Complex &c1)
{
    Complex temp;
    temp.real = real + c1.real;
    temp.imaginary = imaginary + c1.imaginary;
    std::cout << "operator + called here\n";
    return temp;
};

// FRIEND function overloading OPERATOR +
Complex operator+(Complex &c1, Complex &c2)
{
    Complex temp;
    temp.real= c1.real + c2.real;
    temp.imaginary = c1.imaginary + c2.imaginary;
    return temp;
}
//OPERATOR -
Complex Complex::operator-(Complex &c1){
    Complex temp;
    temp.real = real - c1.real;
    temp.imaginary = imaginary - c1.imaginary;
    return temp;
}
//OPERATOR *
Complex Complex::operator*(Complex &c){
    Complex temp;
    temp.real = real * c.real;
    temp.imaginary = imaginary * c.imaginary;
    return temp;
}
//OPERATOR /
Complex Complex::operator/(Complex &c){
    Complex temp;
    temp.real = real / c.real;
    temp.imaginary = imaginary / c.imaginary;
    return temp;
}
//OPERATOR +=
Complex Complex::operator+=(const Complex &c)
{
    this->real += c.real;
    imaginary += c.imaginary;                // assigning value both way is fine
    std::cout << "+= operator called here\n";
    return *this;
}
//OPERATOR -=
Complex Complex::operator-=(const Complex &c){
    this->real -= c.real;
    imaginary -= c.imaginary;
    return *this;
}
//FRIEND OPERATOR -=
Complex operator-=(Complex &c1, const Complex &c2){
    Complex temp;
    temp.real = c1.real - c2.real;
    temp.imaginary = c1.imaginary - c2.imaginary;
    return temp;
}
// OPERATOR ++
Complex Complex::operator++(){
    Complex temp;
    temp.real = ++real;
    temp.imaginary = ++imaginary;
    return temp;
}
//OPERATOR ++ int
Complex Complex::operator++(int){
    Complex temp;
    temp.real = real++;
    temp.imaginary = imaginary++;
    return temp;
}
//SIGNED TO UNSIGNED -
Complex Complex::operator-(){
    Complex temp;
    temp.real = -real;
    temp.imaginary = -imaginary;
    return temp;
}
//OPERATOR <<
std::ostream &operator<<(std::ostream &os, Complex &c)
{
    os<<c.real<<"+"<<c.imaginary<<"i";
    return os;
}
//DISPLAY FUNCTION
void Complex::printValues()
{
    std::cout << "The real part is: " << real << ", the imaginary part is: " << imaginary << "\n";
}

int main()
{
    Complex c1(4, 6);
    //c1.printValues();
    Complex c2(7, 8);
    //c2.printValues();
    Complex c3 = -c1;
    //c3.printValues();
    std::cout<<c3;
    // Complex c4;
    // c4= c1 -= c2;   //calling operator += method here
    // c4.printValues();   
    return 0;
}
