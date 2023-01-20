#include <string>
#include <utility>
#include "Deposit.h"

class LTDeposit2 : public Deposit {
public:
    LTDeposit2() : Deposit() {}
    LTDeposit2(std::string fullname, float amount) : Deposit(std::move(fullname), amount) {}
    ~LTDeposit2() { std::cout << "Delete Deposit\n"; }

    float calcAmount(int months) const override {
        for (int i = 0; i < months; i++) {
            amount_ * 1.08;
        }
    }
};