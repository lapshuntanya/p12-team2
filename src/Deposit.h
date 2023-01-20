#ifndef P12_TEAM2_DEPOSIT_H
#define P12_TEAM2_DEPOSIT_H

#include <iostream>
#include <utility>
#include "utils/MyException.h"

class Deposit {
protected:
    std::string fullname_;
    float amount_;
public:
    Deposit() : fullname_("Unknown"), amount_(0) {}
    Deposit(std::string fullname, float amount) : fullname_(std::move(fullname)) { setAmount(amount); }
    virtual ~Deposit() = default;

    void setFullname(std::string fullname) { fullname_ = std::move(fullname); }
    void setAmount(float amount) {
        try {
            if(amount < 0)
                throw MyException("Deposit amount can't be negative! Setting default value (0).\n");
        }
        catch (MyException& e) {
            std::cout << e.what();
            amount = 0;
        }
        amount_ = amount;
    }

    std::string getFullname() const { return fullname_; }
    float getAmount() const { return amount_; }

    virtual float calcAmount(int months) const {
        try {
            if(months < 0)
                throw MyException("Months can't be negative!\n");
        }
        catch (MyException& e) {
            std::cout << e.what();
        }

        float out = amount_;
        for (int i = 0; i < months; i++) {
            out *= 1.05;
        }
        return out;
    }
};

#endif //P12_TEAM2_DEPOSIT_H