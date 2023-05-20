#include "Account.h"

Account::Account(long accNumber, double bal, std::string name){
    this->accountNumber= accNumber;
    this->balance=bal;
    this->name=name;
}

void Account::deposit(double amount){
      balance +=amount;  
}

void Account::withdraw(double amount)
{
    if(amount <= balance){
        balance -= amount;
    } else {
        std::cout<<"Invalid Amount \n";
    }
}