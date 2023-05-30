#ifndef DEBITCARD_H
#define DEBITCARD_H
#include<iostream>

class DebitCard
{
private:
    std::string debitCardHolderName;
    int debitCardCvvNumber;
    std::string debitCardNumber;
    std::string debitCardExpiryDate;
public:
    DebitCard(std::string CardHolderName,
        int CardCvvNumber,
        std::string CardNumber,
        std::string CardExpiryDate
    );
    ~DebitCard();

    std::string getDebitCardHolderName() const { return debitCardHolderName; }
    void setDebitCardHolderName(const std::string &debitCardHolderName_) { debitCardHolderName = debitCardHolderName_; }

    int getDebitCardCvvNumber() const { return debitCardCvvNumber; }
    void setDebitCardCvvNumber(int debitCardCvvNumber_) { debitCardCvvNumber = debitCardCvvNumber_; }

    std::string getDebitCardNumber() const { return debitCardNumber; }
    void setDebitCardNumber(const std::string &debitCardNumber_) { debitCardNumber = debitCardNumber_; }

    std::string getDebitCardExpiryDate() const { return debitCardExpiryDate; }
    void setDebitCardExpiryDate(const std::string &debitCardExpiryDate_) { debitCardExpiryDate = debitCardExpiryDate_; }
    
};
#endif