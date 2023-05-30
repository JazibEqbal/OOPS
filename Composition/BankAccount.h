#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include<iostream>
#include"DebitCard.h"
class BankAccount
{
private:
    long bankAccountNumber;
    std::string bankAccountifscCode;
    float bankAccountBalance;
    DebitCard* bankAccountDebitCard;
public:
    BankAccount(
        long accNUmber,
        std::string ifscCode,
        float balance,
        DebitCard* accDebitCard
    );
    BankAccount(
        long accNUmber,
        std::string ifscCode,
        float balance
    );
    ~BankAccount();

    long getBankAccountNumber() const { return bankAccountNumber; }
    void setBankAccountNumber(long bankAccountNumber_) { bankAccountNumber = bankAccountNumber_; }

    std::string getBankAccountifscCode() const { return bankAccountifscCode; }
    void setBankAccountifscCode(const std::string &bankAccountifscCode_) { bankAccountifscCode = bankAccountifscCode_; }

    float getBankAccountBalance() const { return bankAccountBalance; }
    void setBankAccountBalance(float bankAccountBalance_) { bankAccountBalance = bankAccountBalance_; }

    DebitCard* getBankAccountDebitCard() const { return bankAccountDebitCard; }
    void setBankAccountDebitCard(DebitCard* bankAccountDebitCard_) { bankAccountDebitCard = bankAccountDebitCard_; }
};
#endif