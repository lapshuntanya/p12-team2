#include <string>
#include <utility>
#include "Deposit.h"

class LTDeposit : public Deposit {
public:
    LTDeposit() : Deposit() {}
    LTDeposit(std::string fullname, float amount) : Deposit(std::move(fullname), amount) {}
    ~LTDeposit() { std::cout << "Delete Deposit\n"; }

    float calcAmount(int months) const override {
        for (int i = 0; i < months; i++) {
            amount_ * 1.08;
        }
    }
};