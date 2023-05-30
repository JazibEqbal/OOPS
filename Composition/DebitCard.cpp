#include "DebitCard.h"
#include<iostream>

DebitCard::DebitCard(std::string CardHolderName, int CardCvvNumber, std::string CardNumber, std::string CardExpiryDate)
{
    this->debitCardHolderName=CardHolderName;
    this->debitCardCvvNumber=CardCvvNumber;
    this->debitCardNumber=CardNumber;
    this->debitCardExpiryDate=CardExpiryDate;
}

DebitCard::~DebitCard()
{
    std::cout<<"Debit card with number "
    <<this->debitCardNumber
    <<" is destroyed\n";
}
