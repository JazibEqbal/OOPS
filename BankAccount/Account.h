#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<iostream>

class Account{
    private:
       long accountNumber;
       double balance;
       std::string name;
    public:
       Account(long accNumber, double bal, std::string name);
       void deposit(double amount);
       void withdraw(double amount);
       int getBalance(){
        return balance;
       }
};

#endif