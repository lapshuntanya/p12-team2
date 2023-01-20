#ifndef P12_TEAM2_STDEPOSIT_H
#define P12_TEAM2_STDEPOSIT_H

#include <string>
#include "Deposit.h"

class STDeposit : public Deposit {
public:
    STDeposit() : Deposit() {}
    STDeposit(std::string fullname, float amount) : Deposit(std::move(fullname), amount) {}

    float calcAmount(int months) const override {
        try {
            if (months < 0)
                throw MyException("Months can't be negative!\n");
        }
        catch (MyException& e) {
            std::cout << e.what();
        }

        float out = amount_;
        for (int i = 0; i < months; i++) {
            out *= 1.03;
        }
        return out;
    }
};

#endif //P12_TEAM2_STDEPOSIT_H