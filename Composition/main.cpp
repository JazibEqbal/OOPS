#include<iostream>
#include"DebitCard.h"
#include"BankAccount.h"
int main() {
    BankAccount* acc=new BankAccount(1011212,"IOB245",345678.21f);

    DebitCard* db1=new DebitCard("Anu",111,"1112 1112 2221","09/27");

    BankAccount* accDb = new BankAccount(1011203,"IOB201",82368498.12f,db1);
}