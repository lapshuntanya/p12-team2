#ifndef P12_TEAM2_LTDEPOSIT_H
#define P12_TEAM2_LTDEPOSIT_H

#include <string>
#include <utility>
#include "Deposit.h"
#include "utils/MyException.h"

class LTDeposit : public Deposit {
public:
    LTDeposit() : Deposit() {}
    LTDeposit(std::string fullname, float amount) : Deposit(std::move(fullname), amount) {}

    float calcAmount(int months) const override {
        try {
            if(months < 0)
                throw MyException("Months can't be negative!\n");
        }
        catch (MyException& e) {
            std::cout << e.what();
        }

        float out = amount_;
        for (int i = 0; i < months; i++) {
            out *= 1.08;
        }
        return out;
    }
};

#endif //P12_TEAM2_LTDEPOSIT_H