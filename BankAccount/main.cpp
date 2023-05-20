#include "Account.h"
#include<iostream>

int main(){
    Account *a = new Account(1111,46,"John");
    a->deposit(54);
    std::cout<<a->getBalance();
    return 0;
}