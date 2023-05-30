#include "BankAccount.h"


BankAccount::BankAccount(long accNUmber, std::string ifscCode, float balance, DebitCard *accDebitCard)
{
    this->bankAccountNumber=accNUmber;
    this->bankAccountifscCode=ifscCode;
    this->bankAccountBalance=balance;
    this->bankAccountDebitCard=accDebitCard;
}

BankAccount::BankAccount(long accNUmber, std::string ifscCode, float balance)
{
    this->bankAccountNumber=accNUmber;
    this->bankAccountifscCode=ifscCode;
    this->bankAccountBalance=balance;
}

BankAccount::~BankAccount()
{
    std::cout<<"Account with number "
        <<this->bankAccountNumber
        <<" is destroyed\n";
}
